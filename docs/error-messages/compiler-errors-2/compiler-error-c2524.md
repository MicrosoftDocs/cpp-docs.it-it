---
title: Errore del compilatore C2524
ms.date: 11/04/2016
f1_keywords:
- C2524
helpviewer_keywords:
- C2524
ms.assetid: e71d17f5-2fc2-416b-8dbd-e9bed85eb33a
ms.openlocfilehash: 369aa5f21c072472808ffba06c3bc5c5e608ac22
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62282183"
---
# <a name="compiler-error-c2524"></a>Errore del compilatore C2524

'distruttore': un distruttore/finalizzatore deve avere un elenco di parametri 'void'

Il distruttore o un finalizzatore aveva un elenco di parametri che non è [void](../../cpp/void-cpp.md). Altri tipi di parametri non sono consentiti.

## <a name="example"></a>Esempio

Il codice seguente riproduce C2524.

```
// C2524.cpp
// compile with: /c
class A {
   A() {}
   ~A(int i) {}    // C2524
   // try the following line instead
   // ~A() {}
};
```

## <a name="example"></a>Esempio

Il codice seguente riproduce C2524.

```
// C2524_b.cpp
// compile with: /clr /c
ref struct I1 {
protected:
   !I1(int i);   // C2524
   // try the following line instead
   // !I1();
};
```