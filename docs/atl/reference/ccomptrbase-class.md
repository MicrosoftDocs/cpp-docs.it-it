---
title: Classe CComPtrBase | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
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
dev_langs: C++
helpviewer_keywords: CComPtrBase class
ms.assetid: 6dbe9543-dee8-4a97-b02f-dd3a25f4a1a0
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f0d9b4d49a7568df905a595e2cf6494b2b98706d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccomptrbase-class"></a>Classe CComPtrBase
Questa classe fornisce una base per le classi di puntatore intelligente utilizzo della memoria basato su COM routine.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CComPtrBase
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di oggetto per fare riferimento il puntatore intelligente.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase:: ~ CComPtrBase](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase:: Advise](#advise)|Chiamare questo metodo per creare una connessione tra il `CComPtrBase`del punto di connessione e un sink del client.|  
|[CComPtrBase::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un indicatore di misura esistente.|  
|[CComPtrBase:: CoCreateInstance](#cocreateinstance)|Chiamare questo metodo per creare un oggetto della classe associata a un ID di classe o un ID di programma specificato|  
|[CComPtrBase::CopyTo](#copyto)|Chiamare questo metodo per copiare il `CComPtrBase` puntatore a un'altra variabile di puntatore.|  
|[CComPtrBase::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|  
|[CComPtrBase::IsEqualObject](#isequalobject)|Chiamare questo metodo per verificare se l'oggetto specificato **IUnknown** punta allo stesso oggetto associato di `CComPtrBase` oggetto.|  
|[CComPtrBase::QueryInterface](#queryinterface)|Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.|  
|[CComPtrBase::Release](#release)|Chiamare questo metodo per rilasciare l'interfaccia.|  
|[CComPtrBase::SetSite](#setsite)|Chiamare questo metodo per impostare il sito del `CComPtrBase` dell'oggetto per il **IUnknown** dell'oggetto padre.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::operator T *](#operator_t_star)|L'operatore di cast.|  
|[CComPtrBase::operator!](#operator_not)|L'operatore NOT.|  
|[CComPtrBase::operator &](#operator_amp)|Il & (operatore).|  
|[CComPtrBase::operator *](#operator_star)|Il * (operatore).|  
|[CComPtrBase::operator <](#ccomptrbase__operator lt)|Minore di-operatore.|  
|[CComPtrBase::operator = =](#operator_eq_eq)|L'operatore di uguaglianza.|  
|[CComPtrBase::operator ->](#operator_ptr)|L'operatore di puntatore ai membri.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::p](#p)|La variabile membro di dati puntatore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce la base per altri puntatori intelligenti che utilizzano le routine di gestione della memoria COM, ad esempio [CComQIPtr](../../atl/reference/ccomqiptr-class.md) e [CComPtr](../../atl/reference/ccomptr-class.md). Aggiungere i propri costruttori e operatori di classi derivate, ma si basano sui metodi forniti da `CComPtrBase`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  
  
##  <a name="advise"></a>CComPtrBase:: Advise  
 Chiamare questo metodo per creare una connessione tra il `CComPtrBase`del punto di connessione e un sink del client.  
  
```
HRESULT Advise(
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 Un puntatore al client **IUnknown**.  
  
 `iid`  
 Il GUID del punto di connessione. In genere, questo è lo stesso come interfaccia in uscita gestita dal punto di connessione.  
  
 `pdw`  
 Puntatore al cookie che identifica in modo univoco la connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Vedere [AtlAdvise](connection-point-global-functions.md#atladvise) per ulteriori informazioni.  
  
##  <a name="attach"></a>CComPtrBase::Attach  
 Chiamare questo metodo per assumere la proprietà di un indicatore di misura esistente.  
  
```
void Attach(T* p2) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p2`  
 Il `CComPtrBase` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 **Collegare** chiamate [CComPtrBase::Release](#release) in esistente [CComPtrBase::p](#p) variabile membro e quindi assegna `p2` a `CComPtrBase::p`. Quando un `CComPtrBase` oggetto acquisisce la proprietà di un puntatore, chiama automaticamente `Release` sull'indicatore di misura in cui vengono eliminati il puntatore e tutti i dati allocati se il conteggio dei riferimenti per l'oggetto è pari a 0.  
  
##  <a name="dtor"></a>CComPtrBase:: ~ CComPtrBase  
 Distruttore.  
  
```
~CComPtrBase() throw();
```  
  
### <a name="remarks"></a>Note  
 Rilascia l'interfaccia a cui puntata `CComPtrBase`.  
  
##  <a name="cocreateinstance"></a>CComPtrBase:: CoCreateInstance  
 Chiamare questo metodo per creare un oggetto della classe associata a un ID di classe o un ID di programma specificato  
  
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
 `szProgID`  
 Puntatore a un ProgID, utilizzato per recuperare il CLSID.  
  
 `pUnkOuter`  
 Se **NULL**, indica che l'oggetto non sia stata creata come parte di un'aggregazione. Se non **NULL**, è un puntatore all'oggetto aggregato **IUnknown** interfaccia (il controllo **IUnknown**).  
  
 `dwClsContext`  
 Contesto in cui verrà eseguito il codice che gestisce l'oggetto appena creato.  
  
 `rclsid`  
 CLSID associato con i dati e il codice che verrà utilizzato per creare l'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 In caso di errore, restituisce S_OK in caso di esito positivo o REGDB_E_CLASSNOTREG, CLASS_E_NOAGGREGATION, CO_E_CLASSSTRING o E_NOINTERFACE. Vedere [CoCreateClassInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615) e [CLSIDFromProgID](http://msdn.microsoft.com/library/windows/desktop/ms688386) per una descrizione di questi errori.  
  
### <a name="remarks"></a>Note  
 Se il primo form del metodo viene chiamato, [CLSIDFromProgID](http://msdn.microsoft.com/library/windows/desktop/ms688386) viene utilizzato per recuperare il CLSID. Entrambe le forme, quindi chiamano [CoCreateClassInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).  
  
 Nelle build di debug è si verifica un errore di asserzione se [CComPtrBase::p](#p) non è uguale a NULL.  
  
##  <a name="copyto"></a>CComPtrBase::CopyTo  
 Chiamare questo metodo per copiare il `CComPtrBase` puntatore a un'altra variabile di puntatore.  
  
```
HRESULT CopyTo(T** ppT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *ppT*  
 Indirizzo della variabile che riceverà il `CComPtrBase` puntatore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se riesce, E_POINTER in caso di errore.  
  
### <a name="remarks"></a>Note  
 Copie di `CComPtrBase` puntatore a *ppT*. Il conteggio dei riferimenti [CComPtrBase::p](#p) variabile membro viene incrementata.  
  
 Un errore se viene restituito HRESULT *ppT* è uguale a NULL. Nelle build di debug è si verifica un errore di asserzione se *ppT* è uguale a NULL.  
  
##  <a name="detach"></a>CComPtrBase::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia dell'indicatore di misura.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta il [CComPtrBase::p](#p) variabile membro dati su NULL e restituisce una copia dell'indicatore di misura.  
  
##  <a name="isequalobject"></a>CComPtrBase::IsEqualObject  
 Chiamare questo metodo per verificare se l'oggetto specificato **IUnknown** punta allo stesso oggetto associato di `CComPtrBase` oggetto.  
  
```
bool IsEqualObject(IUnknown* pOther) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pOther`  
 Il **IUnknown \***  da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se gli oggetti sono identici, false in caso contrario.  
  
##  <a name="operator_not"></a>CComPtrBase::operator!  
 L'operatore NOT.  
  
```
bool operator!() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il `CComHeapPtr` puntatore è uguale a NULL, false in caso contrario.  
  
##  <a name="operator_amp"></a>CComPtrBase::operator&amp;  
 Il & (operatore).  
  
```
T** operator&() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indirizzo dell'oggetto a cui fa riferimento il `CComPtrBase` oggetto.  
  
##  <a name="operator_star"></a>CComPtrBase::operator *  
 Il * (operatore).  
  
```
T& operator*() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di [CComPtrBase::p](#p); ovvero, un puntatore all'oggetto a cui fa riferimento il `CComPtrBase` oggetto.  
  
 Se build di debug, si verificherà un errore di asserzione se [CComPtrBase::p](#p) non è uguale a NULL.  
  
##  <a name="operator_eq_eq"></a>CComPtrBase::operator = =  
 L'operatore di uguaglianza.  
  
```
bool operator== (T* pT) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 Un puntatore a un oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se `CComPtrBase` e *pT* puntano allo stesso oggetto, false in caso contrario.  
  
##  <a name="operator_ptr"></a>CComPtrBase::operator-&gt;  

 L'operatore puntatore a membro.  
  
```
_NoAddRefReleaseOnCComPtr<T>* operator->() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della [CComPtrBase::p](#p) variabile membro dati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo operatore per chiamare un metodo in una classe a cui fa riferimento il `CComPtrBase` oggetto. Nelle build di debug, un errore di asserzione si verificherà se il `CComPtrBase` (membro dati) fa riferimento a NULL.  
  
##  <a name="operator_lt"></a>CComPtrBase::operator&lt;  
 Minore di-operatore.  
  
```
bool operator<(T* pT) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 Un puntatore a un oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se il puntatore gestito dall'oggetto corrente è inferiore a quello del puntatore a cui viene confrontato.  
  
##  <a name="operator_t_star"></a>CComPtrBase::operator T *  
 L'operatore di cast.  
  
```  
operator T*() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce un puntatore al tipo di dati oggetto definito nel modello di classe.  
  
##  <a name="p"></a>CComPtrBase::p  
 La variabile membro di dati puntatore.  
  
```
T* p;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="queryinterface"></a>CComPtrBase::QueryInterface  
 Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.  
  
```
template <class Q> HRESULT QueryInterface(Q
** pp) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `Q`  
 Il tipo di oggetto è richiesto il cui puntatore di interfaccia.  
  
 `pp`  
 Indirizzo della variabile di output che riceve il puntatore di interfaccia richiesto.  
  
### <a name="return-value"></a>Valore restituito  
 In caso di errore, restituisce S_OK esito positivo o E_NOINTERFACE.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [IUnknown:: QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  
  
 Nelle build di debug è si verifica un errore di asserzione se *pp* non è uguale a NULL.  
  
##  <a name="release"></a>CComPtrBase::Release  
 Chiamare questo metodo per rilasciare l'interfaccia.  
  
```
void Release() throw();
```  
  
### <a name="remarks"></a>Note  
 L'interfaccia viene rilasciata, e [CComPtrBase::p](#p) è impostato su NULL.  
  
##  <a name="setsite"></a>CComPtrBase::SetSite  
 Chiamare questo metodo per impostare il sito del `CComPtrBase` dell'oggetto per il **IUnknown** dell'oggetto padre.  
  
```
HRESULT SetSite(IUnknown* punkParent) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `punkParent`  
 Un puntatore al **IUnknown** interfaccia dell'elemento padre.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama [AtlSetChildSite](composite-control-global-functions.md#atlsetchildsite).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
