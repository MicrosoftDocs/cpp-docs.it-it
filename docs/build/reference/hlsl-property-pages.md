---
title: Pagine delle proprietà HLSL
ms.date: 07/24/2019
ms.assetid: 0c65f5ec-a2a5-4f5b-8d4c-fa57113a5a1d
f1_keywords:
- VC.Project.FXCompilerTool.AdditionalIncludeDirectories
- VC.Project.FXCompilerTool.SuppressStartupBanner
- VC.Project.FXCompilerTool.EntryPointName
- VC.Project.FXCompilerTool.TreatWarningAsError
- VC.Project.FXCompilerTool.DisableOptimizations
- VC.Project.FXCompilerTool.EnableDebuggingInformation
- VC.Project.FXCompilerTool.ShaderType
- VC.Project.FXCompilerTool.ShaderModel
- VC.Project.FXCompilerTool.AllResourcesBound
- VC.Project.FXCompilerTool.EnableUnboundedDescriptorTables
- VC.Project.FXCompilerTool.SetRootSignature
- VC.Project.FXCompilerTool.PreprocessorDefinitions
- VC.Project.FXCompilerTool.AdditionalOptionsPage
- VC.Project.FXCompilerTool.VariableName
- VC.Project.FXCompilerTool.HeaderFileOutput
- VC.Project.FXCompilerTool.ObjectFileOutput
- VC.Project.FXCompilerTool.AssemblerOutput
- VC.Project.FXCompilerTool.AssemblerOutputFile
- VC.Project.FXCompilerTool.CompileD2DCustomEffect
- VC.Project.FXCompilerTool.MultiProcFXC
ms.openlocfilehash: 629a242d3698c9c3c2d3c697298b5c6625e4768f
ms.sourcegitcommit: d77159732a8e782b2a1b7abea552065f2b6f61c1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/04/2020
ms.locfileid: "93344683"
---
# <a name="hlsl-compiler-property-pages"></a>Pagine delle proprietà del compilatore HLSL

È possibile usare le pagine delle proprietà del compilatore HLSL (fxc.exe) per configurare la compilazione dei singoli file shader HLSL. È anche possibile specificare argomenti della riga di comando per il compilatore HLSL usando la proprietà **Opzioni aggiuntive** della pagina delle proprietà della **riga di comando** . sono inclusi gli argomenti che non possono essere configurati utilizzando altre proprietà delle pagine delle proprietà HLSL. Per informazioni sul compilatore HLSL, vedere [Effect-Compiler Tool](/windows/win32/direct3dtools/fxc) (Compilatore degli effetti)

## <a name="hlsl-general-property-page"></a>Pagina delle proprietà generale di HLSL

### <a name="additional-include-directories"></a>Directory di inclusione aggiuntive

Specifica una o più directory da aggiungere al percorso di inclusione. Usare il punto e virgola (;) come delimitatore per più percorsi. (/I [percorso])

### <a name="entrypoint-name"></a>Nome del punto di ingresso

Specifica il nome del punto di ingresso per lo shader (/E [nome])

### <a name="disable-optimizations"></a>Disabilita ottimizzazioni

**Sì (/Od)** per abilitare le ottimizzazioni; in caso contrario, **No**. Per impostazione predefinita, il valore è **Sì (/Od)** per le configurazioni di tipo **Debug** e **No** per le configurazioni di tipo **Rilascio**.

L'argomento della riga di comando **/Od** per il compilatore HLSL applica in modo implicito l'argomento della riga di comando **/Gfp**. Tuttavia l'output potrebbe non essere identico all'output generato passando entrambi gli argomenti **/Od** e **/Gfp** in modo esplicito.

### <a name="enable-debugging-information"></a>Abilita informazioni di debug

**Sì (/Zi)** per abilitare le informazioni di debug; in caso contrario, **No**. Per impostazione predefinita, il valore è **Sì (/Zi)** per le configurazioni di tipo **Debug** e **No** per le configurazioni di tipo **Rilascio**.

### <a name="shader-type"></a>Tipo shader

Specifica il tipo di shader. Tipi diversi di shader implementano parti diverse della pipeline grafica. Alcuni tipi di shader (specificati dalla proprietà **Modello di shader** ) sono disponibili solo in modelli di shader più recenti, come ad esempio i compute shader, che sono stati introdotti nel modello di shader 5.

