---
title: CComAutoThreadModule (classe)
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
ms.openlocfilehash: 391354c5672cf15c0286491619a13c6005493cfa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321058"
---
# <a name="ccomautothreadmodule-class"></a>CComAutoThreadModule (classe)

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class ThreadAllocator = CComSimpleThreadAllocator>
class CComAutoThreadModule : public CComModule
```

#### <a name="parameters"></a>Parametri

*ThreadAllocatore*<br/>
[in] Classe che gestisce la selezione dei thread. Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CreateIstanza](#createinstance)|Seleziona un thread e quindi crea un oggetto nell'apartment associato.|
|[GetDefaultThreads](#getdefaultthreads)|(Statico) Calcola dinamicamente il numero di thread per il modulo in base al numero di processori.|
|[Init](#init)|Crea i thread del modulo.|
|[Blocco](#lock)|Incrementa il conteggio dei blocchi sul modulo e sul thread corrente.|
|[Sbloccare](#unlock)|Decrementa il conteggio dei blocchi sul modulo e sul thread corrente.|

### <a name="data-members"></a>Membri dei dati

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[dwThreadID (idthread)](#dwthreadid)|Contiene l'identificatore del thread corrente.|
|[m_Allocator](#m_allocator)|Gestisce la selezione dei filettature.|
|[m_nThreads](#m_nthreads)|Contiene il numero di thread nel modulo.|
|[m_pApartments](#m_papartments)|Gestisce gli appartamenti del modulo.|

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> Questa classe è obsoleta, essendo stata sostituita dalle classi derivate [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) e [CAtlModule.](../../atl/reference/catlmodule-class.md) Le informazioni che seguono sono per l'utilizzo con le versioni precedenti di ATL.

`CComAutoThreadModule`deriva da [CComModule](../../atl/reference/ccommodule-class.md) per implementare un server COM con pool di thread, modello di apartment per EXEs e servizi Windows. `CComAutoThreadModule`utilizza [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un apartment per ogni thread nel modulo.

Derivare il `CComAutoThreadModule` modulo da quando si desidera creare oggetti in più apartment. È inoltre necessario includere la macro [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) nella definizione della classe dell'oggetto per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.

Per impostazione predefinita, la Creazione guidata applicazione COM ATL (Creazione guidata `CComModule`progetto ATL in Visual Studio .NET) deriverà il modulo da . Per `CComAutoThreadModule`utilizzare , modificare la definizione della classe. Ad esempio:

[!code-cpp[NVC_ATL_AxHost#2](../../atl/codesnippet/cpp/ccomautothreadmodule-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[_ATL_MODULE](atl-typedefs.md#_atl_module)

[CAtlModule (modulo CAtlModule)](../../atl/reference/catlmodule-class.md)

`IAtlAutoThreadModule`

[CAtlModuleT (modulo CAtlModuleT)](../../atl/reference/catlmodulet-class.md)

[CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)

[Ccommodule](../../atl/reference/ccommodule-class.md)

`CComAutoThreadModule`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomautothreadmodulecreateinstance"></a><a name="createinstance"></a>CComAutoThreadModule::CreateInstance

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT CreateInstance(
    void* pfnCreateInstance,
    REFIID riid,
    void** ppvObj);
```

### <a name="parameters"></a>Parametri

*PfnCreateIstanza (istanza di file di file)*<br/>
[in] Puntatore a una funzione creatore.

*Riid*<br/>
[in] IID dell'interfaccia richiesta.

*ppvObj*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObj* viene impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Seleziona un thread e quindi crea un oggetto nell'apartment associato.

## <a name="ccomautothreadmoduledwthreadid"></a><a name="dwthreadid"></a>CComAutoThreadModule::dwThreadID

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
DWORD dwThreadID;
```

### <a name="remarks"></a>Osservazioni

Contiene l'identificatore del thread corrente.

## <a name="ccomautothreadmodulegetdefaultthreads"></a><a name="getdefaultthreads"></a>CComAutoThreadModule::GetDefaultThreads (Modulo) CComAutoThreadModule::GetDefaultThreads (Informazioni in lingua stati intratto

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
static int GetDefaultThreads();
```

