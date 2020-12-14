---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4376'
title: Avviso del compilatore (livello 1) C4376
ms.date: 11/04/2016
f1_keywords:
- C4376
helpviewer_keywords:
- C4376
ms.assetid: 5f202c74-9489-48fe-b36f-19cd882b1589
ms.openlocfilehash: 1b91538026ce564e03b2f472f9770d94b4bfc5ad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311338"
---
# <a name="compiler-warning-level-1-c4376"></a>Avviso del compilatore (livello 1) C4376

l'identificatore di accesso ' old_specifier:' non è più supportato. usare ' new_specifier:'

Per altre informazioni su come specificare l'accessibilità di tipi e membri nei metadati, vedere [visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [visibilità dei membri](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility) in [procedura: definire e utilizzare classi e struct (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4376.

```cpp
// C4376.cpp
// compile with: /clr /W1 /c
public ref class G {
public public:   // C4376
   void m2();
};

public ref class H {
public:   // OK
   void m2();
};
```
