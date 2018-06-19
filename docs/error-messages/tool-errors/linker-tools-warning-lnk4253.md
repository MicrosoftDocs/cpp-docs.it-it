---
title: Strumenti del linker LNK4253 avviso | Documenti Microsoft
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
ms.openlocfilehash: bae4e88e1fe1434cd638d5c31cc8fd4d5c02c4de
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33301281"
---
# <a name="linker-tools-warning-lnk4253"></a>Avviso degli strumenti del linker LNK4253
sezione 'sezione1' non è unita in 'sezione2'; già unita in 'sezione3'  
  
 Il linker ha rilevato più richieste di unione in conflitto. Verrà ignorata una delle richieste.  
  
 Oggetto **/MERGE** viene rilevata l'opzione o una direttiva e `from` sezione è già stata unita in un'altra sezione a causa di un precedente **/MERGE** opzione o una direttiva (o a causa di un'unione implicita dal il linker).  
  
 Per correggere l'errore LNK4253, rimuovere una delle richieste di unione.  
  
 Quando la destinazione è x86 e computer Windows CE (ARM, MIPS, SH4 e Thumb) con Visual C++, il. Sezione CRT diventa di sola lettura. Se il codice dipende dal comportamento precedente (. CRT sono di lettura/scrittura), si potrebbe verificare un comportamento imprevisto.  
  
 Per ulteriori informazioni, vedere,  
  
-   [/MERGE (combina sezioni)](../../build/reference/merge-combine-sections.md)  
  
-   [comment (C/C++)](../../preprocessor/comment-c-cpp.md)  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, il linker viene richiesto di unire il `.rdata` sezione due volte, ma in sezioni diverse. L'esempio seguente genera l'errore LNK4253.  
  
```  
// LNK4253.cpp  
// compile with: /W1 /link /merge:.rdata=text2  
// LNK4253 expected  
#pragma comment(linker, "/merge:.rdata=.text")  
int main() {}  
```