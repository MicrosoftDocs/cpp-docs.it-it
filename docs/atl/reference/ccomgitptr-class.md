---
title: CComGITPtr (classe)
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
ms.openlocfilehash: 230eeb1577189d2057e530e1df8ef99c611fb32b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327832"
---
# <a name="ccomgitptr-class"></a>CComGITPtr (classe)

Questa classe fornisce metodi per la gestione dei puntatori a interfaccia e della tabella di interfaccia globale (GIT).

## <a name="syntax"></a>Sintassi

```
template <class T>
class CComGITPtr
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del puntatore a interfaccia da archiviare nel GIT.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComGITPtr::CComGITPtr](#ccomgitptr)|Costruttore.|
|[CComGITPtr:: CComGITPtr](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComGITPtr::Attach](#attach)|Chiamare questo metodo per registrare il puntatore a interfaccia nella tabella di interfaccia globale (GIT).|
|[CComGITPtr::CopiaTo](#copyto)|Chiamare questo metodo per copiare l'interfaccia dalla tabella di interfaccia globale (GIT) al puntatore passato.|
|[CComGITPtr::Detach](#detach)|Chiamare questo metodo per dissociare l'interfaccia dall'oggetto. `CComGITPtr`|
|[CComGITPtr::GetCookie](#getcookie)|Chiamare questo metodo per restituire `CComGITPtr` il cookie dall'oggetto.|
|[CComGITPtr::Revoca](#revoke)|Chiamare questo metodo per rimuovere l'interfaccia dalla tabella di interfaccia globale (GIT).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComGITPtr::operator DWORD](#operator_dword)|Restituisce il `CComGITPtr` cookie dall'oggetto.|
|[CComGITPtr::operatore](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComGITPtr::m_dwCookie](#m_dwcookie)|Il cookie.|

## <a name="remarks"></a>Osservazioni

Gli oggetti che aggregano il gestore di marshalling a thread libero e devono utilizzare puntatori a interfaccia ottenuti da altri oggetti devono eseguire passaggi aggiuntivi per garantire che il marshalling delle interfacce venga eseguito correttamente. In genere questo comporta l'archiviazione dei puntatori a interfaccia nel GIT e ottenere il puntatore dal GIT ogni volta che viene utilizzato. La `CComGITPtr` classe viene fornita per facilitare l'utilizzo di puntatori a interfaccia archiviati nel GIT.

> [!NOTE]
> La funzionalità tabella interfaccia globale è disponibile solo in Windows 95 con DCOM versione 1.1 e successive, Windows 98, Windows NT 4.0 con Service Pack 3 e versioni successive e Windows 2000.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomgitptrattach"></a><a name="attach"></a>CComGITPtr::Attach

Chiamare questo metodo per registrare il puntatore a interfaccia nella tabella di interfaccia globale (GIT).

```
HRESULT Attach(T* p) throw();

HRESULT Attach(DWORD dwCookie) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Il puntatore a interfaccia da aggiungere al GIT.

*dwCookie (Cookie)*<br/>
Cookie utilizzato per identificare il puntatore a interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se il GIT non è valido o se il cookie è uguale a NULL.

## <a name="ccomgitptrccomgitptr"></a><a name="ccomgitptr"></a>CComGITPtr::CComGITPtr

Costruttore.

