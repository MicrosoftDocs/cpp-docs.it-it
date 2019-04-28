---
title: Classe CHandle
ms.date: 11/04/2016
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
ms.openlocfilehash: 19e761ea8eb133db55b4d24600f2a1fd01ac3e34
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245634"
---
# <a name="chandle-class"></a>Classe CHandle

Questa classe fornisce metodi per la creazione e utilizzo di un handle di oggetto.

## <a name="syntax"></a>Sintassi

```
class CHandle
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::CHandle](#chandle)|Costruttore.|
|[CHandle:: ~ CHandle](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::Attach](#attach)|Chiamare questo metodo per collegare il `CHandle` oggetto da un handle esistente.|
|[CHandle::Close](#close)|Chiamare questo metodo per chiudere un `CHandle` oggetto.|
|[CHandle::Detach](#detach)|Chiamare questo metodo per disconnettere un handle da un `CHandle` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::operator HANDLE](#operator_handle)|Restituisce il valore dell'handle stored.|
|[CHandle::operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHandle::m_h](#m_h)|La variabile membro che archivia l'handle.|

## <a name="remarks"></a>Note

Oggetto `CHandle` oggetto può essere usato ogni volta che è richiesto un handle: la differenza principale è che il `CHandle` oggetto verrà automaticamente eliminato.

> [!NOTE]
>  Alcune funzioni API userà NULL come un handle vuoto o non valido, mentre altri usano INVALID_HANDLE_VALUE. `CHandle` utilizza solo NULL e verrà considerata INVALID_HANDLE_VALUE un handle effettivo. Se si chiama un'API che può restituire INVALID_HANDLE_VALUE, è consigliabile controllare questo valore prima di chiamare [CHandle::Attach](#attach) oppure passarlo al `CHandle` costruttore e invece di passare NULL.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="attach"></a>  CHandle::Attach

Chiamare questo metodo per collegare il `CHandle` oggetto da un handle esistente.

```
void Attach(HANDLE h) throw();
```

### <a name="parameters"></a>Parametri

*h*<br/>
`CHandle` assumerà la proprietà del quadratino *h*.

### <a name="remarks"></a>Note

Assegna il `CHandle` dell'oggetto per il *h* gestire. Nelle build di debug, verrà generato un ATLASSERT se *h* è NULL. Non viene eseguito alcun altro controllo per quanto riguarda la validità dell'handle.

##  <a name="chandle"></a>  CHandle::CHandle

Costruttore.

```
CHandle() throw();
CHandle(CHandle& h) throw();
explicit CHandle(HANDLE h) throw();
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un handle esistente o `CHandle`.

### <a name="remarks"></a>Note

Crea un nuovo `CHandle` dell'oggetto, utilizzando facoltativamente un handle esistente o `CHandle` oggetto.

##  <a name="dtor"></a>  CHandle:: ~ CHandle

Distruttore.

```
~CHandle() throw();
```

### <a name="remarks"></a>Note

Libera la `CHandle` chiamando [CHandle::Close](#close).

##  <a name="close"></a>  CHandle::Close

Chiamare questo metodo per chiudere un `CHandle` oggetto.

```
void Close() throw();
```

### <a name="remarks"></a>Note

Chiude un handle oggetto aperto. Se l'handle è NULL, che può accadere se `Close` è già stato chiamato, verrà generato un ATLASSERT nelle build di debug.

##  <a name="detach"></a>  CHandle::Detach

Chiamare questo metodo per disconnettere un handle da un `CHandle` oggetto.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle in fase di scollegamento.

### <a name="remarks"></a>Note

Rilascia la proprietà dell'handle.

##  <a name="m_h"></a>  CHandle::m_h

La variabile membro che archivia l'handle.

```
HANDLE m_h;
```

##  <a name="operator_eq"></a>  CHandle::operator =

L'operatore di assegnazione.

```
CHandle& operator=(CHandle& h) throw();
```

### <a name="parameters"></a>Parametri

*h*<br/>
`CHandle` assumerà la proprietà del quadratino *h*.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al nuovo `CHandle` oggetto.

### <a name="remarks"></a>Note

Se il `CHandle` oggetto attualmente contiene un handle, verrà chiusa. Il `CHandle` dell'oggetto viene passato nell'avrà il relativo riferimento handle impostato su NULL. Ciò garantisce che due `CHandle` oggetti non conterrà mai lo stesso handle attivo.

##  <a name="operator_handle"></a>  CHandle::operator HANDLE

Restituisce il valore dell'handle stored.

```
operator HANDLE() const throw();
```

### <a name="remarks"></a>Note

Restituisce il valore archiviato [CHandle::m_h](#m_h).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
