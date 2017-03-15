---
title: Classe CComObjectRootEx | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CComObjectRootEx
- ATL::CComObjectRootEx<ThreadModel>
- CComObjectRootEx
- ATL::CComObjectRootEx
- ATL.CComObjectRootEx<ThreadModel>
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: f3a6d26ddb4f612824f959ca3046531dc3bbf2a9
ms.lasthandoff: 02/24/2017

---
# <a name="ccomobjectrootex-class"></a>CComObjectRootEx (classe)
Questa classe fornisce metodi per la gestione di gestione di conteggio di riferimento oggetto per gli oggetti aggregati e non aggregati.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class ThreadModel>  
class CComObjectRootEx : public CComObjectRootBase
```  
  
#### <a name="parameters"></a>Parametri  
 `ThreadModel`  
 La classe i cui metodi implementano il modello di threading desiderato. È possibile scegliere il modello di threading in modo esplicito mediante l'impostazione `ThreadModel` a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md), [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), o [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md). È possibile accettare modello thread predefinito del server mediante l'impostazione `ThreadModel` a [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) o [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel).  

  
## <a name="members"></a>Membri  
  
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
|[FinalConstruct](#finalconstruct)|Eseguire l'override nella classe per eseguire qualsiasi inizializzazione necessari per l'oggetto.|  
|[FinalRelease](#finalrelease)|Eseguire l'override nella classe per eseguire le operazioni di pulitura necessarie per l'oggetto.|  
|[OuterAddRef](#outeraddref)|Incrementa il conteggio dei riferimenti per un oggetto aggregato.|  
|[OuterQueryInterface](#outerqueryinterface)|Delegati esterna **IUnknown** di un oggetto aggregato.|  
|[OuterRelease](#outerrelease)|Decrementa il conteggio dei riferimenti per un oggetto aggregato.|  
  
### <a name="static-functions"></a>Funzioni statiche  
  
|||  
|-|-|  
|[InternalQueryInterface](#internalqueryinterface)|Delega la **IUnknown** di un oggetto non aggregato.|  
|[ObjectMain](#objectmain)|Chiamato durante l'inizializzazione del modulo e la chiusura per le classi derivate elencati nella mappa oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_dwRef](#m_dwref)|Con `m_pOuterUnknown`, parte di un'unione. Utilizzato quando l'oggetto non è aggregato per contenere il conteggio dei riferimenti `AddRef` e **versione**.|  
|[m_pOuterUnknown](#m_pouterunknown)|Con `m_dwRef`, parte di un'unione. Utilizzato quando l'oggetto è aggregato per contenere un puntatore a unknown esterno.|  
  
## <a name="remarks"></a>Note  
 `CComObjectRootEx`gestione oggetto riferimento conteggio per gli oggetti aggregati e non aggregati. Contiene il conteggio dei riferimenti oggetto se l'oggetto non aggregato e posiziona il puntatore per l'outer unknown se l'oggetto aggregato. Per gli oggetti aggregati, `CComObjectRootEx` metodi possono essere utilizzati per gestire gli errori dell'oggetto interno per costruire e per proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o oggetto interno sia stato eliminato.  
  
 Una classe che implementa un server COM deve ereditare da `CComObjectRootEx` o [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md).  
  
 Se la definizione di classe specifica di [DECLARE_POLY_AGGREGATABLE](http://msdn.microsoft.com/library/7569e738-cfbc-4404-ba1d-78dcefa3bdb3) (macro), ATL crea un'istanza di **CComPolyObject\<CClasse >** quando **IClassFactory::CreateInstance** viene chiamato. Durante la creazione, il valore unknown esterno sia selezionato. In questo caso **NULL**, **IUnknown** è implementata per un oggetto non aggregato. Se non è unknown esterno **NULL**, **IUnknown** è implementata per un oggetto aggregato.  
  
 Se la classe non è specificato il `DECLARE_POLY_AGGREGATABLE` (macro), ATL crea un'istanza di **CAggComObject\<CClasse >** per gli oggetti aggregati o un'istanza di **CComObject\<CClasse >** per gli oggetti non aggregati.  
  
 Il vantaggio dell'utilizzo `CComPolyObject` è evitare di avere entrambi `CComAggObject` e `CComObject` nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Pertanto, solo una copia dell'oggetto vtable e una copia delle funzioni presenti nel modulo. Se la vtable è grande, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, utilizzando `CComPolyObject` può comportare una dimensione modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o non aggregato, essendo `CComAggObject` e `CComObject`.  
  
 Se l'oggetto è aggregato, [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) viene implementata da `CComAggObject` o `CComPolyObject`. Queste classi delegare `QueryInterface`, `AddRef`, e **versione** le chiamate a `CComObjectRootEx`del `OuterQueryInterface`, `OuterAddRef`, e `OuterRelease` per inoltrare a unknown esterno. In genere, si esegue l'override `CComObjectRootEx::FinalConstruct` nella classe per creare oggetti aggregati ed eseguire l'override `CComObjectRootEx::FinalRelease` per liberare qualsiasi aggregati gli oggetti.  
  
 Se l'oggetto non è aggregato, **IUnknown** viene implementata da `CComObject` o `CComPolyObject`. In questo caso, le chiamate a `QueryInterface`, `AddRef`, e **versione** vengono delegate `CComObjectRootEx`del `InternalQueryInterface`, `InternalAddRef`, e `InternalRelease` per eseguire le operazioni effettive.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-nameccomobjectrootexa--ccomobjectrootexccomobjectrootex"></a><a name="ccomobjectrootex"></a>CComObjectRootEx::CComObjectRootEx  
 Il costruttore inizializza il conteggio dei riferimenti a 0.  
  
```
CComObjectRootEx();
```  
  
##  <a name="a-namefinalconstructa--ccomobjectrootexfinalconstruct"></a><a name="finalconstruct"></a>CComObjectRootEx::FinalConstruct  
 È possibile eseguire l'override di questo metodo nella classe derivata di eseguire qualsiasi inizializzazione necessari per l'oggetto.  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituire `S_OK` esito positivo o un errore standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CComObjectRootEx::FinalConstruct` restituisce semplicemente `S_OK`.  
  
 Esistono vantaggi per l'esecuzione dell'inizializzazione in `FinalConstruct` anziché il costruttore della classe:  
  
