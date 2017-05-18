---
title: Classe CComAutoThreadModule | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComAutoThreadModule
- ATLBASE/ATL::CComAutoThreadModule
- ATLBASE/ATL::CreateInstance
- ATLBASE/ATL::GetDefaultThreads
- ATLBASE/ATL::Init
- ATLBASE/ATL::Lock
- ATLBASE/ATL::Unlock
- ATLBASE/ATL::dwThreadID
- ATLBASE/ATL::m_Allocator
- ATLBASE/ATL::m_nThreads
- ATLBASE/ATL::m_pApartments
dev_langs:
- C++
helpviewer_keywords:
- CComAutoThreadModule class
- apartment model modules
ms.assetid: 13063ea5-a57e-4aac-97d3-227137262811
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 8e3ad5333d684daff5d8baf462ae805ef8b4b51d
ms.contentlocale: it-it
ms.lasthandoff: 03/31/2017

---
# <a name="ccomautothreadmodule-class"></a>CComAutoThreadModule (classe)
In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class ThreadAllocator = CComSimpleThreadAllocator>  
class CComAutoThreadModule : public CComModule
```  
  
#### <a name="parameters"></a>Parametri  
 `ThreadAllocator`  
 [in] La classe di gestione di selezione di thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CreateInstance](#createinstance)|Seleziona un thread e quindi crea un oggetto in apartment associato.|  
|[GetDefaultThreads](#getdefaultthreads)|(Statico) Calcola in modo dinamico il numero di thread per il modulo in base al numero di processori.|  
|[Init](#init)|Crea i thread del modulo.|  
|[Blocco](#lock)|Incrementa il conteggio dei blocchi nel modulo e sul thread corrente.|  
|[Lo sblocco](#unlock)|Decrementa il conteggio dei blocchi nel modulo e sul thread corrente.|  
  
### <a name="data-members"></a>Membri di dati  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[dwThreadID](#dwthreadid)|Contiene l'identificatore del thread corrente.|  
|[m_Allocator](#m_allocator)|Gestisce la selezione di thread.|  
|[m_nThreads](#m_nthreads)|Contiene il numero di thread nel modulo.|  
|[m_pApartments](#m_papartments)|Gestisce l'apartment del modulo.|  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Questa classe è obsoleta, con stato sostituito il [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule](../../atl/reference/catlmodule-class.md) classi derivate. Le informazioni seguenti sono per l'utilizzo con le versioni precedenti di ATL.  
  
 `CComAutoThreadModule`deriva da [CComModule](../../atl/reference/ccommodule-class.md) per implementare un pool di thread del modello di apartment COM server per servizi file exe e Windows. `CComAutoThreadModule`Usa [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un apartment per ogni thread nel modulo.  
  
 Derivare il modulo da `CComAutoThreadModule` quando si desidera creare oggetti in più apartment. È inoltre necessario includere il [: DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come la class factory.  
  
 Per impostazione predefinita, la creazione guidata applicazioni COM ATL (Creazione guidata progetto ATL in Visual Studio .NET) verrà derivare il modulo da `CComModule`. Per utilizzare `CComAutoThreadModule`, modificare la definizione di classe. Ad esempio:  
  
 [!code-cpp[NVC_ATL_AxHost n. 2](../../atl/codesnippet/cpp/ccomautothreadmodule-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 `IAtlAutoThreadModule`  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)  
  
 [CComModule](../../atl/reference/ccommodule-class.md)  
  
 `CComAutoThreadModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="createinstance"></a>CComAutoThreadModule::CreateInstance  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
HRESULT CreateInstance(
    void* pfnCreateInstance,
    REFIID riid,
    void** ppvObj);
```  
  
### <a name="parameters"></a>Parametri  
 *pfnCreateInstance*  
 [in] Puntatore a una funzione di creazione.  
  
 `riid`  
 [in] IID dell'interfaccia richiesta.  
  
 `ppvObj`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `riid`. Se l'oggetto non supporta questa interfaccia, `ppvObj` è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Seleziona un thread e quindi crea un oggetto in apartment associato.  
  
##  <a name="dwthreadid"></a>CComAutoThreadModule::dwThreadID  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
DWORD dwThreadID;
```  
  
### <a name="remarks"></a>Note  
 Contiene l'identificatore del thread corrente.  
  
##  <a name="getdefaultthreads"></a>CComAutoThreadModule::GetDefaultThreads  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
static int GetDefaultThreads();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di thread da creare nel modulo EXE.  
  
### <a name="remarks"></a>Note  
 Questa funzione statica calcola in modo dinamico il numero massimo di thread per il modulo EXE, in base al numero di processori. Per impostazione predefinita, questo valore restituito viene passato per il [Init](#init) metodo per creare il thread.  
  
##  <a name="init"></a>CComAutoThreadModule::Init  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL,
    int nThreads = GetDefaultThreads());
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Un puntatore a una matrice di voci della mappa oggetto.  
  
 `h`  
 [in] Il `HINSTANCE` passato a **DLLMain** o `WinMain`.  
  
 `plibid`  
 [in] Puntatore a LIBID della libreria dei tipi associato al progetto.  
  
 `nThreads`  
 [in] Il numero di thread da creare. Per impostazione predefinita, `nThreads` è il valore restituito da [GetDefaultThreads](#getdefaultthreads).  
  
### <a name="remarks"></a>Note  
 Inizializza i membri di dati e crea il numero di thread specificato da `nThreads`.  
  
##  <a name="lock"></a>CComAutoThreadModule::Lock  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
LONG Lock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o di testing.  
  
### <a name="remarks"></a>Note  
 Esegue un incremento atomico il conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule`utilizza il conteggio dei blocchi del modulo per determinare se i client accede il modulo. Il conteggio dei blocchi sul thread corrente viene utilizzato per scopi statistici.  
  
##  <a name="m_allocator"></a>CComAutoThreadModule::m_Allocator  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
ThreadAllocator  m_Allocator;
```     
  
### <a name="remarks"></a>Note  
 L'oggetto di selezione di thread di gestione. Per impostazione predefinita, il `ThreadAllocator` è il parametro di modello di classe [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).  
  
##  <a name="m_nthreads"></a>CComAutoThreadModule::m_nThreads  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
int m_nThreads;
```  
  
### <a name="remarks"></a>Note  
 Contiene il numero di thread nel modulo EXE. Quando [Init](#init) viene chiamato, `m_nThreads` è impostato sul `nThreads` valore del parametro. Apartment associati a ogni thread è gestito da un [CComApartment](../../atl/reference/ccomapartment-class.md) oggetto.  
  
##  <a name="m_papartments"></a>CComAutoThreadModule::m_pApartments  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
CComApartment* m_pApartments;
```  
  
### <a name="remarks"></a>Note  
 Punta a una matrice di [CComApartment](../../atl/reference/ccomapartment-class.md) oggetti, ognuno dei quali gestisce un apartment nel modulo. Il numero di elementi nella matrice si basa sul [m_nThreads](#m_nthreads) membro.  
  
##  <a name="unlock"></a>CComAutoThreadModule::Unlock  
 In ATL 7.0, `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.  
  
```
LONG Unlock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o di testing.  
  
### <a name="remarks"></a>Note  
 Esegue un decremento atomico il conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule`utilizza il conteggio dei blocchi del modulo per determinare se i client accede il modulo. Il conteggio dei blocchi sul thread corrente viene utilizzato per scopi statistici.  
  
 Quando il conteggio dei blocchi del modulo raggiunge lo zero, il modulo può essere scaricato.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi Module](../../atl/atl-module-classes.md)

