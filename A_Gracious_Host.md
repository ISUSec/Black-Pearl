The folks over at [hamclock.net](https://hamclock.net) have decided to go into government work, and are in the process of setting up a new Top Secret site at **hamclock.gov**. The domain doesn't exist in DNS yet, but it is your job to access their server anyway and find anything interesting on their site before they start locking it down.

Hints: `host`, /etc/hosts

Solution
--------

`host hamclock.net` returns the IP 192.99.198.149. By adding `192.99.198.149	hamclock.gov` to your hosts file, you'll be able to see the secret site.
The home page is a directory listing that contains nothing but flag.txt.

Flag: K1TT3NZ
