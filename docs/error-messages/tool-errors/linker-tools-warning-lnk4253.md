---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4253'
title: Avviso degli strumenti del linker LNK4253
ms.date: 11/04/2016
f1_keywords:
- LNK4253
helpviewer_keywords:
- LNK4253
ms.assetid: ec7433a9-aa9c-495a-a9f2-075e7bc3e7bc
ms.openlocfilehash: 764d7698da8d724842b8387c9c4356bfce951079
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244485"
---
# <a name="linker-tools-warning-lnk4253"></a>Avviso degli strumenti del linker LNK4253

la sezione ' sezione1' non è stata unita in ' sezione2'; Unione già in ' sezione3'

Il linker ha rilevato più richieste di merge in conflitto. Il linker ignorerà una delle richieste.

È stata rilevata un'opzione o una direttiva **/merge** e la `from` sezione è già stata unita in un'altra sezione a causa di un'opzione o di una direttiva **/merge** precedente (o a causa di un'Unione implicita dal linker).

Per risolvere LNK4253, rimuovere una delle richieste di Unione.

Quando si fa riferimento a computer x86 e a destinazioni Windows CE (ARM, MIPS, SH4 e Thumb) con Visual C++, il. La sezione CRT è ora di sola lettura. Se il codice dipende dal comportamento precedente (. Le sezioni CRT sono di lettura/scrittura), è possibile che si verifichi un comportamento imprevisto.

Per ulteriori informazioni, vedere,

- [/MERGE (combina sezioni)](../../build/reference/merge-combine-sections.md)

- [comment (C/C++)](../../preprocessor/comment-c-cpp.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene indicato al linker di unire la `.rdata` sezione due volte, ma in sezioni diverse. L'esempio seguente genera l'LNK4253.

```cpp
// LNK4253.cpp
// compile with: /W1 /link /merge:.rdata=text2
// LNK4253 expected
#pragma comment(linker, "/merge:.rdata=.text")
int main() {}
```
