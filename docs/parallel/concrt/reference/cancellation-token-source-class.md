---
description: 'Altre informazioni su: cancellation_token_source Class'
title: Classe cancellation_token_source
ms.date: 11/04/2016
f1_keywords:
- cancellation_token_source
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::cancellation_token_source
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::cancel
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::create_linked_source
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::get_token
helpviewer_keywords:
- cancellation_token_source class
ms.assetid: 3548b1a0-12b0-4334-95db-4bf57141c066
ms.openlocfilehash: e36d1097f43c22d8274bcd767f2b521ae5b5dba0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172128"
---
# <a name="cancellation_token_source-class"></a>Classe cancellation_token_source

La classe `cancellation_token_source` rappresenta la possibilità di annullare una determinata operazione annullabile.

## <a name="syntax"></a>Sintassi

```cpp
class cancellation_token_source;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[cancellation_token_source](#ctor)|Di overload. Costruisce un nuovo `cancellation_token_source`. L'origine può essere utilizzata per contrassegnare l'annullamento di una determinata operazione annullabile.|
|[distruttore ~ cancellation_token_source](#dtor)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[cancel](#cancel)|Annulla il token. Qualsiasi `task_group`, `structured_task_group` o `task` che utilizza il token viene annullato al momento della chiamata e genera un'eccezione nel punto di interruzione successivo.|
|[create_linked_source](#create_linked_source)|Di overload. Crea un `cancellation_token_source` che viene annullato quando il token fornito viene annullato.|
|[get_token](#get_token)|Restituisce un token di annullamento associato a questa origine. Il token restituito può essere sottoposto a polling per l'annullamento o fornire un callback se e quando si verifica l'annullamento.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore! =](#operator_neq)||
|[operatore =](#operator_eq)||
|[operatore = =](#operator_eq_eq)||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`cancellation_token_source`

## <a name="requirements"></a>Requisiti

**Intestazione:** pplcancellation_token. h

**Spazio dei nomi:** Concurrency

## <a name="cancellation_token_source"></a><a name="dtor"></a> ~ cancellation_token_source

```cpp
~cancellation_token_source();
```

## <a name="cancel"></a><a name="cancel"></a> Annulla

Annulla il token. Qualsiasi `task_group`, `structured_task_group` o `task` che utilizza il token viene annullato al momento della chiamata e genera un'eccezione nel punto di interruzione successivo.

```cpp
void cancel() const;
```

## <a name="cancellation_token_source"></a><a name="ctor"></a> cancellation_token_source

Costruisce un nuovo `cancellation_token_source`. L'origine può essere utilizzata per contrassegnare l'annullamento di una determinata operazione annullabile.

```cpp
cancellation_token_source();

cancellation_token_source(const cancellation_token_source& _Src);

cancellation_token_source(cancellation_token_source&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Oggetto da copiare o spostare.

## <a name="create_linked_source"></a><a name="create_linked_source"></a> create_linked_source

Crea un `cancellation_token_source` che viene annullato quando il token fornito viene annullato.

```cpp
static cancellation_token_source create_linked_source(
    cancellation_token& _Src);

template<typename _Iter>
static cancellation_token_source create_linked_source(_Iter _Begin, _Iter _End);
```

### <a name="parameters"></a>Parametri

*_Iter*<br/>
Tipo di iteratore.

*_Src*<br/>
Token il cui annullamento determina l'annullamento del token restituito. Si noti che l'origine del token restituita può anche essere annullata indipendentemente dall'origine contenuta nel parametro.

*_Begin*<br/>
Iteratore della libreria standard C++ corrispondente all'inizio dell'intervallo dei token da ascoltare per l'annullamento.

*_End*<br/>
Iteratore della libreria standard C++ che corrisponde alla fine dell'intervallo dei token da ascoltare per l'annullamento di.

### <a name="return-value"></a>Valore restituito

`cancellation_token_source` che viene annullato quando il token fornito dal parametro `_Src` viene annullato.

## <a name="get_token"></a><a name="get_token"></a> get_token

Restituisce un token di annullamento associato a questa origine. Il token restituito può essere sottoposto a polling per l'annullamento o fornire un callback se e quando si verifica l'annullamento.

```cpp
cancellation_token get_token() const;
```

### <a name="return-value"></a>Valore restituito

Token di annullamento associato a questa origine.

## <a name="operator"></a><a name="operator_neq"></a> operatore! =

```cpp
bool operator!= (const cancellation_token_source& _Src) const;
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Operando.

### <a name="return-value"></a>Valore restituito

## <a name="operator"></a><a name="operator_eq"></a> operatore =

```cpp
cancellation_token_source& operator= (const cancellation_token_source& _Src);

cancellation_token_source& operator= (cancellation_token_source&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Operando.

### <a name="return-value"></a>Valore restituito

## <a name="operator"></a><a name="operator_eq_eq"></a> operatore = =

```cpp
bool operator== (const cancellation_token_source& _Src) const;
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Operando.

### <a name="return-value"></a>Valore restituito

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
