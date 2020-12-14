---
description: 'Altre informazioni su: errore del compilatore C2010'
title: Errore del compilatore C2010
ms.date: 11/04/2016
f1_keywords:
- C2010
helpviewer_keywords:
- C2010
ms.assetid: 5795ed1d-e206-410b-b7b4-528d125c67b4
ms.openlocfilehash: 8a96c30103d46c23f3b678a2fa84abf34445dd11
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221033"
---
# <a name="compiler-error-c2010"></a>Errore del compilatore C2010

' character ': imprevisto nell'elenco di parametri formali della macro

Il carattere viene usato in modo non corretto nell'elenco di parametri formali della definizione di una macro. Rimuovere il carattere per risolvere l'errore.

L'esempio seguente genera l'C2010:

```cpp
// C2010.cpp
// compile with: /c
#define mymacro(a|) (2*a)   // C2010
#define mymacro(a) (2*a)   // OK
```
