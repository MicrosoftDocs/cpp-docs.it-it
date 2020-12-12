---
description: 'Altre informazioni su: errore del compilatore C3465'
title: Errore del compilatore C3465
ms.date: 11/04/2016
f1_keywords:
- C3465
helpviewer_keywords:
- C3465
ms.assetid: aeb815e5-b3fc-4525-afe2-d738e9321df1
ms.openlocfilehash: ab5d55b5e21241eb2bbab00524f3c81baaace88f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113454"
---
# <a name="compiler-error-c3465"></a>Errore del compilatore C3465

per utilizzare il tipo 'type' è necessario fare riferimento all'assembly 'assembly'

L'inoltro dei tipi non verrà eseguito per un'applicazione client finché non si ricompila il client. Quando si esegue la ricompilazione,sarà necessario un riferimento per ogni assembly che contiene la definizione di un tipo usato nell'applicazione client.

Per altre informazioni, vedere [invio di tipi (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## <a name="examples"></a>Esempio

L'esempio seguente genera un assembly che contiene il nuovo percorso di un tipo.

```cpp
// C3465.cpp
// compile with: /clr /LD
public ref class R {
public:
   ref class N {};
};
```

L'esempio seguente genera un assembly che conteneva la definizione del tipo, ma che adesso contiene la sintassi di inoltro per il tipo.

```cpp
// C3465_b.cpp
// compile with: /clr /LD
#using "C3465.dll"
[ assembly:TypeForwardedTo(R::typeid) ];
```

L'esempio seguente genera l'errore C3465.

```cpp
// C3465_c.cpp
// compile with: /clr
// C3465 expected
#using "C3465_b.dll"
// Uncomment the following line to resolve.
// #using "C3465.dll"

int main() {
   R^ r = gcnew R();
}
```
