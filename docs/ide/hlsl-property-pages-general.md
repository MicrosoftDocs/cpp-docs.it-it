---
title: "Pagine delle propriet&#224; HLSL: Generale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.FXCompilerTool.ShaderModel"
  - "VC.Project.FXCompilerTool.PreprocessorDefinitions"
  - "VC.Project.FXCompilerTool.ShaderType"
  - "VC.Project.FXCompilerTool.EnableDebuggingInformation"
  - "VC.Project.FXCompilerTool.AdditionalIncludeDirectories"
  - "VC.Project.FXCompilerTool.DisableOptimizations"
  - "VC.Project.FXCompilerTool.EntryPointName"
dev_langs: 
  - "C++"
ms.assetid: 0e02f2a6-f123-43da-b04b-a0719a7c2b03
caps.latest.revision: 8
author: "BrianPeek"
ms.author: "brpeek"
manager: "ghogen"
caps.handback.revision: 8
---
# Pagine delle propriet&#224; HLSL: Generale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per configurare le seguenti proprietà del compilatore di HLSL \(fxc.exe\), utilizzare la pagina delle proprietà **Generale**.  Per informazioni su come accedere alla pagina delle proprietà **Generale** nella cartella di HLSL, vedere [Procedura: specificare le proprietà dei progetti tramite Pagine delle proprietà](../misc/how-to-specify-project-properties-with-property-pages.md).  
  
## Elenco UIElement  
 **Directory di inclusione aggiuntive**  
 Aggiunge una o più directory nel percorso di inclusione.  Punto e virgola di utilizzo per separare le directory.  
  
 Questa proprietà corrisponde all'argomento della riga di comando di **\/I\[path\]**.  
  
 **Nome Entrypoint**  
 Specifica il punto di ingresso per lo shader.  Per impostazione predefinita, il valore viene **principale**.  
  
 Questa proprietà corrisponde all'argomento della riga di comando di **\/E\[name\]**.  
  
 **Disabilitare le ottimizzazioni**  
 **Sì \(\/Od\)** per disabilitare le ottimizzazioni; in caso contrario **No**.  Per impostazione predefinita, il valore viene **Sì \(\/Od\)** per le configurazioni e **NoDebug** per le configurazioni **Rilascia**.  
  
 L'argomento della riga di comando di **\/Od** al compilatore di HLSL in modo implicito applica l'argomento della riga di comando di **\/Gfp**, ma prodotto non può essere identico all'output che viene prodotto passaggio degli argomenti della riga di comando **\/Gfp** di **\/Od** in modo esplicito.  
  
 **Attiva le informazioni di debug**  
 **Sì \(\/Zi\)** per abilitare informazioni di debug, in caso contrario **No**.  Per impostazione predefinita, il valore viene **Sì \(\/Zi\)** per le configurazioni e **NoDebug** per le configurazioni **Rilascia**.  
  
 **Tipo shader**  
 Specifica il tipo di shader.  Tipi diversi di parti diverse di utilizzo di shader della pipeline grafico.  Alcuni tipi di shader disponibili solo nei modelli più recenti di shader \(specificati dalla proprietà **Modello shader** \), ad esempio shader di calcolo sono stati introdotti nel modello 5. di shader.  
  
 Questa proprietà corrisponde alla parte di **\[type\]**argomento della riga di comando di **\/T \[type\]\_\[model\]** al compilatore di HLSL.  La proprietà **Modelli shader** specifica la parte di **\[model\]** dell'argomento.  
  
 **Modello shader**  
 Specifica il modello di shader.  I diversi modelli di shader dispongono di funzionalità differenti.  Per fornire più recente dei modelli di shader espanso in genere le funzionalità ma è necessario l'hardware più grafico moderno di eseguire il codice di shader.  Alcuni tipi di shader \(specificati dalla proprietà **Tipo shader** \) sono disponibili solo in pixel più recente controllo, ad esempio shader di calcolo sono stati introdotti nel modello 5. di shader.  
  
 Questa proprietà corrisponde alla parte di **\[model\]**argomento della riga di comando di **\/T \[type\]\_\[model\]** al compilatore di HLSL.  La proprietà **Tipo shader** specifica la parte di **\[type\]** dell'argomento.  
  
 **Definizioni preprocessore**  
 Aggiunge una o più definizioni dei simboli del preprocessore per applicare al file di codice sorgente di HLSL.  Punto e virgola di utilizzo per separare le definizioni dei simboli.  
  
 Questa proprietà corrisponde all'argomento della riga di comando di **\/D \[definitions\]** al compilatore di HLSL.  
  
## Vedere anche  
 [Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)   
 [Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)   
 [Pagine delle proprietà HLSL: file di output](../ide/hlsl-property-pages-output-files.md)