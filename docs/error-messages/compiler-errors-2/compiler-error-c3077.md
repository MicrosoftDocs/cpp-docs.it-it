---
description: 'Altre informazioni su: errore del compilatore C3077'
title: Errore del compilatore C3077
ms.date: 11/04/2016
f1_keywords:
- C3077
helpviewer_keywords:
- C3077
ms.assetid: d9f3c619-d1e2-4656-81a5-a35a9586a7d4
ms.openlocfilehash: a8e6a15f38427727939fbaabb0bfcf4d9e315d77
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320167"
---
# <a name="compiler-error-c3077"></a>Errore del compilatore C3077

'finalizer': un finalizzatore può essere membro solo di un tipo riferimento

È possibile dichiarare un finalizzatore in un tipo nativo o di valore.

Per altre informazioni, vedere [distruttori e finalizzatori in procedura: definire e utilizzare classi e struct (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3077.

```cpp
// C3077.cpp
// compile with: /clr /c
value struct vs {
   !vs(){}   // C3077
};

ref struct rs {
protected:
   !rs(){}   // OK
};
```
