#!/usr/bin/perl

# Nature's Calling

use strict;
use warnings;

# Open the file for writing
open my $fh, '>', 'Nature's Calling.pl' or die "Cannot open Nature's Calling.pl: $!";

# Print to the file
print $fh "use strict;\n";
print $fh "use warnings;\n";

# Print statements
for (my $i=1; $i<=2000; $i++) {
	print $fh "print \"Nature's Calling!\\n\";\n";
}

close $fh;