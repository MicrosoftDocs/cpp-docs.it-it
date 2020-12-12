---
description: 'Altre informazioni su: struttura monostato'
title: Struttura monostate
ms.date: 04/04/2019
f1_keywords:
- variant/std::monostate
helpviewer_keywords:
- monostate struct
ms.openlocfilehash: 93b21f399761970129a495590e0821aa911a0408
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115157"
---
# <a name="monostate-struct"></a>Struttura monostate

La classe monostate funge da tipo alternativo per una variante per rendere il tipo Variant predefinito costruibile.

## <a name="syntax"></a>Sintassi

```cpp
struct monostate;

constexpr bool operator<(monostate, monostate) noexcept;
constexpr bool operator>(monostate, monostate) noexcept;
constexpr bool operator<=(monostate, monostate) noexcept;
constexpr bool operator>=(monostate, monostate) noexcept;
constexpr bool operator==(monostate, monostate) noexcept;
constexpr bool operator!=(monostate, monostate) noexcept;
```