### <a name="return-value"></a>Valore restituito

Numero di thread da creare nel modulo EXE.

### <a name="remarks"></a>Osservazioni

Questa funzione statica calcola dinamicamente il numero massimo di thread per il modulo EXE, in base al numero di processori. Per impostazione predefinita, questo valore restituito viene passato al [init](#init) metodo per creare i thread.

## <a name="ccomautothreadmoduleinit"></a><a name="init"></a>CComAutoThreadModule::Init

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
HRESULT Init(
    _ATL_OBJMAP_ENTRY* p,
    HINSTANCE h,
    const GUID* plibid = NULL,
    int nThreads = GetDefaultThreads());
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore a una matrice di voci della mappa di oggetti.

*H*<br/>
[in] L'HINSTANCE `DLLMain` passato `WinMain`a o .

*plibid*<br/>
[in] Puntatore al LIBID della libreria dei tipi associata al progetto.

*nThreads (in base alle ani*<br/>
[in] Numero di thread da creare. Per impostazione predefinita, *nThreads* è il valore restituito da [GetDefaultThreads](#getdefaultthreads).

### <a name="remarks"></a>Osservazioni

Inizializza i membri dati e crea il numero di thread specificato da *nThreads*.

## <a name="ccomautothreadmodulelock"></a><a name="lock"></a>CComAutoThreadModule::Lock (Modulo) cComAutoThreadModule::Lock (Blocco)

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
LONG Lock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Osservazioni

Esegue un incremento atomico sul conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule`utilizza il conteggio dei blocchi del modulo per determinare se i client accedono al modulo. Il conteggio dei blocchi nel thread corrente viene utilizzato per scopi statistici.

## <a name="ccomautothreadmodulem_allocator"></a><a name="m_allocator"></a>CComAutoThreadModule::m_Allocator

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
ThreadAllocator  m_Allocator;
```

### <a name="remarks"></a>Osservazioni

Oggetto che gestisce la selezione dei filettatura. Per impostazione `ThreadAllocator` predefinita, il parametro del modello di classe è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).

## <a name="ccomautothreadmodulem_nthreads"></a><a name="m_nthreads"></a>CComAutoThreadModule::m_nThreads

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
int m_nThreads;
```

### <a name="remarks"></a>Osservazioni

Contiene il numero di thread nel modulo EXE. Quando [Init](#init) viene `m_nThreads` chiamato, viene impostato sul valore del parametro *nThreads.* Apartment associato di ogni thread è gestito da un [CComApartment](../../atl/reference/ccomapartment-class.md) oggetto.

## <a name="ccomautothreadmodulem_papartments"></a><a name="m_papartments"></a>CComAutoThreadModule::m_pApartments

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
CComApartment* m_pApartments;
```

### <a name="remarks"></a>Osservazioni

Punta a una matrice di [CComApartment](../../atl/reference/ccomapartment-class.md) oggetti, ognuno dei quali gestisce un apartment nel modulo. Il numero di elementi nella matrice è basato sul [membro m_nThreads.](#m_nthreads)

## <a name="ccomautothreadmoduleunlock"></a><a name="unlock"></a>CComAutoThreadModule::Sblocca

A partire da ATL `CComAutoThreadModule` 7.0, è obsoleto: vedere [Classi di moduli ATL](../../atl/atl-module-classes.md) per ulteriori dettagli.

```
LONG Unlock();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica o il test.

### <a name="remarks"></a>Osservazioni

Esegue un decremento atomico sul conteggio dei blocchi per il modulo e per il thread corrente. `CComAutoThreadModule`utilizza il conteggio dei blocchi del modulo per determinare se i client accedono al modulo. Il conteggio dei blocchi nel thread corrente viene utilizzato per scopi statistici.

Quando il conteggio dei blocchi del modulo raggiunge lo zero, il modulo può essere scaricato.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classi di modulo](../../atl/atl-module-classes.md)
