#include "Imogen.h"

typedef struct MeshRead_t
{
	char filename[1024];
} MeshRead;

int main(MeshRead *param, Evaluation *evaluation)
{
	Mesh mesh;
	if (ReadMesh(param->filename, &mesh) == EVAL_OK)
	{
		if (SetEvaluationMesh(evaluation->targetIndex, &mesh) == EVAL_OK)
		{
			return EVAL_OK;
		}
	}
	return EVAL_ERR;
}