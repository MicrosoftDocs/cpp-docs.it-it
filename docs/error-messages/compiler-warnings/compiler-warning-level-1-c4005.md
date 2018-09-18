---
title: Compilatore Warning (level 1) C4005 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4005
dev_langs:
- C++
helpviewer_keywords:
- C4005
ms.assetid: 7f2dc79a-9fcb-4d5b-be61-120d9cb487ad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8be172086e316c991f461b3ac42f58739801cfa7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022968"
---
# <a name="compiler-warning-level-1-c4005"></a>Compilatore Warning (level 1) C4005

'identifier': ridefinizione macro

L'identificatore di macro è definito due volte. Il compilatore Usa la seconda definizione macro.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Definizione di una macro nella riga di comando e nel codice con un `#define` direttiva.

1. Macro importate da file di inclusione.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Rimuovere una delle definizioni.

1. Usa un' [#undef](../../preprocessor/hash-undef-directive-c-cpp.md) direttiva prima della definizione della seconda.

L'esempio seguente genera l'errore C4005:

```
// C4005.cpp
// compile with: /W1 /EHsc
#include <iostream>
using namespace std;

#define TEST "test1"
#define TEST "test2"   // C4005 delete or rename to resolve the warning

int main() {
   cout << TEST << endl;
}
```