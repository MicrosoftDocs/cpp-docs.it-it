---
title: Errore del compilatore C2612 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2612
dev_langs:
- C++
helpviewer_keywords:
- C2612
ms.assetid: 6faacfd6-4455-41a2-808e-0f6799f84d6d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d2bdc91dd2b64c4fbd3a14670ba500ac970c9ad3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46135789"
---
# <a name="compiler-error-c2612"></a>Errore del compilatore C2612

finali 'char' non valido nell'elenco di inizializzatori di basi/membri

Un carattere viene visualizzato dopo l'ultima base o membro in un elenco di inizializzatori.

L'esempio seguente genera l'errore C2612:

```
// C2612.cpp
class A {
public:
   int i;
   A( int ia ) : i( ia ) + {};   // C2612
};
```