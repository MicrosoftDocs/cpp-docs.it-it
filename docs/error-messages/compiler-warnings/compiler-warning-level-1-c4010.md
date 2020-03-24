---
title: Avviso del compilatore (livello 1) C4010
ms.date: 11/04/2016
f1_keywords:
- C4010
helpviewer_keywords:
- C4010
ms.assetid: d607a9ff-8f8f-45c0-b07b-3b2f439e5485
ms.openlocfilehash: 6045d49ee34f837ad9f22bac5b2b43b75a998f7c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164690"
---
# <a name="compiler-warning-level-1-c4010"></a>Avviso del compilatore (livello 1) C4010

Commento a riga singola contenente il carattere di continuazione di riga

Un commento a riga singola, introdotto da//, contiene una barra rovesciata (\\) che funge da carattere di continuazione di riga. Il compilatore considera la riga successiva come una continuazione e la considera come un commento.

Alcuni editor diretti alla sintassi non indicano la riga che segue il carattere di continuazione come commento. Ignora la colorazione della sintassi in qualsiasi riga che genera questo avviso.

L'esempio seguente genera l'C4010:

```cpp
// C4010.cpp
// compile with: /WX
int main() {
   // the next line is also a comment because of the backslash \
   int a = 3; // C4010
   a++;
}
```
