---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4042'
title: Avviso del compilatore (livello 1) C4042
ms.date: 11/04/2016
f1_keywords:
- C4042
helpviewer_keywords:
- C4042
ms.assetid: e4bd861b-1194-426b-bf79-68c5b021eb0a
ms.openlocfilehash: 458d8460b71ac1b0d002b0127e3637cdfd6766ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160636"
---
# <a name="compiler-warning-level-1-c4042"></a>Avviso del compilatore (livello 1) C4042

' Identifier ': ha una classe di archiviazione non valida

Non è possibile usare la classe di archiviazione specificata con questo identificatore in questo contesto. Il compilatore usa invece la classe di archiviazione predefinita:

- **`extern`**, se *Identifier* è una funzione.

- **`auto`**, se *Identifier* è un parametro formale o una variabile locale.

- Nessuna classe di archiviazione, se *Identifier* è una variabile globale.

Questo avviso può essere causato dalla specifica di una classe di archiviazione diversa da **`register`** in una dichiarazione di parametro.

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
