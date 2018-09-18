---
title: Errore del compilatore C2461 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2461
dev_langs:
- C++
helpviewer_keywords:
- C2461
ms.assetid: e64ba651-f441-4fdb-b5cb-4209bbbe4db4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 39d58b315fdd7e3c4e1899041cebf8400813ed40
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46029299"
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