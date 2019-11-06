---
title: Avviso del compilatore (livello 1) C4042
ms.date: 11/04/2016
f1_keywords:
- C4042
helpviewer_keywords:
- C4042
ms.assetid: e4bd861b-1194-426b-bf79-68c5b021eb0a
ms.openlocfilehash: db7f0425c3752c20ca8c5d4b6c95845ff64475c5
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73627029"
---
# <a name="compiler-warning-level-1-c4042"></a>Avviso del compilatore (livello 1) C4042

' Identifier ': ha una classe di archiviazione non valida

Non è possibile usare la classe di archiviazione specificata con questo identificatore in questo contesto. Il compilatore usa invece la classe di archiviazione predefinita:

- `extern`, se *Identifier* è una funzione.

- **auto**, se *Identifier* è un parametro formale o una variabile locale.

- Nessuna classe di archiviazione, se *Identifier* è una variabile globale.

Questo avviso può essere causato dalla specifica di una classe di archiviazione diversa da **Register** in una dichiarazione di parametro.

L'esempio seguente genera C4042

```cpp
// C4042.cpp
// compile with: /W1 /LD
int func2( __declspec( thread ) int tls_i )    // C4042
// try the following line instead
// int func2( int tls_i )
{
   return tls_i;
}
```