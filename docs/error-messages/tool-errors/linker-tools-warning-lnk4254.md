---
title: Avviso degli strumenti del linker LNK4254
ms.date: 11/04/2016
f1_keywords:
- LNK4254
helpviewer_keywords:
- LNK4254
ms.assetid: 6f41dfb3-ca21-40d3-bac7-b637e578efa4
ms.openlocfilehash: 2c68e49d58b0fd6b28607eb0ba78c092441f6f4b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50467015"
---
# <a name="linker-tools-warning-lnk4254"></a>Avviso degli strumenti del linker LNK4254

sezione 'sezione1' (offset) unita in 'sezione2' (offset) con attributi differenti

È stato unito il contenuto di una sezione, ma gli attributi delle due sezioni sono diversi. Il programma può produrre risultati imprevisti. Ad esempio, data che si desidera leggere può ora essere solo in una sezione scrivibile.

Per risolvere LNK4254, modificare o rimuovere la richiesta di unione.

Quando la destinazione è x86 macchine e le destinazioni Windows CE (ARM, MIPS, SH4 e controllo Thumb) con Visual C++, il. Sezione CRT è di sola lettura. Se il codice dipende dal comportamento precedente (. CRT sono di lettura/scrittura), si potrebbe verificare un comportamento imprevisto.

Per ulteriori informazioni, vedere,

- [/MERGE (combina sezioni)](../../build/reference/merge-combine-sections.md)

- [comment (C/C++)](../../preprocessor/comment-c-cpp.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK4254.

```
// LNK4254.cpp
// compile with: /W1 /link /WX
// LNK4254 expected
#pragma comment(linker, "/merge:.data=.text")
int main() {}
```