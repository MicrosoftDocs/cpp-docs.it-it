---
title: Compilatore (livello 1) Avviso C4067 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4067
dev_langs: C++
helpviewer_keywords: C4067
ms.assetid: 1d10353e-8cd5-4b01-9184-a06189b965a4
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2b335535cbe66d3891806244ecce5d774d27d382
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4067"></a>Compilatore (livello 1) Avviso C4067
token imprevisti seguente direttiva per il preprocessore: previsto un carattere di nuova riga  
  
 Il compilatore trovato e ignorati caratteri supplementari dopo una direttiva del preprocessore. Questo avviso viene visualizzato solo in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).  
  
```  
// C4067a.cpp  
// compile with: /DX /Za /W1  
#pragma warning(default:4067)  
#if defined(X)  
#else  
#endif v   // C4067  
int main()  
{  
}  
```  
  
### <a name="to-resolve-this-warning-try-the-following"></a>Per risolvere il problema, procedere come segue:  
  
1.  Eseguire la compilazione con **/Ze**.  
  
2.  Utilizzare i delimitatori di commento:  
  
```  
// C4067b.cpp  
// compile with: /DX /Za /W1  
#if defined(X)  
#else  
#endif  
int main()  
{  
}  
```