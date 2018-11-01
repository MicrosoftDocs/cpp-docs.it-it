---
title: Classe CComAutoThreadModule
ms.date: 11/04/2016
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
helpviewer_keywords:
- CComAutoThreadModule class
- apartment model modules
ms.assetid: 13063ea5-a57e-4aac-97d3-227137262811
ms.openlocfilehash: 805227144887b29d85b1948f62060ffe9eb2d0e2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50435688"
---
# <a name="ccomautothreadmodule-class"></a>Classe CComAutoThreadModule

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class ThreadAllocator = CComSimpleThreadAllocator>
class CComAutoThreadModule : public CComModule
```

#### <a name="parameters"></a>Parametri

*ThreadAllocator*<br/>
[in] La classe di gestione di selezione di thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CreateInstance](#createinstance)|Seleziona un thread e quindi crea un oggetto nell'apartment associato.|
|[GetDefaultThreads](#getdefaultthreads)|(Statico) Calcola in modo dinamico il numero di thread per il modulo in base al numero di processori.|
|[Init](#init)|Crea i thread del modulo.|
|[Blocco](#lock)|Incrementa il conteggio dei blocchi sul modulo e sul thread corrente.|
|[Lo sblocco](#unlock)|Decrementa il conteggio dei blocchi sul modulo e sul thread corrente.|

### <a name="data-members"></a>Membri di dati

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[dwThreadID](#dwthreadid)|Contiene l'identificatore del thread corrente.|
|[m_Allocator](#m_allocator)|Gestisce la selezione thread.|
|[m_nThreads](#m_nthreads)|Contiene il numero di thread nel modulo.|
|[m_pApartments](#m_papartments)|Gestisce l'apartment del modulo.|

## <a name="remarks"></a>Note

> [!NOTE]
>  Questa classe è obsoleta, con stato sostituito dal [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule](../../atl/reference/catlmodule-class.md) classi derivate. Le informazioni seguenti sono per l'uso con le versioni precedenti di ATL.

`CComAutoThreadModule` deriva da [CComModule](../../atl/reference/ccommodule-class.md) per implementare un server COM in pool di thread, modello di apartment per i servizi di file exe e Windows. `CComAutoThreadModule` viene utilizzato [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un apartment per ogni thread nel modulo.

Derivare il modulo dal `CComAutoThreadModule` quando si desidera creare oggetti in più apartment. È necessario includere anche il [: DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come la class factory.

Per impostazione predefinita, la creazione guidata applicazioni COM ATL (Creazione guidata progetto ATL in Visual Studio .NET) esegue la derivazione del modulo da `CComModule`. Usare `CComAutoThreadModule`, modificare la definizione di classe. Ad esempio:

[!code-cpp[NVC_ATL_AxHost#2](../../atl/codesnippet/cpp/ccomautothreadmodule-class_1.cpp)]

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

##  <a name="createinstance"></a>  CComAutoThreadModule::CreateInstance

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT CreateInstance(
    void* pfnCreateInstance,
    REFIID riid,
    void** ppvObj);
```

### <a name="parameters"></a>Parametri

*pfnCreateInstance*<br/>
[in] Puntatore a una funzione di creazione.

*riid*<br/>
[in] IID dell'interfaccia richiesta.

*ppvObj*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObj* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Seleziona un thread e quindi crea un oggetto nell'apartment associato.

##  <a name="dwthreadid"></a>  CComAutoThreadModule::dwThreadID

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
DWORD dwThreadID;
```

### <a name="remarks"></a>Note

Contiene l'identificatore del thread corrente.

##  <a name="getdefaultthreads"></a>  CComAutoThreadModule::GetDefaultThreads

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
static int GetDefaultThreads();
```

### <a name="return-value"></a>Valore restituito

Il numero di thread da creare nel modulo EXE.

### <a name="remarks"></a>Note

Questa funzione statica calcola in modo dinamico il numero massimo di thread per il modulo di file EXE, in base al numero di processori. Per impostazione predefinita, questo valore restituito viene passato per il [Init](#init) metodo per creare il thread.

##  <a name="init"></a>  CComAutoThreadModule::Init

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL,
    int nThreads = GetDefaultThreads());
```

### <a name="parameters"></a>Parametri

*p*<br/>
[in] Un puntatore a una matrice di voci della mappa oggetto.

*h*<br/>
[in] HINSTANCE passato a `DLLMain` o `WinMain`.

*plibid*<br/>
[in] Puntatore a LIBID della libreria dei tipi associato al progetto.

*nThreads*<br/>
[in] Il numero di thread da creare. Per impostazione predefinita *nThreads* è il valore restituito da [GetDefaultThreads](#getdefaultthreads).

### <a name="remarks"></a>Note

Inizializza i membri dati e crea il numero di thread specificato da *nThreads*.

##  <a name="lock"></a>  CComAutoThreadModule::Lock

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
LONG Lock();
```

### <a name="return-value"></a>Valore restituito

Un valore che può essere utile per la diagnostica o di testing.

### <a name="remarks"></a>Note

Esegue un incremento atomico su conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule` utilizza il conteggio dei blocchi del modulo per determinare se tutti i client accede il modulo. Il conteggio dei blocchi sul thread corrente viene usato per scopi statistici.

##  <a name="m_allocator"></a>  CComAutoThreadModule::m_Allocator

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
ThreadAllocator  m_Allocator;
```

### <a name="remarks"></a>Note

Oggetto che gestisce la selezione thread. Per impostazione predefinita, il `ThreadAllocator` è il parametro di modello di classe [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

##  <a name="m_nthreads"></a>  CComAutoThreadModule::m_nThreads

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
int m_nThreads;
```

### <a name="remarks"></a>Note

Contiene il numero di thread nel modulo EXE. Quando [Init](#init) viene chiamato `m_nThreads` è impostata sul *nThreads* valore del parametro. Apartment associati a ogni thread è gestito da un [CComApartment](../../atl/reference/ccomapartment-class.md) oggetto.

##  <a name="m_papartments"></a>  CComAutoThreadModule::m_pApartments

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
CComApartment* m_pApartments;
```

### <a name="remarks"></a>Note

Punta a una matrice di [CComApartment](../../atl/reference/ccomapartment-class.md) oggetti, ognuno dei quali gestisce un appartamento nel modulo. Il numero di elementi nella matrice si basa sul [m_nThreads](#m_nthreads) membro.

##  <a name="unlock"></a>  CComAutoThreadModule::Unlock

A partire da ATL 7.0 `CComAutoThreadModule` è obsoleta: vedere [classi di modulo ATL](../../atl/atl-module-classes.md) per altri dettagli.

```
LONG Unlock();
```

### <a name="return-value"></a>Valore restituito

Un valore che può essere utile per la diagnostica o di testing.

### <a name="remarks"></a>Note

Esegue un decremento atomica su conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule` utilizza il conteggio dei blocchi del modulo per determinare se tutti i client accede il modulo. Il conteggio dei blocchi sul thread corrente viene usato per scopi statistici.

Quando il conteggio dei blocchi del modulo raggiunge lo zero, il modulo può essere scaricato.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
