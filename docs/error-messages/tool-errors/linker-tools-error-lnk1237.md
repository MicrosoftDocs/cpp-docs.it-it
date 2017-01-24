---
title: "Errore degli strumenti del linker LNK1237 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1237"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1237"
ms.assetid: 8722ffa8-096a-4bb0-85f9-f3aa0e10872a
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1237
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

durante la generazione del codice, il compilatore ha introdotto un riferimento al simbolo 'simbolo' definito nel modulo 'modulo' compilato con \/GL  
  
 Durante la generazione del codice, il compilatore non deve introdurre simboli che verranno successivamente risolti in definizioni compilate con l'opzione **\/GL**.  Il parametro `symbol` è un simbolo che è stato introdotto e successivamente risolto in una definizione compilata con l'opzione **\/GL**.  
  
 Per ulteriori informazioni, vedere [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md).  
  
 Per correggere l'errore LNK1237, non compilare il simbolo con **\/GL** oppure utilizzare [\/INCLUDE \(Forza riferimenti al simbolo\)](../../build/reference/include-force-symbol-references.md) per forzare un riferimento al simbolo.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK1237.  Per correggere questo errore, non inizializzare la matrice in LNK1237\_a.cpp e aggiungere **\/include:\_\_chkstk** al comando del collegamento.  
  
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