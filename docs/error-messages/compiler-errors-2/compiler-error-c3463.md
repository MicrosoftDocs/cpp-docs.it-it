---
title: Errore del compilatore C3463
ms.date: 11/04/2016
f1_keywords:
- C3463
helpviewer_keywords:
- C3463
ms.assetid: 153efcc0-085c-4615-84ea-d22942618bdf
ms.openlocfilehash: a0c7772291085bcd872cbc1ca23b79d2fa829ad9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62222347"
---
# <a name="compiler-error-c3463"></a>Errore del compilatore C3463

'type': tipo non consentito nell'attributo 'implements'

Un tipo non valido è stato passato all'attributo [implements](../../windows/implements-cpp.md) . Ad esempio, è possibile passare un'interfaccia a `implements`, ma non è possibile passare un puntatore a un'interfaccia.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3463.

```
// C3463.cpp
// compile with: /c
#include <windows.h>
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface X {};

typedef X* PX;

[ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=PX) ]   // C3463
// try the following line instead
// [ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=X) ]
class CMyClass : public X {};
```