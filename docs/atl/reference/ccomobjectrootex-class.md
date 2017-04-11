---
title: Classe CComObjectRootEx | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComObjectRootEx
- ATLCOM/ATL::CComObjectRootEx
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
dev_langs:
- C++
helpviewer_keywords:
- reference counting
ms.assetid: 894a3d7c-2daf-4fd0-8fa4-e6a05bcfb631
caps.latest.revision: 20
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
translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: ff699c5d4620de01bd1f2ed1e3b87a4d77aa8396
ms.lasthandoff: 03/31/2017

---
# <a name="ccomobjectrootex-class"></a>Classe CComObjectRootEx
Questa classe fornisce metodi per la gestione di gestione per gli oggetti aggregate e non aggregati conteggio riferimenti dell'oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class ThreadModel>  
class CComObjectRootEx : public CComObjectRootBase
```  
  
#### <a name="parameters"></a>Parametri  
 `ThreadModel`  
 La classe i cui metodi implementano il modello di threading desiderato. È possibile scegliere in modo esplicito il modello di threading impostando `ThreadModel` a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md), [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), o [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md). È possibile accettare un modello di thread predefinito del server impostando `ThreadModel` a [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) o [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel).  

  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CComObjectRootEx](#ccomobjectrootex)|Costruttore.|  
|[InternalAddRef](#internaladdref)|Incrementa il conteggio dei riferimenti per un oggetto non aggregato.|  
|[InternalRelease](#internalrelease)|Decrementa il conteggio dei riferimenti per un oggetto non aggregato.|  
|[Blocco](#lock)|Se il modello di thread è multithreading, ottiene la proprietà di un oggetto sezione critica.|  
|[Lo sblocco](#unlock)|Se il modello di thread è multithreading, rilascia la proprietà di un oggetto sezione critica.|  
  
### <a name="ccomobjectrootbase-methods"></a>Metodi CComObjectRootBase  
  
|||  
|-|-|  
|[FinalConstruct](#finalconstruct)|Eseguire l'override nella classe per eseguire qualsiasi inizializzazione necessari per l'oggetto.|  
|[FinalRelease](#finalrelease)|Eseguire l'override nella classe per eseguire le operazioni di pulitura necessari per l'oggetto.|  
|[OuterAddRef](#outeraddref)|Incrementa il conteggio dei riferimenti per un oggetto aggregato.|  
|[OuterQueryInterface](#outerqueryinterface)|Delegati esterna **IUnknown** di un oggetto aggregato.|  
|[OuterRelease](#outerrelease)|Decrementa il conteggio dei riferimenti per un oggetto aggregato.|  
  
### <a name="static-functions"></a>Funzioni statiche  
  
|||  
|-|-|  
|[InternalQueryInterface](#internalqueryinterface)|Delega al **IUnknown** di un oggetto non aggregato.|  
|[ObjectMain](#objectmain)|Chiamato durante l'inizializzazione del modulo e la chiusura per le classi derivate elencato nella mappa oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_dwRef](#m_dwref)|Con `m_pOuterUnknown`, ma fa parte di un'unione. Utilizzato quando l'oggetto non è aggregato per contenere il conteggio dei riferimenti `AddRef` e **versione**.|  
|[m_pOuterUnknown](#m_pouterunknown)|Con `m_dwRef`, ma fa parte di un'unione. Utilizzato quando l'oggetto è aggregato per contenere un puntatore a unknown esterno.|  
  
## <a name="remarks"></a>Note  
 `CComObjectRootEx`gestione oggetto riferimento conteggio per gli oggetti aggregati e non aggregati. Se l'oggetto non viene aggregato e posiziona il puntatore per l'outer unknown se l'oggetto da aggregare contiene il numero di riferimento di oggetto. Per gli oggetti aggregati, `CComObjectRootEx` metodi possono essere utilizzati per gestire l'errore dell'oggetto interno per costruire e per proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o l'oggetto interno viene eliminato.  
  
 È necessario ereditare una classe che implementa un server COM `CComObjectRootEx` o [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md).  
  
 Se la definizione di classe specifica di [DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable) macro ATL crea un'istanza di **CComPolyObject\<CClasse >** quando **IClassFactory::CreateInstance** viene chiamato. Durante la creazione, viene controllato il valore unknown esterno. Se è **NULL**, **IUnknown** è implementata per un oggetto non aggregato. Se non è unknown esterno **NULL**, **IUnknown** è implementata per un oggetto aggregato.  
  
 Se la classe non è specificato il `DECLARE_POLY_AGGREGATABLE` macro ATL crea un'istanza di **CAggComObject\<CClasse >** per gli oggetti aggregati o un'istanza di **CComObject\<CClasse >** per gli oggetti non aggregati.  
  
 Il vantaggio dell'utilizzo `CComPolyObject` è che si evita che entrambi `CComAggObject` e `CComObject` nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Pertanto, solo una copia dell'oggetto vtable e una copia delle funzioni presenti in un modulo. Se la vtable è elevata, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, utilizzando `CComPolyObject` possono provocare una dimensione di modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o aggregato, come `CComAggObject` e `CComObject`.  
  
 Se l'oggetto è aggregato, [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) viene implementata da `CComAggObject` o `CComPolyObject`. Queste classi delegate `QueryInterface`, `AddRef`, e **versione** le chiamate a `CComObjectRootEx`del `OuterQueryInterface`, `OuterAddRef`, e `OuterRelease` per inoltrare a unknown esterno. In genere, si esegue l'override `CComObjectRootEx::FinalConstruct` nella classe per creare oggetti aggregati ed eseguire l'override `CComObjectRootEx::FinalRelease` per liberare qualsiasi aggregati gli oggetti.  
  
 Se l'oggetto non è aggregato, **IUnknown** viene implementata da `CComObject` o `CComPolyObject`. In questo caso, le chiamate a `QueryInterface`, `AddRef`, e **versione** sono delegate a `CComObjectRootEx`del `InternalQueryInterface`, `InternalAddRef`, e `InternalRelease` per eseguire le operazioni effettive.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="ccomobjectrootex"></a>CComObjectRootEx::CComObjectRootEx  
 Il costruttore inizializza il conteggio dei riferimenti a 0.  
  
```
CComObjectRootEx();
```  
  
##  <a name="finalconstruct"></a>CComObjectRootEx::FinalConstruct  
 È possibile eseguire l'override di questo metodo nella classe derivata per eseguire qualsiasi inizializzazione richiesta per l'oggetto.  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituire `S_OK` nel caso di esito positivo o a un'origine dell'errore standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CComObjectRootEx::FinalConstruct` restituisce semplicemente `S_OK`.  
  
 Esistono vantaggi per l'esecuzione dell'inizializzazione in `FinalConstruct` anziché il costruttore della classe:  
  
