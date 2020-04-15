---
title: Classe CHandle
ms.date: 07/09/2019
f1_keywords:
- CHandle
- ATLBASE/ATL::CHandle
- ATLBASE/ATL::CHandle::CHandle
- ATLBASE/ATL::CHandle::Attach
- ATLBASE/ATL::CHandle::Close
- ATLBASE/ATL::CHandle::Detach
- ATLBASE/ATL::CHandle::m_h
helpviewer_keywords:
- CHandle class
ms.assetid: 883e9db5-40ec-4e29-9c74-4dd2ddd2e35d
ms.openlocfilehash: 7c72ded75298ed69efe73c1a81abf404545ea9b9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326930"
---
# <a name="chandle-class"></a>Classe CHandle

Questa classe fornisce metodi per la creazione e l'utilizzo di un oggetto handle.

## <a name="syntax"></a>Sintassi

```
class CHandle
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::CHandle](#chandle)|Costruttore.|
|[CHandle:: CHandle](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::Associare](#attach)|Chiamare questo metodo `CHandle` per associare l'oggetto a un handle esistente.|
|[CHandle::Chiudi](#close)|Chiamare questo metodo `CHandle` per chiudere un oggetto.|
|[CHandle::Detach](#detach)|Chiamare questo metodo per scollegare un handle da un `CHandle` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::operatore HANDLE](#operator_handle)|Restituisce il valore dell'handle archiviato.|
|[CHandle::operatore](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::m_h](#m_h)|Variabile membro che archivia l'handle.|

## <a name="remarks"></a>Osservazioni

Un `CHandle` oggetto può essere utilizzato ogni volta che è `CHandle` necessario un handle: la differenza principale è che l'oggetto verrà eliminato automaticamente.

> [!NOTE]
> Alcune funzioni API utilizzeranno NULL come handle vuoto o non valido, mentre altre usano INVALID_HANDLE_VALUE. `CHandle`utilizza solo NULL e tratterà INVALID_HANDLE_VALUE come un vero e proprio quadrati. Se si chiama un'API che può restituire INVALID_HANDLE_VALUE, è necessario verificare questo `CHandle` valore prima di chiamare [CHandle::Attach](#attach) o passarlo al costruttore e invece passare NULL.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="chandleattach"></a><a name="attach"></a>CHandle::Associare

Chiamare questo metodo `CHandle` per associare l'oggetto a un handle esistente.

```
void Attach(HANDLE h) throw();
```

### <a name="parameters"></a>Parametri

*H*<br/>
`CHandle`assumerà la proprietà dell'handle *h*.

### <a name="remarks"></a>Osservazioni

Assegna l'oggetto `CHandle` all'handle *h* e quindi chiama **h.Detach()**. Nelle build di debug, un ATLASSERT verrà generato se *h* è NULL. Non viene effettuato nessun altro controllo sulla validità dell'handle.

## <a name="chandlechandle"></a><a name="chandle"></a>CHandle::CHandle

Costruttore.

```
CHandle() throw();
CHandle(CHandle& h) throw();
explicit CHandle(HANDLE h) throw();
```

### <a name="parameters"></a>Parametri

*H*<br/>
Una maniglia `CHandle`esistente o .

### <a name="remarks"></a>Osservazioni

Crea un `CHandle` nuovo oggetto, utilizzando facoltativamente un handle o `CHandle` un oggetto esistente.

## <a name="chandlechandle"></a><a name="dtor"></a>CHandle:: CHandle

Distruttore.

```
~CHandle() throw();
```

### <a name="remarks"></a>Osservazioni

Libera l'oggetto `CHandle` chiamando [CHandle::Close](#close).

## <a name="chandleclose"></a><a name="close"></a>CHandle::Chiudi

Chiamare questo metodo `CHandle` per chiudere un oggetto.

```
void Close() throw();
```

### <a name="remarks"></a>Osservazioni

Chiude una maniglia di oggetto aperta. Se l'handle è NULL, che `Close` sarà il caso se è già stato chiamato, un ATLASSERT verrà generato nelle build di debug.

## <a name="chandledetach"></a><a name="detach"></a>CHandle::Detach

Chiamare questo metodo per scollegare un handle da un `CHandle` oggetto.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle scollegato.

### <a name="remarks"></a>Osservazioni

Rilascia la proprietà dell'handle.

## <a name="chandlem_h"></a><a name="m_h"></a>CHandle::m_h

Variabile membro che archivia l'handle.

```
HANDLE m_h;
```

## <a name="chandleoperator-"></a><a name="operator_eq"></a>CHandle::operatore

Operatore di assegnazione.

```
CHandle& operator=(CHandle& h) throw();
```

### <a name="parameters"></a>Parametri

*H*<br/>
`CHandle`assumerà la proprietà dell'handle *h*.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento `CHandle` al nuovo oggetto.

### <a name="remarks"></a>Osservazioni

Se `CHandle` l'oggetto contiene attualmente una maniglia, verrà chiuso. L'oggetto `CHandle` passato avrà il riferimento all'handle impostato su NULL. In questo modo `CHandle` due oggetti non conterranno mai lo stesso handle attivo.

## <a name="chandleoperator-handle"></a><a name="operator_handle"></a>CHandle::operatore HANDLE

Restituisce il valore dell'handle archiviato.

```
operator HANDLE() const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce il valore archiviato in [CHandle::m_h](#m_h).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
