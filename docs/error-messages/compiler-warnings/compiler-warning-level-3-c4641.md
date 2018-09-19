---
title: Compilatore avviso (livello 3) C4641 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4641
dev_langs:
- C++
helpviewer_keywords:
- C4641
ms.assetid: 28fe5c3e-6039-42da-9100-1312b5b15aea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f44e94868f6a7b379fb1a2f75bbd28ce011b54c9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112109"
---
# <a name="compiler-warning-level-3-c4641"></a>Avviso del compilatore (livello 3) C4641

commento al documento XML con riferimento incrociato ambiguo

Il compilatore non è riuscito a risolvere in modo non ambiguo un riferimento. Per risolvere questo problema, specificare le informazioni sui parametri necessari per rendere il riferimento non ambiguo.

Per altre informazioni, vedere [XML Documentation](../../ide/xml-documentation-visual-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4641.

```
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