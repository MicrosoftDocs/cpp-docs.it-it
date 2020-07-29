---
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
ms.openlocfilehash: 11acb4c7162a17ff763a574c27c186061ae476a7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211528"
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

## <a name="remarks"></a>Osservazioni

Verifica se un tipo è la base di un altro tipo.

Il primo modello verifica se un tipo è derivato da un tipo di base, che può produrre **`true`** o **`false`** . Il secondo modello verifica se un tipo è derivato da se stesso, che restituisce sempre **`false`** .

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

Nome                            | Descrizione
------------------------------- | --------------------------------------------------
[IsBaseOfStrict:: value](#value) | Indica se un tipo è la base di un altro tipo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsBaseOfStrict`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="isbaseofstrictvalue"></a><a name="value"></a>IsBaseOfStrict:: value

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const bool value = __is_base_of(Base, Derived);
```

### <a name="remarks"></a>Osservazioni

Indica se un tipo è la base di un altro tipo.

`value`è **`true`** se `Base` il tipo è una classe di base del tipo `Derived` ; in caso contrario, è **`false`** .
