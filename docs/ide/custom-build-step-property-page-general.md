---
title: "Pagina Istruzione di compilazione personalizzata: Generale | Microsoft Docs"
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
  - "VC.Project.VCCustomBuildStep.AdditionalInputs"
  - "VC.Project.VCCustomBuildStep.CustomBuildAfterTargets"
  - "VC.Project.VCCustomBuildStep.CustomBuildBeforeTargets"
  - "VC.Project.VCCustomBuildStep.Outputs"
  - "VC.Project.VCCustomBuildStep.Message"
  - "VC.Project.VCCustomBuildStep.Command"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "proprietà progetto, istruzione di compilazione personalizzata"
  - "istruzione di compilazione personalizzata (generale)"
ms.assetid: bd319741-0491-46c4-a428-7c61b4b46a02
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Pagina Istruzione di compilazione personalizzata: Generale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per ogni combinazione di configurazione del progetto e piattaforma di destinazione, è possibile specificare un'istruzione personalizzata da eseguire quando il progetto viene compilato.  
  
## Elenco UIElement  
 **Riga di comando**  
 Comando da eseguire tramite l'istruzione di compilazione personalizzata.  
  
 **Descrizione**  
 Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata.  
  
 **Outputs**  
 File di output che viene generato dall'istruzione di compilazione personalizzata.  Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali.  
  
 **Dipendenze aggiuntive**  
 Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata.  
  
 **Esegui dopo ed Esegui prima**  
 Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate.  Le destinazioni più comunemente elencate sono BuildGenerateSources, BuildCompile e BuildLink perché rappresentano le istruzioni principali nel processo di compilazione.  Altre destinazioni elencate spesso sono Midl, CLCompile e Link.  
  
 Considera output come contenuto  
 Questa opzione è significativa solo per le applicazioni Windows Store o Windows Phone i cui file di contenuto sono tutti inclusi nel pacchetto appx.  
  
### Per specificare un'istruzione di compilazione personalizzata  
  
1.  Sulla barra dei menu scegliere **Progetto**, **Proprietà**.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md).  
  
2.  Nella finestra di dialogo **Pagine delle proprietà** spostarsi sulla pagina **Proprietà di configurazione**, **Istruzione di compilazione personalizzata**, **Generale**.  
  
3.  Modificare le impostazioni.  
  
## Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)