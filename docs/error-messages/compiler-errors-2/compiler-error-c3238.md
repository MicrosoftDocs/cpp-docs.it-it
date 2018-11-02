---
title: Errore del compilatore C3238
ms.date: 11/04/2016
f1_keywords:
- C3238
helpviewer_keywords:
- C3238
ms.assetid: 19942497-b3c5-4df0-9144-142ced92468b
ms.openlocfilehash: d81fd0fb3612a8c22fa6365aa7fc6dddb89cf120
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481159"
---
# <a name="compiler-error-c3238"></a>Errore del compilatore C3238

'type': tipo con questo nome già inoltrato all'assembly 'assembly'

In un'applicazione client è stato definito un tipo già definito, mediante la sintassi di inoltro dei tipi, in un assembly di riferimento. Non è possibile definire entrambi i tipi nell'ambito dell'applicazione.

Vedere [l'inoltro di tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente crea un assembly che contiene un tipo che è stato inoltrato da un altro assembly.

```
// C3238.cpp
// compile with: /clr /LD
public ref class R {};
```

## <a name="example"></a>Esempio

L'esempio seguente crea un assembly che conteneva la definizione del tipo, ma che adesso contiene solo la sintassi di inoltro dei tipi.

```
// C3238_b.cpp
// compile with: /clr /LD
#using "C3238.dll"
[ assembly:TypeForwardedTo(R::typeid) ];
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3238.

```
// C3238_c.cpp
// compile with: /clr /c
// C3238 expected
// Delete the following line to resolve.
#using "C3238_b.dll"
public ref class R {};
```