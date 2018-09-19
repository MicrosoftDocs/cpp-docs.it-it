---
title: Errore del compilatore C2619 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2619
dev_langs:
- C++
helpviewer_keywords:
- C2619
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3bbf372e615c727a619d83daa6b673490edc4172
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109158"
---
# <a name="compiler-error-c2619"></a>Errore del compilatore C2619

'identifier': membro dati statico non consentito in una struct o unione anonima

Un membro di una struct o unione anonima è dichiarato come `static`.

L'esempio seguente genera l'errore C2619 e illustra come risolverlo rimuovendo la parola chiave static.

```
// C2619.cpp
int main() {
   union { static int j; };  // C2619
   union { int j; };  // OK
}
```