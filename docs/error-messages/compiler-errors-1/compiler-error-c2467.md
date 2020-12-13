---
description: 'Altre informazioni su: errore del compilatore C2467'
title: Errore del compilatore C2467
ms.date: 11/04/2016
f1_keywords:
- C2467
helpviewer_keywords:
- C2467
ms.assetid: f9ead270-5d0b-41cc-bdcd-586a647c67a7
ms.openlocfilehash: fd5227e451208d848d631550da33999a4ebae8dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333815"
---
# <a name="compiler-error-c2467"></a>Errore del compilatore C2467

dichiarazione non valida di ' User-Defined-Type ' anonima

È stato dichiarato un tipo annidato definito dall'utente. Si tratta di un errore durante la compilazione del codice sorgente C con l'opzione di compatibilità ANSI ([/za](../../build/reference/za-ze-disable-language-extensions.md)) abilitata.

L'esempio seguente genera l'C2467:

```c
//C2467.c
// compile with: /Za
int main() {
   struct X {
      union { int i; };   // C2467, nested declaration
   };
}
```
