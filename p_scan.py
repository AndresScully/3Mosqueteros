#!/usr/bin/env python3
import nmap
import sys

def network_scan(target, port_range):
    try:
        # Initialize nmap scanner
        scanner = nmap.PortScanner()
        
        print(f"\nScanning target: {target}")
        print("Please wait, this may take a few moments...\n")
        
        # Perform the scan
        # -sV: Version detection
        # -n: No DNS resolution
        # -v: Verbose output
        scanner.scan(target, port_range, arguments='-sV -n -v')
        
        # Track if any hosts are up
        hosts_up = False
        
        # Print results for each host
        for host in scanner.all_hosts():
            if scanner[host].state() == 'up':
                hosts_up = True
                print(f"Host: {host}")
                print(f"State: {scanner[host].state()}")
                
                # Print results for each protocol
                for proto in scanner[host].all_protocols():
                    print(f"\nProtocol: {proto}")
                    
                    # Get ports for that protocol
                    ports = sorted(scanner[host][proto].keys())
                    
                    # Print details for each port
                    for port in ports:
                        state = scanner[host][proto][port]['state']
                        service = scanner[host][proto][port]['name']
                        version = scanner[host][proto][port]['version']
                        
                        print(f"Port: {port}\tState: {state}")
                        print(f"Service: {service}\tVersion: {version}")
                        print("-" * 50)
        
        if not hosts_up:
            print("No hosts are up and running.")
                    
    except Exception as e:
        print(f"An error occurred: {e}")
        sys.exit(1)

def main():
    if len(sys.argv) != 3:
        print("Usage: python3 port_scanner.py <target> <port_range>")
        print("Example: python3 port_scanner.py 192.168.1.0/24 1-1000")
        sys.exit(1)
        
    target = sys.argv[1]
    port_range = sys.argv[2]
    
    network_scan(target, port_range)

if __name__ == "__main__":
    main()