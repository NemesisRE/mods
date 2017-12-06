class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
	#include "items.hpp"

    class LMG_M200;
    class LOP_PKT : LMG_M200 {
		__AI_DISPERSION_COEF;
    };
    class LOP_D81;
    class LOP_S53 : LOP_D81 {
        __AI_DISPERSION_COEF;
    };
    class EBR_base_F;
    class LOP_Weap_LeeEnfield : EBR_base_F {
		modes[] = {"SemiAuto", "AI_Single_optics1", "AI_Single_optics2"};
 		__AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		__AI_DISPERSION_COEF;
    };
};
