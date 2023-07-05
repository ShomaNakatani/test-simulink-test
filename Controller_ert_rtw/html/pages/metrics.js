function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["Controller.c:rtM_"] = {file: "C:\\Users\\SotaYuzaki\\Documents\\MATLAB\\Examples\\R2022b\\ecoder\\SILPILVerificationExample\\Controller_ert_rtw\\Controller.c",
	size: 4};
	 this.metricsArray.var["rtDWork"] = {file: "C:\\Users\\SotaYuzaki\\Documents\\MATLAB\\Examples\\R2022b\\ecoder\\SILPILVerificationExample\\Controller_ert_rtw\\Controller.c",
	size: 12};
	 this.metricsArray.var["rtU"] = {file: "C:\\Users\\SotaYuzaki\\Documents\\MATLAB\\Examples\\R2022b\\ecoder\\SILPILVerificationExample\\Controller_ert_rtw\\Controller.c",
	size: 4};
	 this.metricsArray.var["rtY"] = {file: "C:\\Users\\SotaYuzaki\\Documents\\MATLAB\\Examples\\R2022b\\ecoder\\SILPILVerificationExample\\Controller_ert_rtw\\Controller.c",
	size: 4};
	 this.metricsArray.fcn["Controller_initialize"] = {file: "C:\\Users\\SotaYuzaki\\Documents\\MATLAB\\Examples\\R2022b\\ecoder\\SILPILVerificationExample\\Controller_ert_rtw\\Controller.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Controller_step"] = {file: "C:\\Users\\SotaYuzaki\\Documents\\MATLAB\\Examples\\R2022b\\ecoder\\SILPILVerificationExample\\Controller_ert_rtw\\Controller.c",
	stack: 12,
	stackTotal: 12};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'Controller_metrics\'});">Global Memory: 24(bytes) Maximum Stack: 12(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
