---
title: Strumenti del linker LNK4253 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4253
dev_langs:
- C++
helpviewer_keywords:
- LNK4253
ms.assetid: ec7433a9-aa9c-495a-a9f2-075e7bc3e7bc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d26d688825f504cbce8224adc9a5766a555d2fc8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46016819"
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