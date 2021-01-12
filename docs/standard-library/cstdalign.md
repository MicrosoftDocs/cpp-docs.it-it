---
description: 'Altre informazioni su: &lt; cstdalign&gt;'
title: '&lt;cstdalign&gt;'
ms.date: 07/11/2019
f1_keywords:
- <cstdalign>
- __alignas_is_defined
- __alignof_is_defined
helpviewer_keywords:
- cstdalign header
- __alignas_is_defined
- __alignof_is_defined
ms.assetid: 9d570924-d299-4225-9a58-8c4c820f5903
ms.openlocfilehash: 7727f75ad0627c2a22b856631a776a2ee5426271
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126611"
---
# <a name="ltcstdaligngt"></a>&lt;cstdalign&gt;

In alcune implementazioni della libreria standard C++ questa intestazione include l'intestazione della libreria standard C \<stdalign.h> e aggiunge i nomi associati allo `std` spazio dei nomi. Poiché tale intestazione non è implementata in MSVC, l' \<cstdalign> intestazione definisce le macro `__alignas_is_defined` di compatibilità e `__alignof_is_defined` .

> [!NOTE]
> Poiché l' \<stdalign.h> intestazione definisce macro che sono parole chiave in C++, anche se non ha alcun effetto. L' \<stdalign.h> intestazione è deprecata in C++. L' \<cstdalign> intestazione è deprecata in c++ 17 ed è stata rimossa nello standard bozza c++ 20.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<cstdalign>

**Spazio dei nomi:** std

## <a name="macros"></a>Macro

| Macro | Descrizione |
| - | - |
| `__alignas_is_defined` | Una macro di compatibilità C che si espande alla costante Integer 1. |
| `__alignof_is_defined` | Una macro di compatibilità C che si espande alla costante Integer 1. |

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Panoramica della libreria standard C++](cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)
