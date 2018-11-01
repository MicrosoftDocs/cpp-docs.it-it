---
title: Errore del compilatore C2071
ms.date: 11/04/2016
f1_keywords:
- C2071
helpviewer_keywords:
- C2071
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
ms.openlocfilehash: 95344b5ef675f566f433dfeaed9dee5c38ef77d4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598276"
---
# <a name="compiler-error-c2071"></a>Errore del compilatore C2071

'identificatore': classe di archiviazione non valida

`identifier` è stato dichiarato con un valore non valido [classe di archiviazione](../../c-language/c-storage-classes.md). Questo errore può essere causato quando viene specificata più di una classe di archiviazione per un identificatore o quando la definizione non è compatibile con la dichiarazione di classe di archiviazione.

Per risolvere questo problema, comprendere quale classe di archiviazione è prevista dell'identificatore, ad esempio, `static` o `extern`: e correggere la dichiarazione corrispondente.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C2071.

```
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

```
// C2071_b.cpp
// compile with: /c
typedef int x(int i) { return i; }   // C2071
typedef int (x)(int);   // OK, no local definition in typedef
```