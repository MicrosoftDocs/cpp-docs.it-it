---
description: 'Altre informazioni su: cancellation_token_registration Class'
title: Classe cancellation_token_registration
ms.date: 11/04/2016
f1_keywords:
- cancellation_token_registration
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration
- PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration::cancellation_token_registration
helpviewer_keywords:
- cancellation_token_registration class
ms.assetid: 823d63f4-7233-4d65-8976-6152ccf12d0e
ms.openlocfilehash: 1901e5132a9bad6849b1b00a6be63caf9afc9170
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172141"
---
# <a name="cancellation_token_registration-class"></a>Classe cancellation_token_registration

La classe `cancellation_token_registration` rappresenta una notifica di callback da `cancellation_token`. Quando il metodo `register` in `cancellation_token` viene utilizzato per ricevere la notifica dell'annullamento, un oggetto `cancellation_token_registration` viene restituito al callback come handle, in modo che da parte del chiamante possa essere richiesto di non eseguire più un callback specifico tramite l'utilizzo del metodo `deregister`.

## <a name="syntax"></a>Sintassi

```cpp
class cancellation_token_registration;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[cancellation_token_registration](#ctor)||
|[Distruttore ~ cancellation_token_registration](#dtor)||

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore! =](#operator_neq)||
|[operatore =](#operator_eq)||
|[operatore = =](#operator_eq_eq)||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`cancellation_token_registration`

## <a name="requirements"></a>Requisiti

**Intestazione:** pplcancellation_token. h

**Spazio dei nomi:** Concurrency

## <a name="cancellation_token_registration"></a><a name="dtor"></a> ~ cancellation_token_registration

```cpp
~cancellation_token_registration();
```

## <a name="cancellation_token_registration"></a><a name="ctor"></a> cancellation_token_registration

```cpp
cancellation_token_registration();

cancellation_token_registration(const cancellation_token_registration& _Src);

cancellation_token_registration(cancellation_token_registration&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Oggetto `cancellation_token_registration` da copiare o spostare.

## <a name="operator"></a><a name="operator_neq"></a> operatore! =

```cpp
bool operator!= (const cancellation_token_registration& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Oggetto `cancellation_token_registration` da confrontare.

### <a name="return-value"></a>Valore restituito

## <a name="operator"></a><a name="operator_eq"></a> operatore =

```cpp
cancellation_token_registration& operator= (const cancellation_token_registration& _Src);

cancellation_token_registration& operator= (cancellation_token_registration&& _Src);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>
Oggetto `cancellation_token_registration` da assegnare.

### <a name="return-value"></a>Valore restituito

## <a name="operator"></a><a name="operator_eq_eq"></a> operatore = =

```cpp
bool operator== (const cancellation_token_registration& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Oggetto `cancellation_token_registration` da confrontare.

### <a name="return-value"></a>Valore restituito

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
