---
title: Avviso degli strumenti del linker LNK4253
ms.date: 11/04/2016
f1_keywords:
- LNK4253
helpviewer_keywords:
- LNK4253
ms.assetid: ec7433a9-aa9c-495a-a9f2-075e7bc3e7bc
ms.openlocfilehash: c3f45880571e5c06f76d5f063ff993e2f6b2be9b
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988094"
---
# <a name="linker-tools-warning-lnk4253"></a>Avviso degli strumenti del linker LNK4253

la sezione ' sezione1' non è stata unita in ' sezione2'; Unione già in ' sezione3'

Il linker ha rilevato più richieste di merge in conflitto. Il linker ignorerà una delle richieste.

È stata rilevata un'opzione o una direttiva **/merge** e la sezione `from` è già stata unita in un'altra sezione a causa di un'opzione o di una direttiva **/merge** precedente oppure a causa di un'Unione implicita dal linker.

Per risolvere LNK4253, rimuovere una delle richieste di Unione.

Quando si fa riferimento a computer x86 e a destinazioni Windows CE (ARM, MIPS, SH4 e Thumb) C++con Visual, il. La sezione CRT è ora di sola lettura. Se il codice dipende dal comportamento precedente (. Le sezioni CRT sono di lettura/scrittura), è possibile che si verifichi un comportamento imprevisto.

Per ulteriori informazioni, vedere,

- [/MERGE (combina sezioni)](../../build/reference/merge-combine-sections.md)

- [comment (C/C++)](../../preprocessor/comment-c-cpp.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene indicato al linker di unire la sezione `.rdata` due volte, ma in sezioni diverse. L'esempio seguente genera l'LNK4253.

```cpp
// LNK4253.cpp
// compile with: /W1 /link /merge:.rdata=text2
// LNK4253 expected
#pragma comment(linker, "/merge:.rdata=.text")
int main() {}
```
