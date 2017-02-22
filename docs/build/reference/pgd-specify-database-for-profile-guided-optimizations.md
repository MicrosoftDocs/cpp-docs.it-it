---
title: "/PGD (Specifica il database per le ottimizzazioni PGO) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.ProfileGuidedDatabase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/PGD (opzione del linker)"
  - "-PGD (opzione del linker)"
ms.assetid: 9f312498-493b-461f-886f-92652257e443
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /PGD (Specifica il database per le ottimizzazioni PGO)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\/PGD:`filename`  
  
## Note  
 dove:  
  
 `filename`  
 Specifica il nome del file pgd in cui verranno memorizzate le informazioni relative al programma in esecuzione.  
  
## Note  
 Quando si utilizza [\/LTCG:PGINSTRUMENT](../../build/reference/ltcg-link-time-code-generation.md), utilizzare \/PGD per specificare un nome o una posizione non predefinita per il file pgd.  Se non si specifica \/PGD, il nome del file pgd sarà lo stesso del file di output \(exe o dll\) e verrà creato nella stessa directory dal quale è stato richiamato il collegamento.  
  
 Quando si utilizza \/LTCG:PGOPTIMIZE, utilizzare \/PGD per specificare il nome del file pgd da utilizzare per creare l'immagine ottimizzata.  
  
 Per ulteriori informazioni, vedere [Ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Selezionare la pagina delle proprietà **Ottimizzazione**.  
  
5.  Modificare la proprietà **Database PGO**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProfileGuidedDatabase%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)