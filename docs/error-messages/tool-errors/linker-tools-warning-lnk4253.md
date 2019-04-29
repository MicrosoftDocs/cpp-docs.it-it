---
title: Avviso degli strumenti del linker LNK4253
ms.date: 11/04/2016
f1_keywords:
- LNK4253
helpviewer_keywords:
- LNK4253
ms.assetid: ec7433a9-aa9c-495a-a9f2-075e7bc3e7bc
ms.openlocfilehash: d2fd7238a3f57b11b91813bd40b66cb3e9f47202
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62352522"
---
# <a name="linker-tools-warning-lnk4253"></a>Avviso degli strumenti del linker LNK4253

sezione 'sezione1' non è unita in 'sezione2'; già unita in 'sezione3'

Il linker ha rilevato più richieste di unione in conflitto. Verrà ignorata una delle richieste.

Oggetto **/UNIRE** viene rilevata l'opzione o una direttiva e il `from` sezione già unita in un'altra sezione a causa di una precedente **/MERGE** opzione o una direttiva (o a causa di un'unione implicita dal il linker).

Per risolvere LNK4253, rimuovere una delle richieste di unione.

Quando la destinazione è x86 macchine e le destinazioni Windows CE (ARM, MIPS, SH4 e controllo Thumb) con Visual C++, il. Sezione CRT diventa di sola lettura. Se il codice dipende dal comportamento precedente (. CRT sono di lettura/scrittura), si potrebbe verificare un comportamento imprevisto.

Per ulteriori informazioni, vedere,

- [/MERGE (combina sezioni)](../../build/reference/merge-combine-sections.md)

- [comment (C/C++)](../../preprocessor/comment-c-cpp.md)

## <a name="example"></a>Esempio

Nell'esempio seguente, il linker viene richiesto di unire il `.rdata` sezione due volte, ma in sezioni diverse. L'esempio seguente genera l'errore LNK4253.

```
// LNK4253.cpp
// compile with: /W1 /link /merge:.rdata=text2
// LNK4253 expected
#pragma comment(linker, "/merge:.rdata=.text")
int main() {}
```