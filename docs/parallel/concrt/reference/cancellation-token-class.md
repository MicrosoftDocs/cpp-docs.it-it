---
title: Classe cancellation_token
ms.date: 11/04/2016
f1_keywords:
- cancellation_token
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token::cancellation_token
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token::deregister_callback
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token::is_cancelable
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token::is_canceled
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token::none
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token::register_callback
helpviewer_keywords:
- cancellation_token class
ms.assetid: 2787df2b-e9d3-440e-bfd0-841a46a9835f
ms.openlocfilehash: 34743ce48510eec9d8f7862e5ed951a722932962
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142255"
---
# <a name="cancellation_token-class"></a>Classe cancellation_token

La classe `cancellation_token` rappresenta la possibilità di determinare se è stato richiesto l'annullamento di una determinata operazione. Un token specificato può essere associato a `task_group`, `structured_task_group` o a `task` per consentire l'annullamento implicito. Può inoltre essere sottoposto a polling per l'annullamento o disporre di un callback registrato se e quando l'oggetto `cancellation_token_source` associato viene annullato.

## <a name="syntax"></a>Sintassi

```cpp
class cancellation_token;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[cancellation_token](#ctor)||
|[distruttore ~ cancellation_token](#dtor)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[deregister_callback](#deregister_callback)|Rimuove un callback registrato in precedenza tramite il metodo `register` in base all'oggetto `cancellation_token_registration` restituito al momento della registrazione.|
|[is_cancelable](#is_cancelable)|Restituisce un'indicazione sull'eventuale possibilità di annullamento di questo token.|
|[is_canceled](#is_canceled)|Restituisce **true** se il token è stato annullato.|
|[nessuna](#none)|Restituisce un token di annullamento che non può mai essere soggetto all'annullamento.|
|[register_callback](#register_callback)|Registra una funzione di callback con il token. Il callback verrà eseguito se e quando il token viene annullato. Si noti che se il token è già stato annullato nel punto in cui viene chiamato questo metodo, il callback verrà eseguito immediatamente e in modo sincrono.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator!=](#operator_neq)||
|[operator=](#operator_eq)||
|[operator==](#operator_eq_eq)||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`cancellation_token`

## <a name="requirements"></a>Requisiti

**Intestazione:** pplcancellation_token. h

**Spazio dei nomi:** Concurrency

## <a name="dtor"></a>~ cancellation_token

```cpp
~cancellation_token();
```

## <a name="ctor"></a>cancellation_token

```cpp
cancellation_token(const cancellation_token& _Src);

cancellation_token(cancellation_token&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Cancellation_token da copiare o spostare.

## <a name="deregister_callback"></a>deregister_callback

Rimuove un callback registrato in precedenza tramite il metodo `register` in base all'oggetto `cancellation_token_registration` restituito al momento della registrazione.

```cpp
void deregister_callback(const cancellation_token_registration& _Registration) const;
```

### <a name="parameters"></a>Parametri

*_Registration*<br/>
L'oggetto `cancellation_token_registration` che corrisponde al callback di cui annullare la registrazione. Questo token deve essere stato restituito precedentemente da una chiamata al metodo `register`.

## <a name="is_cancelable"></a>is_cancelable

Restituisce un'indicazione sull'eventuale possibilità di annullamento di questo token.

```cpp
bool is_cancelable() const;
```

### <a name="return-value"></a>Valore restituito

Indicazione che segnala se il token può essere annullato o meno.

## <a name="is_canceled"></a>is_canceled

Restituisce **true** se il token è stato annullato.

```cpp
bool is_canceled() const;
```

### <a name="return-value"></a>Valore restituito

Il valore **true** se il token è stato annullato. in caso contrario, il valore è **false**.

## <a name="none"></a>nessuno

Restituisce un token di annullamento che non può mai essere soggetto all'annullamento.

```cpp
static cancellation_token none();
```

### <a name="return-value"></a>Valore restituito

Token di annullamento che non può essere annullato.

## <a name="operator_neq"></a>operatore! =

```cpp
bool operator!= (const cancellation_token& _Src) const;
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Oggetto `cancellation_token` da confrontare.

### <a name="return-value"></a>Valore restituito

## <a name="operator_eq"></a>operatore =

```cpp
cancellation_token& operator= (const cancellation_token& _Src);

cancellation_token& operator= (cancellation_token&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
`cancellation_token` da assegnare.

### <a name="return-value"></a>Valore restituito

## <a name="operator_eq_eq"></a>operatore = =

```cpp
bool operator== (const cancellation_token& _Src) const;
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Oggetto `cancellation_token` da confrontare.

### <a name="return-value"></a>Valore restituito

## <a name="register_callback"></a>register_callback

Registra una funzione di callback con il token. Il callback verrà eseguito se e quando il token viene annullato. Si noti che se il token è già stato annullato nel punto in cui viene chiamato questo metodo, il callback verrà eseguito immediatamente e in modo sincrono.

```cpp
template<typename _Function>
::Concurrency::cancellation_token_registration register_callback(const _Function& _Func) const;
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Tipo dell'oggetto funzione che verrà richiamato quando `cancellation_token` viene annullato.

*_Func*<br/>
Oggetto funzione che verrà richiamato quando `cancellation_token` viene annullato.

### <a name="return-value"></a>Valore restituito

Oggetto `cancellation_token_registration` che può essere utilizzato nel metodo `deregister` per annullare la registrazione di un callback registrato in precedenza ed evitare che venga eseguito. Il metodo genererà un'eccezione [invalid_operation](invalid-operation-class.md) se viene chiamata su un oggetto `cancellation_token` creato utilizzando il metodo [cancellation_token:: None](#none) .

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
