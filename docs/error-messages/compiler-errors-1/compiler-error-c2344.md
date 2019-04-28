---
title: Errore del compilatore C2344
ms.date: 11/04/2016
f1_keywords:
- C2344
helpviewer_keywords:
- C2344
ms.assetid: a84c7b37-c84e-4345-8691-c23abb2dc193
ms.openlocfilehash: d1ba3a0f975dbc96c9c6ca51a8dac89b5a614572
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62188172"
---
# <a name="compiler-error-c2344"></a>Errore del compilatore C2344

align(#): l'allineamento deve essere una potenza di due

Quando si usa la parola chiave [align](../../cpp/align-cpp.md) , il valore passato deve essere una potenza di due.

Ad esempio, il codice seguente genera l'errore C2344 perché 3 non è una potenza di due:

```
// C2344.cpp
// compile with: /c
__declspec(align(3)) int a;   // C2344
__declspec(align(4)) int b;   // OK
```