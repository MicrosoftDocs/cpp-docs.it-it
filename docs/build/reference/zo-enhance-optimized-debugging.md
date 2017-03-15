---
title: "/Zo (Ottimizzare il debug) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "-Zo"
  - "/Zo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zo (opzione del compilatore) [C++]"
  - "Zo (opzione del compilatore) [C++]"
  - "-Zo (opzione del compilatore) [C++]"
ms.assetid: eea8d89a-7fe0-4fe1-86b2-7689bbebbd7f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /Zo (Ottimizzare il debug)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera informazioni di debug avanzate per il codice ottimizzato nelle compilazioni non di debug.  
  
## Sintassi  
  
```cpp  
/Zo[-]  
```  
  
## Note  
 L'opzione del compilatore **\/Zo** genera informazioni di debug avanzate per il codice ottimizzato.  L'ottimizzazione può usare i registri per le variabili locali, riordinare il codice, vettorizzare i cicli e rendere inline le chiamate di funzione.  Queste ottimizzazioni possono nascondere la relazione tra il codice sorgente e il codice oggetto compilato.  L'opzione **\/Zo** indica al compilatore di generare informazioni di debug aggiuntive per le variabili locali e le funzioni rese inline.  Usarla per visualizzare le variabili nelle finestre **Auto**, **Variabili locali** e **Espressioni di controllo** quando si esegue il codice ottimizzato un'istruzione alla volta nel debugger di Visual Studio.  Consente anche le analisi dello stack per mostrare le funzioni rese inline nel debugger WinDBG.  Per le compilazioni di debug in cui sono disabilitate le ottimizzazioni \([\/Od](../../build/reference/od-disable-debug.md)\) non sono necessarie le informazioni di debug aggiuntive generate quando viene specificato **\/Zo**.  Usare l'opzione **\/Zo** per eseguire il debug delle configurazioni di rilascio con l'ottimizzazione attivata.  Per altre informazioni sulle opzioni di ottimizzazione, vedere [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md).  L'opzione **\/Zo** viene incorporata per impostazione predefinita in Visual Studio 2015 quando si specificano le informazioni di debug con **\/Zi** o **\/Z7**.  Specificare **\/Zo\-** per disabilitare in modo esplicito l'opzione del compilatore.  
  
 L'opzione **\/Zo** è disponibile in Visual Studio 2013 Update 3 e sostituisce l'opzione **\/d2Zi\+** non documentata in precedenza.  
  
### Per impostare l'opzione \/Zo del compilatore in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per altre informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione**, **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** in modo da includere `/Zo`, quindi fare clic su **OK**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/O \(Ottimizza codice\)](../../build/reference/o-options-optimize-code.md)   
 [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../../build/reference/z7-zi-zi-debug-information-format.md)   
 [Modifica e continuazione](../Topic/Edit%20and%20Continue.md)