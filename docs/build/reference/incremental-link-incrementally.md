---
title: "/INCREMENTAL (collegamento incrementale) | Microsoft Docs"
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
  - "/incremental"
  - "VC.Project.VCLinkerTool.LinkIncremental"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/INCREMENTAL (opzione del linker)"
  - "INCREMENTAL (opzione del linker)"
  - "-INCREMENTAL (opzione del linker)"
  - "collegamento incrementale"
  - "Collega in modo incrementale (opzione)"
  - "LINK (strumento) [C++], opzioni per il collegamento completo"
ms.assetid: 135656ff-94fa-4ad4-a613-22e1a2a5d16b
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /INCREMENTAL (collegamento incrementale)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/INCREMENTAL[:NO]  
```  
  
## Note  
 Controlla il modo in cui il linker gestisce il collegamento incrementale.  
  
 Per impostazione predefinita il linker viene eseguito in modalità incrementale.  Per eseguire l'override di un collegamento incrementale predefinito, specificare \/INCREMENTAL:NO.  
  
 Un programma collegato in modo incrementale è funzionalmente equivalente a un programma che non lo è.  Dal momento che sono preparati per collegamenti incrementali successivi, i file eseguibili \(exe\) e le librerie a collegamento dinamico \(DLL\) collegati in modo incrementale presentano le seguenti caratteristiche:  
  
-   Sono di dimensioni maggiori rispetto ai programmi collegati in modo non incrementale a causa della spaziatura interna del codice e dei dati. \(La spaziatura interna consente al linker di aumentare le dimensioni delle funzioni e dei dati senza ricreare il file exe\).  
  
-   È possibile che contengano thunk dei salti per gestire la rilocazione di funzioni in nuovi indirizzi.  
  
    > [!NOTE]
    >  Per assicurarsi che la build di rilascio finale non contenga spaziatura interna o thunk, collegare il programma in modo non incrementale.  
  
 Per eseguire un collegamento incrementale indipendentemente dall'impostazione predefinita, specificare \/INCREMENTAL.  Quando questa opzione è selezionata, tramite il linker viene generato un avviso qualora il collegamento incrementale non possa essere eseguito, quindi il programma viene collegato in modo non incrementale.  Alcune opzioni e situazioni determinano l'override di \/INCREMENTAL.  
  
 È possibile collegare in modo incrementale la maggior parte dei programmi.  Alcune modifiche sono tuttavia eccessive e alcune opzioni sono incompatibili con il collegamento incrementale.  LINK esegue un collegamento completo se viene specificata una delle opzioni seguenti:  
  
-   Collegamento incrementale non selezionato \(\/INCREMENTAL:NO\)  
  
-   \/OPT:REF selezionato  
  
-   \/OPT:ICF selezionato  
  
-   \/OPT:LBR selezionato  
  
-   \/ORDER selezionato  
  
 \/INCREMENTAL è implicito quando si specifica [\/DEBUG](../../build/reference/debug-generate-debug-info.md).  
  
 LINK esegue un collegamento completo qualora si verifichi una delle situazioni seguenti:  
  
-   Il file di stato incrementale con estensione ilk è mancante. \(LINK crea un nuovo file ilk in preparazione del collegamento incrementale successivo\).  
  
-   Non si dispone dell'autorizzazione di scrittura per il file ilk. \(LINK ignora il file ilk ed esegue i collegamenti in modo non incrementale\).  
  
-   Il file di output exe o dll è mancante.  
  
-   Il timestamp del file ilk, exe o dll è cambiato.  
  
-   Un'opzione LINK è cambiata.  In caso di modifica nelle build, la maggior parte delle opzioni LINK causa un collegamento completo.  
  
-   Un file oggetto \(OBJ\) viene aggiunto o omesso.  
  
### Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **Abilita collegamento incrementale**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LinkIncremental%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)