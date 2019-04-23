---
title: Errore del compilatore C3622
ms.date: 11/04/2016
f1_keywords:
- C3622
helpviewer_keywords:
- C3622
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
ms.openlocfilehash: ed307f46db1261d79d5b0ec6b36852cac2e6d13e
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59776119"
---
# <a name="compiler-error-c3622"></a>Errore del compilatore C3622

'class': una classe dichiarata come 'keyword' non è possibile creare un'istanza

Si è verificato un tentativo di creare un'istanza di una classe contrassegnata come [astratta](../../extensions/abstract-cpp-component-extensions.md). Una classe contrassegnata come `abstract` può essere una classe di base, ma non è possibile crearne istanze.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3622.

```
// C3622.cpp
// compile with: /clr
ref class a abstract {};

int main() {
   a aa;   // C3622
}
```
