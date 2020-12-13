---
description: 'Altre informazioni su: errore del compilatore C2194'
title: Errore del compilatore C2194
ms.date: 11/04/2016
f1_keywords:
- C2194
helpviewer_keywords:
- C2194
ms.assetid: df6e631c-0062-4844-9088-4cc7a0ff879f
ms.openlocfilehash: fefdfbc434dce1347ff4a46a56040219f64feb47
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337645"
---
# <a name="compiler-error-c2194"></a>Errore del compilatore C2194

' Identifier ': è un segmento di testo

Il `data_seg` pragma usa il nome di un segmento usato con `code_seg` .

L'esempio seguente genera l'C2194:

```cpp
// C2194.cpp
// compile with: /c
#pragma code_seg("MYCODE")
#pragma data_seg("MYCODE")   // C2194
#pragma data_seg("MYCODE2")   // OK
```