-   Non è possibile restituire un codice di stato da un costruttore, ma è possibile restituire un `HRESULT` per mezzo di `FinalConstruct`del valore restituito. Quando vengono creati gli oggetti della classe utilizzando la factory di classe standard fornita da ATL, questo valore restituito viene propagato al client COM che consente di fornire informazioni dettagliate sull'errore.  
  
-   È possibile chiamare funzioni virtuali tramite il meccanismo di funzione virtuale dal costruttore di una classe. La chiamata a una funzione virtuale dal costruttore di una classe determina una chiamata alla funzione risolta in modo statico come definito in quel punto nella gerarchia di ereditarietà. Chiamate a funzioni virtuali pure producono errori del linker.  
  
     La classe non è la classe più derivata nella gerarchia di ereditarietà, si basa su una classe derivata, fornita da ATL per fornire alcune delle proprie funzionalità. È probabile che l'inizializzazione, sarà necessario utilizzare le funzionalità fornite da tale classe (Ciò vale anche quando gli oggetti della classe necessaria aggregare gli altri oggetti), ma il costruttore della classe non è in grado di accedere a tali funzionalità. Il codice di costruzione per la classe viene eseguito prima che la classe più derivata è completamente costruita.  
  
     Tuttavia, `FinalConstruct` viene chiamato immediatamente dopo più derivato classe è completamente costruita che consente di chiamare le funzioni virtuali e usare l'implementazione di conteggio dei riferimenti fornita da ATL.  
  
