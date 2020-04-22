---
title: Classe CComObjectRootEx
ms.date: 11/04/2016
f1_keywords:
- CComObjectRootEx
- ATLCOM/ATL::CComObjectRootEx
- ATLCOM/ATL::InternalAddRef
- ATLCOM/ATL::InternalRelease
- ATLCOM/ATL::Lock
- ATLCOM/ATL::Unlock
- ATLCOM/ATL::FinalConstruct
- ATLCOM/ATL::FinalRelease
- ATLCOM/ATL::OuterAddRef
- ATLCOM/ATL::OuterQueryInterface
- ATLCOM/ATL::OuterRelease
- ATLCOM/ATL::InternalQueryInterface
- ATLCOM/ATL::ObjectMain
- ATLCOM/ATL::m_dwRef
- ATLCOM/ATL::m_pOuterUnknown
helpviewer_keywords:
- reference counting
ms.assetid: 894a3d7c-2daf-4fd0-8fa4-e6a05bcfb631
ms.openlocfilehash: 87e2d7dca81221f4fac2a5189ecb0effbdceddc2
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747910"
---
# <a name="ccomobjectrootex-class"></a>Classe CComObjectRootEx

Questa classe fornisce metodi per gestire la gestione del conteggio dei riferimenti agli oggetti sia per gli oggetti non aggregati che per gli oggetti aggregati.

## <a name="syntax"></a>Sintassi

```
template<class ThreadModel>
class CComObjectRootEx : public CComObjectRootBase
```

#### <a name="parameters"></a>Parametri

