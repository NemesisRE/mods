// Generated by unRap v1.06 by Kegetys

class RscTitles {
	class TMR_BloodPain {
		idd = -1;
		movingEnable = 0;
		duration = 10;
		name = "TMR_BloodPain";
		onLoad = "with uiNameSpace do {tmr_bloodpain_rsc = (_this select 0);}";
		controls[] = {"BPain"};
		
		class BPain : RscPicture {
			text = "\tmr_hiteffects\data\blood_pain.paa";
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
	};
};
