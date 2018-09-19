---
title: Errore del compilatore C2467 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2467
dev_langs:
- C++
helpviewer_keywords:
- C2467
ms.assetid: f9ead270-5d0b-41cc-bdcd-586a647c67a7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8bab320bfdba9fcbd408771b7859a22fc85fa06e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46048774"
---
# <a name="compiler-error-c2467"></a>Errore del compilatore C2467

dichiarazione non valida di anonimo '-tipo definito dall'utente '

È stato dichiarato un tipo annidato definito dall'utente. Si tratta di un errore durante la compilazione del codice sorgente C con l'opzione di compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) abilitato.

L'esempio seguente genera l'errore C2467:

```
//C2467.c
// compile with: /Za
int main() {
   struct X {
      union { int i; };   // C2467, nested declaration
   };
}
```