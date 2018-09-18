---
title: Strumenti del linker LNK4254 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4254
dev_langs:
- C++
helpviewer_keywords:
- LNK4254
ms.assetid: 6f41dfb3-ca21-40d3-bac7-b637e578efa4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f2ef421cbfa87ecab8a27dfa796eaa4eaacf7b70
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46064646"
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