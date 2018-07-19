---
title: Classe CComObjectRootEx | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- reference counting
ms.assetid: 894a3d7c-2daf-4fd0-8fa4-e6a05bcfb631
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 55da0705027d6625d4140691b1b91912fb94c555
ms.sourcegitcommit: 76fd30ff3e0352e2206460503b61f45897e60e4f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/13/2018
ms.locfileid: "39027527"
---
# <a name="ccomobjectrootex-class"></a>Classe CComObjectRootEx
Questa classe fornisce metodi per la gestione di gestione di conteggio di riferimento di oggetto per gli oggetti aggregati e non aggregati.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class ThreadModel>  
class CComObjectRootEx : public CComObjectRootBase
```  
  
#### <a name="parameters"></a>Parametri  
 *ThreadModel*  
 La classe i cui metodi implementano il modello di threading desiderato. È possibile scegliere il modello di threading in modo esplicito, impostando *ThreadModel* al [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md), [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), o [ CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md). È possibile accettare modello thread predefinito del server impostando *ThreadModel* al [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) oppure [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel).  

  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CComObjectRootEx](#ccomobjectrootex)|Costruttore.|  
|[InternalAddRef](#internaladdref)|Incrementa il conteggio dei riferimenti per un oggetto non aggregato.|  
|[InternalRelease](#internalrelease)|Decrementa il conteggio dei riferimenti per un oggetto non aggregato.|  
|[Blocco](#lock)|Se il modello di thread è a thread multipli, ottiene la proprietà di un oggetto sezione critica.|  
|[Lo sblocco](#unlock)|Se il modello di thread è a thread multipli, rilascia la proprietà di un oggetto sezione critica.|  
  
### <a name="ccomobjectrootbase-methods"></a>Metodi CComObjectRootBase  
  
|||  
|-|-|  
|[FinalConstruct](#finalconstruct)|Eseguire l'override nella classe per eseguire qualsiasi inizializzazione necessari per l'oggetto.|  
|[FinalRelease](#finalrelease)|Eseguire l'override nella classe per eseguire la pulizia necessaria per l'oggetto.|  
|[OuterAddRef](#outeraddref)|Incrementa il conteggio dei riferimenti per un oggetto aggregato.|  
|[OuterQueryInterface](#outerqueryinterface)|I delegati per l'outer `IUnknown` di un oggetto aggregato.|  
|[OuterRelease](#outerrelease)|Decrementa il conteggio dei riferimenti per un oggetto aggregato.|  
  
### <a name="static-functions"></a>Funzioni statiche  
  
|||  
|-|-|  
|[InternalQueryInterface](#internalqueryinterface)|Delega la `IUnknown` di un oggetto non aggregato.|  
|[ObjectMain](#objectmain)|Chiamato durante l'inizializzazione del modulo e la chiusura per le classi derivate elencato nella mappa oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_dwRef](#m_dwref)|Con `m_pOuterUnknown`, parte di un'unione. Utilizzato quando l'oggetto non verrà aggregato per contenere il conteggio dei riferimenti `AddRef` e `Release`.|  
|[m_pOuterUnknown](#m_pouterunknown)|Con `m_dwRef`, parte di un'unione. Utilizzato quando l'oggetto è aggregato per contenere un puntatore a unknown esterno.|  
  
## <a name="remarks"></a>Note  
 `CComObjectRootEx` gestisce gestione di conteggio di riferimento di oggetto per gli oggetti aggregati e non aggregati. Contiene il conteggio dei riferimenti oggetto se l'oggetto non è vengono aggregato e contiene il puntatore a unknown esterno se l'oggetto da aggregare. Per gli oggetti aggregati, `CComObjectRootEx` metodi possono essere utilizzati per gestire l'errore dell'oggetto interno per costruire e per proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o l'oggetto interno viene eliminato.  
  
 È necessario ereditare una classe che implementa un server COM `CComObjectRootEx` oppure [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md).  
  
 Se la definizione di classe specifica la [DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable) macro ATL crea un'istanza di `CComPolyObject<CYourClass>` quando `IClassFactory::CreateInstance` viene chiamato. Durante la creazione, viene controllato il valore di unknown esterno. Se è NULL, `IUnknown` viene implementata per un oggetto non aggregato. Se unknown esterno non è NULL, `IUnknown` è implementata per un oggetto aggregato.  
  
 Se la classe non specifica la macro DECLARE_POLY_AGGREGATABLE, ATL crea un'istanza di `CAggComObject<CYourClass>` per gli oggetti aggregati o un'istanza di `CComObject<CYourClass>` per gli oggetti non aggregati.  
  
 Il vantaggio dell'utilizzo `CComPolyObject` non si rischia che dispone di entrambe `CComAggObject` e `CComObject` nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Pertanto, solo una copia dell'oggetto vtable e una copia delle funzioni presenti in un modulo. Se la vtable è grande, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, usando `CComPolyObject` può comportare una dimensione modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o aggregato, perché sono `CComAggObject` e `CComObject`.  
  
 Se l'oggetto è aggregato, [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) implementata da `CComAggObject` o `CComPolyObject`. Queste classi delegare `QueryInterface`, `AddRef`, e `Release` le chiamate a `CComObjectRootEx`del `OuterQueryInterface`, `OuterAddRef`, e `OuterRelease` per inoltrare a unknown esterno. In genere, si esegue l'override `CComObjectRootEx::FinalConstruct` nella classe per creare eventuali oggetti aggregati ed eseguire l'override `CComObjectRootEx::FinalRelease` per liberare qualsiasi aggregati gli oggetti.  
  
 Se l'oggetto non è aggregato, `IUnknown` implementata da `CComObject` o `CComPolyObject`. In questo caso, le chiamate a `QueryInterface`, `AddRef`, e `Release` vengono delegate `CComObjectRootEx`del `InternalQueryInterface`, `InternalAddRef`, e `InternalRelease` per eseguire le operazioni effettive.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="ccomobjectrootex"></a>  CComObjectRootEx::CComObjectRootEx  
 Il costruttore inizializza il conteggio dei riferimenti su 0.  
  
```
CComObjectRootEx();
```  
  
##  <a name="finalconstruct"></a>  CComObjectRootEx::FinalConstruct  
 È possibile eseguire l'override di questo metodo nella classe derivata per eseguire qualsiasi inizializzazione richiesta per l'oggetto.  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituire S_OK sul successo o uno degli standard error valori HRESULT.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CComObjectRootEx::FinalConstruct` semplicemente restituisce S_OK.  
  
 Esistono vantaggi rispetto all'esecuzione di inizializzazione in `FinalConstruct` anziché il costruttore della classe:  
  
