---
description: 'Altre informazioni su: errore del compilatore C2351'
title: Errore del compilatore C2351
ms.date: 11/04/2016
f1_keywords:
- C2351
helpviewer_keywords:
- C2351
ms.assetid: 5439ccf6-66f6-4859-964c-c73f5eddfc1b
ms.openlocfilehash: ae8cf10cff4a345ee067519d250210f72e6690f8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145483"
---
# <a name="compiler-error-c2351"></a>Errore del compilatore C2351

sintassi obsoleta di inizializzazione del costruttore C++

In un elenco di inizializzazione nuovo stile per un costruttore, è necessario denominare in modo esplicito ogni classe di base diretta, anche se è l'unica classe di base.

L'esempio seguente genera l'C2351:

```cpp
// C2351.cpp
// compile with: /c
class B {
public:
   B() : () {}   // C2351
   B() {}   // OK
};
```
