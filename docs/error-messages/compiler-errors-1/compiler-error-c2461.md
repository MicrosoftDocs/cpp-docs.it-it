---
description: 'Altre informazioni su: errore del compilatore C2461'
title: Errore del compilatore C2461
ms.date: 11/04/2016
f1_keywords:
- C2461
helpviewer_keywords:
- C2461
ms.assetid: e64ba651-f441-4fdb-b5cb-4209bbbe4db4
ms.openlocfilehash: 788c8e475bd38b829ca8426137569a5d8a083f18
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341828"
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
