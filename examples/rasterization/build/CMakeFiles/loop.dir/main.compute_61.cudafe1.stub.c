#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _23_main_compute_61_cpp1_ii_7ed080b1
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#include "crt/host_runtime.h"
#include "main.fatbin.c"
typedef InitProc::ExpectedData _ZN8InitProc12ExpectedDataE;
typedef CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue, void> , (int)0>  _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE;
typedef CurrentMultiphaseQueue<CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> , (int)0> , (int)0>  _Z22CurrentMultiphaseQueueIS_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE;
typedef Megakernel::TechniqueCore<(int)0,  ::MyQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , void, (int)16336, (bool)0, (bool)1, (bool)0, (bool)0> ::Q _ZN10Megakernel13TechniqueCoreILi0E7MyQueue8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEEvLi16336ELb0ELb1ELb0ELb0EE1QE;
static void __device_stub__Z9initQueueI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EEEvPT_(_ZN10Megakernel13TechniqueCoreILi0E7MyQueue8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEEvLi16336ELb0ELb1ELb0ELb0EE1QE *);
static void __device_stub__ZN10Megakernel18megakernelSpecificI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb1ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEviiPT_5uint4iPi(int, int,  _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *, struct uint4&, int, int *);
static void __device_stub__ZN10Megakernel10megakernelI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb0ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEvPT_5uint4iPi( _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *, struct uint4&, int, int *);
static void __device_stub__ZN10Megakernel8initDataI8InitProc22CurrentMultiphaseQueueIS2_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE11raster_wtriEEvPT0_iPT1_( _Z22CurrentMultiphaseQueueIS_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE *, int, _ZN8InitProc12ExpectedDataE *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll_23_main_compute_61_cpp1_ii_7ed080b1(void) __attribute__((__constructor__));
static void __device_stub__Z9initQueueI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EEEvPT_(_ZN10Megakernel13TechniqueCoreILi0E7MyQueue8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEEvLi16336ELb0ELb1ELb0ELb0EE1QE *__par0){__cudaSetupArgSimple(__par0, 0UL);__cudaLaunch(((char *)((void ( *)(_ZN10Megakernel13TechniqueCoreILi0E7MyQueue8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEEvLi16336ELb0ELb1ELb0ELb0EE1QE *))initQueue< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> , (int)0> > )));}
template<> __specialization_static void __wrapper__device_stub_initQueue< ::Megakernel::TechniqueCore<(int)0,  ::MyQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , void, (int)16336, (bool)0, (bool)1, (bool)0, (bool)0> ::Q>( _ZN10Megakernel13TechniqueCoreILi0E7MyQueue8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEEvLi16336ELb0ELb1ELb0ELb0EE1QE *&__cuda_0){__device_stub__Z9initQueueI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EEEvPT_( (_ZN10Megakernel13TechniqueCoreILi0E7MyQueue8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEEvLi16336ELb0ELb1ELb0ELb0EE1QE *&)__cuda_0);}
static void __device_stub__ZN10Megakernel18megakernelSpecificI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb1ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEviiPT_5uint4iPi(int __par0, int __par1,  _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *__par2, struct uint4&__par3, int __par4, int *__par5){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 4UL);__cudaSetupArgSimple(__par2, 8UL);__cudaSetupArg(__par3, 16UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(int, int,  _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *, struct uint4, int, int *))Megakernel::megakernelSpecific< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue, void> , (int)0> ,  ::PhaseProcInfo<    ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ::Priority<(int)0> ,  ::PhaseQueues< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (int)1> ::MyPhaseTraits,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (bool)1> , void, (bool)0, (bool)1, (bool)1,  ::Megakernel::TimeLimiter<(unsigned long long)0ull, (bool)0> , ( ::Megakernel::MegakernelStopCriteria)0> )));}namespace Megakernel{

template<> __specialization_static void __wrapper__device_stub_megakernelSpecific< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue, void> , (int)0> , ::PhaseQueues< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (int)1> ::TProcInfo,void,false,true,true, ::Megakernel::TimeLimiter<(unsigned long long)0ull, (bool)0> ,( ::Megakernel::EmptyQueue)>( int &__cuda_0,int &__cuda_1, _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *&__cuda_2,struct ::uint4 &__cuda_3,int &__cuda_4,int *&__cuda_5){__device_stub__ZN10Megakernel18megakernelSpecificI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb1ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEviiPT_5uint4iPi( (int &)__cuda_0,(int &)__cuda_1,( _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *&)__cuda_2,(struct ::uint4 &)__cuda_3,(int &)__cuda_4,(int *&)__cuda_5);}}
static void __device_stub__ZN10Megakernel10megakernelI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb0ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEvPT_5uint4iPi( _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *__par0, struct uint4&__par1, int __par2, int *__par3){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArg(__par1, 16UL);__cudaSetupArgSimple(__par2, 32UL);__cudaSetupArgSimple(__par3, 40UL);__cudaLaunch(((char *)((void ( *)( _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *, struct uint4, int, int *))Megakernel::megakernel< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue, void> , (int)0> ,  ::PhaseProcInfo<    ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ::Priority<(int)0> ,  ::PhaseQueues< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (int)1> ::MyPhaseTraits,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (bool)1> , void, (bool)0, (bool)1, (bool)0,  ::Megakernel::TimeLimiter<(unsigned long long)0ull, (bool)0> , ( ::Megakernel::MegakernelStopCriteria)0> )));}namespace Megakernel{

template<> __specialization_static void __wrapper__device_stub_megakernel< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue, void> , (int)0> , ::PhaseQueues< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (int)1> ::TProcInfo,void,false,true,false, ::Megakernel::TimeLimiter<(unsigned long long)0ull, (bool)0> ,( ::Megakernel::EmptyQueue)>(  _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *&__cuda_0,struct ::uint4 &__cuda_1,int &__cuda_2,int *&__cuda_3){__device_stub__ZN10Megakernel10megakernelI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb0ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEvPT_5uint4iPi( ( _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *&)__cuda_0,(struct ::uint4 &)__cuda_1,(int &)__cuda_2,(int *&)__cuda_3);}}
static void __device_stub__ZN10Megakernel8initDataI8InitProc22CurrentMultiphaseQueueIS2_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE11raster_wtriEEvPT0_iPT1_( _Z22CurrentMultiphaseQueueIS_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE *__par0, int __par1, _ZN8InitProc12ExpectedDataE *__par2){__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)( _Z22CurrentMultiphaseQueueIS_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE *, int, _ZN8InitProc12ExpectedDataE *))Megakernel::initData< ::InitProc,  ::CurrentMultiphaseQueue<CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> , (int)0> , (int)0> ,  ::raster_wtri> )));}namespace Megakernel{

template<> __specialization_static void __wrapper__device_stub_initData< ::InitProc, ::CurrentMultiphaseQueue<CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> , (int)0> , (int)0> , ::InitProc::ExpectedData>(  _Z22CurrentMultiphaseQueueIS_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE *&__cuda_0,int &__cuda_1,_ZN8InitProc12ExpectedDataE *&__cuda_2){__device_stub__ZN10Megakernel8initDataI8InitProc22CurrentMultiphaseQueueIS2_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE11raster_wtriEEvPT0_iPT1_( ( _Z22CurrentMultiphaseQueueIS_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE *&)__cuda_0,(int &)__cuda_1,(_ZN8InitProc12ExpectedDataE *&)__cuda_2);}}
static void __nv_cudaEntityRegisterCallback(void **__T2149){__nv_dummy_param_ref(__T2149);__nv_save_fatbinhandle_for_managed_rt(__T2149);__cudaRegisterEntry(__T2149, ((void ( *)( _Z22CurrentMultiphaseQueueIS_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE *, int, _ZN8InitProc12ExpectedDataE *))Megakernel::initData< ::InitProc,  ::CurrentMultiphaseQueue<CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> , (int)0> , (int)0> ,  ::raster_wtri> ), _ZN10Megakernel8initDataI8InitProc22CurrentMultiphaseQueueIS2_I15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EELi0EE11raster_wtriEEvPT0_iPT1_, (-1));__cudaRegisterEntry(__T2149, ((void ( *)( _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *, struct uint4, int, int *))Megakernel::megakernel< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue, void> , (int)0> ,  ::PhaseProcInfo<    ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ::Priority<(int)0> ,  ::PhaseQueues< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (int)1> ::MyPhaseTraits,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (bool)1> , void, (bool)0, (bool)1, (bool)0,  ::Megakernel::TimeLimiter<(unsigned long long)0ull, (bool)0> , ( ::Megakernel::MegakernelStopCriteria)0> ), _ZN10Megakernel10megakernelI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb0ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEvPT_5uint4iPi, (-1));__cudaRegisterEntry(__T2149, ((void ( *)(int, int,  _Z22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS0_IS7_7MyQueuevE13InternalQueueEvELi0EE *, struct uint4, int, int *))Megakernel::megakernelSpecific< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue, void> , (int)0> ,  ::PhaseProcInfo<    ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ::Priority<(int)0> ,  ::PhaseQueues< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> ::InternalQueue,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (int)1> ::MyPhaseTraits,  ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > , (int)0, (bool)1> , void, (bool)0, (bool)1, (bool)1,  ::Megakernel::TimeLimiter<(unsigned long long)0ull, (bool)0> , ( ::Megakernel::MegakernelStopCriteria)0> ), _ZN10Megakernel18megakernelSpecificI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEENS2_IS9_7MyQueuevE13InternalQueueEvELi0EE13PhaseProcInfoINS9_8PriorityILi0EEEN11PhaseQueuesISC_S9_Li0ELi1EE13MyPhaseTraitsES9_Li0ELb1EEvLb0ELb1ELb1ENS_11TimeLimiterILy0ELb0EEELNS_22MegakernelStopCriteriaE0EEEviiPT_5uint4iPi, (-1));__cudaRegisterEntry(__T2149, ((void ( *)(_ZN10Megakernel13TechniqueCoreILi0E7MyQueue8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEEvLi16336ELb0ELb1ELb0ELb0EE1QE *))initQueue< ::CurrentMultiphaseQueue< ::MultiPhaseQueue< ::ProcInfo< ::Vertex, (int)2,  ::N< ::Raster, (int)1,  ::ProcInfoEnd> > ,  ::MyQueue, void> , (int)0> > ), _Z9initQueueI22CurrentMultiphaseQueueI15MultiPhaseQueueI8ProcInfoI6VertexLi2E1NI6RasterLi1E11ProcInfoEndEE7MyQueuevELi0EEEvPT_, (-1));__cudaRegisterVariable(__T2149, __shadow_var(constState_d,::constState_d), 0, 216, 1, 0);__cudaRegisterVariable(__T2149, __shadow_var(mutableState_d,::mutableState_d), 0, 3145728, 0, 0);__cudaRegisterVariable(__T2149, __shadow_var(pixels_d,::pixels_d), 0, 800000000, 0, 0);__cudaRegisterVariable(__T2149, __shadow_var(numPixs,::numPixs), 0, 4, 0, 0);__cudaRegisterVariable(__T2149, __shadow_var(hahacount,::hahacount), 0, 4, 0, 0);__cudaRegisterVariable(__T2149, __shadow_var(_ZN18DynamicParallelism14inFlightBlocksE,::DynamicParallelism::inFlightBlocks), 0, 4, 0, 0);}
static void __sti____cudaRegisterAll_23_main_compute_61_cpp1_ii_7ed080b1(void){____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);}

#pragma GCC diagnostic pop