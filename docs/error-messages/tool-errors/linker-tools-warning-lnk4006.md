---
title: Strumenti del linker LNK4006 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4006
dev_langs: C++
helpviewer_keywords: LNK4006
ms.assetid: 3a637d17-1676-4ea6-bd8b-290137d28d3b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 021961029d274172119ae92aa10cc6a236dd973b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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