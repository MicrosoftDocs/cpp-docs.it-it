---
title: Errore del compilatore C2062 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2062
dev_langs:
- C++
helpviewer_keywords:
- C2062
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bbda0894b25e09681207d6447bb40727d490fc02
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46072251"
---
# <a name="compiler-error-c2062"></a>Errore del compilatore C2062

tipo 'type' imprevisto

Il compilatore non è previsto un nome di tipo.

L'esempio seguente genera l'errore C2062:

```
// C2062.cpp
// compile with: /c
struct A {  : int l; };   // C2062
struct B { private: int l; };   // OK
```

C2062 può verificarsi anche a causa del modo il compilatore gestisce i tipi non definiti nell'elenco di parametri del costruttore. Se il compilatore rileva un tipo non definito (errori di ortografia), si presuppone il costruttore è un'espressione e rilascia C2062. Per risolvere, usare solo i tipi definiti in un elenco di parametri di costruttore.