-   Non è possibile restituire un codice di stato da un costruttore, ma è possibile restituire un `HRESULT` di `FinalConstruct`del valore restituito. Quando vengono creati oggetti della classe tramite la factory di classe standard fornita da ATL, questo valore restituito viene propagato al client COM che consente di fornire informazioni dettagliate sull'errore.  
  
-   È possibile chiamare funzioni virtuali tramite il meccanismo di funzione virtuale dal costruttore di una classe. Chiamare una funzione virtuale dal costruttore di una classe comporta una chiamata alla funzione risolta staticamente come definito in quel punto nella gerarchia di ereditarietà. Le chiamate alle funzioni virtuali pure determinare gli errori del linker.  
  
     La classe non è la classe più derivata nella gerarchia di ereditarietà, si basa su una classe derivata, fornita da ATL per fornire alcune delle proprie funzionalità. È probabile che l'inizializzazione sarà necessario utilizzare le funzionalità fornite da tale classe (questo è certamente vero quando gli oggetti della classe devono aggregare gli altri oggetti), ma il costruttore nella classe non è in grado di accedere a tali funzionalità. Il codice di costruzione per la classe viene eseguito prima che la classe più derivata è completamente costruita.  
  
     Tuttavia, `FinalConstruct` viene chiamato immediatamente dopo il maggiormente derivato viene completamente costruita la classe che consente di chiamare le funzioni virtuali e usare l'implementazione di conteggio dei riferimenti fornito da ATL.  
  
