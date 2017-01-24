---
title: "SetErrorInfo | Microsoft Docs"
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
  - "SetErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetErrorInfo (metodo)"
ms.assetid: 78bca763-3f90-4e04-b566-b4b7fe2431b1
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SetErrorInfo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiamata in [OnWizFinish](../ide/onwizfinish.md) e [CanUseFileName](../ide/canusefilename.md) per fornire informazioni sull'errore corrente.  
  
## Sintassi  
  
```  
  
      function SetErrorInfo(   
   oErrorObj   
);  
```  
  
#### Parametri  
 *oErrorObj*  
 Oggetto errore.  
  
## Note  
 Chiamata in [OnWizFinish](../ide/onwizfinish.md) e [CanUseFileName](../ide/canusefilename.md) per fornire informazioni sull'errore corrente.  Per ulteriori informazioni, vedere <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.SetErrorInfo%2A> nella documentazione del Modello procedura guidata di Visual C\+\+.  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)