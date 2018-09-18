---
title: Errore del compilatore C2946 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2946
dev_langs:
- C++
helpviewer_keywords:
- C2946
ms.assetid: c86dfbfc-7702-4f09-8a53-d205710e99c2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 91af822dd21adf9125162ed997e71ed548c863ac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027687"
---
# <a name="compiler-error-c2946"></a>Errore del compilatore C2946

creazione di un'istanza esplicita. 'class' non è una specializzazione della classe modello

Non è possibile creare un'istanza esplicita di una classe non basata su modello.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2946.

```
// C2946.cpp
class C {};
template C;  // C2946
int main() {}
```