---
title: Unicode in MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- wide characters, Unicode
- Unicode [MFC], MFC
- wide characters, encoding
- strings [MFC], Unicode
- Unicode [MFC], enabling
ms.assetid: 1002004b-4113-4380-bf63-e1570934b793
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2c1a104ffc30a7463d640f63d26f7a80faad333b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="unicode-in-mfc"></a>Unicode in MFC
MFC supporta lo standard Unicode per la codifica di caratteri di tipo wide nelle piattaforme Windows NT, Windows 2000 e Windows XP. Le applicazioni Unicode non possono essere eseguite su piattaforme Windows 98.  
  
 Le versioni Unicode delle librerie MFC vengono descritte di seguito:  
  
### <a name="static-link-libraries"></a>Librerie a collegamento statico  
  
|Rilascio|Debug|Descrizione|  
|-------------|-----------|-----------------|  
|UAFXCW.lib, .pdb|UAFXCWD.lib, .pdb|Libreria a collegamento statico Unicode MFC|  
  
### <a name="dynamic-link-libraries"></a>Librerie a collegamento dinamico  
  
|Versione|Debug|Descrizione|  
|-------------|-----------|-----------------|  
|MFC100U.lib, .dbg, def, .dll, .map, .pdb, .prf|MFC100UD.lib, .def, .dll, .map, .pdb|Libreria di importazione Unicode MFC (vedere le note riportate di seguito per una spiegazione sulle estensioni dei file)|  
|MFCS100U.lib, .pdb|MFCS100UD.lib, .pdb|Libreria di importazione Unicode MFC contenente codice che deve essere collegato staticamente in un'applicazione o in una DLL|  
  
 **Tipi di file**  
  
-   I file della libreria di importazione hanno l'estensione (.lib).  
  
-   I file di libreria a collegamento dinamico hanno l'estensione dll.  
  
-   I file di definizione moduli (con estensione def) sono file di testo contenenti istruzioni per la definizione di file con estensione exe o dll.  
  
-   I file di mappa (con estensione map) sono file di testo contenenti informazioni che il linker utilizza quando esegue il collegamento di un programma.  
  
-   I file di libreria (con estensione lib) vengono utilizzati insieme alla versione DLL di MFC. Questi file contengono il codice che deve essere collegato staticamente all'applicazione o alla DLL.  
  
-   I file di database di programma (.pdb) contengono informazioni sul debug e sullo stato del progetto.  
  
-   I file di debug (con estensione dbg) contengono informazioni (COFF FPO e CodeView) utilizzate dal debugger di Visual C++.  
  
 Per informazioni dettagliate sulle convenzioni di denominazione, vedere [convenzioni di denominazione delle librerie](../mfc/library-naming-conventions.md).  
  
 Per informazioni sull'utilizzo di Unicode con MFC, vedere [stringhe: supporto Unicode e impostare caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

