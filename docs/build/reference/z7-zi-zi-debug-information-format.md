---
title: "/Z7, /Zi, /ZI (Formato informazioni di debug) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.DebugInformationFormat"
  - "/zi"
  - "/z7"
  - "VC.Project.VCCLWCECompilerTool.DebugInformationFormat"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Compatibile C7 (opzione del compilatore) [C++]"
  - "-Zl (opzione del compilatore) [C++]"
  - "Formato informazioni di debug (opzione del compilatore)"
  - "ZI (opzione del compilatore)"
  - "-Zi (opzione del compilatore) [C++]"
  - "/ZI (opzione del compilatore) [C++]"
  - "Z7 (opzione del compilatore) [C++]"
  - "debug [C++], file di informazioni di debug"
  - "Zi (opzione del compilatore) [C++]"
  - "none (opzione del compilatore) [C++]"
  - "/Zi (opzione del compilatore) [C++]"
  - "database di programma (opzione del compilatore) [C++]"
  - "informazioni complete di debug sui simboli"
  - "/Z7 (opzione del compilatore) [C++]"
  - "Solo numeri di riga (opzione del compilatore) [C++]"
  - "cl.exe (compilatore), opzioni di debug"
  - "-Z7 (opzione del compilatore) [C++]"
ms.assetid: ce9fa7e1-0c9b-47e3-98ea-26d1a16257c8
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# /Z7, /Zi, /ZI (Formato informazioni di debug)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il tipo delle informazioni di debug create per il programma e indica se tali informazioni vengono mantenute in file oggetto con estensione obj o in un database di programma \(PDB\).  
  
## Sintassi  
  
```  
/Z{7|i|I}  
```  
  
## Note  
 Le opzioni sono descritte nella tabella riportata di seguito.  
  
 None  
 Non produce informazioni di debug, pertanto la compilazione è più veloce.  
  
 **\/Z7**  
 Genera un file con estensione obj contenente informazioni di debug complete sui simboli da utilizzare con il debugger.  Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga.  Non viene generato alcun file pdb.  
  
 Per i distributori di librerie di terze parti l'assenza di un file pdb rappresenta un vantaggio.  Tuttavia, i file obj per le intestazioni precompilate sono necessari durante la fase di collegamento e per il debug.  Se nei file oggetto con estensione pch sono presenti solo informazioni sui tipi e nessun codice, sarà inoltre necessario eseguire la compilazione con [\/Yl \(Inserisce il riferimento PCH per la libreria di debug\)](../../build/reference/yl-inject-pch-reference-for-debug-library.md).  
  
 **\/Zi**  
 Produce un database di programma \(PDB\) contenente le informazioni sul tipo e le informazioni sul debug simbolico da utilizzare con il debugger.  Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga.  
  
 **\/Zi** non influisce sulle ottimizzazioni.  Tuttavia, **\/Zi** implica **\/debug**. Per ulteriori informazioni, vedere [\/DEBUG \(Genera informazioni di debug\)](../../build/reference/debug-generate-debug-info.md).  
  
 Le informazioni sui tipi vengono inserite nel file pdb, anziché nel file obj.  
  
 È possibile utilizzare l'opzione [\/Gm \(Attiva ricompilazione minima\)](../../build/reference/gm-enable-minimal-rebuild.md) con **\/Zi**, mentre **\/Gm** non è disponibile durante la compilazione con **\/Z7**.  
  
 Durante la compilazione con **\/Zi** e **\/clr**, l'attributo <xref:System.Diagnostics.DebuggableAttribute> non verrà inserito nei metadati dell'assembly. Per inserirlo, è necessario specificarlo nel codice sorgente.  Questo attributo potrà avere effetto sulle prestazioni di runtime dell'applicazione.  Per ulteriori informazioni sull'influenza dell'attributo Debuggable sulle prestazioni e su come modificare tale impatto, vedere [Semplificazione del debug di un'immagine](../Topic/Making%20an%20Image%20Easier%20to%20Debug.md).  
  
 **\/ZI**  
 Produce un database di programma, come descritto in precedenza, in un formato che supporta la funzionalità Modifica e continuazione.  Se si desidera utilizzare il debug di Modifica e continuazione, è necessario utilizzare questa opzione.  Dal momento che la maggior parte delle ottimizzazioni non è compatibile con la funzionalità Modifica e continuazione, l'utilizzo di **\/ZI** disabilita qualsiasi istruzione `#pragma optimize` all'interno del codice.  
  
 **\/ZI** determina l'utilizzo di [\/Gy \(Attiva collegamento a livello di funzione\)](../../build/reference/gy-enable-function-level-linking.md) e [\/FC \(Percorso completo del file di codice sorgente nella diagnostica\)](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md) nella compilazione.  
  
 **\/ZI** non è compatibile con [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
> [!NOTE]
>  **\/ZI** è disponibile solo nel compilatore per piattaforma x86, non nei compilatori per [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] o i processori ARM.  
  
 Il compilatore assegna al database di programma il nome *project*.pdb.  Se si compila un file senza progetto, il compilatore crea un database denominato VC*x*0.pdb., dove *x* è il numero di versione principale di [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] in uso.  Il compilatore incorpora il nome del file PDB in ogni file obj creato utilizzando questa opzione, puntando il debugger alla posizione delle informazioni sui simboli e sul numero di riga.  L'utilizzo di questa opzione fa sì che i file obj siano più piccoli, in quanto le informazioni di debug vengono archiviate nel file pdb anziché nei file obj.  
  
 Se si crea una libreria da oggetti compilati utilizzando questa opzione, il file pdb associato deve essere disponibile quando la libreria viene collegata a un programma.  In questo modo, se si distribuisce la libreria, è necessario distribuire il file PDB.  
  
 Per creare una libreria che contiene informazioni di debug senza utilizzare file pdb, è necessario selezionare l'opzione Compatibile C 7.0 \(**\/Z7**\) del compilatore.  Se si utilizzano le opzioni delle intestazioni precompilate, le informazioni di debug sia per l'intestazione precompilata che per il resto del codice sorgente verranno inserite nel file PDB.  L'opzione **\/Yd** viene ignorata quando si specifica l'opzione Database di programma.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **Formato informazioni di debug**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)