-   Non è possibile restituire un codice di stato da un costruttore, ma è possibile restituire un valore HRESULT per mezzo di `FinalConstruct`del valore restituito. Quando vengono creati oggetti della classe utilizzando la factory di classe standard fornita da ATL, questo valore restituito viene propagato al client COM che consente di fornire informazioni dettagliate sull'errore.  
  
-   È possibile chiamare funzioni virtuali tramite il meccanismo di funzione virtuale dal costruttore di una classe. Chiamare una funzione virtuale dal costruttore di una classe comporta una chiamata alla funzione risolta staticamente come definito in quel punto nella gerarchia di ereditarietà. Le chiamate a funzioni virtuali pure comportare errori del linker.  
  
     La classe non è la classe più derivata nella gerarchia di ereditarietà, ovvero si basa su una classe derivata, fornita da ATL per offrire alcune delle relative funzionalità. È probabile che l'inizializzazione dovranno usare le funzionalità fornite da tale classe (questo è certamente true quando gli oggetti della classe necessario aggregare altri oggetti), ma il costruttore nella classe non ha modo di accedere a tali funzionalità. Il codice di costruzione per la classe viene eseguito prima la classe più derivata è completamente costruita.  
  
     Tuttavia, `FinalConstruct` viene chiamato immediatamente dopo derivate più classi viene costruito completamente consente di chiamare le funzioni virtuali e usare l'implementazione di conteggio dei riferimenti fornita da ATL.  
  
