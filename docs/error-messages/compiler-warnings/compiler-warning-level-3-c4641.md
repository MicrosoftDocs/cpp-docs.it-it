---
title: Avviso del compilatore (livello 3) C4641
ms.date: 11/04/2016
f1_keywords:
- C4641
helpviewer_keywords:
- C4641
ms.assetid: 28fe5c3e-6039-42da-9100-1312b5b15aea
ms.openlocfilehash: 0a930490f7b53fbbb31abb0f621cf972295d2ea6
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189430"
---
# <a name="compiler-warning-level-3-c4641"></a>Avviso del compilatore (livello 3) C4641

commento al documento XML con riferimento incrociato ambiguo

Il compilatore non è riuscito a risolvere in modo non ambiguo un riferimento. Per risolvere il problema, specificare le informazioni sul parametro necessarie per rendere il riferimento non ambiguo.

Per altre informazioni, vedere [XML Documentation](../../build/reference/xml-documentation-visual-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4641.

```cpp
// C4641.cpp
// compile with: /W3 /doc /clr /c

/// <see cref="f" />   // C4641
// try the following line instead
// /// <see cref="f(int)" />
public ref class GR {
public:
   void f( int ) {}
   void f( char ) {}
};
```