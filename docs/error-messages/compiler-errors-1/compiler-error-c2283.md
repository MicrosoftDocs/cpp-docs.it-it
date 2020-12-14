---
description: 'Altre informazioni su: errore del compilatore C2283'
title: Errore del compilatore C2283
ms.date: 11/04/2016
f1_keywords:
- C2283
helpviewer_keywords:
- C2283
ms.assetid: 8a5b3175-b480-4598-a1f7-0b50504c5caa
ms.openlocfilehash: dab8688623962051759f9f4be84f5831b58a700f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294977"
---
# <a name="compiler-error-c2283"></a>Errore del compilatore C2283

'identifier': identificatore pure o identificatore di override abstract non consentito per struct senza nome

Una funzione membro di una struttura o di una classe senza nome è dichiarata in modo non valido con un identificatore pure.

L'esempio seguente genera l'errore C2283:

```cpp
// C2283.cpp
// compile with: /c
struct {
   virtual void func() = 0;   // C2283
};
struct T {
   virtual void func() = 0;   // OK
};
```
