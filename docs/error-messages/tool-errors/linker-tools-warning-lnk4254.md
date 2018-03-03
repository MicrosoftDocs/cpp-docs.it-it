---
title: Strumenti del linker LNK4254 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4254
dev_langs:
- C++
helpviewer_keywords:
- LNK4254
ms.assetid: 6f41dfb3-ca21-40d3-bac7-b637e578efa4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e17bcd03f92114c1b7cd21e63220cf6372c17bf2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4254"></a>Avviso degli strumenti del linker LNK4254
sezione 'sezione1' (offset) unita in 'sezione2' (offset) con attributi differenti  
  
 È stato unito il contenuto di una sezione, ma gli attributi di due sezioni sono diversi. Il programma può produrre risultati imprevisti. Ad esempio, si desidera leggere dati solo potrebbero essere in una sezione scrivibile.  
  
 Per risolvere LNK4254, modificare o rimuovere la richiesta di unione.  
  
 Quando la destinazione è x86 e computer Windows CE (ARM, MIPS, SH4 e Thumb) con Visual C++, il. CRT è di sola lettura. Se il codice dipende dal comportamento precedente (. CRT sono di lettura/scrittura), si potrebbe verificare un comportamento imprevisto.  
  
 Per ulteriori informazioni, vedere,  
  
-   [/MERGE (Combina sezioni)](../../build/reference/merge-combine-sections.md)  
  
-   [comment (C/C++)](../../preprocessor/comment-c-cpp.md)  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK4254.  
  
```  
// LNK4254.cpp  
// compile with: /W1 /link /WX  
// LNK4254 expected  
#pragma comment(linker, "/merge:.data=.text")  
int main() {}  
```