#include "presult.h"

struct jresult_
{
    int status;			// the parsing exit status 
    presult *data;		// the parsing result
};

typedef struct jresult_ jresult;

jresult* load_json_from_stream();