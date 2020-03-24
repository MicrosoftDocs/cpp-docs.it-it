---
title: Errore del compilatore C3733
ms.date: 11/04/2016
f1_keywords:
- C3733
helpviewer_keywords:
- C3733
ms.assetid: 0cc1a9fe-1400-4be3-b35a-16435cba7a5a
ms.openlocfilehash: 961aa0caf31d49917f6df67305bc01d465884b68
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165899"
---
# <a name="compiler-error-c3733"></a>Errore del compilatore C3733

' Event ': sintassi non corretta per la specifica di un evento COM; si è omesso ' __interface '?

Per un evento COM è stata utilizzata la sintassi errata. Per correggere l'errore, modificare il tipo di evento o correggere la sintassi per conformarsi alle regole dell'evento COM.

L'esempio seguente genera l'C3733:

```
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[coclass, event_source(com), // change 'com' to 'native' to resolve
uuid("00000000-0000-0000-0000-000000000001")]
class A
{
   __event void func();   // C3733
};

int main()
{
}
```
