---
title: Compilatore Warning (level 1) C4010
ms.date: 11/04/2016
f1_keywords:
- C4010
helpviewer_keywords:
- C4010
ms.assetid: d607a9ff-8f8f-45c0-b07b-3b2f439e5485
ms.openlocfilehash: 40c6724daf17c1c0b546bb7bc64bb704f732e8d6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386551"
---
# <a name="compiler-warning-level-1-c4010"></a>Compilatore Warning (level 1) C4010

commento a riga singola contiene il carattere di continuazione di riga

Un commento a riga singola, che è stato introdotto per / /, contiene una barra rovesciata (\\) che funge da un carattere di continuazione di riga. Il compilatore considera la riga successiva da una continuation e lo considera come un commento.

Alcune sintassi verso gli editor non indicano la riga che segue il carattere di continuazione come commento. Ignora in tutte le righe che causano il problema di colorazione della sintassi.

L'esempio seguente genera l'errore C4010:

```
// C4010.cpp
// compile with: /WX
int main() {
   // the next line is also a comment because of the backslash \
   int a = 3; // C4010
   a++;
}
```