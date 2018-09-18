---
title: Errore del compilatore C2071 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2071
dev_langs:
- C++
helpviewer_keywords:
- C2071
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 757110c88d3279964ab0c26f753e4d3b1f2889d5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46025861"
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