---
title: "Unicode in MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stringhe [C++], Unicode"
  - "Unicode [C++], abilitazione"
  - "Unicode [C++], MFC"
  - "caratteri wide, codifica"
  - "caratteri wide, Unicode"
ms.assetid: 1002004b-4113-4380-bf63-e1570934b793
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Unicode in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC supporta lo standard Unicode per la codifica di caratteri di tipo wide nelle piattaforme Windows NT, Windows 2000 e Windows XP.  Le applicazioni Unicode non possono essere eseguite su piattaforme Windows 98.  
  
 Le versioni Unicode delle librerie MFC vengono descritte di seguito:  
  
### Librerie a collegamento statico  
  
|Release|Debug|Descrizione|  
|-------------|-----------|-----------------|  
|UAFXCW.lib, .pdb|UAFXCWD.lib, .pdb|Libreria a collegamento statico Unicode MFC|  
  
### Librerie a collegamento dinamico  
  
|Release|Debug|Descrizione|  
|-------------|-----------|-----------------|  
|MFC100U.lib, .dbg, def, .dll, .map, .pdb, .prf|MFC100UD.lib, .def, .dll, .map, .pdb|Libreria di importazione Unicode MFC \(vedere le note riportate di seguito per una spiegazione sulle estensioni dei file\)|  
|MFCS100U.lib, .pdb|MFCS100UD.lib, .pdb|Libreria di importazione Unicode MFC contenente codice che deve essere collegato staticamente in un'applicazione o in una DLL|  
  
 **Tipi di file**  
  
-   I file della libreria di importazione hanno l'estensione \(.lib\).  
  
-   I file di libreria a collegamento dinamico hanno l'estensione \(.dll\).  
  
-   I file di definizione moduli \(.def\) sono file di testo contenenti istruzioni per la definizione di file .exe o .dll.  
  
-   I file di mappa \(.map\) sono file di testo contenenti informazioni che il linker utilizza quando esegue il collegamento di un programma.  
  
-   I file di libreria \(.lib\) vengono utilizzati insieme alla versione DLL di MFC.  Questi file contengono il codice che deve essere collegato staticamente all'applicazione o alla DLL.  
  
-   I file di database di programma \(.pdb\) contengono informazioni di debug e sullo stato del progetto.  
  
-   I file di debug \(.dbg\) contengono informazioni \(COFF FPO e CodeView\) utilizzate dal debugger di Visual C\+\+.  
  
 Per informazioni dettagliate sulle convenzioni di denominazione, vedere [Convenzioni di denominazione delle librerie](../mfc/library-naming-conventions.md).  
  
 Per informazioni sull'utilizzo di Unicode con MFC, vedere [Stringhe: Supporto per set di caratteri Unicode e Multibyte \(MBCS\)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).  
  
## Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)