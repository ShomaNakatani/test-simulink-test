function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Controller"};
	this.sidHashMap["Controller"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "SILBlock:1"};
	this.sidHashMap["SILBlock:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "SILBlock:2"};
	this.sidHashMap["SILBlock:2"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Gain1"] = {sid: "SILBlock:3"};
	this.sidHashMap["SILBlock:3"] = {rtwname: "<S1>/Gain1"};
	this.rtwnameHashMap["<S1>/Gain2"] = {sid: "SILBlock:4"};
	this.sidHashMap["SILBlock:4"] = {rtwname: "<S1>/Gain2"};
	this.rtwnameHashMap["<S1>/Gain3"] = {sid: "SILBlock:5"};
	this.sidHashMap["SILBlock:5"] = {rtwname: "<S1>/Gain3"};
	this.rtwnameHashMap["<S1>/Gain4"] = {sid: "SILBlock:6"};
	this.sidHashMap["SILBlock:6"] = {rtwname: "<S1>/Gain4"};
	this.rtwnameHashMap["<S1>/Sum1"] = {sid: "SILBlock:7"};
	this.sidHashMap["SILBlock:7"] = {rtwname: "<S1>/Sum1"};
	this.rtwnameHashMap["<S1>/Sum2"] = {sid: "SILBlock:8"};
	this.sidHashMap["SILBlock:8"] = {rtwname: "<S1>/Sum2"};
	this.rtwnameHashMap["<S1>/Sum3"] = {sid: "SILBlock:9"};
	this.sidHashMap["SILBlock:9"] = {rtwname: "<S1>/Sum3"};
	this.rtwnameHashMap["<S1>/Unit Delay1"] = {sid: "SILBlock:10"};
	this.sidHashMap["SILBlock:10"] = {rtwname: "<S1>/Unit Delay1"};
	this.rtwnameHashMap["<S1>/Unit Delay2"] = {sid: "SILBlock:11"};
	this.sidHashMap["SILBlock:11"] = {rtwname: "<S1>/Unit Delay2"};
	this.rtwnameHashMap["<S1>/Unit Delay3"] = {sid: "SILBlock:12"};
	this.sidHashMap["SILBlock:12"] = {rtwname: "<S1>/Unit Delay3"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "SILBlock:13"};
	this.sidHashMap["SILBlock:13"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
