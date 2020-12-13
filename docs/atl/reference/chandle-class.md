---
description: 'Altre informazioni su: classe CHandle'
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
ms.openlocfilehash: 01c3b281daf829bc6488df35114c6cb853640ed1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141674"
---
# <a name="chandle-class"></a>Classe CHandle

Questa classe fornisce metodi per la creazione e l'utilizzo di un oggetto handle.

## <a name="syntax"></a>Sintassi

```
class CHandle
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHandle:: CHandle](#chandle)|Costruttore.|
|[CHandle:: ~ CHandle](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHandle:: Connetti](#attach)|Chiamare questo metodo per alleghi l' `CHandle` oggetto a un handle esistente.|
|[CHandle:: Close](#close)|Chiamare questo metodo per chiudere un `CHandle` oggetto.|
|[CHandle::D etach](#detach)|Chiamare questo metodo per scollegare un handle da un `CHandle` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[HANDLE CHandle:: operator](#operator_handle)|Restituisce il valore dell'handle archiviato.|
|[CHandle:: operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CHandle:: m_h](#m_h)|Variabile membro che archivia l'handle.|

## <a name="remarks"></a>Commenti

Un `CHandle` oggetto può essere usato ogni volta che è necessario un handle: la differenza principale consiste nel fatto che l' `CHandle` oggetto verrà eliminato automaticamente.

> [!NOTE]
> Alcune funzioni API utilizzeranno NULL come handle vuoto o non valido, mentre altre useranno INVALID_HANDLE_VALUE. `CHandle` USA solo NULL e considererà INVALID_HANDLE_VALUE come un vero e proprio handle. Se si chiama un'API che può restituire INVALID_HANDLE_VALUE, è necessario verificare questo valore prima di chiamare [CHandle:: Connetti](#attach) o passarlo al `CHandle` costruttore e passare invece null.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="chandleattach"></a><a name="attach"></a> CHandle:: Connetti

Chiamare questo metodo per alleghi l' `CHandle` oggetto a un handle esistente.

```cpp
void Attach(HANDLE h) throw();
```

### <a name="parameters"></a>Parametri

*h*<br/>
`CHandle` assume la proprietà dell'handle *h*.

### <a name="remarks"></a>Commenti

Assegna l' `CHandle` oggetto all'handle *h* , quindi chiama **h. Detach ()**. Nelle compilazioni di debug, verrà generato un ATLASSERT se *h* è null. Non vengono eseguite altre verifiche per quanto riguarda la validità dell'handle.

## <a name="chandlechandle"></a><a name="chandle"></a> CHandle:: CHandle

Costruttore.

```
CHandle() throw();
CHandle(CHandle& h) throw();
explicit CHandle(HANDLE h) throw();
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle esistente o `CHandle` .

### <a name="remarks"></a>Commenti

Crea un nuovo `CHandle` oggetto, usando facoltativamente un handle o un `CHandle` oggetto esistente.

## <a name="chandlechandle"></a><a name="dtor"></a> CHandle:: ~ CHandle

Distruttore.

```
~CHandle() throw();
```

### <a name="remarks"></a>Commenti

Libera l' `CHandle` oggetto chiamando [CHandle:: Close](#close).

## <a name="chandleclose"></a><a name="close"></a> CHandle:: Close

Chiamare questo metodo per chiudere un `CHandle` oggetto.

```cpp
void Close() throw();
```

### <a name="remarks"></a>Commenti

Chiude un handle di oggetto aperto. Se l'handle è NULL, che sarà il caso se `Close` è già stato chiamato, verrà generato un ATLASSERT nelle compilazioni di debug.

## <a name="chandledetach"></a><a name="detach"></a> CHandle::D etach

Chiamare questo metodo per scollegare un handle da un `CHandle` oggetto.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle che viene scollegato.

### <a name="remarks"></a>Commenti

Rilascia la proprietà dell'handle.

## <a name="chandlem_h"></a><a name="m_h"></a> CHandle:: m_h

Variabile membro che archivia l'handle.

```
HANDLE m_h;
```

## <a name="chandleoperator-"></a><a name="operator_eq"></a> CHandle:: operator =

Operatore di assegnazione.

```
CHandle& operator=(CHandle& h) throw();
```

### <a name="parameters"></a>Parametri

*h*<br/>
`CHandle` assume la proprietà dell'handle *h*.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al nuovo `CHandle` oggetto.

### <a name="remarks"></a>Commenti

Se l' `CHandle` oggetto contiene attualmente un handle, verrà chiuso. Il `CHandle` riferimento all'oggetto passato verrà impostato su null. In questo modo si garantisce che due `CHandle` oggetti non contengano mai lo stesso handle attivo.

## <a name="chandleoperator-handle"></a><a name="operator_handle"></a> HANDLE CHandle:: operator

Restituisce il valore dell'handle archiviato.

```
operator HANDLE() const throw();
```

### <a name="remarks"></a>Commenti

Restituisce il valore archiviato in [CHandle:: m_h](#m_h).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
