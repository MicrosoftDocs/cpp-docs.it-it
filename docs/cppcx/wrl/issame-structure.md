---
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
ms.openlocfilehash: fcaf33309521b44163022e0ffa9b1e03e53e2551
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371337"
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

## <a name="remarks"></a>Osservazioni

Verifica se un tipo specificato è uguale a un altro tipo specificato.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

Nome                    | Descrizione
----------------------- | --------------------------------------------------
[IsSame::valore](#value) | Indica se un tipo è uguale a un altro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsSame`

## <a name="requirements"></a>Requisiti

**Intestazione:** internal.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="issamevalue"></a><a name="value"></a>IsSame::valore

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

### <a name="remarks"></a>Osservazioni

Indica se un tipo è uguale a un altro.

`value`è **true** se i parametri di modello sono uguali e **false** se i parametri di modello sono diversi.
