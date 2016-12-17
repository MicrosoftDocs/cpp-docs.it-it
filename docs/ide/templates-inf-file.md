---
title: "File Templates.inf | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate personalizzate, file di modello"
ms.assetid: 93d60d27-2402-4dc8-a829-e97417ccea49
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File Templates.inf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Templates.inf è un file di testo contenente un elenco di template per l'esecuzione del rendering del progetto.  
  
 Dal momento che lo stesso Templates.inf è un [file template](../ide/template-files.md), è possibile utilizzare direttive per indicare i file da includere nel progetto, a seconda delle selezioni effettuate dall'utente.  Per l'elenco delle direttive che è possibile utilizzare nel file, vedere [Direttive dei template](../ide/template-directives.md).  
  
## Esempio  
  
```  
Template1.txt  
Template2.txt  
  [!if TYPE_A]  
TemplateOptionA.h  
TemplateOptionA.cpp  
  [!else]  
TemplateOptionB.h  
TemplateOptionB.cpp  
  [!endif]  
```  
  
 Con **CreateCustomInfFile** viene eseguito il rendering di Templates.inf in un file di testo temporaneo, da eliminare dopo l'elaborazione dei file.  
  
## Esempio  
  
```  
var InfFile = CreateCustomInfFile();  
AddFilesToProject(selProj, strProjectName, InfFile);  
InfFile.Delete();  
```  
  
 Per ulteriori informazioni, vedere [Il file JScript](../ide/jscript-file.md).  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)