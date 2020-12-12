---
description: 'Altre informazioni su: errore del compilatore C3238'
title: Errore del compilatore C3238
ms.date: 11/04/2016
f1_keywords:
- C3238
helpviewer_keywords:
- C3238
ms.assetid: 19942497-b3c5-4df0-9144-142ced92468b
ms.openlocfilehash: d2900d8c00badb19edb16bb726eaf2ea503d4ef4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307379"
---
# <a name="compiler-error-c3238"></a>Errore del compilatore C3238

'type': tipo con questo nome già inoltrato all'assembly 'assembly'

In un'applicazione client è stato definito un tipo già definito, mediante la sintassi di inoltro dei tipi, in un assembly di riferimento. Non è possibile definire entrambi i tipi nell'ambito dell'applicazione.

Per ulteriori informazioni, vedere l' [invio del tipo (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md) .

## <a name="examples"></a>Esempio

L'esempio seguente crea un assembly che contiene un tipo che è stato inoltrato da un altro assembly.

```cpp
// C3238.cpp
// compile with: /clr /LD
public ref class R {};
```

L'esempio seguente crea un assembly che conteneva la definizione del tipo, ma che adesso contiene solo la sintassi di inoltro dei tipi.

```cpp
// C3238_b.cpp
// compile with: /clr /LD
#using "C3238.dll"
[ assembly:TypeForwardedTo(R::typeid) ];
```

L'esempio seguente genera l'errore C3238.

```cpp
// C3238_c.cpp
// compile with: /clr /c
// C3238 expected
// Delete the following line to resolve.
#using "C3238_b.dll"
public ref class R {};
```
