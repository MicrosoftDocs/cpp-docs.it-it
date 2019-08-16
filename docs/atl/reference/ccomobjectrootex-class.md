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
ms.openlocfilehash: 8fa4e7a035ded2e1a20dd278a5d54d40252e1958
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497041"
---
# <a name="ccomobjectrootex-class"></a>Classe CComObjectRootEx

Questa classe fornisce metodi per gestire la gestione del conteggio dei riferimenti agli oggetti per gli oggetti non aggregati e aggregati.

## <a name="syntax"></a>Sintassi

```
template<class ThreadModel>
class CComObjectRootEx : public CComObjectRootBase
```

#### <a name="parameters"></a>Parametri

*ThreadModel*<br/>
Classe i cui metodi implementano il modello di threading desiderato. È possibile scegliere in modo esplicito il modello di threading impostando *ThreadModel* su [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md), [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md)o [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md). È possibile accettare il modello di thread predefinito del server impostando *ThreadModel* su [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) o [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel).

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[CComObjectRootEx](#ccomobjectrootex)|Costruttore.|
|[InternalAddRef](#internaladdref)|Incrementa il conteggio dei riferimenti per un oggetto non aggregato.|
|[InternalRelease](#internalrelease)|Decrementa il conteggio dei riferimenti per un oggetto non aggregato.|
|[Blocco](#lock)|Se il modello di thread è multithreading, ottiene la proprietà di un oggetto sezione critica.|
|[Sbloccare](#unlock)|Se il modello di thread è multithreading, rilascia la proprietà di un oggetto sezione critica.|

### <a name="ccomobjectrootbase-methods"></a>Metodi CComObjectRootBase

|||
|-|-|
|[FinalConstruct](#finalconstruct)|Eseguire l'override della classe per eseguire l'inizializzazione richiesta dall'oggetto.|
|[FinalRelease](#finalrelease)|Eseguire l'override della classe per eseguire le operazioni di pulizia richieste dall'oggetto.|
|[OuterAddRef](#outeraddref)|Incrementa il conteggio dei riferimenti per un oggetto aggregato.|
|[OuterQueryInterface](#outerqueryinterface)|Delega all'esterno `IUnknown` di un oggetto aggregato.|
|[OuterRelease](#outerrelease)|Decrementa il conteggio dei riferimenti per un oggetto aggregato.|

### <a name="static-functions"></a>Funzioni statiche

|||
|-|-|
|[InternalQueryInterface](#internalqueryinterface)|Delega a `IUnknown` di un oggetto non aggregato.|
|[ObjectMain](#objectmain)|Chiamato durante l'inizializzazione e la terminazione del modulo per le classi derivate elencate nella mappa degli oggetti.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_dwRef](#m_dwref)|Con `m_pOuterUnknown`, parte di un'Unione. Utilizzato quando l'oggetto non è aggregato per conservare il conteggio dei riferimenti `AddRef` di `Release`e.|
|[m_pOuterUnknown](#m_pouterunknown)|Con `m_dwRef`, parte di un'Unione. Utilizzato quando l'oggetto viene aggregato per mantenere un puntatore all'oggetto sconosciuto esterno.|

## <a name="remarks"></a>Note

`CComObjectRootEx`gestisce la gestione dei conteggi dei riferimenti agli oggetti per gli oggetti non aggregati e aggregati. Include il conteggio dei riferimenti all'oggetto se l'oggetto non viene aggregato e il puntatore all'oggetto sconosciuto esterno se l'oggetto viene aggregato. Per gli oggetti aggregati `CComObjectRootEx` , è possibile usare i metodi per gestire l'errore dell'oggetto interno da costruire e proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o l'oggetto interno viene eliminato.

Una classe che implementa un server COM deve ereditare `CComObjectRootEx` da o [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md).

Se la definizione della classe specifica la macro [DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable) , ATL crea un'istanza `CComPolyObject<CYourClass>` di `IClassFactory::CreateInstance` quando viene chiamato il metodo. Durante la creazione, il valore dell'oggetto sconosciuto esterno viene controllato. Se è null, `IUnknown` viene implementato per un oggetto non aggregato. Se l'oggetto sconosciuto esterno non è null `IUnknown` , viene implementato per un oggetto aggregato.

Se la classe non specifica la macro DECLARE_POLY_AGGREGATABLE, ATL crea un'istanza di `CAggComObject<CYourClass>` per gli oggetti aggregati o un'istanza di `CComObject<CYourClass>` per gli oggetti non aggregati.

Il vantaggio dell'utilizzo `CComPolyObject` di è la possibilità di evitare `CComAggObject` che `CComObject` nel modulo sia e nel modulo di gestire i case aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Pertanto, nel modulo esiste una sola copia di vtable e una copia delle funzioni. Se la tabella vtable è di grandi dimensioni, è possibile ridurre notevolmente le dimensioni del modulo. Tuttavia, se il valore vtable è ridotto, `CComPolyObject` l'utilizzo di può comportare una dimensione del modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o non `CComAggObject` aggregato, così come sono e `CComObject`.

Se l'oggetto è aggregato, [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) viene implementato da `CComAggObject` o `CComPolyObject`. Queste classi `QueryInterface`delegano, `Release` `AddRef`e chiamano `CComObjectRootEx`a `OuterQueryInterface`, `OuterAddRef`, e`OuterRelease` per l'invio all'oggetto sconosciuto esterno. In genere, si `CComObjectRootEx::FinalConstruct` esegue l'override di nella classe per creare oggetti aggregati ed `CComObjectRootEx::FinalRelease` è necessario eseguire l'override di per liberare tutti gli oggetti aggregati.

Se l'oggetto non è aggregato, `IUnknown` viene implementato da `CComObject` o `CComPolyObject`. In questo caso, le chiamate `QueryInterface`a `AddRef`, e `Release` sono delegate a `InternalAddRef` `CComObjectRootEx` `InternalQueryInterface`, e `InternalRelease` per eseguire le operazioni effettive.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="ccomobjectrootex"></a>CComObjectRootEx:: CComObjectRootEx

Il costruttore inizializza il conteggio dei riferimenti a 0.

```
CComObjectRootEx();
```

##  <a name="finalconstruct"></a>CComObjectRootEx:: FinalConstruct

È possibile eseguire l'override di questo metodo nella classe derivata per eseguire le inizializzazioni necessarie per l'oggetto.

```
HRESULT FinalConstruct();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in esito positivo o uno dei valori HRESULT di errore standard.

### <a name="remarks"></a>Note

Per impostazione predefinita `CComObjectRootEx::FinalConstruct` , restituisce semplicemente S_OK.

I vantaggi dell'esecuzione dell'inizializzazione `FinalConstruct` in piuttosto che nel costruttore della classe sono i seguenti:

- Non è possibile restituire un codice di stato da un costruttore, ma è possibile restituire un valore HRESULT `FinalConstruct`per mezzo del valore restituito di. Quando si creano oggetti della classe usando il class factory standard fornito da ATL, questo valore restituito viene propagato al client COM, consentendo di fornire informazioni dettagliate sull'errore.

- Non è possibile chiamare funzioni virtuali tramite il meccanismo di funzione virtuale dal costruttore di una classe. La chiamata di una funzione virtuale dal costruttore di una classe comporta una chiamata risolta in modo statico alla funzione come definita in quel punto della gerarchia di ereditarietà. Le chiamate alle funzioni virtuali pure generano errori del linker.

   La classe non è la classe più derivata nella gerarchia di ereditarietà, ma si basa su una classe derivata fornita da ATL per fornire alcune delle funzionalità. È probabile che l'inizializzazione debba usare le funzionalità fornite da tale classe (ciò è certamente vero quando gli oggetti della classe devono aggregare altri oggetti), ma il costruttore nella classe non ha alcun modo per accedere a tali funzionalità. Il codice di costruzione per la classe viene eseguito prima che la classe più derivata venga costruita completamente.

   Tuttavia, `FinalConstruct` viene chiamato immediatamente dopo che la classe più derivata viene costruita completamente, consentendo di chiamare funzioni virtuali e di utilizzare l'implementazione di conteggio dei riferimenti fornita da ATL.

### <a name="example"></a>Esempio

In genere, eseguire l'override di questo metodo nella `CComObjectRootEx` classe derivata da per creare qualsiasi oggetto aggregato. Ad esempio:

[!code-cpp[NVC_ATL_COM#40](../../atl/codesnippet/cpp/ccomobjectrootex-class_1.h)]

Se la costruzione non riesce, è possibile che venga restituito un errore. È anche possibile usare la macro [DECLARE_PROTECT_FINAL_CONSTRUCT](aggregation-and-class-factory-macros.md#declare_protect_final_construct) per proteggere l'oggetto esterno da eliminare se, durante la creazione, l'oggetto aggregato interno incrementa il conteggio dei riferimenti, quindi decrementa il conteggio a 0.

Di seguito è riportato un modo tipico per creare un'aggregazione:

- Aggiungere un `IUnknown` puntatore all'oggetto della classe e inizializzarlo su null nel costruttore.

- Eseguire `FinalConstruct` l'override di per creare l'aggregazione.

- Usare il `IUnknown` puntatore definito come parametro per la macro [COM_INTERFACE_ENTRY_AGGREGATE](com-interface-entry-macros.md#com_interface_entry_aggregate) .

- Eseguire `FinalRelease` l'override per `IUnknown` rilasciare il puntatore.

##  <a name="finalrelease"></a>CComObjectRootEx:: FinalRelease

È possibile eseguire l'override di questo metodo nella classe derivata per eseguire qualsiasi operazione di pulizia necessaria per l'oggetto.

```
void FinalRelease();
```

### <a name="remarks"></a>Note

Per impostazione predefinita `CComObjectRootEx::FinalRelease` , non esegue alcuna operazione.

Per eseguire la `FinalRelease` pulizia in è preferibile aggiungere codice al distruttore della classe, poiché l'oggetto è ancora completamente costruito in corrispondenza del punto in `FinalRelease` cui viene chiamato. Ciò consente di accedere in modo sicuro ai metodi forniti dalla classe più derivata. Questa operazione è particolarmente importante per liberare qualsiasi oggetto aggregato prima dell'eliminazione.

##  <a name="internaladdref"></a>CComObjectRootEx:: InternalAddRef

Incrementa il conteggio dei riferimenti di un oggetto non aggregato di 1.

```
ULONG InternalAddRef();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

### <a name="remarks"></a>Note

Se il modello di thread è multithreading `InterlockedIncrement` , viene usato per impedire a più thread di modificare il conteggio dei riferimenti nello stesso momento.

##  <a name="internalqueryinterface"></a>  CComObjectRootEx::InternalQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
static HRESULT InternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*pThis*<br/>
in Puntatore all'oggetto che contiene la mappa COM delle interfacce esposte a `QueryInterface`.

*pEntries*<br/>
in Puntatore alla `_ATL_INTMAP_ENTRY` struttura che accede a una mappa delle interfacce disponibili.

*iid*<br/>
in GUID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia specificato in *IID*oppure null se l'interfaccia non viene trovata.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Note

`InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, `InternalQueryInterface` non delega al sconosciuto esterno. È possibile immettere interfacce nella tabella della mappa COM con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.

##  <a name="internalrelease"></a>CComObjectRootEx:: InternalRelease

Decrementa di 1 il conteggio dei riferimenti di un oggetto non aggregato.

```
ULONG InternalRelease();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug e di debug questa funzione restituisce un valore che può essere utile per la diagnostica o il test. Il valore esatto restituito dipende da molti fattori, ad esempio il sistema operativo utilizzato, e può, o non può, essere il conteggio dei riferimenti.

### <a name="remarks"></a>Note

Se il modello di thread è multithreading `InterlockedDecrement` , viene usato per impedire a più thread di modificare il conteggio dei riferimenti nello stesso momento.

##  <a name="lock"></a>CComObjectRootEx:: Lock

Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [EnterCriticalSection](/windows/win32/api/synchapi/nf-synchapi-entercriticalsection), che attende fino a quando il thread non può acquisire la proprietà dell'oggetto sezione critica ottenuto tramite un membro dati privato.

```
void Lock();
```

### <a name="remarks"></a>Note

Al termine dell'esecuzione del codice protetto, il thread deve chiamare `Unlock` per rilasciare la proprietà della sezione critica.

Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.

##  <a name="m_dwref"></a>CComObjectRootEx:: m_dwRef

Parte di un'Unione che accede a quattro byte di memoria.

```
long m_dwRef;
```

### <a name="remarks"></a>Note

Con `m_pOuterUnknown`, parte di un'Unione:

```
union {
    long m_dwRef;
    IUnknown* m_pOuterUnknown;
};
```

Se l'oggetto non è aggregato, il conteggio dei riferimenti a `AddRef` cui `Release` si accede da `m_dwRef`e viene archiviato in. Se l'oggetto è aggregato, il puntatore all'oggetto sconosciuto esterno viene archiviato in [m_pOuterUnknown](#m_pouterunknown).

##  <a name="m_pouterunknown"></a>CComObjectRootEx:: m_pOuterUnknown

Parte di un'Unione che accede a quattro byte di memoria.

```
IUnknown*
    m_pOuterUnknown;
```

### <a name="remarks"></a>Note

Con `m_dwRef`, parte di un'Unione:

```
union {
    long m_dwRef;
    IUnknown* m_pOuterUnknown;
};
```

Se l'oggetto è aggregato, il puntatore all'oggetto sconosciuto esterno viene archiviato in `m_pOuterUnknown`. Se l'oggetto non è aggregato, il conteggio dei riferimenti a `AddRef` cui `Release` si accede da e viene archiviato in [m_dwRef](#m_dwref).

##  <a name="objectmain"></a>CComObjectRootEx:: ObjectMain

Per ogni classe elencata nella mappa degli oggetti, questa funzione viene chiamata una volta quando il modulo viene inizializzato e di nuovo quando viene terminato.

```
static void WINAPI ObjectMain(bool bStarting);
```

### <a name="parameters"></a>Parametri

*bStarting*<br/>
out Il valore è TRUE se la classe è in fase di inizializzazione. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Il valore del parametro *bStarting* indica se il modulo è in fase di inizializzazione o di interruzione. L'implementazione predefinita di `ObjectMain` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione nella classe per inizializzare o eliminare le risorse che si desidera allocare per la classe. Si noti `ObjectMain` che viene chiamato prima che vengano richieste tutte le istanze della classe.

`ObjectMain`viene chiamato dal punto di ingresso della DLL, quindi il tipo di operazione che la funzione del punto di ingresso può eseguire è limitato. Per ulteriori informazioni su queste restrizioni, vedere [dll e comportamento C++ della libreria di runtime visivi](../../build/run-time-library-behavior.md) e [DllMain](/windows/win32/Dlls/dllmain).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#41](../../atl/codesnippet/cpp/ccomobjectrootex-class_2.h)]

##  <a name="outeraddref"></a>CComObjectRootEx:: OuterAddRef

Incrementa il conteggio dei riferimenti dell'oggetto sconosciuto esterno di un'aggregazione.

```
ULONG OuterAddRef();
```

### <a name="return-value"></a>Valore restituito

Valore che può essere utile per la diagnostica e il test.

##  <a name="outerqueryinterface"></a>  CComObjectRootEx::OuterQueryInterface

Recupera un puntatore indiretto all'interfaccia richiesta.

```
HRESULT OuterQueryInterface(REFIID iid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*iid*<br/>
in GUID dell'interfaccia richiesta.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia specificato in *IID*oppure null se l'aggregazione non supporta l'interfaccia.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="outerrelease"></a>CComObjectRootEx:: OuterRelease

Decrementa il conteggio dei riferimenti dell'oggetto sconosciuto esterno di un'aggregazione.

```
ULONG OuterRelease();
```

### <a name="return-value"></a>Valore restituito

Nelle compilazioni non di debug restituisce sempre 0. Nelle build di debug restituisce un valore che può essere utile per la diagnostica o il test.

##  <a name="unlock"></a>CComObjectRootEx:: Unlock

Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [LeaveCriticalSection](/windows/win32/api/synchapi/nf-synchapi-leavecriticalsection), che rilascia la proprietà dell'oggetto sezione critica ottenuto tramite un membro dati privato.

```
void Unlock();
```

### <a name="remarks"></a>Note

Per ottenere la proprietà, il thread deve `Lock`chiamare. Ogni chiamata a `Lock` richiede una chiamata corrispondente a `Unlock` per rilasciare la proprietà della sezione critica.

Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.

## <a name="see-also"></a>Vedere anche

[Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
