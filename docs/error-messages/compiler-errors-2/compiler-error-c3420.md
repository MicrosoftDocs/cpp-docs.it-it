---
title: Errore del compilatore C3420
ms.date: 11/04/2016
f1_keywords:
- C3420
helpviewer_keywords:
- C3420
ms.assetid: 99b53c77-f36b-4574-9199-b53111becccb
ms.openlocfilehash: 3db109598ce0741ca34a230d8925994543bcb5ea
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50645939"
---
# <a name="compiler-error-c3420"></a>Errore del compilatore C3420

'finalizer': un finalizzatore non può essere virtuale

Un finalizzatore può essere chiamato solo in modo non virtuale dal tipo di inclusione. Dichiarare virtuale un finalizzatore rappresenta quindi un errore.

Per altre informazioni, vedere [distruttori e finalizzatori in Procedura: definire e usare classi e struct (C + + / CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3420.

```
// C3420.cpp
// compile with: /clr /c
ref class R {
   virtual !R() {}   // C3420
};
```