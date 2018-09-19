---
title: Errore del compilatore C2807 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2807
dev_langs:
- C++
helpviewer_keywords:
- C2807
ms.assetid: bd7a207a-f379-4de6-8ee8-c7cab78b3480
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2a0f1627e19ad3368ad99559b6b576d165347643
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110536"
---
# <a name="compiler-error-c2807"></a>Errore del compilatore C2807

il secondo parametro della forma suffissa di 'operator operator' deve essere 'int'

Il secondo parametro per una forma suffissa dell'operatore è il tipo non corretto.

L'esempio seguente genera l'errore C2807:

```
// C2807.cpp
// compile with: /c
class X {
public:
   X operator++ ( X );   // C2807 nonvoid parameter
   X operator++ ( int );   // OK, int parameter
};
```