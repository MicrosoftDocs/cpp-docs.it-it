---
title: "Errore degli strumenti del linker LNK1301 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1301"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1301"
ms.assetid: 760da428-7182-4b25-b20a-de90d4b9a9cd
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore degli strumenti del linker LNK1301
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

trovati moduli clr LTCG, incompatibili con \/LTCG:parametro  
  
 Un modulo compilato con \/clr e \/GL è stato passato al linker insieme a un parametro di \/LTCG delle ottimizzazioni PGO.  
  
 Le ottimizzazioni PGO non sono supportate per i moduli \/clr.  
  
 Per ulteriori informazioni, vedere:  
  
-   [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md)  
  
-   [\/LTCG \(Generazione di codice in fase di collegamento\)](../../build/reference/ltcg-link-time-code-generation.md)  
  
-   [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Ottimizzazioni guidate da profilo \(PGO\)](../../build/reference/profile-guided-optimizations.md)  
  
### Per correggere l'errore  
  
1.  Non eseguire la compilazione con \/clr oppure non effettuare il collegamento a \/LTCG con un parametro PGO.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore LNK1301:  
  
```  
// LNK1301.cpp  
// compile with: /clr /GL /link /LTCG:PGI LNK1301.obj  
// LNK1301 expected  
class MyClass {  
public:  
   int i;  
};  
```