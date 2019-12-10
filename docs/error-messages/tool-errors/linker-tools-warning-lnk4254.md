---
title: Avviso degli strumenti del linker LNK4254
ms.date: 11/04/2016
f1_keywords:
- LNK4254
helpviewer_keywords:
- LNK4254
ms.assetid: 6f41dfb3-ca21-40d3-bac7-b637e578efa4
ms.openlocfilehash: 8431bd2d89fd5df5cf076ad006ab04006f552c4c
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988057"
---
# <a name="linker-tools-warning-lnk4254"></a>Avviso degli strumenti del linker LNK4254

sezione ' sezione1' (offset) unita in ' sezione2' (offset) con attributi diversi

Il contenuto di una sezione è stato unito in un altro, ma gli attributi delle due sezioni sono diversi. Il programma può produrre risultati imprevisti. Ad esempio, i dati che si desidera leggere solo potrebbero ora trovarsi in una sezione scrivibile.

Per risolvere LNK4254, modificare o rimuovere la richiesta di merge.

Quando si fa riferimento a computer x86 e a destinazioni Windows CE (ARM, MIPS, SH4 e Thumb) C++con Visual, il. La sezione CRT è di sola lettura. Se il codice dipende dal comportamento precedente (. Le sezioni CRT sono di lettura/scrittura), è possibile che si verifichi un comportamento imprevisto.

Per ulteriori informazioni, vedere,

- [/MERGE (combina sezioni)](../../build/reference/merge-combine-sections.md)

- [comment (C/C++)](../../preprocessor/comment-c-cpp.md)

## <a name="example"></a>Esempio

L'esempio seguente genera l'LNK4254.

```cpp
// LNK4254.cpp
// compile with: /W1 /link /WX
// LNK4254 expected
#pragma comment(linker, "/merge:.data=.text")
int main() {}
```
