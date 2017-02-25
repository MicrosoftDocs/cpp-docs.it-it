---
title: "/GH (Attiva funzione hook _pexit) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_pexit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gh (opzione del compilatore) [C++]"
  - "_pexit (funzione)"
  - "Gh (opzione del compilatore) [C++]"
  - "-Gh (opzione del compilatore) [C++]"
ms.assetid: 93181453-2676-42e5-bf63-3b19e07299b6
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /GH (Attiva funzione hook _pexit)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiama la funzione `_pexit` alla fine di ciascun metodo o funzione.  
  
## Sintassi  
  
```  
/GH  
```  
  
## Note  
 La funzione `_pexit`  non fa parte di alcuna libreria ed è il programmatore che decide se fornirne una definizione per `_pexit`.  
  
 A meno che non si intenda chiamare esplicitamente `_pexit`, non è necessario fornire un prototipo.  La funzione deve apparire come se avesse il seguente prototipo e deve inserire il contenuto di tutti i registri in ingresso e visualizzare il contenuto non modificato in uscita:  
  
```  
void __declspec(naked) _cdecl _pexit( void );  
```  
  
 `_pexit` è simile a `_penter`. Vedere [\/Gh \(Attiva funzione hook \_penter\)](../../build/reference/gh-enable-penter-hook-function.md) per un esempio di scrittura di una funzione `_pexit`.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)