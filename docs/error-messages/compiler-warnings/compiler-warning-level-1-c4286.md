---
title: Avviso del compilatore (livello 1) C4286
ms.date: 11/04/2016
f1_keywords:
- C4286
helpviewer_keywords:
- C4286
ms.assetid: 93eadd6c-6f36-413b-ba91-c9aa2314685a
ms.openlocfilehash: be02d330678eaab7f538ed092641f957bdcb01b2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62207069"
---
# <a name="compiler-warning-level-1-c4286"></a>Avviso del compilatore (livello 1) C4286

'type1': individuato da classe di base ('type2') nella riga numero

Il tipo di eccezione specificata è gestito da un gestore precedente. Il tipo per il secondo catch è derivato dal tipo del primo. Le eccezioni per una classe di base intercettano le eccezioni per una classe derivata.

## <a name="example"></a>Esempio

```
//C4286.cpp
// compile with: /W1
#include <eh.h>
class C {};
class D : public  C {};
int main()
{
    try
    {
        throw "ooops!";
    }
    catch( C ) {}
    catch( D ) {}  // warning C4286, D is derived from C
}
```