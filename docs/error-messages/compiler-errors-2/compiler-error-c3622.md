---
description: 'Altre informazioni su: errore del compilatore C3622'
title: Errore del compilatore C3622
ms.date: 11/04/2016
f1_keywords:
- C3622
helpviewer_keywords:
- C3622
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
ms.openlocfilehash: 19c599fced524001f360a4ad462a9dbebbfb2fa3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223035"
---
# <a name="compiler-error-c3622"></a>Errore del compilatore C3622

' Class ': Impossibile creare un'istanza di una classe dichiarata come ' keyword '

È stato effettuato un tentativo di creare un'istanza di una classe contrassegnata come [astratta](../../extensions/abstract-cpp-component-extensions.md). Una classe contrassegnata come **`abstract`** può essere una classe base, ma non è possibile crearne un'istanza.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3622.

```cpp
// C3622.cpp
// compile with: /clr
ref class a abstract {};

int main() {
   a aa;   // C3622
}
```
