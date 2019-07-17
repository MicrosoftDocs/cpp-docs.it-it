---
title: piecewise_contruct_t struttura
ms.date: 11/04/2016
f1_keywords:
- utility/std::piecewise_contruct_t
helpviewer_keywords:
- piecewise_contruct_t class
- piecewise_contruct_t structure
ms.openlocfilehash: 6a9a6af97ca5c7751d64cd1fa70c9d9eba87da7c
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268363"
---
# <a name="piecewisecontructt-structure"></a>piecewise_contruct_t struttura

Lo struct `piecewise_construct_t` è un tipo di struttura vuota usato per mantenere il costruttore separato e overload di funzioni. In particolare `pair` ha un costruttore con `piecewise_construct_t` come primo argomento, seguita da due `tuple` argomenti.

## <a name="syntax"></a>Sintassi

```cpp
struct piecewise_construct_t { explicit piecewise_construct_t() = default; };

inline constexpr piecewise_construct_t piecewise_construct{};
```
