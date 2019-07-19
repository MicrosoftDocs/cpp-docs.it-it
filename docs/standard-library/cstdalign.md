---
title: '&lt;cstdalign&gt;'
ms.date: 07/11/2019
f1_keywords:
- <cstdalign>
- cstdalign
- __alignas_is_defined
- __alignof_is_defined
helpviewer_keywords:
- cstdalign header
- __alignas_is_defined
- __alignof_is_defined
ms.assetid: 9d570924-d299-4225-9a58-8c4c820f5903
ms.openlocfilehash: 603a590190c50495aa80f1b41a574149eb8f760a
ms.sourcegitcommit: 0867d648e0955ebad7260b5fbebfd6cd4d58f3c7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/19/2019
ms.locfileid: "68342840"
---
# <a name="ltcstdaligngt"></a>&lt;cstdalign&gt;

In alcune C++ implementazioni della libreria standard, questa intestazione include l'intestazione \<della libreria standard C stdalign. h > e aggiunge i nomi `std` associati allo spazio dei nomi. Poiché tale intestazione non è implementata in MSVC \<, l'intestazione di > cstdalign `__alignas_is_defined` definisce `__alignof_is_defined`le macro di compatibilità e.

> [!NOTE]
> Poiché l' \<intestazione di > stdalign. h definisce le macro che sono C++parole chiave in, incluso non ha alcun effetto. L' \<intestazione di > stdalign. h è deprecata C++in. L' \<intestazione di > cstdalign è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> cstdalign

**Spazio dei nomi:** std

## <a name="macros"></a>Macro

| Macro | Descrizione |
| - | - |
| `__alignas_is_defined` | Una macro di compatibilità C che si espande alla costante Integer 1. |
| `__alignof_is_defined` | Una macro di compatibilità C che si espande alla costante Integer 1. |

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[C++Panoramica della libreria standard](cpp-standard-library-overview.md)\
[Thread safety nella C++ libreria standard](thread-safety-in-the-cpp-standard-library.md)