### <a name="example"></a>Esempio  
 In genere, l'override del metodo nella classe derivata da `CComObjectRootEx` creare aggregati gli oggetti. Ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#40](../../atl/codesnippet/cpp/ccomobjectrootex-class_1.h)]  
  
 Se la costruzione non riesce, è possibile restituire un errore. È anche possibile usare la macro [macro DECLARE_PROTECT_FINAL_CONSTRUCT](aggregation-and-class-factory-macros.md#declare_protect_final_construct) per proteggere l'oggetto esterno da essere eliminata se, durante la creazione, l'oggetto aggregato interno incrementa il conteggio dei riferimenti, quindi decrementa il conteggio su 0.  
  
 Ecco un modo tipico per creare una funzione di aggregazione:  
  
-   Aggiungere un `IUnknown` puntatore alla classe dell'oggetto e inizializzarla su NULL nel costruttore.  
  
-   Eseguire l'override `FinalConstruct` per creare la funzione di aggregazione.  
  
-   Usare la `IUnknown` puntatore è definito come parametro per il [COM_INTERFACE_ENTRY_AGGREGATE](com-interface-entry-macros.md#com_interface_entry_aggregate) macro.  
  
-   Eseguire l'override `FinalRelease` per rilasciare il `IUnknown` puntatore.  
  
##  <a name="finalrelease"></a>  CComObjectRootEx::FinalRelease  
 È possibile eseguire l'override di questo metodo nella classe derivata per eseguire la pulizia necessaria per l'oggetto.  
  
```
void FinalRelease();
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `CComObjectRootEx::FinalRelease` non esegue alcuna operazione.  
  
 Esecuzione della pulizia in `FinalRelease` è preferibile rispetto all'aggiunta di codice per il distruttore della classe poiché è ancora completamente costruito l'oggetto in corrispondenza del punto in corrispondenza del quale `FinalRelease` viene chiamato. Ciò consente di accedere in modo sicuro i metodi forniti dalla classe più derivata. Ciò è particolarmente importante per il rilascio di tutti gli oggetti aggregati prima dell'eliminazione.  
  
##  <a name="internaladdref"></a>  CComObjectRootEx::InternalAddRef  
 Incrementa il conteggio dei riferimenti di un oggetto non aggregato di 1.  
  
```
ULONG InternalAddRef();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e di test.  
  
### <a name="remarks"></a>Note  
 Se il modello di thread è a thread multipli, `InterlockedIncrement` consente di impedire più di un thread di modificare il conteggio dei riferimenti allo stesso tempo.  
  
##  <a name="internalqueryinterface"></a>  CComObjectRootEx:: InternalQueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
static HRESULT InternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 *pThis*  
 [in] Un puntatore all'oggetto che contiene la mappa COM di interfacce esposte a `QueryInterface`.  
  
 *pEntries*  
 [in] Un puntatore al `_ATL_INTMAP_ENTRY` struttura che accede a una mappa delle interfacce disponibili.  
  
 *IID*  
 [in] Il GUID dell'interfaccia richiesto.  
  
 *ppvObject*  
 [out] Un puntatore a puntatore a interfaccia specificato nella *iid*, oppure NULL se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `InternalQueryInterface` gestisce solo le interfacce nella tabella di mappe COM. Se l'oggetto è aggregato, `InternalQueryInterface` non delegare a unknown esterno. È possibile inserire le interfacce nella tabella di mappe COM con la macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) o una delle relative varianti.  
  
##  <a name="internalrelease"></a>  CComObjectRootEx::InternalRelease  
 Decrementa il conteggio dei riferimenti di un oggetto non aggregato di 1.  
  
```
ULONG InternalRelease();
```  
  
### <a name="return-value"></a>Valore restituito  
 In entrambi non di debug e le compilazioni di debug, questa funzione restituisce un valore che può essere utile per la diagnostica o di testing. Il valore esatto restituito dipende da molti fattori, ad esempio il sistema operativo utilizzato e possono o che non, essere il conteggio dei riferimenti.  
  
### <a name="remarks"></a>Note  
 Se il modello di thread è a thread multipli, `InterlockedDecrement` consente di impedire più di un thread di modificare il conteggio dei riferimenti allo stesso tempo.  
  
##  <a name="lock"></a>  CComObjectRootEx::Lock  
 Se il modello di thread è a thread multipli, questo metodo chiama la funzione API Win32 [EnterCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682608), quali attende che il thread può assumere la proprietà dell'oggetto sezione critica ottenuta tramite un membro dati privato.  
  
```
void Lock();
```  
  
### <a name="remarks"></a>Note  
 Quando il codice protetto termina l'esecuzione, il thread deve chiamare `Unlock` per rilasciare la proprietà della sezione critica.  
  
 Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.  
  
##  <a name="m_dwref"></a>  CComObjectRootEx::m_dwRef  
 Parte di un'unione che accede a quattro byte di memoria.  
  
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
  
 Se l'oggetto non è aggregato, il conteggio dei riferimenti accede `AddRef` e `Release` viene archiviato in `m_dwRef`. Se l'oggetto è aggregato, il puntatore al unknown esterno viene archiviato [m_pOuterUnknown](#m_pouterunknown).  
  
##  <a name="m_pouterunknown"></a>  CComObjectRootEx::m_pOuterUnknown  
 Parte di un'unione che accede a quattro byte di memoria.  
  
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
  
 Se l'oggetto è aggregato, il puntatore al unknown esterno viene archiviato `m_pOuterUnknown`. Se l'oggetto non è aggregato, il conteggio dei riferimenti accede `AddRef` e `Release` viene archiviato in [m_dwRef](#m_dwref).  
  
##  <a name="objectmain"></a>  CComObjectRootEx::ObjectMain  
 Per ogni classe elencata nel [mappa oggetto](http://msdn.microsoft.com/b57619cc-534f-4b8f-bfd4-0c12f937202f), questa funzione viene chiamata una volta quando viene inizializzato il modulo, e anche in questo caso quando viene terminato.  
  
```
static void WINAPI ObjectMain(bool bStarting);
```  
  
### <a name="parameters"></a>Parametri  
 *bStarting*  
 [out] Il valore è TRUE se la classe viene inizializzata; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il valore della *bStarting* parametro indica se il modulo viene inizializzata o terminata. L'implementazione predefinita di `ObjectMain` non esegue alcuna operazione, ma è possibile eseguire l'override di questa funzione nella classe inizializzare o pulire le risorse che si desidera allocare per la classe. Si noti che `ObjectMain` viene chiamato prima che tutte le istanze della classe vengono richiesti.  
  
 `ObjectMain` viene chiamato dal punto di ingresso della DLL, in modo che il tipo di operazione che può eseguire la funzione di punto di ingresso è limitato. Per altre informazioni su queste restrizioni, vedere [DLL e Visual C++ il comportamento della libreria di runtime](../../build/run-time-library-behavior.md) e [DllMain](http://msdn.microsoft.com/library/windows/desktop/ms682583).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM#41](../../atl/codesnippet/cpp/ccomobjectrootex-class_2.h)]  
  
##  <a name="outeraddref"></a>  CComObjectRootEx::OuterAddRef  
 Incrementa il conteggio dei riferimenti di unknown esterno di un'aggregazione.  
  
```
ULONG OuterAddRef();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e di test.  
  
##  <a name="outerqueryinterface"></a>  CComObjectRootEx::OuterQueryInterface  
 Recupera un puntatore indiretto all'interfaccia richiesta.  
  
```
HRESULT OuterQueryInterface(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 *IID*  
 [in] Il GUID dell'interfaccia richiesto.  
  
 *ppvObject*  
 [out] Un puntatore a puntatore a interfaccia specificato nella *iid*, oppure NULL se l'aggregazione non supporta l'interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
##  <a name="outerrelease"></a>  CComObjectRootEx::OuterRelease  
 Decrementa il conteggio dei riferimenti unknown esterno di un'aggregazione.  
  
```
ULONG OuterRelease();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle compilazioni non di debug, restituisce sempre 0. Nelle build di debug, restituisce un valore che può essere utile per la diagnostica o di testing.  
  
##  <a name="unlock"></a>  CComObjectRootEx::Unlock  
 Se il modello di thread è a thread multipli, questo metodo chiama la funzione API Win32 [LeaveCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms684169), che rilascia la proprietà dell'oggetto sezione critica ottenuta tramite un membro dati privato.  
  
```
void Unlock();
```  
  
### <a name="remarks"></a>Note  
 Per ottenere la proprietà, il thread deve chiamare `Lock`. Ogni chiamata a `Lock` richiede una chiamata corrispondente al `Unlock` per rilasciare la proprietà della sezione critica.  
  
 Se il modello di thread è a thread singolo, questo metodo non esegue alcuna operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [Classe CComObject](../../atl/reference/ccomobject-class.md)   
 [Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
