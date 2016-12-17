---
title: "/VERBOSE (stampa di messaggi sullo stato) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/verbose"
  - "VC.Project.VCLinkerTool.ShowProgress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/VERBOSE (opzione del linker)"
  - "dipendenze [C++], informazioni nell'output del linker"
  - "linker [C++], output di informazioni sulla dipendenza"
  - "collegamento [C++], informazioni sullo stato della sessione"
  - "Stampa messaggi sullo stato (opzione del linker)"
  - "VERBOSE (opzione del linker)"
  - "-VERBOSE (opzione del linker)"
ms.assetid: 9c347d98-4c37-4724-a39e-0983934693ab
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /VERBOSE (stampa di messaggi sullo stato)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/VERBOSE[:{ICF|INCR|LIB|REF|SAFESEH|UNUSEDLIBS}]  
```  
  
## Note  
 Dal linker vengono inviate alla finestra **Output** informazioni sullo stato della sessione di collegamento.  Alla riga di comando le informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|\/VERBOSE|Visualizza dettagli sul processo di collegamento.|  
|\/VERBOSE:ICF|Visualizza informazioni sull'attività del linker risultante dall'utilizzo di [\/OPT:ICF](../../build/reference/opt-optimizations.md).|  
|\/VERBOSE:INCR|Visualizza informazioni sul processo di collegamento incrementale.|  
|\/VERBOSE:LIB|Visualizza messaggi di stato che indicano solo le librerie in cui viene eseguita la ricerca.<br /><br /> Le informazioni visualizzate includono il processo di ricerca nella libreria e vengono elencati ciascun nome di libreria e di oggetto \(con il percorso completo\), il simbolo risolto nella libreria e un elenco di oggetti che fanno riferimento al simbolo.|  
|\/VERBOSE:REF|Visualizza informazioni sull'attività del linker risultante dall'utilizzo di [\/OPT:REF](../../build/reference/opt-optimizations.md).|  
|\/VERBOSE:SAFESEH|Visualizza informazioni sui moduli non compatibili con la gestione sicura delle eccezioni quando non è specificato [\/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).|  
|\/VERBOSE:UNUSEDLIBS|Visualizza informazioni su tutti i file di libreria che non sono stati utilizzati quando l'immagine è stata creata.|  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Espandere la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Aggiungere l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)