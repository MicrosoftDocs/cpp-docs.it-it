---
title: Errore del compilatore C2705
description: Descrive l'errore del compilatore Microsoft C/C++ C2705.
ms.date: 08/25/2020
f1_keywords:
- C2705
helpviewer_keywords:
- C2705
ms.assetid: 29249ea3-4ea7-4105-944b-bdb83e8d6852
ms.openlocfilehash: 40d0f70ee379f5d1347b7443817713a53e097f89
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898749"
---
# <a name="compiler-error-c2705"></a>Errore del compilatore C2705

> '*Label*': salto non valido nell'ambito del blocco del gestore eccezioni

## <a name="remarks"></a>Osservazioni

L'esecuzione passa a un'etichetta all'interno di un **`try`** / **`catch`** **`__try`** / **`__except`** blocco, o **`__try`** / **`__finally`** . Il compilatore non consente questo comportamento. Per ulteriori informazioni, vedere [gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2705:

```cpp
// C2705.cpp
int main() {
goto trouble;
   __try {
      trouble: ;   // C2705
   }
   __finally {}

   // try the following line instead
   // trouble: ;
}
```
