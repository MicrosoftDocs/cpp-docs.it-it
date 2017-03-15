---
title: "Pagina delle propriet&#224; NMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCNMakeTool.ReBuildCommandLine"
  - "VC.Project.VCNMakeTool.CleanCommandLine"
  - "VC.Project.VCNMakeTool.Output"
  - "VC.Project.VCNMakeTool.BuildCommandLine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NMake (pagina delle proprietà)"
ms.assetid: bd20cb52-9f1d-4240-b4fc-4f43205ac94b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Pagina delle propriet&#224; NMAKE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le pagine delle proprietà **NMake** consentono di specificare le impostazioni di compilazione per i progetti NMake.  
  
 Per ulteriori informazioni sui progetti NMAKE, vedere [Creazione di un progetto makefile](../ide/creating-a-makefile-project.md).  
  
 Nella pagina delle proprietà **NMake** sono disponibili le seguenti proprietà.  
  
## Elenco UIElement  
 **Compila da riga di comando**  
 Consente di specificare il comando da eseguire quando si sceglie **Compila** dal menu **Compila**.  
  
 **Ricompila tutto da riga di comando**  
 Consente di specificare il comando da eseguire quando si sceglie **Ricompila tutto** dal menu **Compila**.  
  
 **Pulisci da riga di comando**  
 Consente di specificare il comando da eseguire quando si sceglie **Pulisci** dal menu **Compila**.  
  
 **Output**  
 Consente di specificare il nome del file contenente l'output per la riga di comando.  Per impostazione predefinita, questo nome di file si basa sul nome del progetto.  
  
 **Definizioni preprocessore**  
 Specifica ogni definizione del preprocessore utilizzata nei file d'origine.  Il valore predefinito è determinato dalla piattaforma e dalla configurazione correnti.  
  
 **Percorsi di ricerca**  
 Specifica le directory dove il compilatore cerca file di inclusione.  
  
 **Imposti**  
 Specifica file che il preprocessore elabora automaticamente anche se non sono inclusi nei file di progetto.  
  
 **Percorsi di ricerca dell'assembly**  
 Specifica le directory dove cerca .NET Framework quando tenta di risolvere assembly .NET.  
  
 **Assembly imposti**  
 Specifica assembly che .NET Framework elabora automaticamente.  
  
 **Opzioni aggiuntive**  
 Specifica qualsiasi opzione del compilatore aggiuntiva affinché IntelliSense la utilizzi quando analizza file C\+\+.  
  
 Per informazioni sull'accesso alla pagina delle proprietà **NMake**, vedere [Procedura: specificare le proprietà dei progetti tramite Pagine delle proprietà](../misc/how-to-specify-project-properties-with-property-pages.md).  
  
 Per informazioni su come accedere a livello di codice ai membri di questo oggetto, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCNMakeTool>.  
  
## Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)   
 [Procedura: abilitare IntelliSense per progetti makefile](../ide/how-to-enable-intellisense-for-makefile-projects.md)