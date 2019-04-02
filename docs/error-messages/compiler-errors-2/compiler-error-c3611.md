---
title: Errore del compilatore C3611
ms.date: 11/04/2016
f1_keywords:
- C3611
helpviewer_keywords:
- C3611
ms.assetid: 42f3e320-41de-420a-bd05-8924cab765aa
ms.openlocfilehash: 2d4c5cb02b1b8c5472502380fe7c74ff4a91954a
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781926"
---
# <a name="compiler-error-c3611"></a>Errore del compilatore C3611

'function': una funzione sealed non può avere un identificatore pure

Una funzione sealed è stata dichiarata in modo non corretto.  Per altre informazioni, vedere [sealed](../../extensions/sealed-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3611.

```
// C3611.cpp
// compile with: /clr /c

ref struct V {
   virtual void Test() sealed = 0;   // C3611
   virtual void Test2() sealed;   // OK
   virtual void Test3() = 0;   // OK
};
```