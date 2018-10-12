---
title: IsSame (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::IsSame
- internal/Microsoft::WRL::Details::IsSame::value
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::IsSame structure
- Microsoft::WRL::Details::IsSame::value constant
ms.assetid: 1eddbc3f-3cc5-434f-8495-e4477e1f868e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2af59860016835f8e8dfddc9d0a77204ff866bd3
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161853"
---
# <a name="issame-structure"></a>IsSame (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

## <a name="remarks"></a>Note

Consente di verificare se un tipo specificato è uguale a un altro tipo specificato.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

nome                    | Descrizione
----------------------- | --------------------------------------------------
[Issame:: value](#value) | Indica se un tipo è uguale a un altro.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IsSame`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Namespace:** Microsoft::WRL::Details

## <a name="value"></a>Issame:: value

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

### <a name="remarks"></a>Note

Indica se un tipo è uguale a un altro.

`value` viene **true** se i parametri del modello sono gli stessi, e **false** se i parametri del modello sono diversi.
