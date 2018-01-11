---
title: "Pagine delle proprietà HLSL: Generale | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.FXCompilerTool.ShaderModel
- VC.Project.FXCompilerTool.PreprocessorDefinitions
- VC.Project.FXCompilerTool.ShaderType
- VC.Project.FXCompilerTool.EnableDebuggingInformation
- VC.Project.FXCompilerTool.AdditionalIncludeDirectories
- VC.Project.FXCompilerTool.DisableOptimizations
- VC.Project.FXCompilerTool.EntryPointName
dev_langs: C++
ms.assetid: 0e02f2a6-f123-43da-b04b-a0719a7c2b03
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: be548966f6e75afde2c137c8beab38903844667c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hlsl-property-pages-general"></a>Pagine delle proprietà HLSL: Generale
Per configurare le proprietà seguenti del compilatore HLSL (fxc.exe), utilizzare il relativo **generale** pagina delle proprietà. Per informazioni sulle modalità di accesso di **generale** pagina delle proprietà nella cartella HLSL, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Altre directory di inclusione**  
 Aggiunge una o più directory al percorso di inclusione. Utilizzare un punto e virgola per separare le directory.  
  
 Questa proprietà corrisponde al **/I [percorso]** argomento della riga di comando.  
  
 **Nome del punto di ingresso**  
 Specifica il punto di ingresso per shader. Per impostazione predefinita, il valore è **principale**.  
  
 Questa proprietà corrisponde al **/E [name]** argomento della riga di comando.  
  
 **Disabilitare le ottimizzazioni**  
 **Sì (/od)** per disabilitare le ottimizzazioni; in caso contrario, **n**. Per impostazione predefinita, il valore è **Sì (/od)** per **Debug** configurazioni e **n** per **versione** configurazioni.  
  
 Il **/Od** applica implicitamente l'argomento della riga di comando per il compilatore HLSL il **/gfp.** argomento della riga di comando, ma l'output potrebbe non essere identica all'output generato passando entrambi il **/Od**  e **/Gfp** gli argomenti della riga di comando in modo esplicito.  
  
 **Abilita informazioni di debug**  
 **Sì (/Zi)** per abilitare le informazioni di debug; in caso contrario, **n**. Per impostazione predefinita, il valore è **Sì (/Zi)** per **Debug** configurazioni e **n** per **versione** configurazioni.  
  
 **Tipo di shader**  
 Specifica il tipo di shader. Diversi tipi di shader implementano diverse parti della pipeline grafica. Determinati tipi di shader sono disponibili solo nei modelli di shader più recenti (che vengono specificati dal **Shader modello** proprietà), ad esempio, compute shader sono state introdotte nel modello di shader 5.  
  
 Questa proprietà corrisponde al **[tipo]** parte il **/T [tipo] _ [modello]** argomento della riga di comando per il compilatore HLSL. Il **modelli di Shader** proprietà specifica il **[modello]** parte dell'argomento.  
  
 **Modello di shader**  
 Specifica il modello di shader. Modelli di shader diversi hanno funzionalità diverse. In generale, modelli di shader più recenti offrono funzionalità avanzate, ma richiedono più moderni componenti hardware grafici per eseguire il codice dello shader. Determinati tipi di shader (che vengono specificati dal **Shader tipo** proprietà) sono disponibili solo nei modelli di shader più recenti, ad esempio, compute shader sono state introdotte nel modello di shader 5.  
  
 Questa proprietà corrisponde al **[modello]** parte il **/T [tipo] _ [modello]** argomento della riga di comando per il compilatore HLSL. Il **tipo Shader** proprietà specifica il **[tipo]** parte dell'argomento.  
  
 **Definizioni del preprocessore**  
 Aggiunge una o più definizioni di simbolo del preprocessore da applicare al file di codice sorgente HLSL. Utilizzare un punto e virgola per separare le definizioni dei simboli.  
  
 Questa proprietà corrisponde al **/D [definizioni]** argomento della riga di comando per il compilatore HLSL.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)   
 [Pagine delle proprietà HLSL: avanzate](../ide/hlsl-property-pages-advanced.md)   
 [Pagine delle proprietà HLSL: file di output](../ide/hlsl-property-pages-output-files.md)