Questa proprietà corrisponde alla parte del **\[ tipo]** dell'argomento della riga di comando **/t \[ Type] _ \[ Model]** al compilatore HLSL. La proprietà **Modello di shader** specifica la parte dell'argomento **[model]**.

**Choices**

- **Effetto**
- **Vertex shader**
- **Pixel shader**
- **Geometry shader**
- **Hull shader**
- **Domain shader**
- **Compute Shader**
- **Libreria**
- **Genera oggetto firma radice**

### <a name="shader-model"></a>Modello di shader

Specifica il modello di shader. I diversi modelli di shader hanno funzionalità diverse. In generale, i modelli di shader più recenti offrono funzionalità avanzate, ma richiedono componenti hardware grafici più moderni per eseguire il codice dello shader. Alcuni tipi di shader (specificati dalla proprietà **Tipo di shader** ) sono disponibili solo in modelli di shader più recenti come ad esempio i compute shader, che sono stati introdotti nel modello di shader 5.

Questa proprietà corrisponde alla parte del **\[ modello]** dell'argomento della riga di comando **/t \[ Type] _ \[ Model]** al compilatore HLSL. La proprietà **Tipo di shader** specifica la parte dell'argomento **[type]**.

### <a name="all-resources-bound"></a>Tutte le risorse con binding

Il compilatore presuppone che tutte le risorse a cui può fare riferimento uno shader siano associate e siano in uno stato valido per la durata dell'esecuzione dello shader (/all_resources_bound). Disponibile per Modello shader 5.1 e versioni successive.

### <a name="enable-unbounded-descriptor-tables"></a>Abilita tabelle descrittore senza limiti

Informare il compilatore che uno shader può contenere una dichiarazione di una matrice di risorse con intervallo non vincolato (/enable_unbounded_descriptor_tables). Disponibile per Modello shader 5.1 e versioni successive.

### <a name="set-root-signature"></a>Imposta firma radice

Alleghi la firma radice al bytecode dello shader (/setrootsignature). Disponibile per Modello shader 5.0 e versioni successive.

### <a name="preprocessor-definitions"></a>Definizioni del preprocessore

Aggiunge una o più definizioni di simboli del preprocessore da applicare al file di codice sorgente HLSL. Usare il punto e virgola per separare le definizioni di simboli.

Questa proprietà corrisponde all'argomento della riga di comando **/D \[definitions]** per il compilatore HLSL.

### <a name="compile-a-direct2d-custom-pixel-shader-effect"></a>Compilare un effetto pixel shader personalizzato Direct2D

Compila un effetto personalizzato Direct2D che contiene pixel shader. Non usare per un effetto personalizzato di vertex o compute shader.

### <a name="multi-processor-compilation"></a>Compilazione multiprocessore

Eseguire più istanze nello stesso momento.

## <a name="advanced-property-page"></a>Pagina delle proprietà avanzate

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

Evita la visualizzazione del messaggio di avvio e dei messaggi informativi. /nologo

### <a name="treat-warnings-as-errors"></a>Considera gli avvisi come errori

Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile usare /WX in tutte le compilazioni. La risoluzione degli avvisi garantirà il minor numero possibile di errori del codice di difficile individuazione.

## <a name="output-files-property-page"></a>Pagina delle proprietà file di output

### <a name="header-variable-name"></a>Nome variabile intestazione

Specifica un nome per il nome della variabile nel file di intestazione (/VN [nome])

### <a name="header-file-name"></a>Nome file intestazione

Specifica un nome per il file di intestazione contenente il codice oggetto. (/FH [nome])

### <a name="object-file-name"></a>Nome file oggetto

Specifica un nome per il file oggetto. (/Fo [nome])

### <a name="assembler-output"></a>Output assembler

Specifica il contenuto del file di output in linguaggio assembly. (/FC,/FX)

**Choices**

- **Nessun** elenco.
- **Elenco solo assembly** -file di codice assembly
- Codice dell'assembly e codice dell'assembly **esadecimale** e file di elenco esadecimale

### <a name="assembler-output-file"></a>File di output assembler

Specifica il nome file per il file listato di codice assembly

## <a name="see-also"></a>Vedere anche

[Riferimento alla pagina delle proprietà del progetto C++](property-pages-visual-cpp.md)<br>
[Pagine delle proprietà della riga di comando](command-line-property-pages.md)<br>
[Compilazione di shader](/windows/win32/direct3dhlsl/dx-graphics-hlsl-part1)
