---
title: "/DELAY (Impostazioni dell&#39;importazione a caricamento ritardato) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/delay"
  - "VC.Project.VCLinkerTool.DelayNoBind"
  - "VC.Project.VCLinkerTool.SupportUnloadOfDelayLoadedDLL"
  - "VC.Project.VCLinkerTool.DelayUnload"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DELAY (opzione del linker)"
  - "DELAY (opzione del linker)"
  - "-DELAY (opzione del linker)"
  - "caricamento ritardato di DLL, /DELAY (opzione)"
ms.assetid: 9334b332-cc58-4dae-b10f-a4c75972d50c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /DELAY (Impostazioni dell&#39;importazione a caricamento ritardato)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DELAY:UNLOAD  
/DELAY:NOBIND  
```  
  
## Note  
 L'opzione \/DELAY controlla il [caricamento ritardato](../../build/reference/linker-support-for-delay-loaded-dlls.md) di DLL:  
  
-   Il qualificatore UNLOAD indica alla funzione dell'helper di caricamento ritardato di supportare lo scaricamento esplicito della DLL.  Viene ripristinato il formato originale della tabella di indirizzi di importazione. Ciò rende non validi i puntatori alla tabella e ne provoca la riscrittura.  
  
     Se non si seleziona UNLOAD, qualsiasi chiamata a [FUnloadDelayLoadedDLL](../../build/reference/explicitly-unloading-a-delay-loaded-dll.md) avrà esito negativo.  
  
-   Il qualificatore NOBIND indica al linker di non includere una tabella di indirizzi di importazione nell'immagine finale.  L'impostazione predefinita prevede la creazione della tabella di indirizzi di importazione associabile per DLL di caricamento ritardato.  L'immagine risultante non può essere associata in modo statico.  È possibile che le immagini con tabelle di indirizzi di importazione associabili siano associate in modo statico prima dell'esecuzione. Vedere [\/BIND](../../build/reference/bind.md).  
  
     Se il file DLL è associato, la funzione dell'helper proverà a usare le informazioni associate invece di chiamare [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212.aspx) in ogni importazione con riferimenti.  Se il timestamp o l'indirizzo preferito non corrisponde ai valori presenti nel file DLL caricato, la funzione dell'helper presupporrà che la tabella di indirizzi di importazione sia obsoleta e procederà come se la tabella di indirizzi di importazione non esistesse.  
  
     NOBIND provoca la creazione di immagini di programma di dimensioni superiori, ma può velocizzare il tempo di caricamento del file DLL.  Se non si prevede di associare il file DLL, NOBIND impedirà la generazione della tabella di indirizzi di importazione associata.  
  
 Per specificare i file DLL da caricare in modo ritardato, usare l'opzione [\/DELAYLOAD](../../build/reference/delayload-delay-load-import.md).  
  
### Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere **Proprietà di configurazione**, **Linker** e quindi selezionare **Avanzate**.  
  
3.  Modificare la proprietà **DLL a caricamento ritardato**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)