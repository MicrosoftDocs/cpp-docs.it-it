---
title: Strumenti del linker LNK1237 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK1237
dev_langs: C++
helpviewer_keywords: LNK1237
ms.assetid: 8722ffa8-096a-4bb0-85f9-f3aa0e10872a
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 43ab77f153b6e53709422a1826a6beee25d65b2a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="linker-tools-error-lnk1237"></a>Errore degli strumenti del linker LNK1237
durante la generazione di codice, il compilatore ha introdotto un riferimento al simbolo 'simbolo' definito nel modulo 'modulo' compilato con /GL  
  
 Durante la generazione di codice, il compilatore consiglia di non introdurre simboli che vengono risolte in un secondo momento per le definizioni di compilazione **/GL**. `symbol`è un simbolo che è stato introdotto e successivamente risolto a una definizione di compilazione con **/GL**.  
  
 Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).  
  
 Per correggere l'errore LNK1237, non compilare il simbolo con **/GL** o utilizzare [/INCLUDE (forza riferimenti al simbolo)](../../build/reference/include-force-symbol-references.md) per forzare un riferimento al simbolo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore LNK1237. Per correggere l'errore, inizializzare la matrice in LNK1237_a. cpp e aggiungere **/include: chkstk** al comando del collegamento.  
  
```  
// LNK1237_a.cpp  
int main() {  
   char c[5000] = {0};  
}  
```  
  
```  
// LNK1237_b.cpp  
// compile with: /GS- /GL /c LNK1237_a.cpp  
// processor: x86  
// post-build command: (lib LNK1237_b.obj /LTCG & link LNK1237_a.obj LNK1237_b.lib /nodefaultlib /entry:main /LTCG)  
extern "C" void _chkstk(size_t s) {}  
```