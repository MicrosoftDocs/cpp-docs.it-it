---
title: Errore del compilatore C2337
ms.date: 09/19/2019
f1_keywords:
- C2337
helpviewer_keywords:
- C2337
ms.assetid: eccc9178-a15e-42cd-bbd0-3cea7cf2d55b
ms.openlocfilehash: bf9b3e782804add13aeaef0e6672d2dd66d193be
ms.sourcegitcommit: f907b15f50a6b945d0b87c03af0050946157d701
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/20/2019
ms.locfileid: "71158779"
---
# <a name="compiler-error-c2337"></a>Errore del compilatore C2337

> '*attribute-name*': attributo non trovato

Il codice usa un attributo che non è supportato in questo contesto. In alternativa, l'attributo non è disponibile in questa versione del compilatore. Per risolvere questo problema, rimuovere l'attributo non supportato.

L'esempio seguente genera l'errore C2337:

```cpp
// C2337.cpp
// compile with: /c
[emitidl];
[module(name="x")];
[grasshopper]   // C2337, not a supported attribute
class a{};
```
