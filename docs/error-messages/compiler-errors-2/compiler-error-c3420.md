---
description: 'Altre informazioni su: errore del compilatore C3420'
title: Errore del compilatore C3420
ms.date: 11/04/2016
f1_keywords:
- C3420
helpviewer_keywords:
- C3420
ms.assetid: 99b53c77-f36b-4574-9199-b53111becccb
ms.openlocfilehash: 3c79693823255ed7335e5805c0ac17de5ddcead7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315998"
---
# <a name="compiler-error-c3420"></a>Errore del compilatore C3420

'finalizer': un finalizzatore non può essere virtuale

Un finalizzatore può essere chiamato solo in modo non virtuale dal tipo di inclusione. Dichiarare virtuale un finalizzatore rappresenta quindi un errore.

Per altre informazioni, vedere [distruttori e finalizzatori in procedura: definire e utilizzare classi e struct (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3420.

```cpp
// C3420.cpp
// compile with: /clr /c
ref class R {
   virtual !R() {}   // C3420
};
```
