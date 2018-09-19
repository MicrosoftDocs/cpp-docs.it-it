---
title: Errore del compilatore C2575 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2575
dev_langs:
- C++
helpviewer_keywords:
- C2575
ms.assetid: 9eb45706-37ef-4481-b373-6d193ba13634
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 321c226cf9edcb0860abb6917c6cff67a6df348d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46052036"
---
# <a name="compiler-error-c2575"></a>Errore del compilatore C2575

'identifier': solo funzioni membro e basi possono essere virtuali

Una funzione globale o una classe viene dichiarata `virtual`. ma questa operazione non è consentita.

L'esempio seguente genera l'errore C2575:

```
// C2575.cpp
// compile with: /c
virtual void func() {}   // C2575

void func2() {}
struct A {
   virtual void func2(){}
};
```