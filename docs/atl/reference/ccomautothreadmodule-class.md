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
ms.openlocfilehash: 9b0fa685bf9a7de94b158bd62b00161c1b58562d
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417922"
---
# <a name="ccomautothreadmodule-class"></a>Classe CComAutoThreadModule

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class ThreadAllocator = CComSimpleThreadAllocator>
class CComAutoThreadModule : public CComModule
```

#### <a name="parameters"></a>Parametri

*ThreadAllocator*<br/>
in Classe che gestisce la selezione dei thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[CreateInstance](#createinstance)|Seleziona un thread e quindi crea un oggetto nell'Apartment associato.|
|[GetDefaultThreads](#getdefaultthreads)|Statico Calcola dinamicamente il numero di thread per il modulo in base al numero di processori.|
|[Init](#init)|Crea i thread del modulo.|
|[Blocco](#lock)|Incrementa il conteggio dei blocchi sul modulo e sul thread corrente.|
|[Sbloccare](#unlock)|Decrementa il conteggio dei blocchi sul modulo e sul thread corrente.|

### <a name="data-members"></a>Membri dei dati

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[dwThreadID](#dwthreadid)|Contiene l'identificatore del thread corrente.|
|[m_Allocator](#m_allocator)|Gestisce la selezione del thread.|
|[m_nThreads](#m_nthreads)|Contiene il numero di thread nel modulo.|
|[m_pApartments](#m_papartments)|Gestisce gli Apartment del modulo.|

## <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Questa classe è obsoleta, che è stata sostituita dalle classi derivate [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule](../../atl/reference/catlmodule-class.md) . Le informazioni seguenti sono destinate all'utilizzo con versioni precedenti di ATL.

`CComAutoThreadModule` deriva da [CComModule](../../atl/reference/ccommodule-class.md) per implementare un server com in pool di thread, per gli exe e i servizi Windows. `CComAutoThreadModule` USA [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un Apartment per ogni thread del modulo.

Derivare il modulo da `CComAutoThreadModule` quando si desidera creare oggetti in più Apartment. È inoltre necessario includere la macro [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) nella definizione di classe dell'oggetto per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.

Per impostazione predefinita, la creazione guidata applicazioni ATL COM (la creazione guidata progetto ATL in Visual Studio .NET) deriverà il modulo dal `CComModule`. Per utilizzare `CComAutoThreadModule`, modificare la definizione della classe. Ad esempio:

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

##  <a name="createinstance"></a>CComAutoThreadModule:: CreateInstance

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT CreateInstance(
    void* pfnCreateInstance,
    REFIID riid,
    void** ppvObj);
```

### <a name="parameters"></a>Parametri

*pfnCreateInstance*<br/>
in Puntatore a una funzione Creator.

*riid*<br/>
in IID dell'interfaccia richiesta.

*ppvObj*<br/>
out Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObj* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Seleziona un thread e quindi crea un oggetto nell'Apartment associato.

##  <a name="dwthreadid"></a>CComAutoThreadModule::d wThreadID

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
DWORD dwThreadID;
```

### <a name="remarks"></a>Osservazioni

Contiene l'identificatore del thread corrente.

##  <a name="getdefaultthreads"></a>CComAutoThreadModule:: GetDefaultThreads

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
static int GetDefaultThreads();
```

### <a name="return-value"></a>Valore restituito

Il numero di thread da creare nel modulo EXE.

### <a name="remarks"></a>Osservazioni

Questa funzione statica calcola dinamicamente il numero massimo di thread per il modulo EXE, in base al numero di processori. Per impostazione predefinita, questo valore restituito viene passato al metodo [init](#init) per creare i thread.

##  <a name="init"></a>CComAutoThreadModule:: init

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL,
    int nThreads = GetDefaultThreads());
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore a una matrice di voci della mappa degli oggetti.

*h*<br/>
in HINSTANCE passato a `DLLMain` o `WinMain`.

*plibid*<br/>
in Puntatore a LIBID della libreria dei tipi associata al progetto.

*nThreads*<br/>
in Numero di thread da creare. Per impostazione predefinita, *nThreads* è il valore restituito da [GetDefaultThreads](#getdefaultthreads).

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati e crea il numero di thread specificato da *nThreads*.

##  <a name="lock"></a>CComAutoThreadModule:: Lock

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
LONG Lock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Osservazioni

Esegue un incremento atomico sul conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule` usa il numero di blocchi del modulo per determinare se i client accedono al modulo. Il numero di blocchi nel thread corrente viene usato per scopi statistici.

##  <a name="m_allocator"></a>CComAutoThreadModule:: m_Allocator

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
ThreadAllocator  m_Allocator;
```

### <a name="remarks"></a>Osservazioni

Oggetto che gestisce la selezione del thread. Per impostazione predefinita, il parametro del modello di classe `ThreadAllocator` è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

##  <a name="m_nthreads"></a>CComAutoThreadModule:: m_nThreads

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
int m_nThreads;
```

### <a name="remarks"></a>Osservazioni

Contiene il numero di thread nel modulo EXE. Quando viene chiamato [init](#init) , `m_nThreads` viene impostato sul valore del parametro *nThreads* . L'Apartment associato di ogni thread viene gestito da un oggetto [CComApartment](../../atl/reference/ccomapartment-class.md) .

##  <a name="m_papartments"></a>CComAutoThreadModule:: m_pApartments

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
CComApartment* m_pApartments;
```

### <a name="remarks"></a>Osservazioni

Punta a una matrice di oggetti [CComApartment](../../atl/reference/ccomapartment-class.md) , ognuno dei quali gestisce un Apartment nel modulo. Il numero di elementi nella matrice è basato sul membro [m_nThreads](#m_nthreads) .

##  <a name="unlock"></a>CComAutoThreadModule:: Unlock

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
LONG Unlock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Osservazioni

Esegue un decremento atomico sul conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule` usa il numero di blocchi del modulo per determinare se i client accedono al modulo. Il numero di blocchi nel thread corrente viene usato per scopi statistici.

Quando il numero di blocchi del modulo raggiunge lo zero, è possibile scaricare il modulo.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
