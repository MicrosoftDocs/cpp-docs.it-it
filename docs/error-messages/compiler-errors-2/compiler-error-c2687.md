---
title: Errore del compilatore C2687
ms.date: 11/04/2016
f1_keywords:
- C2687
helpviewer_keywords:
- C2687
ms.assetid: 1d24b24a-cd0f-41cc-975c-b08dcfb7f402
ms.openlocfilehash: a30efa264a4e7be387c3c2363940bd5ceca1bcc4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50540946"
---
# <a name="compiler-error-c2687"></a>Errore del compilatore C2687

'type': dichiarazione di eccezione non può essere 'void' o indicare un tipo incompleto o un puntatore o riferimento a un tipo incompleto

Per un tipo a far parte di una dichiarazione di eccezione, deve essere definito e diverso da void.

L'esempio seguente genera l'errore C2687:

```
// C2687.cpp
class C;

int main() {
   try {}
   catch (C) {}   // C2687 error
}
```

Possibile soluzione:

```
// C2687b.cpp
// compile with: /EHsc
class C {};

int main() {
   try {}
   catch (C) {}
}
```