---
title: Compilatore avviso (livello 3) C4608 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4608
dev_langs:
- C++
helpviewer_keywords:
- C4608
ms.assetid: 8b8f5f28-8ce9-457e-9d3d-a8c0efce9b6a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5e2e1cfbfa5df5dbb77cf7a4e215d16a7c0d09a3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039686"
---
# <a name="compiler-warning-level-3-c4608"></a>Avviso del compilatore (livello 3) C4608

'union_member' è già stato inizializzato dal membro di un'altra unione nell'elenco degli inizializzatori, 'union_member'

Due membri della stessa unione sono stati inizializzati in un elenco di inizializzazione. È possibile accedere solo a un membro dell'unione.

L'esempio seguente genera C4608:

```
// C4608.cpp
// compile with: /W3 /c
class X {
public:
   X(char c) : m_i( c + 1), m_c(c) {}   // C4608
   // try the following line instead
   // X(char c) : m_c(c) {}

private:
   union {
      int m_i;
      char m_c;
   };
};

union Y {
public:
   Y(char * name) : m_number(0.3), m_string( name ) {} // C4608

private:
   double m_number;
   char * m_string;
};
```