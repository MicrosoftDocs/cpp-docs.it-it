---
description: 'Altre informazioni su: errore del compilatore C2524'
title: Errore del compilatore C2524
ms.date: 11/04/2016
f1_keywords:
- C2524
helpviewer_keywords:
- C2524
ms.assetid: e71d17f5-2fc2-416b-8dbd-e9bed85eb33a
ms.openlocfilehash: 94e974674a5e244168499a50304a07264d23e618
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151138"
---
# <a name="compiler-error-c2524"></a>Errore del compilatore C2524

' distruttore ': un distruttore o un finalizzatore deve avere un elenco di parametri ' void '

Il distruttore o il finalizzatore ha un elenco di parametri non [void](../../cpp/void-cpp.md). Altri tipi di parametro non sono consentiti.

## <a name="examples"></a>Esempio

Il codice seguente riproduce C2524.

```cpp
// C2524.cpp
// compile with: /c
class A {
   A() {}
   ~A(int i) {}    // C2524
   // try the following line instead
   // ~A() {}
};
```

Il codice seguente riproduce C2524.

```cpp
// C2524_b.cpp
// compile with: /clr /c
ref struct I1 {
protected:
   !I1(int i);   // C2524
   // try the following line instead
   // !I1();
};
```
