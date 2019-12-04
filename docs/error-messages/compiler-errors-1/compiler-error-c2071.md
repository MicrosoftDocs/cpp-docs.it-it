---
title: Errore del compilatore C2071
ms.date: 11/04/2016
f1_keywords:
- C2071
helpviewer_keywords:
- C2071
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
ms.openlocfilehash: 1dc9781bc0cf1bc6c7f879cc3971828983471c6f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757748"
---
# <a name="compiler-error-c2071"></a>Errore del compilatore C2071

'identificatore': classe di archiviazione non valida

`identifier` è stata dichiarata con una [classe di archiviazione](../../c-language/c-storage-classes.md)non valida. Questo errore può essere causato quando viene specificata più di una classe di archiviazione per un identificatore o quando la definizione non è compatibile con la dichiarazione di classe di archiviazione.

Per risolvere questo problema, comprendere la classe di archiviazione prevista dell'identificatore, ad esempio `static` o `extern`, e correggere la dichiarazione in modo che corrisponda.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C2071.

```cpp
// C2071.cpp
// compile with: /c
struct C {
   extern int i;   // C2071
};
struct D {
   int i;   // OK, no extern on an automatic
};
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C2071.

```cpp
// C2071_b.cpp
// compile with: /c
typedef int x(int i) { return i; }   // C2071
typedef int (x)(int);   // OK, no local definition in typedef
```
