---
title: Errore del compilatore C2467
ms.date: 11/04/2016
f1_keywords:
- C2467
helpviewer_keywords:
- C2467
ms.assetid: f9ead270-5d0b-41cc-bdcd-586a647c67a7
ms.openlocfilehash: da17a3f78c8cab8144cb66b9a672dc59190b50f9
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301145"
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
