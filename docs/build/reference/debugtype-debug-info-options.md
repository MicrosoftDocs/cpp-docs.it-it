---
title: -DEBUGTYPE (opzioni di informazioni di Debug) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /debugtype
dev_langs: C++
helpviewer_keywords:
- /DEBUGTYPE linker option
- DEBUGTYPE linker option
- -DEBUGTYPE linker option
ms.assetid: 1ddcb718-7fec-4f92-a319-3f70f04fe742
caps.latest.revision: "2"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7532f0ceb39db4ff2ff44a6cca9076034ece3114
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="debugtype-debug-info-options"></a>/DEBUGTYPE (opzioni delle informazioni di debug)
L'opzione /DEBUGTYPE specifica i tipi di informazioni di debug generate dall'opzione /DEBUG.  
  
```  
/DEBUGTYPE:[CV | PDATA | FIXUP]  
```  
  
## <a name="arguments"></a>Argomenti  
 CV  
 Indica al linker di creare informazioni di debug per simboli, numeri di riga e altre informazioni di compilazione degli oggetti nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando **/debug** specificato e **/DEBUGTYPE** non è specificato.  
  
 PDATA  
 Indica al linker di aggiungere le voci .pdata e .xdata alle informazioni sul flusso di debug nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando sia il **/debug** e **/DRIVER** vengono specificate le opzioni. Se **/DEBUGTYPE:PDATA** specificato da solo, il linker include automaticamente i simboli nel file PDB di debug. Se **/DEBUGTYPE:PDATA, correzione** è specificato, il linker non include i simboli nel file PDB di debug.  
  
 FIXUP  
 Indica al linker di aggiungere le voci della tabella rilocazioni alle informazioni sul flusso di debug nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando sia il **/debug** e **/profilo** vengono specificate le opzioni. Se **/DEBUGTYPE:FIXUP** o **/DEBUGTYPE:FIXUP, PDATA** è specificato, il linker non include i simboli nel file PDB di debug.  
  
 Argomenti da **/DEBUGTYPE** possono essere combinati in qualsiasi ordine separandoli con una virgola. Il **/DEBUGTYPE** opzione e i relativi argomenti non sono tra maiuscole e minuscole.  
  
## <a name="remarks"></a>Note  
 Utilizzare il **/DEBUGTYPE** opzione per specificare l'inclusione di rilocazione dei dati o pdata e xdata intestazione informazioni della tabella nel flusso di debug. Il linker include così le informazioni sul codice in modalità utente visibile in un debugger del kernel durante un'interruzione nel codice in modalità kernel. Per rendere disponibili i simboli di debug quando **correzione** è specificato, includere il **CV** argomento.  
  
 Per eseguire il debug di codice in modalità utente, come avviene in genere per le applicazioni, il **/DEBUGTYPE** opzione non è necessaria. Per impostazione predefinita, le opzioni del compilatore che specificano il debug di output ([/Z7, /Zi, /ZI](../../build/reference/z7-zi-zi-debug-information-format.md)) la creazione di tutto le informazioni necessarie da Visual Studio del debugger. Utilizzare **/DEBUGTYPE:PDATA** o **/DEBUGTYPE: CV, PDATA, correzione** per eseguire il debug di codice che combina i componenti in modalità utente e in modalità kernel, ad esempio un'app di configurazione per un driver di dispositivo. Per ulteriori informazioni su debugger in modalità kernel, vedere [strumenti di debug per Windows (WinDbg, KD, CDB, NTSD)](http://go.microsoft.com/fwlink/p?LinkID=285651)  
  
## <a name="see-also"></a>Vedere anche  
 [/DEBUG (genera informazioni di Debug)](../../build/reference/debug-generate-debug-info.md)   
 [/DRIVER (Driver in modalità Kernel di Windows NT)](../../build/reference/driver-windows-nt-kernel-mode-driver.md)   
 [/Profile (Profiler strumenti di prestazioni)](../../build/reference/profile-performance-tools-profiler.md)   
 [Strumenti di debug per Windows (WinDbg, KD, CDB, NTSD)](http://go.microsoft.com/fwlink/p?LinkID=285651)