---
title: Classe CComGITPtr
ms.date: 11/04/2016
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
helpviewer_keywords:
- CComGITPtr class
ms.assetid: af895acb-525a-4555-bb67-b241b7df515b
ms.openlocfilehash: 36ef105b79da51348a61767117b637992e1f8c47
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557170"
---
# <a name="ccomgitptr-class"></a>Classe CComGITPtr

Questa classe fornisce metodi per la gestione di puntatori a interfaccia e la tabella di interfaccia globale (GIT).

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComGITPtr
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo del puntatore a interfaccia da memorizzare in GIT.

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
|[CComGITPtr::CopyTo](#copyto)|Chiamare questo metodo per copiare l'interfaccia dalla tabella di interfaccia globale (GIT) per il puntatore passato.|
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

Gli oggetti che il gestore di marshalling a thread libero di aggregazione ed è necessario usare i puntatori di interfaccia ottenuti da altri oggetti devono eseguire passaggi aggiuntivi per garantire che le interfacce in modo corretto vengono effettuato il marshalling. In genere, ciò comporta l'archiviazione dei puntatori a interfaccia in GIT e recupero il puntatore del mouse da GIT, ogni volta che viene usata. La classe `CComGITPtr` viene fornito per poter utilizzare puntatori a interfaccia memorizzati in GIT.

> [!NOTE]
>  La struttura di tabella di interfaccia globale è disponibile solo in Windows 95 con DCOM versione 1.1 e versioni successive, Windows 98, Windows NT 4.0 con Service Pack 3 e versioni successive e Windows 2000.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="attach"></a>  CComGITPtr::Attach

Chiamare questo metodo per registrare il puntatore di interfaccia nella tabella di interfaccia globale (GIT).

```
HRESULT Attach(T* p) throw();

HRESULT Attach(DWORD dwCookie) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore a interfaccia da aggiungere a GIT.

*dwCookie*<br/>
Il cookie utilizzato per identificare il puntatore di interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

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

*p*<br/>
[in] Un puntatore a interfaccia da archiviare nella tabella di interfaccia globale (GIT).

*GIT*<br/>
[in] Un riferimento a un oggetto esistente `CComGITPtr` oggetto.

*dwCookie*<br/>
[in] Un cookie utilizzato per identificare il puntatore di interfaccia.

*RV*<br/>
[in] L'origine `CComGITPtr` per spostare i dati dall'oggetto.

### <a name="remarks"></a>Note

Crea un nuovo `CComGITPtr` dell'oggetto, utilizzando facoltativamente un'esistente `CComGITPtr` oggetto.

Il costruttore che usano *rv* è un costruttore di spostamento. I dati vengono spostati dall'origine, *rv*e quindi *rv* viene cancellato.

##  <a name="dtor"></a>  CComGITPtr:: ~ CComGITPtr

Distruttore.

```
~CComGITPtr() throw();
```

### <a name="remarks"></a>Note

Rimuove l'interfaccia dalla tabella di interfaccia globale (GIT), usando [CComGITPtr::Revoke](#revoke).

##  <a name="copyto"></a>  CComGITPtr::CopyTo

Chiamare questo metodo per copiare l'interfaccia dalla tabella di interfaccia globale (GIT) per il puntatore passato.

```
HRESULT CopyTo(T** pp) const throw();
```

### <a name="parameters"></a>Parametri

*profilo di porta*<br/>
Il puntatore che deve ricevere l'interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

L'interfaccia da GIT viene copiato il puntatore passato. Il puntatore deve essere rilasciato dal chiamante quando non è più necessaria.

##  <a name="detach"></a>  CComGITPtr::Detach

Chiamare questo metodo per l'interfaccia da dissociare il `CComGITPtr` oggetto.

```
DWORD Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il cookie dal `CComGITPtr` oggetto.

### <a name="remarks"></a>Note

È compito del chiamante per rimuovere l'interfaccia da GIT, usando [CComGITPtr::Revoke](#revoke).

##  <a name="getcookie"></a>  CComGITPtr::GetCookie

Chiamare questo metodo per restituire il cookie dal `CComGITPtr` oggetto.

```
DWORD GetCookie() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il cookie.

### <a name="remarks"></a>Note

Il cookie è una variabile usata per identificare un'interfaccia e il relativo percorso.

##  <a name="m_dwcookie"></a>  CComGITPtr::m_dwCookie

Il cookie.

```
DWORD m_dwCookie;
```

### <a name="remarks"></a>Note

Il cookie è una variabile membro usata per identificare un'interfaccia e il relativo percorso.

##  <a name="operator_eq"></a>  CComGITPtr::operator =

L'operatore di assegnazione.

```
CComGITPtr& operator= (T* p);
CComGITPtr& operator= (const CComGITPtr& git);
CComGITPtr& operator= (DWORD dwCookie);
CComGITPtr& operator= (CComGITPtr&& rv);
```

### <a name="parameters"></a>Parametri

*p*<br/>
[in] Un puntatore a un'interfaccia.

*GIT*<br/>
[in] Un riferimento a un `CComGITPtr` oggetto.

*dwCookie*<br/>
[in] Un cookie utilizzato per identificare il puntatore di interfaccia.

*RV*<br/>
[in] Il `CComGITPtr` spostare dati da.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CComGITPtr` oggetto.

### <a name="remarks"></a>Note

Assegna un nuovo valore per un `CComGITPtr` oggetto, da un oggetto esistente o da un riferimento a una tabella di interfaccia globale.

##  <a name="operator_dword"></a>  CComGITPtr::operator DWORD

Restituisce il cookie associato il `CComGITPtr` oggetto.

```
operator DWORD() const;
```

### <a name="remarks"></a>Note

Il cookie è una variabile usata per identificare un'interfaccia e il relativo percorso.

##  <a name="revoke"></a>  CComGITPtr::Revoke

Chiamare questo metodo per rimuovere l'interfaccia corrente dalla tabella di interfaccia globale (GIT).

```
HRESULT Revoke() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Rimuove l'interfaccia da GIT.

## <a name="see-also"></a>Vedere anche

[Gestore del marshalling a thread libero](../../atl/atl-and-the-free-threaded-marshaler.md)<br/>
[Accesso alle interfacce tra apartment](/windows/desktop/com/accessing-interfaces-across-apartments)<br/>
[Quando usare la tabella di interfaccia globale](/windows/desktop/com/when-to-use-the-global-interface-table)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
