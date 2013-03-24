static const char code[] = "\n\
global ptype pvals\n\
set ptype(error) -1\n\
set pvals(-1) error\n\
set ptype(tcp) 0\n\
set pvals(0) tcp\n\
set ptype(udp) 1\n\
set pvals(1) udp\n\
set ptype(cbr) 2\n\
set pvals(2) cbr\n\
set ptype(audio) 3\n\
set pvals(3) audio\n\
set ptype(video) 4\n\
set pvals(4) video\n\
set ptype(ack) 5\n\
set pvals(5) ack\n\
set ptype(start) 6\n\
set pvals(6) start\n\
set ptype(stop) 7\n\
set pvals(7) stop\n\
set ptype(prune) 8\n\
set pvals(8) prune\n\
set ptype(graft) 9\n\
set pvals(9) graft\n\
set ptype(graftack) 10\n\
set pvals(10) graftAck\n\
set ptype(join) 11\n\
set pvals(11) join\n\
set ptype(assert) 12\n\
set pvals(12) assert\n\
set ptype(message) 13\n\
set pvals(13) message\n\
set ptype(rtcp) 14\n\
set pvals(14) rtcp\n\
set ptype(rtp) 15\n\
set pvals(15) rtp\n\
set ptype(rtprotodv) 16\n\
set pvals(16) rtProtoDV\n\
set ptype(ctrmcast_encap) 17\n\
set pvals(17) CtrMcast_Encap\n\
set ptype(ctrmcast_decap) 18\n\
set pvals(18) CtrMcast_Decap\n\
set ptype(srm) 19\n\
set pvals(19) SRM\n\
set ptype(sa_req) 20\n\
set pvals(20) sa_req\n\
set ptype(sa_accept) 21\n\
set pvals(21) sa_accept\n\
set ptype(sa_conf) 22\n\
set pvals(22) sa_conf\n\
set ptype(sa_teardown) 23\n\
set pvals(23) sa_teardown\n\
set ptype(live) 24\n\
set pvals(24) live\n\
set ptype(sa_reject) 25\n\
set pvals(25) sa_reject\n\
set ptype(telnet) 26\n\
set pvals(26) telnet\n\
set ptype(ftp) 27\n\
set pvals(27) ftp\n\
set ptype(pareto) 28\n\
set pvals(28) pareto\n\
set ptype(exp) 29\n\
set pvals(29) exp\n\
set ptype(httpinval) 30\n\
set pvals(30) httpInval\n\
set ptype(http) 31\n\
set pvals(31) http\n\
set ptype(encap) 32\n\
set pvals(32) encap\n\
set ptype(mftp) 33\n\
set pvals(33) mftp\n\
set ptype(arp) 34\n\
set pvals(34) ARP\n\
set ptype(mac) 35\n\
set pvals(35) MAC\n\
set ptype(tora) 36\n\
set pvals(36) TORA\n\
set ptype(dsr) 37\n\
set pvals(37) DSR\n\
set ptype(aodv) 38\n\
set pvals(38) AODV\n\
set ptype(imep) 39\n\
set pvals(39) IMEP\n\
set ptype(rap_data) 40\n\
set pvals(40) rap_data\n\
set ptype(rap_ack) 41\n\
set pvals(41) rap_ack\n\
set ptype(tcpfriend) 42\n\
set pvals(42) tcpFriend\n\
set ptype(tcpfriendctl) 43\n\
set pvals(43) tcpFriendCtl\n\
set ptype(ping) 44\n\
set pvals(44) ping\n\
set ptype(diffusion) 45\n\
set pvals(45) diffusion\n\
set ptype(rtprotols) 46\n\
set pvals(46) rtProtoLS\n\
set ptype(ldp) 47\n\
set pvals(47) LDP\n\
set ptype(gaf) 48\n\
set pvals(48) gaf\n\
set ptype(ra) 49\n\
set pvals(49) ra\n\
set ptype(pushback) 50\n\
set pvals(50) pushback\n\
set ptype(pgm) 51\n\
set pvals(51) PGM\n\
set ptype(um) 52\n\
set pvals(52) UM\n\
set ptype(am_data) 53\n\
set pvals(53) AM_Data\n\
set ptype(am_pos_ack) 54\n\
set pvals(54) AM_Pos_Ack\n\
set ptype(am_piggyback_ack) 55\n\
set pvals(55) AM_Piggyback_Ack\n\
set ptype(am_bitmap_ack) 56\n\
set pvals(56) AM_Bitmap_ack\n\
set ptype(am_piggyback_back) 57\n\
set pvals(57) AM_Piggyback_Back\n\
set ptype(harq_1) 58\n\
set pvals(58) HARQ_1\n\
set ptype(harq_2) 59\n\
set pvals(59) HARQ_2\n\
set ptype(harq_3) 60\n\
set pvals(60) HARQ_3\n\
set ptype(lms) 61\n\
set pvals(61) LMS\n\
set ptype(lms_setup) 62\n\
set pvals(62) LMS_SETUP\n\
set ptype(sctp) 63\n\
set pvals(63) sctp\n\
set ptype(sctp_app1) 64\n\
set pvals(64) sctp_app1\n\
set ptype(smac) 65\n\
set pvals(65) smac\n\
set ptype(xcp) 66\n\
set pvals(66) xcp\n\
set ptype(coot) 67\n\
set pvals(67) coot\n\
set ptype(hdlc) 68\n\
set pvals(68) HDLC\n\
set ptype(bt) 69\n\
set pvals(69) BT\n\
set ptype(bnep) 70\n\
set pvals(70) bnep\n\
set ptype(sdp) 71\n\
set pvals(71) sdp\n\
set ptype(nd_rads) 72\n\
set pvals(72) nd_rads\n\
set ptype(nd_sol) 73\n\
set pvals(73) nd_sol\n\
set ptype(ifmngmt_red) 74\n\
set pvals(74) ifmngmt_red\n\
set ptype(flow_req) 75\n\
set pvals(75) flow_req\n\
set ptype(flow_res) 76\n\
set pvals(76) flow_res\n\
set ptype(mih) 77\n\
set pvals(77) mih\n\
set ptype(handover) 78\n\
set pvals(78) handover\n\
set ptype(wimaxctrl) 79\n\
set pvals(79) WimaxCtrl\n\
proc ptype2val {str} {\n\
global ptype\n\
set str [string tolower $str]\n\
if ![info exists ptype($str)] {\n\
set str error\n\
}\n\
set ptype($str)\n\
}\n\
proc pval2type {val} {\n\
global pvals\n\
if ![info exists pvals($val)] {\n\
set val -1\n\
}\n\
set pvals($val)\n\
}\n\
";
#include "config.h"
EmbeddedTcl et_ns_ptypes(code);