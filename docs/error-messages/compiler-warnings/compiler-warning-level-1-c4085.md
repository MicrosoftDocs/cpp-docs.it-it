---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4085'
title: Avviso del compilatore (livello 1) C4085
ms.date: 11/04/2016
f1_keywords:
- C4085
helpviewer_keywords:
- C4085
ms.assetid: 2bc6eb25-058f-4597-b351-fd69587b5170
ms.openlocfilehash: 81a752e1497f0b65e99de53b14879220b58678ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155436"
---
# <a name="compiler-warning-level-1-c4085"></a>Avviso del compilatore (livello 1) C4085

parametro pragma previsto: 'on' o 'off'

Il pragma richiede un parametro **on** o **off** . pertanto la direttiva pragma viene ignorata.

L'esempio seguente genera l'errore C4085:

```cpp
// C4085.cpp
// compile with: /W1 /LD
#pragma optimize( "t", maybe )  // C4085
```
