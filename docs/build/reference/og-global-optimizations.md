---
title: "/Og (Ottimizzazioni globali) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.GlobalOptimizations"
  - "/og"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Og (opzione del compilatore) [C++]"
  - "allocazione del registro automatica"
  - "eliminazione di espressioni secondarie comuni"
  - "Ottimizzazioni globali (opzione del compilatore) [C++]"
  - "cicli (strutture), ottimizzazione"
  - "Og (opzione del compilatore) [C++]"
  - "-Og (opzione del compilatore) [C++]"
ms.assetid: d10630cc-b9cf-4e97-bde3-8d7ee79e9435
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# /Og (Ottimizzazioni globali)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce ottimizzazioni locali e globali, allocazione del registro automatica e ottimizzazione dei cicli.  Deprecata.  
  
## Sintassi  
  
```  
/Og  
```  
  
## Note  
 Sono disponibili le ottimizzazioni riportate di seguito:  
  
-   Eliminazione di sottoespressioni comuni locali e globali  
  
     In questa ottimizzazione il valore di una sottoespressione comune viene calcolato una volta.  Nell'esempio che segue, se i valori di `b` e `c` non cambiano tra le tre espressioni, il compilatore può assegnare il calcolo di `b + c` a una variabile temporanea e sostituire la variabile per `b + c`:  
  
    ```  
    a = b + c;  
    d = b + c;  
    e = b + c;  
    ```  
  
     Per l'ottimizzazione delle sottoespressioni comuni locali, il compilatore esamina brevi sezioni di codice alla ricerca di sottoespressioni comuni.  Per l'ottimizzazione delle sottoespressioni comuni globali, il compilatore ricerca nelle intere funzioni delle sottoespressioni comuni.  
  
-   Allocazione del registro automatica  
  
     Questa ottimizzazione consente al compilatore di archiviare variabili e sottoespressioni utilizzate con frequenza nei registri. La parola chiave `register` viene ignorata.  
  
-   Ottimizzazione dei cicli  
  
     Questa ottimizzazione rimuove le sottoespressioni invariant dal corpo di un ciclo.  Un ciclo ottimale contiene solo espressioni i cui valori cambiano in ogni esecuzione del ciclo.  Nell'esempio che segue l'espressione `x + y` non cambia nel corpo del ciclo:  
  
    ```  
    i = -100;  
    while( i < 0 ) {  
        i += x + y;  
    }  
    ```  
  
     Dopo l'ottimizzazione, `x + y` viene calcolato una volta e non a ogni esecuzione del ciclo:  
  
    ```  
    i = -100;  
    t = x + y;  
    while( i < 0 ) {  
        i += t;  
    }  
    ```  
  
     L'ottimizzazione dei cicli è molto più efficiente se il compilatore è in grado di non prevedere alias, condizione impostabile con [\_\_restrict](../../cpp/extension-restrict.md), [noalias](../../cpp/noalias.md) o [restrict](../../cpp/restrict.md).  
  
    > [!NOTE]
    >  È possibile abilitare o disabilitare l'ottimizzazione globale funzione per funzione utilizzando il pragma `optimize`  con l'opzione `g`.  
  
 L'opzione **\/Og** attiva inoltre l'ottimizzazione del valore restituito denominato che elimina il costruttore e il distruttore di copia di un valore restituito basato sullo stack.  Per ulteriori informazioni, vedere [\/O1, \/O2 \(Riduci dimensione, Ottimizza velocità\)](../../build/reference/o1-o2-minimize-size-maximize-speed.md).  
  
 Per informazioni correlate, vedere [Genera funzioni intrinseche \(\/Oi\)](../../build/reference/oi-generate-intrinsic-functions.md) e [Ottimizzazione completa \(\/Ox\)](../../build/reference/ox-full-optimization.md).  
  
 L'opzione **\/Og** è deprecata; utilizzare [\/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o **\/O2**.  Per ulteriori informazioni, vedere [Deprecated Compiler Options in Visual C\+\+ 2005](http://msdn.microsoft.com/it-it/aa59fce3-50b8-4f66-9aeb-ce09a7a84cce).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)