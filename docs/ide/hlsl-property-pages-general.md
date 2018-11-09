---
title: 'Pagine delle proprietà HLSL: Generale'
ms.date: 11/04/2016
f1_keywords:
- VC.Project.FXCompilerTool.ShaderModel
- VC.Project.FXCompilerTool.PreprocessorDefinitions
- VC.Project.FXCompilerTool.ShaderType
- VC.Project.FXCompilerTool.EnableDebuggingInformation
- VC.Project.FXCompilerTool.AdditionalIncludeDirectories
- VC.Project.FXCompilerTool.DisableOptimizations
- VC.Project.FXCompilerTool.EntryPointName
ms.assetid: 0e02f2a6-f123-43da-b04b-a0719a7c2b03
ms.openlocfilehash: 255cf2fb0879ca7a6af0a9bdb340f6a4d2434cb0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494523"
---
# <a name="hlsl-property-pages-general"></a>Pagine delle proprietà HLSL: Generale

Per configurare le proprietà seguenti del compilatore HLSL (fxc.exe), usare la relativa pagina delle proprietà **Generale**. Per informazioni sull'accesso alla pagina delle proprietà **Generale** nella cartella HLSL, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).

## <a name="uielement-list"></a>Elenco UIElement

- **Directory di inclusione aggiuntive**

   Aggiunge una o più directory al percorso di inclusione. Usare il punto e virgola per separare le directory.

Questa proprietà corrisponde all'argomento della riga di comando **/I[path]**.

- **Nome del punto di ingresso**

   Specifica il punto di ingresso per lo shader. Per impostazione predefinita, il valore è **main**.

Questa proprietà corrisponde all'argomento della riga di comando **/E[name]**.

- **Disabilita ottimizzazioni**

   **Sì (/Od)** per abilitare le ottimizzazioni; in caso contrario, **No**. Per impostazione predefinita, il valore è **Sì (/Od)** per le configurazioni di tipo **Debug** e **No** per le configurazioni di tipo **Rilascio**.

L'argomento della riga di comando **/Od** per il compilatore HLSL applica in modo implicito l'argomento della riga di comando **/Gfp**. Tuttavia l'output potrebbe non essere identico all'output generato passando entrambi gli argomenti **/Od** e **/Gfp** in modo esplicito.

- **Abilita informazioni di debug**

   **Sì (/Zi)** per abilitare le informazioni di debug; in caso contrario, **No**. Per impostazione predefinita, il valore è **Sì (/Zi)** per le configurazioni di tipo **Debug** e **No** per le configurazioni di tipo **Rilascio**.

- **Tipo shader**

   Specifica il tipo di shader. Tipi diversi di shader implementano parti diverse della pipeline grafica. Alcuni tipi di shader (specificati dalla proprietà **Modello di shader**) sono disponibili solo in modelli di shader più recenti, come ad esempio i compute shader, che sono stati introdotti nel modello di shader 5.

   Questa proprietà corrisponde alla parte **\[type** dell'argomento della riga di comando **/T \[type]_\[model]** per il compilatore HLSL. La proprietà **Modello di shader** specifica la parte dell'argomento **[model]**.

- **Modello di shader**

   Specifica il modello di shader. I diversi modelli di shader hanno funzionalità diverse. In generale, i modelli di shader più recenti offrono funzionalità avanzate, ma richiedono componenti hardware grafici più moderni per eseguire il codice dello shader. Alcuni tipi di shader (specificati dalla proprietà **Tipo di shader**) sono disponibili solo in modelli di shader più recenti come ad esempio i compute shader, che sono stati introdotti nel modello di shader 5.

   Questa proprietà corrisponde alla parte **\[model]** dell'argomento della riga di comando **/T \[type]_\[model]** per il compilatore HLSL. La proprietà **Tipo di shader** specifica la parte dell'argomento **[type]**.

- **Definizioni del preprocessore**

   Aggiunge una o più definizioni di simboli del preprocessore da applicare al file di codice sorgente HLSL. Usare il punto e virgola per separare le definizioni di simboli.

   Questa proprietà corrisponde all'argomento della riga di comando **/D \[definitions]** per il compilatore HLSL.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)<br>
[Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)<br>
[Pagine delle proprietà HLSL: file di output](../ide/hlsl-property-pages-output-files.md)