### <a name="example"></a>Esempio  
 In genere, eseguire l'override di questo metodo nella classe derivata da `CComObjectRootEx` per creare qualsiasi aggregati gli oggetti. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM &#40;](../../atl/codesnippet/cpp/ccomobjectrootex-class_1.h)]  
  
 Se la costruzione non riesce, è possibile restituire un errore. È inoltre possibile utilizzare la macro [macro DECLARE_PROTECT_FINAL_CONSTRUCT](aggregation-and-class-factory-macros.md#declare_protect_final_construct) per proteggere l'oggetto esterno vengano eliminati se, durante la creazione, l'oggetto aggregato interno incrementa il conteggio dei riferimenti quindi decrementa il conteggio su 0.  
  
 Di seguito è riportato un tipico per creare un'aggregazione:  
  
-   Aggiungere un **IUnknown** puntatore alla classe dell'oggetto e inizializzarlo per **NULL** nel costruttore.  
  
-   Eseguire l'override `FinalConstruct` per creare la funzione di aggregazione.  
  
-   Utilizzare la **IUnknown** puntatore è definito come parametro per il [COM_INTERFACE_ENTRY_AGGREGATE](com-interface-entry-macros.md#com_interface_entry_aggregate) (macro).  
  
-   Eseguire l'override `FinalRelease` per rilasciare il **IUnknown** puntatore.  
  
##  <a name="finalrelease"></a>CComObjectRootEx::FinalRelease  
 È possibile eseguire l'override di questo metodo nella classe derivata per eseguire le operazioni di pulitura necessarie per l'oggetto.  
  
```
void FinalRelease();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CComObjectRootEx::FinalRelease` non esegue alcuna operazione.  
  
 Eseguire la pulizia nella `FinalRelease` è preferibile l'aggiunta di codice per il distruttore della classe poiché l'oggetto è ancora completamente costruito in corrispondenza del punto in cui `FinalRelease` viene chiamato. In questo modo è possibile accedere in modo sicuro i metodi forniti dalla classe più derivata. Ciò è particolarmente importante per liberare oggetti aggregati prima dell'eliminazione.  
  
##  <a name="internaladdref"></a>CComObjectRootEx::InternalAddRef  
 Incrementa il conteggio dei riferimenti di un oggetto non aggregato di 1.  
  
```
ULONG InternalAddRef();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e di testing.  
  
### <a name="remarks"></a>Note  
 Se il modello di thread è multithreading, **InterlockedIncrement** viene utilizzata per impedire a più di un thread di modificare il conteggio dei riferimenti allo stesso tempo.  
  
##  <a name="internalqueryinterface"></a>CComObjectRootEx:: InternalQueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
static HRESULT InternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pThis`  
 [in] Un puntatore all'oggetto che contiene la mappa COM di interfacce esposte a `QueryInterface`.  
  
 `pEntries`  
 [in] Un puntatore al **_ATL_INTMAP_ENTRY** struttura che accede a una mappa delle interfacce disponibili.  
  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `ppvObject`  
 [out] Un puntatore a puntatore a interfaccia specificato `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 `InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, `InternalQueryInterface` non delegare unknown esterno. È possibile immettere le interfacce nella tabella di mappe COM con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.  
  
##  <a name="internalrelease"></a>CComObjectRootEx::InternalRelease  
 Decrementa il conteggio dei riferimenti di un oggetto non aggregato di 1.  
  
```
ULONG InternalRelease();
```  
  
### <a name="return-value"></a>Valore restituito  
 In entrambi non di debug e le compilazioni di debug, questa funzione restituisce un valore che può essere utile per la diagnostica o di test. Ha restituito il valore esatto dipende da molti fattori, ad esempio il sistema operativo utilizzato e possono essere o non può essere il conteggio dei riferimenti.  
  
### <a name="remarks"></a>Note  
 Se il modello di thread è multithreading, **InterlockedDecrement** viene utilizzata per impedire a più di un thread di modificare il conteggio dei riferimenti allo stesso tempo.  
  
##  <a name="lock"></a>CComObjectRootEx::Lock  
 Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [EnterCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682608), che attende fino a quando il thread può diventare proprietario dell'oggetto sezione critica ottenuta tramite un membro dati privato.  
  
```
void Lock();
```  
  
### <a name="remarks"></a>Note  
 Quando il codice protetto completa l'esecuzione, il thread è necessario chiamare `Unlock` per rilasciare la proprietà della sezione critica.  
  
 Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.  
  
##  <a name="m_dwref"></a>CComObjectRootEx::m_dwRef  
 Parte di un'unione che accede a quattro byte di memoria.  
  
```
long m_dwRef;
```  
  
### <a name="remarks"></a>Note  
 Con `m_pOuterUnknown`, ma fa parte di un'unione:  
  
 `union`  
  
 `{`  
  
 `long m_dwRef;`  
  
 `IUnknown* m_pOuterUnknown;`  
  
 `};`  
  
 Se l'oggetto non è aggregato, il conteggio dei riferimenti accede `AddRef` e **versione** viene archiviato in `m_dwRef`. Se l'oggetto è aggregato, il puntatore a unknown esterno viene archiviato [m_pOuterUnknown](#m_pouterunknown).  
  
##  <a name="m_pouterunknown"></a>CComObjectRootEx::m_pOuterUnknown  
 Parte di un'unione che accede a quattro byte di memoria.  
  
```
IUnknown*
    m_pOuterUnknown;
```     
  
### <a name="remarks"></a>Note  
 Con `m_dwRef`, ma fa parte di un'unione:  
  
 `union`  
  
 `{`  
  
 `long m_dwRef;`  
  
 `IUnknown* m_pOuterUnknown;`  
  
 `};`  
  
 Se l'oggetto è aggregato, il puntatore a unknown esterno viene archiviato `m_pOuterUnknown`. Se l'oggetto non è aggregato, il conteggio dei riferimenti accede `AddRef` e **versione** viene archiviato in [m_dwRef](#m_dwref).  
  
##  <a name="objectmain"></a>CComObjectRootEx::ObjectMain  
 Per ogni classe nella [mappa oggetto](http://msdn.microsoft.com/en-us/b57619cc-534f-4b8f-bfd4-0c12f937202f), questa funzione viene chiamata una volta quando viene inizializzato il modulo, e nuovamente quando viene terminata.  
  
```
static void WINAPI ObjectMain(bool bStarting);
```  
  
### <a name="parameters"></a>Parametri  
 `bStarting`  
 [out] Il valore è **true** se la classe viene inizializzato; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Il valore di `bStarting` parametro indica se il modulo viene inizializzato o terminata. L'implementazione predefinita di `ObjectMain` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione nella classe per inizializzare o pulire le risorse che si desidera allocare per la classe. Si noti che `ObjectMain` viene chiamato prima che tutte le istanze della classe vengono richiesti.  
  
 `ObjectMain`viene chiamato dal punto di ingresso della DLL, pertanto il tipo di operazione che può eseguire la funzione di punto di ingresso è limitato. Per ulteriori informazioni su queste restrizioni, vedere [funzionamento della libreria Run-Time](../../build/run-time-library-behavior.md) e [DllMain](http://msdn.microsoft.com/library/windows/desktop/ms682583).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM #41](../../atl/codesnippet/cpp/ccomobjectrootex-class_2.h)]  
  
##  <a name="outeraddref"></a>CComObjectRootEx::OuterAddRef  
 Incrementa il conteggio dei riferimenti di unknown esterno di un'aggregazione.  
  
```
ULONG OuterAddRef();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e di testing.  
  
##  <a name="outerqueryinterface"></a>CComObjectRootEx::OuterQueryInterface  
 Recupera un puntatore indiretto all'interfaccia richiesta.  
  
```
HRESULT OuterQueryInterface(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `ppvObject`  
 [out] Un puntatore a puntatore a interfaccia specificato `iid`, o **NULL** se l'aggregazione non supporta l'interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
##  <a name="outerrelease"></a>CComObjectRootEx::OuterRelease  
 Decrementa il conteggio dei riferimenti unknown esterno di un'aggregazione.  
  
```
ULONG OuterRelease();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle compilazioni non di debug, restituisce sempre 0. Nelle build di debug, restituisce un valore che può essere utile per la diagnostica o di testing.  
  
##  <a name="unlock"></a>CComObjectRootEx::Unlock  
 Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [LeaveCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms684169), quali versioni di proprietà dell'oggetto sezione critica ottenuta tramite un membro dati privato.  
  
```
void Unlock();
```  
  
### <a name="remarks"></a>Note  
 Per ottenere la proprietà, è necessario chiamare il thread `Lock`. Ogni chiamata a `Lock` richiede una chiamata corrispondente a `Unlock` per rilasciare la proprietà della sezione critica.  
  
 Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComObject (classe)](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

