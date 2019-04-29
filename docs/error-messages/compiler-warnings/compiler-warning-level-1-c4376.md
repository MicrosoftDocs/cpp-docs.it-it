---
title: Avviso del compilatore (livello 1) C4376
ms.date: 11/04/2016
f1_keywords:
- C4376
helpviewer_keywords:
- C4376
ms.assetid: 5f202c74-9489-48fe-b36f-19cd882b1589
ms.openlocfilehash: b1f6e7b403931f7fe1a67974ae85001cf80eab66
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410434"
---
# <a name="compiler-warning-level-1-c4376"></a>Avviso del compilatore (livello 1) C4376

Identificatore di accesso ' vecchio_identificatore:' non è più supportata:. usare ' new_specifier:' invece

Per altre informazioni su come specificare l'accessibilità di tipi e membri nei metadati, vedere [digitare la visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [visibilità dei membri](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility) in [come: Definire e usare classi e struct (C++/CLI)](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4376.

```
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