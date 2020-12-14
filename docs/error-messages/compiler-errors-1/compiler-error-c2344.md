---
description: 'Altre informazioni su: errore del compilatore C2344'
title: Errore del compilatore C2344
ms.date: 11/04/2016
f1_keywords:
- C2344
helpviewer_keywords:
- C2344
ms.assetid: a84c7b37-c84e-4345-8691-c23abb2dc193
ms.openlocfilehash: 1ad4f1808f407a9f654f5bbf3a022c2dc7b0b3ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234761"
---
# <a name="compiler-error-c2344"></a>Errore del compilatore C2344

align(#): l'allineamento deve essere una potenza di due

Quando si usa la parola chiave [align](../../cpp/align-cpp.md) , il valore passato deve essere una potenza di due.

Ad esempio, il codice seguente genera l'errore C2344 perché 3 non è una potenza di due:

```cpp
// C2344.cpp
// compile with: /c
__declspec(align(3)) int a;   // C2344
__declspec(align(4)) int b;   // OK
```
