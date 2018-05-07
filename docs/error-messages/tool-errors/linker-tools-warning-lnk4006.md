---
title: Strumenti del linker LNK4006 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4006
dev_langs:
- C++
helpviewer_keywords:
- LNK4006
ms.assetid: 3a637d17-1676-4ea6-bd8b-290137d28d3b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 261d5dcc27c44291ddc6de4a6440cde040a84ed7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4006"></a>Avviso degli strumenti del linker LNK4006
simbolo già definito nell'oggetto. seconda definizione ignorata  
  
 Il `symbol` specificato, visualizzato nel formato decorato, ha più definizioni. Quando viene visualizzato questo avviso, `symbol` verrà aggiunto due volte, ma solo il primo formato da utilizzare.  
  
 È possibile ottenere questo avviso se si tenta di unire due librerie di importazione.  
  
 Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Il dato `symbol` può essere una funzione di package, creata dalla compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md). Questo simbolo è stato incluso in più di un file ma modificato tra compilazioni. Ricompilare tutti i file che includono il `symbol`.  
  
2.  Il dato `symbol` possono essere state definite in modo diverso in due oggetti membro in librerie diverse.  
  
3.  Un assoluto può essere stato definito due volte, con un valore diverso in ogni definizione.  
  
4.  Se il messaggio di errore viene generato quando si combinano le librerie, `symbol` esiste già nella raccolta viene aggiunto a.