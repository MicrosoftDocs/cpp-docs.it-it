---
title: Errore del compilatore C3710 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3710
dev_langs:
- C++
helpviewer_keywords:
- C3710
ms.assetid: 18bec009-5b6f-464a-a21e-5d58a6936504
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 44faf99abe5df371a12025f7317743738dc8f024
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46018990"
---
# <a name="compiler-error-c3710"></a>Errore del compilatore C3710

'function': sintassi non corretta per la specifica di gestore dell'evento in hook /\__unhook

Quando si specifica un gestore eventi con [hook](../../cpp/hook.md) oppure [unhook](../../cpp/unhook.md), il gestore deve essere un metodo valido.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3710

```
// C3710.cpp
// compile with: /link /opt:noref
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include <stdio.h>

[event_source(native)]
class CEventSrc
{
public:
    __event void event1();
};

[event_receiver(native)]
class CEventRec
{
public:
    void handler1()
    {
        printf_s("Executing handler1().\n");
    }

    void HookEvents(CEventSrc* pSrc)
    {
        __hook(&CEventSrc::event1, pSrc, 0);   // C3710
        // try the following line instead
        // __hook(&CEventSrc::event1, pSrc, &CEventRec::handler1);
    }

    void UnhookEvents(CEventSrc* pSrc)
    {
        __unhook(&CEventSrc::event1, pSrc, &CEventRec::handler1);
    }
};

int main()
{
    CEventSrc eventSrc;
    CEventRec eventRec;
    eventRec.HookEvents(&eventSrc);
    eventSrc.event1();
    eventRec.UnhookEvents(&eventSrc);
}
```