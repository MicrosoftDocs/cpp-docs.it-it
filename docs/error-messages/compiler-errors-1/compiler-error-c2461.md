---
title: Errore del compilatore C2461
ms.date: 11/04/2016
f1_keywords:
- C2461
helpviewer_keywords:
- C2461
ms.assetid: e64ba651-f441-4fdb-b5cb-4209bbbe4db4
ms.openlocfilehash: e8f82ed4ce8ad77a22961a42c8e9a256e6f647db
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62368032"
---
# <a name="compiler-error-c2461"></a>Errore del compilatore C2461

> «*classe*': la sintassi del costruttore priva di parametri formali

Il costruttore per la classe non specifica alcun parametro formale. La dichiarazione di un costruttore deve specificare un elenco di parametri formali. L'elenco può essere vuoto.

Per risolvere questo problema, aggiungere una coppia di parentesi dopo la dichiarazione di *classe*:: **classe*.

## <a name="example"></a>Esempio

L'esempio seguente viene illustrato come correggere C2461:

```cpp
// C2461.cpp
// compile with: /c
class C {
   C::C;     // C2461
   C::C();   // OK
};
```