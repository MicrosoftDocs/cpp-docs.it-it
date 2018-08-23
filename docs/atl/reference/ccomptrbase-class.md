---
title: Classe CComPtrBase | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComPtrBase
- ATLCOMCLI/ATL::CComPtrBase
- ATLCOMCLI/ATL::CComPtrBase::Advise
- ATLCOMCLI/ATL::CComPtrBase::Attach
- ATLCOMCLI/ATL::CComPtrBase::CoCreateInstance
- ATLCOMCLI/ATL::CComPtrBase::CopyTo
- ATLCOMCLI/ATL::CComPtrBase::Detach
- ATLCOMCLI/ATL::CComPtrBase::IsEqualObject
- ATLCOMCLI/ATL::CComPtrBase::QueryInterface
- ATLCOMCLI/ATL::CComPtrBase::Release
- ATLCOMCLI/ATL::CComPtrBase::SetSite
- ATLCOMCLI/ATL::CComPtrBase::p
dev_langs:
- C++
helpviewer_keywords:
- CComPtrBase class
ms.assetid: 6dbe9543-dee8-4a97-b02f-dd3a25f4a1a0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 686dbe540301508bd95563b7eafc466a5821a9f6
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42572076"
---
# <a name="ccomptrbase-class"></a>Classe CComPtrBase
Questa classe fornisce una base per le classi di puntatore intelligente con le routine di memoria basato su COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CComPtrBase
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo di oggetto a cui fa riferimento il puntatore intelligente.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase:: ~ CComPtrBase](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase:: Advise](#advise)|Chiamare questo metodo per creare una connessione tra il `CComPtrBase`del punto di connessione e un sink del client.|  
|[CComPtrBase::Attach](#attach)|Chiamare questo metodo per acquisire la proprietà di un indicatore di misura esistente.|  
|[CComPtrBase:: CoCreateInstance](#cocreateinstance)|Chiamare questo metodo per creare un oggetto di classe associata a un determinato ID di classe o ID di programma.|  
|[CComPtrBase::CopyTo](#copyto)|Chiamare questo metodo per copiare il `CComPtrBase` puntatore a un'altra variabile di puntatore.|  
|[CComPtrBase::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|  
|[CComPtrBase::IsEqualObject](#isequalobject)|Chiamare questo metodo per verificare se l'oggetto specificato `IUnknown` punta allo stesso oggetto associato di `CComPtrBase` oggetto.|  
|[CComPtrBase::QueryInterface](#queryinterface)|Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.|  
|[CComPtrBase::Release](#release)|Chiamare questo metodo per rilasciare l'interfaccia.|  
|[CComPtrBase::SetSite](#setsite)|Chiamare questo metodo per impostare il sito del `CComPtrBase` dell'oggetto per il `IUnknown` dell'oggetto padre.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::operator T *](#operator_t_star)|L'operatore di cast.|  
|[CComPtrBase::operator!](#operator_not)|L'operatore NOT.|  
|[CComPtrBase::operator &](#operator_amp)|I & operatore.|  
|[CComPtrBase::operator *](#operator_star)|Operatore \*.|  
|[CComPtrBase::operator <](#ccomptrbase__operator lt)|Minore di-operatore di maggioranza.|  
|[CComPtrBase::operator = =](#operator_eq_eq)|L'operatore di uguaglianza.|  
|[CComPtrBase::operator ->](#operator_ptr)|Operatore puntatore-a-membri.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::p](#p)|La variabile di membro dati puntatore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce la base per altri puntatori intelligenti che usano routine di gestione della memoria COM, ad esempio [CComQIPtr](../../atl/reference/ccomqiptr-class.md) e [CComPtr](../../atl/reference/ccomptr-class.md). Aggiungere i propri costruttori e operatori di classi derivate, ma si basano su metodi forniti dalla `CComPtrBase`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli  
  
##  <a name="advise"></a>  CComPtrBase:: Advise  
 Chiamare questo metodo per creare una connessione tra il `CComPtrBase`del punto di connessione e un sink del client.  
  
```
HRESULT Advise(
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 Un puntatore al client `IUnknown`.  
  
 *IID*  
 Il GUID del punto di connessione. In genere, questo è lo stesso come interfaccia in uscita gestita dal punto di connessione.  
  
 *PDW*  
 Puntatore a cookie che identifica in modo univoco la connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Visualizzare [AtlAdvise](connection-point-global-functions.md#atladvise) per altre informazioni.  
  
##  <a name="attach"></a>  CComPtrBase::Attach  
 Chiamare questo metodo per acquisire la proprietà di un indicatore di misura esistente.  
  
```
void Attach(T* p2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *P2*  
 Il `CComPtrBase` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 `Attach` le chiamate [CComPtrBase::Release](#release) su esistenti [CComPtrBase::p](#p) variabile membro e quindi assegna *p2* a `CComPtrBase::p`. Quando un `CComPtrBase` oggetto acquisisce la proprietà di un puntatore, chiamerà automaticamente `Release` sull'indicatore di misura in cui vengono eliminati il puntatore del mouse ed eventuali dati allocati se il conteggio dei riferimenti nell'oggetto arriva a 0.  
  
##  <a name="dtor"></a>  CComPtrBase:: ~ CComPtrBase  
 Distruttore.  
  
```
~CComPtrBase() throw();
```  
  
### <a name="remarks"></a>Note  
 Rilascia l'interfaccia a cui punta `CComPtrBase`.  
  
##  <a name="cocreateinstance"></a>  CComPtrBase:: CoCreateInstance  
 Chiamare questo metodo per creare un oggetto di classe associata a un determinato ID di classe o ID di programma.  
  
```
HRESULT CoCreateInstance(  
    LPCOLESTR szProgID,
    LPUNKNOWN pUnkOuter = NULL,
    DWORD dwClsContext = CLSCTX_ALL) throw();

HRESULT CoCreateInstance(  
    REFCLSID rclsid,
    LPUNKNOWN pUnkOuter = NULL,
    DWORD dwClsContext = CLSCTX_ALL) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *szProgID*  
 Puntatore a un ProgID, usato per ripristinare il CLSID.  
  
 *pUnkOuter*  
 Se NULL, indica che l'oggetto non viene creata come parte di un'aggregazione. Se diverso da NULL, è un puntatore all'oggetto aggregato `IUnknown` interfaccia (il controllo `IUnknown`).  
  
 *dwClsContext*  
 Contesto in cui verrà eseguito il codice che gestisce l'oggetto appena creato.  
  
 *rclsid*  
 CLSID associato ai dati e al codice che verrà utilizzato per creare l'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK in caso di esito positivo o REGDB_E_CLASSNOTREG, CLASS_E_NOAGGREGATION, CO_E_CLASSSTRING o E_NOINTERFACE in caso di errore. Visualizzare [CoCreateClassInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance) e [CLSIDFromProgID](http://msdn.microsoft.com/library/windows/desktop/ms688386) per una descrizione di questi errori.  
  
### <a name="remarks"></a>Note  
 Se il primo form del metodo viene chiamato, [CLSIDFromProgID](http://msdn.microsoft.com/library/windows/desktop/ms688386) viene usato per ripristinare il CLSID. Quindi chiamare entrambi i formati [CoCreateClassInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance).  
  
 Nelle build di debug, si verifica un errore di asserzione se [CComPtrBase::p](#p) non è uguale a NULL.  
  
##  <a name="copyto"></a>  CComPtrBase::CopyTo  
 Chiamare questo metodo per copiare il `CComPtrBase` puntatore a un'altra variabile di puntatore.  
  
```
HRESULT CopyTo(T** ppT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *ppT*  
 Indirizzo della variabile che riceverà il `CComPtrBase` puntatore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, E_POINTER in caso di errore.  
  
### <a name="remarks"></a>Note  
 Copia il `CComPtrBase` puntatore a *ppT*. Il conteggio dei riferimenti [CComPtrBase::p](#p) variabile membro viene incrementata.  
  
 Un errore se viene restituito HRESULT *ppT* è uguale a NULL. Nelle build di debug, si verifica un errore di asserzione se *ppT* è uguale a NULL.  
  
##  <a name="detach"></a>  CComPtrBase::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia del puntatore.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta la [CComPtrBase::p](#p) variabile membro dei dati su NULL e restituisce una copia del puntatore.  
  
##  <a name="isequalobject"></a>  CComPtrBase::IsEqualObject  
 Chiamare questo metodo per verificare se l'oggetto specificato `IUnknown` punta allo stesso oggetto associato di `CComPtrBase` oggetto.  
  
```
bool IsEqualObject(IUnknown* pOther) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pOther*  
 Oggetto `IUnknown *` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se gli oggetti sono identici, false in caso contrario.  
  
##  <a name="operator_not"></a>  CComPtrBase::operator!  
 L'operatore NOT.  
  
```
bool operator!() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il `CComHeapPtr` puntatore è uguale a NULL, false in caso contrario.  
  
##  <a name="operator_amp"></a>  CComPtrBase::operator &amp;  
 I & operatore.  
  
```
T** operator&() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indirizzo dell'oggetto a cui punta il `CComPtrBase` oggetto.  
  
##  <a name="operator_star"></a>  CComPtrBase::operator \*  
 Operatore \*.  
  
```
T& operator*() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del [CComPtrBase::p](#p); vale a dire, un puntatore all'oggetto cui fa riferimento il `CComPtrBase` oggetto.  
  
 Se le build di debug, se si verifica un errore di asserzione [CComPtrBase::p](#p) non è uguale a NULL.  
  
##  <a name="operator_eq_eq"></a>  CComPtrBase::operator = =  
 L'operatore di uguaglianza.  
  
```
bool operator== (T* pT) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 Un puntatore a un oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se `CComPtrBase` e *pT* puntano allo stesso oggetto, false in caso contrario.  
  
##  <a name="operator_ptr"></a>  CComPtrBase::operator-&gt;  

 Operatore puntatore a membro.  
  
```
_NoAddRefReleaseOnCComPtr<T>* operator->() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della [CComPtrBase::p](#p) variabile membro dati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo operatore per chiamare un metodo in una classe a cui punta il `CComPtrBase` oggetto. Nelle build di debug, un errore di asserzione si verificherà se il `CComPtrBase` membro dati punta a NULL.  
  
##  <a name="operator_lt"></a>  CComPtrBase::operator &lt;  
 Minore di-operatore di maggioranza.  
  
```
bool operator<(T* pT) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 Un puntatore a un oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il puntatore gestito dall'oggetto corrente è inferiore a quello del puntatore con cui è confrontato.  
  
##  <a name="operator_t_star"></a>  CComPtrBase::operator T\*  
 L'operatore di cast.  
  
```  
operator T*() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce un puntatore al tipo di dati di oggetto definito nel modello di classe.  
  
##  <a name="p"></a>  CComPtrBase::p  
 La variabile di membro dati puntatore.  
  
```
T* p;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="queryinterface"></a>  CComPtrBase::QueryInterface  
 Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.  
  
```
template <class Q> HRESULT QueryInterface(Q
** pp) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *Q*  
 Il tipo di oggetto cui puntatore a interfaccia è necessaria.  
  
 *profilo di porta*  
 Indirizzo della variabile di output che riceve il puntatore a interfaccia richiesto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK su operazione riuscita o E_NOINTERFACE in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [IUnknown:: QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Nelle build di debug, si verifica un errore di asserzione se *pp* non è uguale a NULL.  
  
##  <a name="release"></a>  CComPtrBase::Release  
 Chiamare questo metodo per rilasciare l'interfaccia.  
  
```
void Release() throw();
```  
  
### <a name="remarks"></a>Note  
 L'interfaccia viene rilasciato, e [CComPtrBase::p](#p) è impostato su NULL.  
  
##  <a name="setsite"></a>  CComPtrBase::SetSite  
 Chiamare questo metodo per impostare il sito del `CComPtrBase` dell'oggetto per il `IUnknown` dell'oggetto padre.  
  
```
HRESULT SetSite(IUnknown* punkParent) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *punkParent*  
 Un puntatore al `IUnknown` interfaccia dell'elemento padre.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [AtlSetChildSite](composite-control-global-functions.md#atlsetchildsite).  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
