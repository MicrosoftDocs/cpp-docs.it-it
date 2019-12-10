---
title: Avviso del compilatore (livello 3) C4608
ms.date: 11/04/2016
f1_keywords:
- C4608
helpviewer_keywords:
- C4608
ms.assetid: 8b8f5f28-8ce9-457e-9d3d-a8c0efce9b6a
ms.openlocfilehash: 0e828c684bcaefee460495c793a1a1e3778dd2e3
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991916"
---
# <a name="compiler-warning-level-3-c4608"></a>Avviso del compilatore (livello 3) C4608

'union_member' è già stato inizializzato dal membro di un'altra unione nell'elenco degli inizializzatori, 'union_member'

Due membri della stessa unione sono stati inizializzati in un elenco di inizializzazione. È possibile accedere solo a un membro dell'unione.

L'esempio seguente genera C4608:

```cpp
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
