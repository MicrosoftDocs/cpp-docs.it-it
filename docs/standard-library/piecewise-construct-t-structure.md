---
description: 'Altre informazioni su: struttura piecewise_contruct_t'
title: Struttura piecewise_contruct_t
ms.date: 11/04/2016
f1_keywords:
- utility/std::piecewise_contruct_t
helpviewer_keywords:
- piecewise_contruct_t class
- piecewise_contruct_t structure
ms.openlocfilehash: 7fefacff75b47c25cb9ae07cc894498eadb551df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340749"
---
# <a name="piecewise_contruct_t-structure"></a>Struttura piecewise_contruct_t

Lo struct `piecewise_construct_t` è un tipo di struttura vuoto utilizzato per evitare l'overload di funzioni e costruttori distinti. In particolare, `pair` dispone di un costruttore con `piecewise_construct_t` come primo argomento, seguito da due `tuple` argomenti.

## <a name="syntax"></a>Sintassi

```cpp
struct piecewise_construct_t { explicit piecewise_construct_t() = default; };

inline constexpr piecewise_construct_t piecewise_construct{};
```
