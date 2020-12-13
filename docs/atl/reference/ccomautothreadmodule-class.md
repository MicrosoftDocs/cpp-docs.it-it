---
description: 'Altre informazioni su: classe CComAutoThreadModule'
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
ms.openlocfilehash: fe6ded878a054bdcdc2569c8ca347e2ac20410b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146939"
---
# <a name="ccomautothreadmodule-class"></a>Classe CComAutoThreadModule

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class ThreadAllocator = CComSimpleThreadAllocator>
class CComAutoThreadModule : public CComModule
```

#### <a name="parameters"></a>Parametri

*ThreadAllocator*<br/>
in Classe che gestisce la selezione dei thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|Funzione|Descrizione|
|-|-|
|[CreateInstance](#createinstance)|Seleziona un thread e quindi crea un oggetto nell'Apartment associato.|
|[GetDefaultThreads](#getdefaultthreads)|Statico Calcola dinamicamente il numero di thread per il modulo in base al numero di processori.|
|[Init](#init)|Crea i thread del modulo.|
|[Lock](#lock)|Incrementa il conteggio dei blocchi sul modulo e sul thread corrente.|
|[Sblocca](#unlock)|Decrementa il conteggio dei blocchi sul modulo e sul thread corrente.|

### <a name="data-members"></a>Membri dei dati

|Membro dei dati|Description|
|-|-|
|[dwThreadID](#dwthreadid)|Contiene l'identificatore del thread corrente.|
|[m_Allocator](#m_allocator)|Gestisce la selezione del thread.|
|[m_nThreads](#m_nthreads)|Contiene il numero di thread nel modulo.|
|[m_pApartments](#m_papartments)|Gestisce gli Apartment del modulo.|

## <a name="remarks"></a>Commenti

> [!NOTE]
> Questa classe è obsoleta, che è stata sostituita dalle classi derivate [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule](../../atl/reference/catlmodule-class.md) . Le informazioni seguenti sono destinate all'utilizzo con versioni precedenti di ATL.

`CComAutoThreadModule` deriva da [CComModule](../../atl/reference/ccommodule-class.md) per implementare un server com in pool di thread, per gli exe e i servizi Windows. `CComAutoThreadModule` USA [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un Apartment per ogni thread del modulo.

Derivare il modulo da `CComAutoThreadModule` quando si desidera creare oggetti in più Apartment. È inoltre necessario includere la macro [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) nella definizione di classe dell'oggetto per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.

Per impostazione predefinita, la creazione guidata applicazioni ATL COM (la creazione guidata progetto ATL in Visual Studio .NET) deriverà il modulo da `CComModule` . Per usare `CComAutoThreadModule` , modificare la definizione della classe. Ad esempio:

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

## <a name="ccomautothreadmodulecreateinstance"></a><a name="createinstance"></a> CComAutoThreadModule:: CreateInstance

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

### <a name="remarks"></a>Commenti

Seleziona un thread e quindi crea un oggetto nell'Apartment associato.

## <a name="ccomautothreadmoduledwthreadid"></a><a name="dwthreadid"></a> CComAutoThreadModule::d wThreadID

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
DWORD dwThreadID;
```

### <a name="remarks"></a>Commenti

Contiene l'identificatore del thread corrente.

## <a name="ccomautothreadmodulegetdefaultthreads"></a><a name="getdefaultthreads"></a> CComAutoThreadModule:: GetDefaultThreads

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
static int GetDefaultThreads();
```

### <a name="return-value"></a>Valore restituito

Il numero di thread da creare nel modulo EXE.

### <a name="remarks"></a>Commenti

Questa funzione statica calcola dinamicamente il numero massimo di thread per il modulo EXE, in base al numero di processori. Per impostazione predefinita, questo valore restituito viene passato al metodo [init](#init) per creare i thread.

## <a name="ccomautothreadmoduleinit"></a><a name="init"></a> CComAutoThreadModule:: init

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
in HINSTANCE passato a `DLLMain` o `WinMain` .

*plibid*<br/>
in Puntatore a LIBID della libreria dei tipi associata al progetto.

*nThreads*<br/>
in Numero di thread da creare. Per impostazione predefinita, *nThreads* è il valore restituito da [GetDefaultThreads](#getdefaultthreads).

### <a name="remarks"></a>Commenti

Inizializza i membri dati e crea il numero di thread specificato da *nThreads*.

## <a name="ccomautothreadmodulelock"></a><a name="lock"></a> CComAutoThreadModule:: Lock

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
LONG Lock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Commenti

Esegue un incremento atomico sul conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule` Usa il numero di blocchi del modulo per determinare se i client accedono al modulo. Il numero di blocchi nel thread corrente viene usato per scopi statistici.

## <a name="ccomautothreadmodulem_allocator"></a><a name="m_allocator"></a> CComAutoThreadModule:: m_Allocator

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
ThreadAllocator  m_Allocator;
```

### <a name="remarks"></a>Commenti

Oggetto che gestisce la selezione del thread. Per impostazione predefinita, il `ThreadAllocator` parametro del modello di classe è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## <a name="ccomautothreadmodulem_nthreads"></a><a name="m_nthreads"></a> CComAutoThreadModule:: m_nThreads

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
int m_nThreads;
```

### <a name="remarks"></a>Commenti

Contiene il numero di thread nel modulo EXE. Quando viene chiamato [init](#init) , `m_nThreads` viene impostato sul valore del parametro *nThreads* . L'Apartment associato di ogni thread viene gestito da un oggetto [CComApartment](../../atl/reference/ccomapartment-class.md) .

## <a name="ccomautothreadmodulem_papartments"></a><a name="m_papartments"></a> CComAutoThreadModule:: m_pApartments

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
CComApartment* m_pApartments;
```

### <a name="remarks"></a>Commenti

Punta a una matrice di oggetti [CComApartment](../../atl/reference/ccomapartment-class.md) , ognuno dei quali gestisce un Apartment nel modulo. Il numero di elementi nella matrice è basato sul membro [m_nThreads](#m_nthreads) .

## <a name="ccomautothreadmoduleunlock"></a><a name="unlock"></a> CComAutoThreadModule:: Unlock

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto. per altri dettagli, vedere [classi di moduli ATL](../../atl/atl-module-classes.md) .

```
LONG Unlock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Commenti

Esegue un decremento atomico sul conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule` Usa il numero di blocchi del modulo per determinare se i client accedono al modulo. Il numero di blocchi nel thread corrente viene usato per scopi statistici.

Quando il numero di blocchi del modulo raggiunge lo zero, è possibile scaricare il modulo.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi modulo](../../atl/atl-module-classes.md)
