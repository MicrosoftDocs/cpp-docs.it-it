---
title: Errore del compilatore C2479 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2479
dev_langs:
- C++
helpviewer_keywords:
- C2479
ms.assetid: c74c7869-e65b-4ca1-b6fa-eb39fed4458a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bc7210a6ff2e57b2d5f96fc59daace974e6f1744
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46045225"
---
# <a name="compiler-error-c2479"></a>Errore del compilatore C2479

'identifier': 'allocate ()' è validi solo per gli elementi di dati di estensione statica

Il `__declspec( allocate())` sintassi può essere usata per i soli dati statici.

L'esempio seguente genera l'errore C2479:

```
// C2479.cpp
// compile with: /c
#pragma section("mycode", read)
static __declspec(allocate("mycode")) void DoNothing() {}   // C2479
__declspec(allocate("mycode"))  int i = 0;   // OK
```