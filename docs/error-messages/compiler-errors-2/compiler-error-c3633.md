---
title: Errore del compilatore C3633 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3633
dev_langs:
- C++
helpviewer_keywords:
- C3633
ms.assetid: 7d65babf-2191-4d67-a69f-f5c4c2ddf946
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aaa4712fb571d56166204655aff95153ac328ce6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46078270"
---
# <a name="compiler-error-c3633"></a>Errore del compilatore C3633

non è possibile definire 'member' come membro di 'type' gestito

Membri dati della classe di riferimento CLR non possono essere di un tipo non POD C++.  È possibile creare solo un'istanza di un tipo nativo di POD in un tipo CLR.  Ad esempio, un tipo POD non può contenere un costruttore di copia o un operatore di assegnazione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3633.

```
// C3633.cpp
// compile with: /clr /c
#pragma warning( disable : 4368 )

class A1 {
public:
   A1() { II = 0; }
   int II;
};

ref class B {
public:
   A1 a1;   // C3633
   A1 * a2;   // OK
   B() : a2( new A1 ) {}
    ~B() { delete a2; }
};
```
