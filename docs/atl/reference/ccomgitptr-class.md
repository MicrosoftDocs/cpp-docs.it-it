---
title: Classe CComGITPtr | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 049873ce6ff630e8f00ea5ad5ec9b3786bd5e71b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32363626"
---
# <a name="ccomgitptr-class"></a>Classe CComGITPtr
Questa classe fornisce metodi per la gestione di puntatori a interfaccia e la tabella di interfaccia globale (GIT).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class CComGITPtr
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo del puntatore a interfaccia da archiviare in GIT.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::CComGITPtr](#ccomgitptr)|Costruttore.|  
|[CComGITPtr:: ~ CComGITPtr](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::Attach](#attach)|Chiamare questo metodo per registrare il puntatore di interfaccia in una tabella di interfaccia globale (GIT).|  
|[CComGITPtr::CopyTo](#copyto)|Chiamare questo metodo per copiare il puntatore passato l'interfaccia tra la tabella di interfaccia globale (GIT).|  
|[CComGITPtr::Detach](#detach)|Chiamare questo metodo per l'interfaccia da dissociare il `CComGITPtr` oggetto.|  
|[CComGITPtr::GetCookie](#getcookie)|Chiamare questo metodo per restituire il cookie dal `CComGITPtr` oggetto.|  
|[CComGITPtr::Revoke](#revoke)|Chiamare questo metodo per rimuovere l'interfaccia dalla tabella di interfaccia globale (GIT).|  
  
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
 Gli oggetti che il gestore di marshalling a thread libero di aggregazione e l'esigenza di utilizzare puntatori a interfacce ottenuti da altri oggetti è necessario eseguire passaggi aggiuntivi per assicurarsi che le interfacce in modo corretto vengono effettuato il marshalling. In genere questo implica l'archiviazione dei puntatori a interfaccia in GIT e ottenere il puntatore da GIT ogni volta che viene utilizzato. La classe `CComGITPtr` viene fornita per consentire l'utilizzo di puntatori a interfaccia archiviati nella tabella GIT.  
  
> [!NOTE]
>  La funzione di tabella di interfaccia globale è disponibile solo in Windows 95 con DCOM versione 1.1 e versioni successive, Windows 98, Windows NT 4.0 con Service Pack 3 e versioni successive e Windows 2000.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="attach"></a>  CComGITPtr::Attach  
 Chiamare questo metodo per registrare il puntatore di interfaccia in una tabella di interfaccia globale (GIT).  
  
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
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, si verificherà un errore di asserzione se GIT non è valido o se il cookie è uguale a NULL.  
  
##  <a name="ccomgitptr"></a>  CComGITPtr::CComGITPtr  
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
 Un puntatore a interfaccia da archiviare nella tabella di interfaccia globale (GIT).  
  
 [in] `git`  
 Un riferimento a un oggetto esistente `CComGITPtr` oggetto.  
  
 [in] `dwCookie`  
 Un cookie utilizzato per identificare il puntatore di interfaccia.  
  
 [in] `rv`  
 L'origine `CComGITPtr` oggetto dati da spostare.  
  
### <a name="remarks"></a>Note  
 Crea un nuovo `CComGITPtr` dell'oggetto, utilizzando facoltativamente un oggetto esistente `CComGITPtr` oggetto.  
  
 L'utilizzo del costruttore `rv` è un costruttore di spostamento. I dati vengono spostati dall'origine, `rv`e quindi `rv` è deselezionata.  
  
##  <a name="dtor"></a>  CComGITPtr:: ~ CComGITPtr  
 Distruttore.  
  
```
~CComGITPtr() throw();
```  
  
### <a name="remarks"></a>Note  
 Rimuove l'interfaccia dalla tabella di interfaccia globale (GIT), utilizzando [CComGITPtr::Revoke](#revoke).  
  
##  <a name="copyto"></a>  CComGITPtr::CopyTo  
 Chiamare questo metodo per copiare il puntatore passato l'interfaccia tra la tabella di interfaccia globale (GIT).  
  
```
HRESULT CopyTo(T** pp) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pp`  
 Il puntatore che riceverà l'interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'interfaccia da GIT viene copiato il puntatore passato. Il puntatore deve essere rilasciato dal chiamante quando non è più necessario.  
  
##  <a name="detach"></a>  CComGITPtr::Detach  
 Chiamare questo metodo per l'interfaccia da dissociare il `CComGITPtr` oggetto.  
  
```
DWORD Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie dal `CComGITPtr` oggetto.  
  
### <a name="remarks"></a>Note  
 Spetta al chiamante di rimuovere tutte le interfacce da GIT, utilizzando [CComGITPtr::Revoke](#revoke).  
  
##  <a name="getcookie"></a>  CComGITPtr::GetCookie  
 Chiamare questo metodo per restituire il cookie dal `CComGITPtr` oggetto.  
  
```
DWORD GetCookie() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie.  
  
### <a name="remarks"></a>Note  
 Il cookie è una variabile utilizzata per identificare un'interfaccia e il relativo percorso.  
  
##  <a name="m_dwcookie"></a>  CComGITPtr::m_dwCookie  
 Il cookie.  
  
```
DWORD m_dwCookie;
```  
  
### <a name="remarks"></a>Note  
 Il cookie è una variabile membro utilizzata per identificare un'interfaccia e il relativo percorso.  
  
##  <a name="operator_eq"></a>  CComGITPtr::operator =  
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
 Il `CComGITPtr` per spostare i dati da.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornamento `CComGITPtr` oggetto.  
  
### <a name="remarks"></a>Note  
 Assegna un nuovo valore per un `CComGITPtr` oggetto, da un oggetto esistente o da un riferimento a una tabella di interfaccia globale.  
  
##  <a name="operator_dword"></a>  CComGITPtr::operator DWORD  
 Restituisce il cookie associato il `CComGITPtr` oggetto.  
  
```  
operator DWORD() const;
```  
  
### <a name="remarks"></a>Note  
 Il cookie è una variabile utilizzata per identificare un'interfaccia e il relativo percorso.  
  
##  <a name="revoke"></a>  CComGITPtr::Revoke  
 Chiamare questo metodo per rimuovere l'interfaccia corrente dalla tabella di interfaccia globale (GIT).  
  
```
HRESULT Revoke() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Rimuove l'interfaccia da GIT.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestore del marshalling con modello di threading Free](../../atl/atl-and-the-free-threaded-marshaler.md)   
 [Accesso alle interfacce tra apartment](http://msdn.microsoft.com/library/windows/desktop/ms682353)   
 [Quando usare la tabella di interfaccia globale](http://msdn.microsoft.com/library/windows/desktop/ms693729)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
