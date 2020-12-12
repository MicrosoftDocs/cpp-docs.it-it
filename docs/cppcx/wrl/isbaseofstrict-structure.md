---
description: 'Altre informazioni su: Struttura IsBaseOfStrict'
title: IsBaseOfStrict (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::IsBaseOfStrict
- internal/Microsoft::WRL::Details::IsBaseOfStrict::value
helpviewer_keywords:
- Microsoft::WRL::Details::IsBaseOfStrict structure
- Microsoft::WRL::Details::IsBaseOfStrict::value constant
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
ms.openlocfilehash: bcdab9c4b6b5a2ab108b59d3127c08b53589e16a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298955"
---
# <a name="isbaseofstrict-structure"></a>IsBaseOfStrict (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename Base, typename Derived>
struct IsBaseOfStrict;

template <typename Base>
struct IsBaseOfStrict<Base, Base>;
```

### <a name="parameters"></a>Parametri

*Base*<br/>
Tipo di base.

*Derivato*<br/>
Tipo derivato.

## <a name="remarks"></a>Commenti

Verifica se un tipo è la base di un altro tipo.

Il primo modello verifica se un tipo è derivato da un tipo di base, che può produrre **`true`** o **`false`** . Il secondo modello verifica se un tipo è derivato da se stesso, che restituisce sempre **`false`** .

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

Nome                            | Description
------------------------------- | --------------------------------------------------
[IsBaseOfStrict:: value](#value) | Indica se un tipo è la base di un altro tipo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsBaseOfStrict`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="isbaseofstrictvalue"></a><a name="value"></a> IsBaseOfStrict:: value

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const bool value = __is_base_of(Base, Derived);
```

### <a name="remarks"></a>Commenti

Indica se un tipo è la base di un altro tipo.

`value` è **`true`** se `Base` il tipo è una classe di base del tipo `Derived` ; in caso contrario, è **`false`** .
