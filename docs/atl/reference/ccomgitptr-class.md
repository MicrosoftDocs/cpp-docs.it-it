---
title: Classe CComGITPtr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComGITPtr
- ATLBASE/ATL::CComGITPtr
- ATLBASE/ATL::CComGITPtr::CComGITPtr
- ATLBASE/ATL::CComGITPtr::Attach
- ATLBASE/ATL::CComGITPtr::CopyTo
- ATLBASE/ATL::CComGITPtr::Detach
- ATLBASE/ATL::CComGITPtr::GetCookie
- ATLBASE/ATL::CComGITPtr::Revoke
- ATLBASE/ATL::CComGITPtr::m_dwCookie
dev_langs:
- C++
helpviewer_keywords:
- CComGITPtr class
ms.assetid: af895acb-525a-4555-bb67-b241b7df515b
caps.latest.revision: 19
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 9fe9d9f6d03a6d72c1ce3332419c738570a53803
ms.lasthandoff: 02/24/2017

---
# <a name="ccomgitptr-class"></a>Classe CComGITPtr
Questa classe fornisce metodi per la gestione con i puntatori a interfaccia e la tabella di interfaccia globale (GIT).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CComGITPtr
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo del puntatore a interfaccia a essere archiviati nella tabella GIT.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::CComGITPtr](#ccomgitptr)|Costruttore.|  
|[CComGITPtr:: ~ CComGITPtr](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::Attach](#attach)|Chiamare questo metodo per registrare il puntatore di interfaccia nella tabella di interfaccia globale (GIT).|  
|[CComGITPtr::CopyTo](#copyto)|Chiamare questo metodo per copiare il puntatore passato l'interfaccia della tabella di interfaccia globale (GIT).|  
|[CComGITPtr::Detach](#detach)|Chiamare questo metodo per l'interfaccia da dissociare il `CComGITPtr` oggetto.|  
|[CComGITPtr::GetCookie](#getcookie)|Chiamare questo metodo per restituire il cookie dal `CComGITPtr` oggetto.|  
|[CComGITPtr::Revoke](#revoke)|Chiamare questo metodo per rimuovere l'interfaccia della tabella di interfaccia globale (GIT).|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::operator DWORD](#operator_dword)|Restituisce il cookie dal `CComGITPtr` oggetto.|  
|[CComGITPtr::operator =](#operator_eq)|Operatore di assegnazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::m_dwCookie](#m_dwcookie)|Il cookie.|  
  
## <a name="remarks"></a>Note  
 Gli oggetti che il gestore di marshalling a thread libero di aggregazione ed è necessario utilizzare puntatori a interfaccia ottenuti da altri oggetti è necessario eseguire passaggi aggiuntivi per garantire che le interfacce vengono sottoposti a marshalling in modo corretto. In genere questo implica l'archiviazione dei puntatori a interfaccia nella tabella GIT e ottenere il puntatore dalla tabella GIT ogni volta che viene utilizzato. La classe `CComGITPtr` viene fornito per consentire l'utilizzo di puntatori a interfaccia archiviati nella tabella GIT.  
  
> [!NOTE]
>  La funzione di tabella di interfaccia globale è disponibile solo in Windows 95 con DCOM versione 1.1 e versioni successive, Windows 98, Windows NT 4.0 con Service Pack 3 e versioni successive e Windows 2000.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="attach"></a>CComGITPtr::Attach  
 Chiamare questo metodo per registrare il puntatore di interfaccia nella tabella di interfaccia globale (GIT).  
  
```
HRESULT Attach(T* p) throw();

HRESULT Attach(DWORD dwCookie) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore a interfaccia da aggiungere alla tabella GIT.  
  
 `dwCookie`  
 Il cookie utilizzato per identificare il puntatore di interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, si verificherà un errore di asserzione se il sistema GIT non è valido o se il cookie è uguale a NULL.  
  
##  <a name="ccomgitptr"></a>CComGITPtr::CComGITPtr  
 Costruttore.  
  
```
CComGITPtr() throw();
CComGITPtr(T* p);
CComGITPtr(const CComGITPtr& git);
explicit CComGITPtr(DWORD dwCookie) throw();
CComGITPtr(CComGITPtr&& rv);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `p`  
 Puntatore a interfaccia a essere archiviati nella tabella di interfaccia globale (GIT).  
  
 [in] `git`  
 Un riferimento a un oggetto esistente `CComGITPtr` oggetto.  
  
 [in] `dwCookie`  
 Un cookie utilizzato per identificare il puntatore di interfaccia.  
  
 [in] `rv`  
 L'origine `CComGITPtr` per spostare i dati dall'oggetto.  
  
### <a name="remarks"></a>Note  
 Crea un nuovo `CComGITPtr` dell'oggetto, utilizzando facoltativamente un oggetto esistente `CComGITPtr` oggetto.  
  
 Utilizzando il costruttore `rv` è un costruttore di spostamento. I dati vengono spostati dall'origine, `rv`e quindi `rv` è deselezionata.  
  
##  <a name="dtor"></a>CComGITPtr:: ~ CComGITPtr  
 Distruttore.  
  
```
~CComGITPtr() throw();
```  
  
### <a name="remarks"></a>Note  
 Rimuove l'interfaccia dalla tabella di interfaccia globale (GIT), utilizzando [CComGITPtr::Revoke](#revoke).  
  
##  <a name="copyto"></a>CComGITPtr::CopyTo  
 Chiamare questo metodo per copiare il puntatore passato l'interfaccia della tabella di interfaccia globale (GIT).  
  
```
HRESULT CopyTo(T** pp) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pp`  
 Il puntatore che deve ricevere l'interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'interfaccia di GIT viene copiato il puntatore passato. Il puntatore deve essere liberato dal chiamante quando non è più necessaria.  
  
##  <a name="detach"></a>CComGITPtr::Detach  
 Chiamare questo metodo per l'interfaccia da dissociare il `CComGITPtr` oggetto.  
  
```
DWORD Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie dal `CComGITPtr` oggetto.  
  
### <a name="remarks"></a>Note  
 Spetta al chiamante di rimuovere l'interfaccia da GIT, utilizzando [CComGITPtr::Revoke](#revoke).  
  
##  <a name="getcookie"></a>CComGITPtr::GetCookie  
 Chiamare questo metodo per restituire il cookie dal `CComGITPtr` oggetto.  
  
```
DWORD GetCookie() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie.  
  
### <a name="remarks"></a>Note  
 Il cookie è una variabile utilizzata per identificare un'interfaccia e il relativo percorso.  
  
##  <a name="m_dwcookie"></a>CComGITPtr::m_dwCookie  
 Il cookie.  
  
```
DWORD m_dwCookie;
```  
  
### <a name="remarks"></a>Note  
 Il cookie è una variabile membro utilizzata per identificare un'interfaccia e il relativo percorso.  
  
##  <a name="operator_eq"></a>CComGITPtr::operator =  
 L'operatore di assegnazione.  
  
```
CComGITPtr& operator= (T* p);
CComGITPtr& operator= (const CComGITPtr& git);
CComGITPtr& operator= (DWORD dwCookie);
CComGITPtr& operator= (CComGITPtr&& rv);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `p`  
 Un puntatore a un'interfaccia.  
  
 [in] `git`  
 Riferimento a un oggetto `CComGITPtr`.  
  
 [in] `dwCookie`  
 Un cookie utilizzato per identificare il puntatore di interfaccia.  
  
 [in] `rv`  
 Il `CComGITPtr` spostare dati da.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CComGITPtr` oggetto.  
  
### <a name="remarks"></a>Note  
 Assegna un nuovo valore per un `CComGITPtr` oggetto, da un oggetto esistente o da un riferimento a una tabella di interfaccia globale.  
  
##  <a name="operator_dword"></a>CComGITPtr::operator DWORD  
 Restituisce il cookie associato il `CComGITPtr` oggetto.  
  
```  
operator DWORD() const;
```  
  
### <a name="remarks"></a>Note  
 Il cookie è una variabile utilizzata per identificare un'interfaccia e il relativo percorso.  
  
##  <a name="revoke"></a>CComGITPtr::Revoke  
 Chiamare questo metodo per rimuovere l'interfaccia corrente dalla tabella di interfaccia globale (GIT).  
  
```
HRESULT Revoke() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Rimuove l'interfaccia di GIT.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestore del marshalling con modello di threading Free](../../atl/atl-and-the-free-threaded-marshaler.md)   
 [Accesso alle interfacce tra apartment](http://msdn.microsoft.com/library/windows/desktop/ms682353)   
 [Quando utilizzare la tabella di interfaccia globale](http://msdn.microsoft.com/library/windows/desktop/ms693729)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

