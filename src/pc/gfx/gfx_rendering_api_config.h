#ifndef GFX_RENDERING_API_CONFIG_H
#define GFX_RENDERING_API_CONFIG_H

#ifdef RAPI_RT64
#   define GFX_MAX_BUFFERED                 16384
#   define GFX_DIM_SHADOWS_CLOSE_TO_GROUND
#   define GFX_DISABLE_FRUSTUM_CULLING
#   define GFX_DISABLE_LIGHTING
#   define GFX_FLUSH_ON_ENDDL
#   define GFX_OUTPUT_NORMALS_TO_VBO
#   define GFX_SEPARATE_PROJECTIONS
#   define GFX_SEPARATE_FOG
#   define GFX_REQUIRE_TEXTURE_NAME
#   define GFX_ENABLE_GRAPH_NODE_MODS
#endif

#endif