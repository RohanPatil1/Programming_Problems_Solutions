def towers_of_hanio(number_of_disks,start_peg=1,end_peg=3):
    if number_of_disks: #Runs till number_of_disks becomes 0
        towers_of_hanio(number_of_disks-1,start_peg,6-start_peg-end_peg) #Puts n-1 to auxillay peg i.e 2
        print "Move disk %d from peg %d to peg %d"%(number_of_disks,start_peg,end_peg)
        towers_of_hanio(number_of_disks-1,6-start_peg-end_peg,end_peg)

towers_of_hanio(number_of_disks=3)