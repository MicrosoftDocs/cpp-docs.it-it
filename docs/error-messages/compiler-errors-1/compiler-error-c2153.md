---
title: Errore del compilatore C2153 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2153
dev_langs:
- C++
helpviewer_keywords:
- C2153
ms.assetid: cfc50cb7-9a0f-4b5b-879a-d419c99f7be1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bbb3283ff4d27b6c939434ac3df8f8c1febf0eb3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051425"
---
# <a name="compiler-error-c2153"></a>Errore del compilatore C2153

le costanti esadecimali devono avere almeno una cifra esadecimale

Le costanti esadecimali 0x, 0x e \x nejsou platné. Almeno una cifra esadecimale deve seguire x o X.

L'esempio seguente genera l'errore C2153:

```
// C2153.cpp
int main() {
   int a= 0x;    // C2153
   int b= 0xA;   // OK
}
```