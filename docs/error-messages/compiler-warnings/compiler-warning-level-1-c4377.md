---
title: Compilatore avviso (livello 1) C4377 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4377
dev_langs:
- C++
helpviewer_keywords:
- C4377
ms.assetid: a1c797b8-cd5e-4a56-b430-d07932e811cf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 613ebe183b61c6b9894ed3b726f90061e2b24ef6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46047174"
---
# <a name="compiler-warning-level-1-c4377"></a>Avviso del compilatore (livello 1) C4377

i tipi nativi sono privati per impostazione predefinita. -d1PrivateNativeTypes è deprecato

Nelle versioni precedenti, i tipi nativi negli assembly fosse pubblici per impostazione predefinita e un'opzione del compilatore interna non documentata (**/d1PrivateNativeTypes**) è stato usato per renderle private.

Tutti i tipi nativi e CLR, sono ora privati per impostazione predefinita in un assembly, in modo **/d1PrivateNativeTypes** non è più necessario.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4377.

```
// C4377.cpp
// compile with: /clr /d1PrivateNativeTypes /W1
// C4377 warning expected
int main() {}
```