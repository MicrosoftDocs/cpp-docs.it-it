---
title: Strumenti del linker LNK4253 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4253
dev_langs: C++
helpviewer_keywords: LNK4253
ms.assetid: ec7433a9-aa9c-495a-a9f2-075e7bc3e7bc
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6d1142544852980b8bd1d543783a9ffdf3361879
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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