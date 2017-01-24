---
title: "/DEBUGTYPE (opzioni delle informazioni di debug) | Microsoft Docs"
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
  - "/debugtype"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DEBUGTYPE (opzione del linker)"
  - "DEBUGTYPE (opzione del linker)"
  - "-DEBUGTYPE (opzione del linker)"
ms.assetid: 1ddcb718-7fec-4f92-a319-3f70f04fe742
caps.latest.revision: 2
caps.handback.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DEBUGTYPE (opzioni delle informazioni di debug)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione \/DEBUGTYPE specifica i tipi di informazioni di debug generate dall'opzione \/DEBUG.  
  
```  
/DEBUGTYPE:[CV | PDATA | FIXUP]  
```  
  
## Argomenti  
 CV  
 Indica al linker di creare informazioni di debug per simboli, numeri di riga e altre informazioni di compilazione degli oggetti nel file PDB.  Per impostazione predefinita, questa opzione è abilitata quando **\/DEBUG** è specificato e **\/DEBUGTYPE** non è specificato.  
  
 PDATA  
 Indica al linker di aggiungere le voci .pdata e .xdata alle informazioni sul flusso di debug nel file PDB.  Per impostazione predefinita, questa opzione è abilitata quando sono specificate entrambe le opzioni **\/DEBUG** e **\/DRIVER**.  Se **\/DEBUGTYPE:PDATA** è specificato da solo, il linker include automaticamente i simboli di debug nel file PDB.  Se **\/DEBUGTYPE:PDATA,FIXUP** è specificato, il linker non include i simboli di debug nel file PDB.  
  
 FIXUP  
 Indica al linker di aggiungere le voci della tabella rilocazioni alle informazioni sul flusso di debug nel file PDB.  Per impostazione predefinita, questa opzione è abilitata quando sono specificate entrambe le opzioni **\/DEBUG** e **\/PROFILE**.  Se **\/DEBUGTYPE:FIXUP** o **\/DEBUGTYPE:FIXUP,PDATA** è specificato, il linker non include i simboli di debug nel file PDB.  
  
 Gli argomenti per **\/DEBUGTYPE** possono essere combinati in qualsiasi ordine separandoli con una virgola.  L'opzione **\/DEBUGTYPE** e i relativi argomenti non fanno distinzione tra maiuscole e minuscole.  
  
## Note  
 Usare l'opzione **\/DEBUGTYPE** per specificare l'inclusione dei dati della tabella rilocazioni o delle informazioni di intestazione .pdata e .xdata nel flusso di debug.  Il linker include così le informazioni sul codice in modalità utente visibile in un debugger del kernel durante un'interruzione nel codice in modalità kernel.  Per rendere disponibili i simboli di debug quando **FIXUP** è specificato, includere l'argomento **CV**.  
  
 Per eseguire il debug del codice in modalità utente, come avviene spesso per le applicazioni, l'opzione **\/DEBUGTYPE** non è necessaria.  Per impostazione predefinita, le opzioni del compilatore che specificano l'output di debug \([\/Z7, \/Zi, \/ZI](../../build/reference/z7-zi-zi-debug-information-format.md)\) creano tutte le informazioni necessarie al debugger di Visual Studio.  Usare **\/DEBUGTYPE:PDATA** o **\/DEBUGTYPE:CV,PDATA,FIXUP** per eseguire il debug del codice che combina i componenti in modalità utente e in modalità kernel, ad esempio un'app di configurazione per un driver di dispositivo.  Per altre informazioni sui debugger in modalità kernel, vedere [Strumenti di debug per Windows \(WinDbg, KD, CDB, NTSD\)](http://go.microsoft.com/fwlink/p?LinkID=285651)  
  
## Vedere anche  
 [\/DEBUG \(Genera informazioni di debug\)](../../build/reference/debug-generate-debug-info.md)   
 [\/DRIVER \(Driver in modalità kernel di Windows NT\)](../../build/reference/driver-windows-nt-kernel-mode-driver.md)   
 [\/PROFILE \(Profiler strumenti di prestazioni\)](../../build/reference/profile-performance-tools-profiler.md)   
 [Strumenti di debug per Windows \(WinDbg, KD, CDB, NTSD\)](http://go.microsoft.com/fwlink/p?LinkID=285651)