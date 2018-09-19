---
title: Errore del compilatore C2344 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2344
dev_langs:
- C++
helpviewer_keywords:
- C2344
ms.assetid: a84c7b37-c84e-4345-8691-c23abb2dc193
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c560d1fcd250a83501579ec80768b4ba2de57f0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110217"
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