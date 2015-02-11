We're all pretty sure Hamclock is up to something, and it looks like the following page is involved:

https://hamclock.net/redirect.php

Find out what's going on so we can spoil his fun.

Solution
--------

redirect.php returns a 302 redirect to flag.php, which sets a header called "Flag" before sending another 302 redirect to noflag.php. By watching the headers as redirects are passed around, you can see the flag in the middle.

Flag: NikolaTesla
