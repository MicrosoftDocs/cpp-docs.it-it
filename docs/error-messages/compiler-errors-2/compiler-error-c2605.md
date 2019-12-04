---
title: Errore del compilatore C2605
ms.date: 11/04/2016
f1_keywords:
- C2605
helpviewer_keywords:
- C2605
ms.assetid: a0e6f132-5acf-4e19-b277-ddf196d182bf
ms.openlocfilehash: dfa221500d27e71cdbe1ab581eec346c0f268b66
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737881"
---
# <a name="compiler-error-c2605"></a>Errore del compilatore C2605

'name': nelle classi gestite o WinRT questo metodo è riservato

Alcuni nomi sono riservati dal compilatore per funzioni interne.  Per ulteriori informazioni, vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2605.

```cpp
// C2605.cpp
// compile with: /clr /c
ref class R {
protected:
   void Finalize() {}   // C2605
};
```