```
CComGITPtr() throw();
CComGITPtr(T* p);
CComGITPtr(const CComGITPtr& git);
explicit CComGITPtr(DWORD dwCookie) throw();
CComGITPtr(CComGITPtr&& rv);
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Un puntatore a interfaccia da archiviare nella tabella di interfaccia globale (GIT).

*Git*<br/>
[in] Riferimento a un `CComGITPtr` oggetto esistente.

*dwCookie (Cookie)*<br/>
[in] Cookie utilizzato per identificare il puntatore a interfaccia.

*Rv*<br/>
[in] Oggetto `CComGITPtr` di origine da cui spostare i dati.

### <a name="remarks"></a>Osservazioni

Crea un `CComGITPtr` nuovo oggetto, utilizzando `CComGITPtr` facoltativamente un oggetto esistente.

Il costruttore che utilizza *rv* è un costruttore di spostamento. I dati vengono spostati dall'origine, *rv*, quindi *rv* viene cancellato.

## <a name="ccomgitptrccomgitptr"></a><a name="dtor"></a>CComGITPtr:: CComGITPtr

Distruttore.

```
~CComGITPtr() throw();
```

### <a name="remarks"></a>Osservazioni

Rimuove l'interfaccia dalla tabella di interfaccia globale (GIT), utilizzando [CComGITPtr::Revoke](#revoke).

## <a name="ccomgitptrcopyto"></a><a name="copyto"></a>CComGITPtr::CopiaTo

Chiamare questo metodo per copiare l'interfaccia dalla tabella di interfaccia globale (GIT) al puntatore passato.

```
HRESULT CopyTo(T** pp) const throw();
```

### <a name="parameters"></a>Parametri

*Pp*<br/>
Puntatore che deve ricevere l'interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

L'interfaccia dal GIT viene copiata nel puntatore passato. Il puntatore deve essere rilasciato dal chiamante quando non è più necessario.

## <a name="ccomgitptrdetach"></a><a name="detach"></a>CComGITPtr::Detach

Chiamare questo metodo per dissociare l'interfaccia dall'oggetto. `CComGITPtr`

```
DWORD Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il `CComGITPtr` cookie dall'oggetto.

### <a name="remarks"></a>Osservazioni

Spetta al chiamante rimuovere l'interfaccia dal GIT, utilizzando [CComGITPtr::Revoke](#revoke).

## <a name="ccomgitptrgetcookie"></a><a name="getcookie"></a>CComGITPtr::GetCookie

Chiamare questo metodo per restituire `CComGITPtr` il cookie dall'oggetto.

```
DWORD GetCookie() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce il cookie.

### <a name="remarks"></a>Osservazioni

Il cookie è una variabile utilizzata per identificare un'interfaccia e la relativa posizione.

## <a name="ccomgitptrm_dwcookie"></a><a name="m_dwcookie"></a>CComGITPtr::m_dwCookie

Il cookie.

```
DWORD m_dwCookie;
```

### <a name="remarks"></a>Osservazioni

Il cookie è una variabile membro utilizzata per identificare un'interfaccia e la relativa posizione.

## <a name="ccomgitptroperator-"></a><a name="operator_eq"></a>CComGITPtr::operatore

Operatore di assegnazione.

```
CComGITPtr& operator= (T* p);
CComGITPtr& operator= (const CComGITPtr& git);
CComGITPtr& operator= (DWORD dwCookie);
CComGITPtr& operator= (CComGITPtr&& rv);
```

### <a name="parameters"></a>Parametri

*P*<br/>
[in] Puntatore a un'interfaccia.

*Git*<br/>
[in] Riferimento a un oggetto `CComGITPtr`.

*dwCookie (Cookie)*<br/>
[in] Cookie utilizzato per identificare il puntatore a interfaccia.

*Rv*<br/>
[in] Oggetto `CComGITPtr` da cui spostare i dati.

### <a name="return-value"></a>Valore restituito

Restituisce `CComGITPtr` l'oggetto aggiornato.

### <a name="remarks"></a>Osservazioni

Assegna un nuovo valore `CComGITPtr` a un oggetto, da un oggetto esistente o da un riferimento a una tabella di interfaccia globale.

## <a name="ccomgitptroperator-dword"></a><a name="operator_dword"></a>CComGITPtr::operator DWORD

Restituisce il cookie `CComGITPtr` associato all'oggetto.

```
operator DWORD() const;
```

### <a name="remarks"></a>Osservazioni

Il cookie è una variabile utilizzata per identificare un'interfaccia e la relativa posizione.

## <a name="ccomgitptrrevoke"></a><a name="revoke"></a>CComGITPtr::Revoca

Chiamare questo metodo per rimuovere l'interfaccia corrente dalla tabella di interfaccia globale (GIT).

```
HRESULT Revoke() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Rimuove l'interfaccia dal GIT.

## <a name="see-also"></a>Vedere anche

[Mare insieme maresciallo a thread liberoFree Threaded Marshaler](../../atl/atl-and-the-free-threaded-marshaler.md)<br/>
[Accesso alle interfacce tra gli appartamenti](/windows/win32/com/accessing-interfaces-across-apartments)<br/>
[Quando utilizzare la tabella di interfaccia globaleWhen to Use the Global Interface Table](/windows/win32/com/when-to-use-the-global-interface-table)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
