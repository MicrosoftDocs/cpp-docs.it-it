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
ms.openlocfilehash: 71db5a1b52a7d7d5471c15591fb34d954b465d07
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371359"
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

*Derivata*<br/>
Tipo derivato.

## <a name="remarks"></a>Osservazioni

Verifica se un tipo è la base di un altro tipo.

Il primo modello verifica se un tipo è derivato da un tipo di base, che potrebbe restituire **true** o **false**. Il secondo modello verifica se un tipo è derivato da se stesso, che restituisce sempre **false**.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

Nome                            | Descrizione
------------------------------- | --------------------------------------------------
[IsBaseOfStrict::valore](#value) | Indica se un tipo è la base di un altro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsBaseOfStrict`

## <a name="requirements"></a>Requisiti

**Intestazione:** internal.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="isbaseofstrictvalue"></a><a name="value"></a>IsBaseOfStrict::valore

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const bool value = __is_base_of(Base, Derived);
```

### <a name="remarks"></a>Osservazioni

Indica se un tipo è la base di un altro.

`value`è **true** `Base` se type è una `Derived`classe base del tipo , altrimenti è **false**.