### <a name="example"></a>Esempio  
 In genere, l'override del metodo nella classe derivata da `CComObjectRootEx` per creare qualsiasi aggregati gli oggetti. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM N.&40;](../../atl/codesnippet/cpp/ccomobjectrootex-class_1.h)]  
  
 Se la costruzione non riesce, è possibile restituire un errore. È inoltre possibile utilizzare la macro [macro DECLARE_PROTECT_FINAL_CONSTRUCT](http://msdn.microsoft.com/library/2d2e5ddc-057a-43ca-87c8-d3477a8193a0) per proteggere l'oggetto esterno vengano eliminati se, durante la creazione, l'oggetto interno aggregato incrementa il conteggio dei riferimenti quindi decrementa il conteggio su 0.  
  
 Ecco un modo tipico per creare una funzione di aggregazione:  
  
-   Aggiungere un **IUnknown** puntatore alla classe dell'oggetto e inizializzarlo su **NULL** nel costruttore.  
  
-   Eseguire l'override `FinalConstruct` per creare la funzione di aggregazione.  
  
-   Utilizzare il **IUnknown** puntatore è definito come parametro per il [COM_INTERFACE_ENTRY_AGGREGATE](http://msdn.microsoft.com/library/c671fa40-a57b-4797-ae88-c9762dabd4dc) (macro).  
  
-   Eseguire l'override `FinalRelease` per rilasciare il **IUnknown** puntatore.  
  
##  <a name="a-namefinalreleasea--ccomobjectrootexfinalrelease"></a><a name="finalrelease"></a>CComObjectRootEx::FinalRelease  
 È possibile eseguire l'override di questo metodo nella classe derivata per eseguire le operazioni di pulitura necessarie per l'oggetto.  
  
```
void FinalRelease();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CComObjectRootEx::FinalRelease` non esegue alcuna operazione.  
  
 Eseguire la pulizia in `FinalRelease` è preferibile aggiungere codice al distruttore della classe poiché l'oggetto è ancora completamente costruito nel punto in cui `FinalRelease` viene chiamato. In questo modo è possibile accedere in modo sicuro i metodi forniti dalla classe più derivata. Ciò è particolarmente importante per liberare qualsiasi oggetto aggregato prima dell'eliminazione.  
  
##  <a name="a-nameinternaladdrefa--ccomobjectrootexinternaladdref"></a><a name="internaladdref"></a>CComObjectRootEx::InternalAddRef  
 Incrementa il conteggio dei riferimenti di un oggetto non aggregato di 1.  
  
```
ULONG InternalAddRef();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e test.  
  
### <a name="remarks"></a>Note  
 Se il modello di thread è multithreading, **InterlockedIncrement** viene utilizzato per impedire a più di un thread di modificare il conteggio dei riferimenti allo stesso tempo.  
  
##  <a name="a-nameinternalqueryinterfacea--ccomobjectrootexinternalqueryinterface"></a><a name="internalqueryinterface"></a>CComObjectRootEx:: InternalQueryInterface  
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
 [in] Un puntatore all'oggetto che contiene la mappa COM interfacce esposte a `QueryInterface`.  
  
 `pEntries`  
 [in] Un puntatore per il **_ATL_INTMAP_ENTRY** struttura che accede a una mappa delle interfacce disponibili.  
  
 `iid`  
 [in] GUID dell'interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore a puntatore a interfaccia specificato `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
### <a name="remarks"></a>Note  
 `InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, `InternalQueryInterface` non delegato per l'outer unknown. È possibile immettere le interfacce nella tabella di mappe COM con la macro [COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) o una delle relative varianti.  
  
##  <a name="a-nameinternalreleasea--ccomobjectrootexinternalrelease"></a><a name="internalrelease"></a>CComObjectRootEx::InternalRelease  
 Decrementa il conteggio riferimenti di un oggetto non aggregato di 1.  
  
```
ULONG InternalRelease();
```  
  
### <a name="return-value"></a>Valore restituito  
 In entrambi non di debug e le compilazioni di debug, questa funzione restituisce un valore che può essere utile per la diagnostica o di testing. Esattamente al valore restituito dipende da molti fattori, ad esempio il sistema operativo utilizzato e possono essere o non può essere il conteggio dei riferimenti.  
  
### <a name="remarks"></a>Note  
 Se il modello di thread è multithreading, **InterlockedDecrement** viene utilizzato per impedire a più di un thread di modificare il conteggio dei riferimenti allo stesso tempo.  
  
##  <a name="a-namelocka--ccomobjectrootexlock"></a><a name="lock"></a>CComObjectRootEx::Lock  
 Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [EnterCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682608), quali attende che il thread può assumere la proprietà dell'oggetto sezione critica ottenuto tramite un membro dati privato.  
  
```
void Lock();
```  
  
### <a name="remarks"></a>Note  
 Quando il codice protetto termina l'esecuzione, il thread deve chiamare `Unlock` per rilasciare la proprietà della sezione critica.  
  
 Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.  
  
##  <a name="a-namemdwrefa--ccomobjectrootexmdwref"></a><a name="m_dwref"></a>CComObjectRootEx::m_dwRef  
 Parte di un'unione che accede a quattro byte della memoria.  
  
```
long m_dwRef;
```  
  
### <a name="remarks"></a>Note  
 Con `m_pOuterUnknown`, parte di un'unione:  
  
 `union`  
  
 `{`  
  
 `long m_dwRef;`  
  
 `IUnknown* m_pOuterUnknown;`  
  
 `};`  
  
 Se l'oggetto non è aggregato, il conteggio dei riferimenti accede `AddRef` e **versione** viene archiviato in `m_dwRef`. Se l'oggetto è aggregato, il puntatore a unknown esterno è archiviato in [m_pOuterUnknown](#m_pouterunknown).  
  
##  <a name="a-namempouterunknowna--ccomobjectrootexmpouterunknown"></a><a name="m_pouterunknown"></a>CComObjectRootEx::m_pOuterUnknown  
 Parte di un'unione che accede a quattro byte della memoria.  
  
```
IUnknown*
    m_pOuterUnknown;
```     
  
### <a name="remarks"></a>Note  
 Con `m_dwRef`, parte di un'unione:  
  
 `union`  
  
 `{`  
  
 `long m_dwRef;`  
  
 `IUnknown* m_pOuterUnknown;`  
  
 `};`  
  
 Se l'oggetto è aggregato, il puntatore a unknown esterno è archiviato in `m_pOuterUnknown`. Se l'oggetto non è aggregato, il conteggio dei riferimenti accede `AddRef` e **versione** viene archiviato in [m_dwRef](#m_dwref).  
  
##  <a name="a-nameobjectmaina--ccomobjectrootexobjectmain"></a><a name="objectmain"></a>CComObjectRootEx::ObjectMain  
 Per ogni classe nella [mappa oggetto](http://msdn.microsoft.com/en-us/b57619cc-534f-4b8f-bfd4-0c12f937202f), questa funzione viene chiamata una volta quando viene inizializzato il modulo, e nuovamente quando viene terminata.  
  
```
static void WINAPI ObjectMain(bool bStarting);
```  
  
### <a name="parameters"></a>Parametri  
 `bStarting`  
 [out] Il valore è **true** se la classe viene inizializzato; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Il valore di `bStarting` parametro indica se il modulo viene inizializzato o terminata. L'implementazione predefinita di `ObjectMain` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione nella classe per inizializzare o pulire le risorse che si desidera allocare per la classe. Si noti che `ObjectMain` viene chiamato prima che vengano richiesti tutte le istanze della classe.  
  
 `ObjectMain`viene chiamato dal punto di ingresso della DLL, pertanto il tipo di operazione che può eseguire la funzione di punto di ingresso è limitato. Per ulteriori informazioni su queste restrizioni, vedere [funzionamento della libreria Run-Time](../../build/run-time-library-behavior.md) e [DllMain](http://msdn.microsoft.com/library/windows/desktop/ms682583).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM N.&41;](../../atl/codesnippet/cpp/ccomobjectrootex-class_2.h)]  
  
##  <a name="a-nameouteraddrefa--ccomobjectrootexouteraddref"></a><a name="outeraddref"></a>CComObjectRootEx::OuterAddRef  
 Incrementa il conteggio dei riferimenti di unknown esterno di un'aggregazione.  
  
```
ULONG OuterAddRef();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e test.  
  
##  <a name="a-nameouterqueryinterfacea--ccomobjectrootexouterqueryinterface"></a><a name="outerqueryinterface"></a>CComObjectRootEx::OuterQueryInterface  
 Recupera un puntatore indiretto all'interfaccia richiesta.  
  
```
HRESULT OuterQueryInterface(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] GUID dell'interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore a puntatore a interfaccia specificato `iid`, o **NULL** se l'aggregazione non supporta l'interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
##  <a name="a-nameouterreleasea--ccomobjectrootexouterrelease"></a><a name="outerrelease"></a>CComObjectRootEx::OuterRelease  
 Decrementa il conteggio dei riferimenti unknown esterno di un'aggregazione.  
  
```
ULONG OuterRelease();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug non restituisce sempre 0. Restituisce un valore che può essere utile per la diagnostica o test nelle build di debug.  
  
##  <a name="a-nameunlocka--ccomobjectrootexunlock"></a><a name="unlock"></a>CComObjectRootEx::Unlock  
 Se il modello di thread è multithreading, questo metodo chiama la funzione API Win32 [LeaveCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms684169), quali proprietà versioni dell'oggetto sezione critica ottenuto tramite un membro dati privato.  
  
```
void Unlock();
```  
  
### <a name="remarks"></a>Note  
 Per ottenere la proprietà, il thread deve chiamare `Lock`. Ogni chiamata a `Lock` richiede una chiamata corrispondente al `Unlock` per rilasciare la proprietà della sezione critica.  
  
 Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComObject (classe)](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

