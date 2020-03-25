---
title: Errore del compilatore C2461
ms.date: 11/04/2016
f1_keywords:
- C2461
helpviewer_keywords:
- C2461
ms.assetid: e64ba651-f441-4fdb-b5cb-4209bbbe4db4
ms.openlocfilehash: 3d290bd2288f76d0ddefa2057e3e01c9edc3cbc7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80205322"
---
# <a name="compiler-error-c2461"></a>Errore del compilatore C2461

> '*Class*': sintassi del costruttore priva di parametri formali

Il costruttore per la classe non specifica parametri formali. La dichiarazione di un costruttore deve specificare un elenco di parametri formali. L'elenco può essere vuoto.

Per risolvere questo problema, aggiungere una coppia di parentesi dopo la dichiarazione della *classe*::**Class*.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come correggere C2461:

```cpp
// C2461.cpp
// compile with: /c
class C {
   C::C;     // C2461
   C::C();   // OK
};
```
