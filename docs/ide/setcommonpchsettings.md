---
title: "SetCommonPchSettings | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SetCommonPchSettings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetCommonPchSettings (metodo)"
ms.assetid: 12f5524b-f654-4222-b979-8ee0d9f58c14
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# SetCommonPchSettings
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di stabilire le impostazioni dell'intestazione precompilata per il progetto.  
  
## Sintassi  
  
```  
  
      function SetCommonPchSettings(   
   oProj    
);  
```  
  
#### Parametri  
 `oProj`  
 Progetto selezionato.  
  
## Note  
 Chiamare la funzione per stabilire le impostazioni dell'intestazione precompilata per il progetto.  
  
 Questa funzione consente di impostare la proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A> come indicato di seguito:  
  
-   **pchUseUsingSpecific** Utilizza l'impostazione del compilatore [\/Yu \(Use Precompiled Header File\)](../build/reference/yu-use-precompiled-header-file.md).  
  
-   **pchCreateUsingSpecific** Utilizza l'impostazione del compilatore [\/Yc \(Create Precompiled Header File\)](../build/reference/yc-create-precompiled-header-file.md).  
  
## Esempio  
  
```  
if ((strAppType == "LIB" || ((strAppType == "CONSOLE") &&   
   wizard.FindSymbol(SUPPORT_MFC"))) && !Pch)  
   {  
      AddFilesToProject(selProj, strProjectName, InfFile);  
      SetNoCommonPchSettings(selProj);  
   }  
else  
   {  
      AddFilesToProject(selProj, strProjectName, InfFile);  
      SetcommonPchSettings(selProj);  
   }  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [SetNoPchSettings](../ide/setnopchsettings.md)   
 [AddCommonConfig](../ide/addcommonconfig.md)