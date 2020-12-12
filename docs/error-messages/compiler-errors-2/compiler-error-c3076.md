---
description: 'Altre informazioni su: errore del compilatore C3076'
title: Errore del compilatore C3076
ms.date: 11/04/2016
f1_keywords:
- C3076
helpviewer_keywords:
- C3076
ms.assetid: 8a87b3e4-2c17-4b87-9622-ef0962d6a34e
ms.openlocfilehash: 27fbfe27d2e8efb1abee611701fdbde8f0d3d09f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320180"
---
# <a name="compiler-error-c3076"></a>Errore del compilatore C3076

' instance ': Impossibile incorporare un'istanza di un tipo di riferimento,' type ', in un tipo nativo

Un tipo nativo non può contenere un'istanza di un tipo CLR.

Per ulteriori informazioni, vedere [semantica dello stack C++ per i tipi di riferimento](../../dotnet/cpp-stack-semantics-for-reference-types.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3076.

```cpp
// C3076.cpp
// compile with: /clr /c
ref struct U {};

struct V {
   U y;   // C3076
};

ref struct W {
   U y;   // OK
};
```
