---
description: 'Altre informazioni su: errore del compilatore C2071'
title: Errore del compilatore C2071
ms.date: 11/04/2016
f1_keywords:
- C2071
helpviewer_keywords:
- C2071
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
ms.openlocfilehash: ec5a08150b322ca5ce3a973a4e65d71ed410e25b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323194"
---
# <a name="compiler-error-c2071"></a>Errore del compilatore C2071

'identificatore': classe di archiviazione non valida

`identifier` è stata dichiarata con una [classe di archiviazione](../../c-language/c-storage-classes.md)non valida. Questo errore può essere causato quando viene specificata più di una classe di archiviazione per un identificatore o quando la definizione non è compatibile con la dichiarazione di classe di archiviazione.

Per risolvere questo problema, comprendere la classe di archiviazione desiderata dell'identificatore, ad esempio **`static`** o, **`extern`** e correggere la dichiarazione in modo che corrisponda.

## <a name="examples"></a>Esempio

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

Nell'esempio seguente viene generato l'errore C2071.

```cpp
// C2071_b.cpp
// compile with: /c
typedef int x(int i) { return i; }   // C2071
typedef int (x)(int);   // OK, no local definition in typedef
```