*Modello Thread*<br/>
Classe i cui metodi implementano il modello di threading desiderato. È possibile scegliere in modo esplicito il modello di threading impostando *ThreadModel* su [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md), [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md)o [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md). È possibile accettare il modello di thread predefinito del server impostando *ThreadModel* su [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) o [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel).

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Ccomobjectrootex](#ccomobjectrootex)|Costruttore.|
|[InternoAddRef](#internaladdref)|Incrementa il conteggio dei riferimenti per un oggetto non aggregato.|
|[InternalRelease](#internalrelease)|Decrementa il conteggio dei riferimenti per un oggetto non aggregato.|
|[Blocco](#lock)|Se il modello di thread è multithreading, ottiene la proprietà di un oggetto sezione critica.|
|[Sbloccare](#unlock)|Se il modello di thread è multithreading, rilascia la proprietà di un oggetto sezione critica.|

### <a name="ccomobjectrootbase-methods"></a>Metodi CComObjectRootBase

|||
|-|-|
|[Costruzione finale](#finalconstruct)|Eseguire l'override nella classe per eseguire qualsiasi inizializzazione richiesta dall'oggetto.|
|[Rilascio finale](#finalrelease)|Eseguire l'override nella classe per eseguire qualsiasi pulizia richiesta dall'oggetto.|
|[OuterAddRef (OuterAddRef)](#outeraddref)|Incrementa il conteggio dei riferimenti per un oggetto aggregato.|
|[Interfaccia Esterna](#outerqueryinterface)|Delega all'esterno `IUnknown` di un oggetto aggregato.|
|[OuterRelease](#outerrelease)|Decrementa il conteggio dei riferimenti per un oggetto aggregato.|

### <a name="static-functions"></a>Funzioni statiche

|||
|-|-|
|[Interfaccia InternaQuery](#internalqueryinterface)|Delega a `IUnknown` un oggetto non aggregato.|
|[Oggetto Main](#objectmain)|Chiamato durante l'inizializzazione del modulo e la terminazione per le classi derivate elencate nella mappa oggetti.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_dwRef](#m_dwref)|Con `m_pOuterUnknown`, parte di un sindacato. Utilizzato quando l'oggetto non è aggregato per contenere il conteggio dei riferimenti di `AddRef` e `Release`.|
|[m_pOuterUnknown](#m_pouterunknown)|Con `m_dwRef`, parte di un sindacato. Utilizzato quando l'oggetto viene aggregato per contenere un puntatore all'esterno sconosciuto.|

## <a name="remarks"></a>Osservazioni

`CComObjectRootEx`gestisce la gestione del conteggio dei riferimenti agli oggetti sia per gli oggetti non aggregati che per gli oggetti aggregati. Contiene il conteggio dei riferimenti all'oggetto se l'oggetto non viene aggregato e mantiene il puntatore a outer unknown se l'oggetto viene aggregato. Per gli oggetti `CComObjectRootEx` aggregati, i metodi possono essere utilizzati per gestire l'errore dell'oggetto interno da costruire e per proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate interfacce interne o l'oggetto interno viene eliminato.

Una classe che implementa un `CComObjectRootEx` server COM deve ereditare da o [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md).

Se la definizione della classe specifica la macro `CComPolyObject<CYourClass>` `IClassFactory::CreateInstance` [DECLARE_POLY_AGGREGATABLE,](aggregation-and-class-factory-macros.md#declare_poly_aggregatable) ATL crea un'istanza di quando viene chiamato. Durante la creazione, viene controllato il valore dell'ignoto esterno. Se è NULL, `IUnknown` viene implementato per un oggetto non aggregato. Se il valore sconosciuto `IUnknown` esterno non è NULL, viene implementato per un oggetto aggregato.

Se la classe non specifica la macro DECLARE_POLY_AGGREGATABLE, `CAggComObject<CYourClass>` ATL crea un'istanza di per gli oggetti aggregati o un'istanza di `CComObject<CYourClass>` per gli oggetti non aggregati.

Il vantaggio `CComPolyObject` di utilizzare è `CComAggObject` che `CComObject` si evita di avere entrambi e nel modulo per gestire i casi aggregati e non aggregati. Un `CComPolyObject` singolo oggetto gestisce entrambi i casi. Pertanto, nel modulo sono presenti una sola copia della tabella vtable e una copia delle funzioni. Se il vtable è di grandi dimensioni, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable `CComPolyObject` è piccola, l'utilizzo può comportare una dimensione del modulo leggermente `CComAggObject` più `CComObject`grande perché non è ottimizzata per un oggetto aggregato o non aggregato, come lo sono e .

Se l'oggetto è aggregato, `CComPolyObject` [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) viene implementato da o . `CComAggObject` Queste classi `QueryInterface` `AddRef`delegano `Release` , `CComObjectRootEx`e `OuterQueryInterface` `OuterAddRef`le `OuterRelease` chiamate a ' , e in avanti a quello sconosciuto esterno. In genere, `CComObjectRootEx::FinalConstruct` si esegue l'override nella classe `CComObjectRootEx::FinalRelease` per creare oggetti aggregati ed eseguire l'override per liberare tutti gli oggetti aggregati.

Se l'oggetto non `IUnknown` è aggregato, viene implementato da `CComObject` o `CComPolyObject`. In questo caso, `QueryInterface` `AddRef`le `Release` chiamate a `CComObjectRootEx`, `InternalQueryInterface`e `InternalAddRef`vengono `InternalRelease` delegate a ' , , ed eseguire le operazioni effettive.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomobjectrootexccomobjectrootex"></a><a name="ccomobjectrootex"></a>CComObjectRootEx::CComObjectRootEx

Il costruttore inizializza il conteggio dei riferimenti su 0.The constructor initializes the reference count to 0.

```
CComObjectRootEx();
```

## <a name="ccomobjectrootexfinalconstruct"></a><a name="finalconstruct"></a>CComObjectRootEx::FinalConstruct

È possibile eseguire l'override di questo metodo nella classe derivata per eseguire qualsiasi inizializzazione necessaria per l'oggetto.

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o uno dei valori HRESULT di errore standard.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `CComObjectRootEx::FinalConstruct` restituisce semplicemente S_OK.

Esistono vantaggi nell'esecuzione `FinalConstruct` dell'inizializzazione anziché nel costruttore della classe:There are advantages to performing initialization in rather than the constructor of your class:

- Non è possibile restituire un codice di stato da un `FinalConstruct`costruttore, ma è possibile restituire un HRESULT tramite il valore restituito di 's.You cannot return a status code from a constructor, but you can return an HRESULT by by means of 's return value. Quando gli oggetti della classe vengono creati utilizzando la class factory standard fornita da ATL, questo valore restituito viene propagato al client COM che consente di fornire informazioni dettagliate sull'errore.

- Non è possibile chiamare funzioni virtuali tramite il meccanismo di funzione virtuale dal costruttore di una classe. La chiamata di una funzione virtuale dal costruttore di una classe comporta una chiamata risolta staticamente alla funzione così come viene definita in quel punto nella gerarchia di ereditarietà. Le chiamate a funzioni virtuali pure generano errori del linker.

   La classe non è la classe più derivata nella gerarchia di ereditarietà, si basa su una classe derivata fornita da ATL per fornire alcune delle relative funzionalità. È probabile che l'inizializzazione sarà necessario utilizzare le funzionalità fornite da tale classe (questo è certamente vero quando gli oggetti della classe devono aggregare altri oggetti), ma il costruttore nella classe non è possibile accedere a tali funzionalità. Il codice di costruzione per la classe viene eseguito prima che la classe più derivata sia completamente costruita.

   Tuttavia, `FinalConstruct` viene chiamato immediatamente dopo che la classe più derivata è completamente costruita consentendo di chiamare funzioni virtuali e utilizzare l'implementazione di conteggio dei riferimenti fornita da ATL.

### <a name="example"></a>Esempio

In genere, eseguire l'override `CComObjectRootEx` di questo metodo nella classe derivata da per creare oggetti aggregati. Ad esempio:

[!code-cpp[NVC_ATL_COM#40](../../atl/codesnippet/cpp/ccomobjectrootex-class_1.h)]

Se la costruzione non riesce, è possibile restituire un errore. È inoltre possibile utilizzare la [macro DECLARE_PROTECT_FINAL_CONSTRUCT](aggregation-and-class-factory-macros.md#declare_protect_final_construct) per proteggere l'oggetto esterno dall'eliminazione se, durante la creazione, l'oggetto aggregato interno incrementa il conteggio dei riferimenti e quindi decrementa il conteggio a 0.

Ecco un modo tipico per creare un'aggregazione:Here is a typical way to create an aggregate:

- Aggiungere `IUnknown` un puntatore all'oggetto classe e inizializzarlo su NULL nel costruttore.

- Eseguire `FinalConstruct` l'override per creare l'aggregazione.

- Utilizzare `IUnknown` il puntatore definito come parametro per la macro [COM_INTERFACE_ENTRY_AGGREGATE.](com-interface-entry-macros.md#com_interface_entry_aggregate)

- Eseguire `FinalRelease` l'override per rilasciare il `IUnknown` puntatore.

## <a name="ccomobjectrootexfinalrelease"></a><a name="finalrelease"></a>CComObjectRootEx::FinalRelease

È possibile eseguire l'override di questo metodo nella classe derivata per eseguire qualsiasi pulizia necessaria per l'oggetto.

```cpp
void FinalRelease();
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `CComObjectRootEx::FinalRelease` non esegue alcuna operazione.

L'esecuzione `FinalRelease` della pulizia in è preferibile all'aggiunta di codice al distruttore della `FinalRelease` classe poiché l'oggetto è ancora completamente costruito nel punto in cui viene chiamato. In questo modo è possibile accedere in modo sicuro ai metodi forniti dalla classe più derivata. Ciò è particolarmente importante per liberare tutti gli oggetti aggregati prima dell'eliminazione.

## <a name="ccomobjectrootexinternaladdref"></a><a name="internaladdref"></a>CComObjectRootEx::InternalAddRef

Incrementa di 1 il conteggio dei riferimenti di un oggetto non aggregato.

```
ULONG InternalAddRef();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

### <a name="remarks"></a>Osservazioni

Se il modello di thread `InterlockedIncrement` è multithreading, viene utilizzato per impedire a più thread di modificare il conteggio dei riferimenti contemporaneamente.

## <a name="ccomobjectrootexinternalqueryinterface"></a><a name="internalqueryinterface"></a>CComObjectRootEx::InternalQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
static HRESULT InternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*pQuesto*<br/>
[in] Puntatore all'oggetto che contiene la mappa `QueryInterface`COM delle interfacce esposte a .

*pVoci*<br/>
[in] Puntatore alla `_ATL_INTMAP_ENTRY` struttura che accede a una mappa delle interfacce disponibili.

*Iid*<br/>
[in] GUID dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia specificato in *iid*o NULL se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

`InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è `InternalQueryInterface` aggregato, non delega all'esterno sconosciuto. È possibile immettere interfacce nella tabella mappa COM con la [macro COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.

## <a name="ccomobjectrootexinternalrelease"></a><a name="internalrelease"></a>CComObjectRootEx::InternalRelease

Decrementa il conteggio dei riferimenti di un oggetto non aggregato di 1.

```
ULONG InternalRelease();
```

### <a name="return-value"></a>Valore restituito

Nelle build di debug e non di debug, questa funzione restituisce un valore che può essere utile per la diagnostica o il test. Il valore esatto restituito dipende da molti fattori, ad esempio il sistema operativo utilizzato e può, o non può, essere il conteggio dei riferimenti.

### <a name="remarks"></a>Osservazioni

Se il modello di thread `InterlockedDecrement` è multithreading, viene utilizzato per impedire a più thread di modificare il conteggio dei riferimenti contemporaneamente.

## <a name="ccomobjectrootexlock"></a><a name="lock"></a>CComObjectRootEx::Lock (Blocco)

Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [EnterCriticalSection](/windows/win32/api/synchapi/nf-synchapi-entercriticalsection), che attende fino a quando il thread può assumere la proprietà dell'oggetto sezione critica ottenuto tramite un membro dati privato.

```cpp
void Lock();
```

### <a name="remarks"></a>Osservazioni

Al termine dell'esecuzione del codice protetto, `Unlock` il thread deve chiamare per rilasciare la proprietà della sezione critica.

Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.

## <a name="ccomobjectrootexm_dwref"></a><a name="m_dwref"></a>CComObjectRootEx::m_dwRef

Parte di un'unione che accede a quattro byte di memoria.

```
long m_dwRef;
```

### <a name="remarks"></a>Osservazioni

Con `m_pOuterUnknown`, parte di un sindacato:

```
union {
    long m_dwRef;
    IUnknown* m_pOuterUnknown;
};
```

Se l'oggetto non è aggregato, il conteggio dei riferimenti accede da `AddRef` e `Release` viene archiviato in `m_dwRef`. Se l'oggetto è aggregato, il puntatore a outer unknown viene archiviato in [m_pOuterUnknown](#m_pouterunknown).

## <a name="ccomobjectrootexm_pouterunknown"></a><a name="m_pouterunknown"></a>CComObjectRootEx::m_pOuterUnknown

Parte di un'unione che accede a quattro byte di memoria.

```
IUnknown*
    m_pOuterUnknown;
```

### <a name="remarks"></a>Osservazioni

Con `m_dwRef`, parte di un sindacato:

```
union {
    long m_dwRef;
    IUnknown* m_pOuterUnknown;
};
```

Se l'oggetto è aggregato, il `m_pOuterUnknown`puntatore a outer unknown viene archiviato in . Se l'oggetto non è aggregato, il conteggio dei riferimenti accede da `AddRef` e `Release` viene archiviato in [m_dwRef](#m_dwref).

## <a name="ccomobjectrootexobjectmain"></a><a name="objectmain"></a>CComObjectRootEx::ObjectMain

Per ogni classe elencata nella mappa degli oggetti, questa funzione viene chiamata una volta quando il modulo viene inizializzato e nuovamente quando viene terminato.

```
static void WINAPI ObjectMain(bool bStarting);
```

### <a name="parameters"></a>Parametri

*bInizio*<br/>
[fuori] Il valore è TRUE se la classe è in fase di inizializzazione; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il valore del *bStarting* parametro indica se il modulo è in fase di inizializzazione o termina. L'implementazione `ObjectMain` predefinita di non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione nella classe per inizializzare o pulire le risorse che si desidera allocare per la classe. Si `ObjectMain` noti che viene chiamato prima di qualsiasi istanza della classe vengono richiesti.

`ObjectMain`viene chiamato dal punto di ingresso della DLL, pertanto il tipo di operazione che la funzione di punto di ingresso può eseguire è limitato. Per ulteriori informazioni su queste restrizioni, vedere [le DLL e il](../../build/run-time-library-behavior.md) comportamento [DllMain](/windows/win32/Dlls/dllmain)della libreria di runtime di Visual C

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#41](../../atl/codesnippet/cpp/ccomobjectrootex-class_2.h)]

## <a name="ccomobjectrootexouteraddref"></a><a name="outeraddref"></a>CComObjectRootEx::OuterAddRef (informazioni in base alla proprietà

Incrementa il conteggio dei riferimenti del sconosciuto esterno di un'aggregazione.

```
ULONG OuterAddRef();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

## <a name="ccomobjectrootexouterqueryinterface"></a><a name="outerqueryinterface"></a>CComObjectRootEx::OuterQueryInterface

Recupera un puntatore indiretto all'interfaccia richiesta.

```
HRESULT OuterQueryInterface(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
[in] GUID dell'interfaccia richiesta.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia specificato in *iid*o NULL se l'aggregazione non supporta l'interfaccia.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomobjectrootexouterrelease"></a><a name="outerrelease"></a>CComObjectRootEx::OuterRelease

Decrementa il conteggio dei riferimenti dell'ignoto esterno di un'aggregazione.

```
ULONG OuterRelease();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug, restituisce sempre 0.In non-debug builds, always returns 0. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

## <a name="ccomobjectrootexunlock"></a><a name="unlock"></a>CComObjectRootEx::Sblocca

Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [LeaveCriticalSection](/windows/win32/api/synchapi/nf-synchapi-leavecriticalsection), che rilascia la proprietà dell'oggetto sezione critica ottenuto tramite un membro dati privato.

```cpp
void Unlock();
```

### <a name="remarks"></a>Osservazioni

Per ottenere la proprietà, `Lock`il thread deve chiamare . Ogni chiamata `Lock` a richiede `Unlock` una chiamata corrispondente a rilasciare la proprietà della sezione critica.

Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.

## <a name="see-also"></a>Vedere anche

[CComAggObject (classe)](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
