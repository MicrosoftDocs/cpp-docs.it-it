---
title: "AddCommonConfig | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AddCommonConfig"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddCommonConfig (metodo)"
ms.assetid: 16abad93-6dd0-4daa-bf76-91eb6ffbdffa
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# AddCommonConfig
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge le configurazioni predefinite al progetto.  
  
## Sintassi  
  
```  
  
      function AddCommonConfig(   
   oProj,   
   strProjectName    
);  
```  
  
#### Parametri  
 `oProj`  
 Progetto selezionato.  
  
 `strProjectName`  
 Nome del progetto.  
  
## Note  
 Chiamare questa funzione per aggiungere le configurazioni del modello di codice predefinito al progetto creato nella procedura guidata.  È possibile specificare una configurazione per il rilascio o una per il debug.  Nelle tabelle che seguono sono elencate le impostazioni delle proprietà predefinite dell'oggetto Modello codice per ogni tipo di configurazione.  
  
### Oggetto strumento del compilatore Visual C\+\+  
  
|Proprietà oggetto|Impostazione configurazione per il rilascio|Impostazione configurazione per il debug|  
|-----------------------|-------------------------------------------------|----------------------------------------------|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>|pchUseUsingSpecific|pchUseUsingSpecific|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarningLevel%2A>|3|3|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.MinimalRebuild%2A>|Non applicabile|true|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>|debugEnabled|debugEditAndContinue|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization%2A>|optimizeMaxSpeed|Non applicabile|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BasicRuntimeChecks%2A>|Non applicabile|runtimeBasicCheckAll|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Detect64BitPortabilityProblems%2A>|true|true|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitFramePointers%2A>|true|Non applicabile|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFunctionLevelLinking%2A>|true|Non applicabile|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>|true|Non applicabile|  
  
### Oggetto Configuration in Visual C\+\+  
  
|Proprietà oggetto|Impostazione configurazione per il rilascio|Impostazione configurazione per il debug|  
|-----------------------|-------------------------------------------------|----------------------------------------------|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.IntermediateDirectory%2A>|"Rilascio"|"Debug"|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.OutputDirectory%2A>|"Rilascio"|"Debug"|  
  
### Oggetto strumento del linker Visual C\+\+  
  
|Proprietà oggetto|Impostazione configurazione per il rilascio|Impostazione configurazione per il debug|  
|-----------------------|-------------------------------------------------|----------------------------------------------|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem%2A>|subSystemWindows|subSystemWindows|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine%2A>|machineX86|machineX86|  
|<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>|true|true|  
  
## Esempio  
  
```  
// Create the Visual C++ project.  
selProj = CreateProject(strProjectName, strProjectPath);  
// Add the common configuration to the project.  
   AddCommonConfig(selProj, strProjectName);  
   selProj.Object.keyword = "MyProj";  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)