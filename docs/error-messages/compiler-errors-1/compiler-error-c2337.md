---
description: 'Altre informazioni su: errore del compilatore errore C2337'
title: Errore del compilatore C2337
ms.date: 09/19/2019
f1_keywords:
- C2337
helpviewer_keywords:
- C2337
ms.assetid: eccc9178-a15e-42cd-bbd0-3cea7cf2d55b
ms.openlocfilehash: 44def6fe9c220699e3687ce9b843f977528b5e15
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234852"
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
