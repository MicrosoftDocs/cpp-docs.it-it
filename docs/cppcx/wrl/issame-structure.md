---
description: 'Ulteriori informazioni su: struttura'
title: IsSame (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::IsSame
- internal/Microsoft::WRL::Details::IsSame::value
helpviewer_keywords:
- Microsoft::WRL::Details::IsSame structure
- Microsoft::WRL::Details::IsSame::value constant
ms.assetid: 1eddbc3f-3cc5-434f-8495-e4477e1f868e
ms.openlocfilehash: b00e85f55fc80af2dd00dc20f090a7b18678f579
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298929"
---
# <a name="issame-structure"></a>IsSame (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T1, typename T2>
struct IsSame;

template <typename T1>
struct IsSame<T1, T1>;
```

### <a name="parameters"></a>Parametri

*T1*<br/>
Tipo.

*T2*<br/>
Un altro tipo.

## <a name="remarks"></a>Commenti

Verifica se un tipo specificato è uguale a un altro tipo specificato.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

Nome                    | Description
----------------------- | --------------------------------------------------
[Valore:: value](#value) | Indica se un tipo è uguale a un altro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsSame`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="issamevalue"></a><a name="value"></a> Valore:: value

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
template <typename T1, typename T2>
struct IsSame
{
    static const bool value = false;
};

template <typename T1>
struct IsSame<T1, T1>
{
    static const bool value = true;
};
```

### <a name="remarks"></a>Commenti

Indica se un tipo è uguale a un altro.

`value` indica **`true`** se i parametri del modello sono uguali e **`false`** se i parametri del modello sono diversi.
