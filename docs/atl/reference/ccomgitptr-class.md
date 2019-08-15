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
ms.openlocfilehash: 00265cc445191a5a539ab21d6f64b255849495e9
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497269"
---
# <a name="ccomgitptr-class"></a>Classe CComGITPtr

Questa classe fornisce metodi per gestire i puntatori di interfaccia e la tabella di interfaccia globale (GIT).

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComGITPtr
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del puntatore a interfaccia da archiviare in GIT.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComGITPtr::CComGITPtr](#ccomgitptr)|Costruttore.|
|[CComGITPtr:: ~ CComGITPtr](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComGITPtr::Attach](#attach)|Chiamare questo metodo per registrare il puntatore di interfaccia nella tabella di interfaccia globale (GIT).|
|[CComGITPtr::CopyTo](#copyto)|Chiamare questo metodo per copiare l'interfaccia dalla tabella di interfaccia globale (GIT) al puntatore passato.|
|[CComGITPtr::Detach](#detach)|Chiamare questo metodo per annullare l'associazione dell'interfaccia dall' `CComGITPtr` oggetto.|
|[CComGITPtr::GetCookie](#getcookie)|Chiamare questo metodo per restituire il cookie dall' `CComGITPtr` oggetto.|
|[CComGITPtr::Revoke](#revoke)|Chiamare questo metodo per rimuovere l'interfaccia dalla tabella di interfaccia globale (GIT).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComGITPtr:: operator DWORD](#operator_dword)|Restituisce il cookie dall' `CComGITPtr` oggetto.|
|[CComGITPtr:: operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CComGITPtr::m_dwCookie](#m_dwcookie)|Cookie.|

## <a name="remarks"></a>Note

Gli oggetti che aggregano il gestore di marshalling a thread libero e che devono usare i puntatori di interfaccia ottenuti da altri oggetti devono eseguire passaggi aggiuntivi per garantire che le interfacce siano sottoposte correttamente a marshalling. In genere ciò comporta l'archiviazione dei puntatori di interfaccia in GIT e il recupero del puntatore dal GIT ogni volta che viene usato. La classe `CComGITPtr` viene fornita per consentire l'utilizzo di puntatori di interfaccia archiviati in git.

> [!NOTE]
>  La funzionalità Global Interface Table è disponibile solo in Windows 95 con DCOM versione 1,1 e successive, Windows 98, Windows NT 4,0 con Service Pack 3 e versioni successive e Windows 2000.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="attach"></a>CComGITPtr:: Connetti

Chiamare questo metodo per registrare il puntatore di interfaccia nella tabella di interfaccia globale (GIT).

```
HRESULT Attach(T* p) throw();

HRESULT Attach(DWORD dwCookie) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore di interfaccia da aggiungere a GIT.

*dwCookie*<br/>
Cookie utilizzato per identificare il puntatore a interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

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
in Puntatore a un'interfaccia da archiviare nella tabella di interfaccia globale (GIT).

*git*<br/>
in Riferimento a un oggetto esistente `CComGITPtr` .

*dwCookie*<br/>
in Cookie utilizzato per identificare il puntatore a interfaccia.

*rv*<br/>
in Oggetto di `CComGITPtr` origine da cui spostare i dati.

### <a name="remarks"></a>Note

Crea un nuovo `CComGITPtr` oggetto, usando facoltativamente un oggetto `CComGITPtr` esistente.

Il costruttore che utilizza *RV* è un costruttore di spostamento. I dati vengono spostati dall'origine, *RV*e quindi *RV* viene cancellato.

##  <a name="dtor"></a>CComGITPtr:: ~ CComGITPtr

Distruttore.

```
~CComGITPtr() throw();
```

### <a name="remarks"></a>Note

Rimuove l'interfaccia dalla tabella di interfaccia globale (GIT) utilizzando [CComGITPtr:: Revoke](#revoke).

##  <a name="copyto"></a>  CComGITPtr::CopyTo

Chiamare questo metodo per copiare l'interfaccia dalla tabella di interfaccia globale (GIT) al puntatore passato.

```
HRESULT CopyTo(T** pp) const throw();
```

### <a name="parameters"></a>Parametri

*pp*<br/>
Puntatore che deve ricevere l'interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Note

L'interfaccia di GIT viene copiata nel puntatore passato. Il puntatore deve essere rilasciato dal chiamante quando non è più necessario.

##  <a name="detach"></a>  CComGITPtr::Detach

Chiamare questo metodo per annullare l'associazione dell'interfaccia dall' `CComGITPtr` oggetto.

```
DWORD Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il cookie dall' `CComGITPtr` oggetto.

### <a name="remarks"></a>Note

Il chiamante deve rimuovere l'interfaccia da GIT usando [CComGITPtr:: Revoke](#revoke).

##  <a name="getcookie"></a>  CComGITPtr::GetCookie

Chiamare questo metodo per restituire il cookie dall' `CComGITPtr` oggetto.

```
DWORD GetCookie() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il cookie.

### <a name="remarks"></a>Note

Il cookie è una variabile usata per identificare un'interfaccia e la relativa posizione.

##  <a name="m_dwcookie"></a>  CComGITPtr::m_dwCookie

Cookie.

```
DWORD m_dwCookie;
```

### <a name="remarks"></a>Note

Il cookie è una variabile membro usata per identificare un'interfaccia e la relativa posizione.

##  <a name="operator_eq"></a>CComGITPtr:: operator =

Operatore di assegnazione.

```
CComGITPtr& operator= (T* p);
CComGITPtr& operator= (const CComGITPtr& git);
CComGITPtr& operator= (DWORD dwCookie);
CComGITPtr& operator= (CComGITPtr&& rv);
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore a un'interfaccia.

*git*<br/>
[in] Riferimento a un oggetto `CComGITPtr`.

*dwCookie*<br/>
in Cookie utilizzato per identificare il puntatore a interfaccia.

*rv*<br/>
in Oggetto `CComGITPtr` da cui spostare i dati.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CComGITPtr` aggiornato.

### <a name="remarks"></a>Note

Assegna un nuovo valore a un `CComGITPtr` oggetto, da un oggetto esistente o da un riferimento a una tabella di interfaccia globale.

##  <a name="operator_dword"></a>CComGITPtr:: operator DWORD

Restituisce il cookie associato `CComGITPtr` all'oggetto.

```
operator DWORD() const;
```

### <a name="remarks"></a>Note

Il cookie è una variabile usata per identificare un'interfaccia e la relativa posizione.

##  <a name="revoke"></a>  CComGITPtr::Revoke

Chiamare questo metodo per rimuovere l'interfaccia corrente dalla tabella di interfaccia globale (GIT).

```
HRESULT Revoke() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Note

Rimuove l'interfaccia da GIT.

## <a name="see-also"></a>Vedere anche

[Gestore di marshalling a thread libero](../../atl/atl-and-the-free-threaded-marshaler.md)<br/>
[Accesso alle interfacce tra gli Apartment](/windows/win32/com/accessing-interfaces-across-apartments)<br/>
[Quando usare la tabella dell'interfaccia globale](/windows/win32/com/when-to-use-the-global-interface-table)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
