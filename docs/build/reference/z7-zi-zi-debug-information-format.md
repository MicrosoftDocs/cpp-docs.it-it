---
title: /Z7, /Zi, /ZI (Formato informazioni di debug)
ms.date: 04/08/2019
f1_keywords:
- VC.Project.VCCLCompilerTool.DebugInformationFormat
- /ZI
- /Zi
- /Z7
- VC.Project.VCCLWCECompilerTool.DebugInformationFormat
helpviewer_keywords:
- C7 compatible compiler option [C++]
- Debug Information Format compiler option
- ZI compiler option
- -Zi compiler option [C++]
- /ZI compiler option [C++]
- Z7 compiler option [C++]
- debugging [C++], debug information files
- Zi compiler option [C++]
- /Zi compiler option [C++]
- program database compiler option [C++]
- full symbolic debugging information
- /Z7 compiler option [C++]
- line numbers only compiler option [C++]
- cl.exe compiler, debugging options
- -Z7 compiler option [C++]
ms.openlocfilehash: aeaf435874b6d6b9dbc8a3d12ec06d38bf33aaae
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078257"
---
# <a name="z7-zi-zi-debug-information-format"></a>/Z7, /Zi, /ZI (Formato informazioni di debug)

Specifica il tipo di informazioni di debug create per il programma e indica se tali informazioni vengono mantenute in file oggetto o in un file di database di programma (PDB).

## <a name="syntax"></a>Sintassi

> **/Z**{**7**|**i**|**i**}

## <a name="remarks"></a>Osservazioni

Quando il codice viene compilato e compilato in modalità di debug, il compilatore produce nomi di simboli per le funzioni e le variabili, le informazioni sul tipo e i percorsi dei numeri di riga per l'uso da parte del debugger. Queste informazioni sul debug simbolico possono essere incluse nei file oggetto (file con estensione obj) prodotti dal compilatore o in un file PDB separato (un file con estensione pdb) per il file eseguibile.  Le opzioni relative al formato delle informazioni di debug sono descritte nelle sezioni riportate di seguito.

### <a name="none"></a>nessuno

Per impostazione predefinita, se non viene specificata alcuna opzione di formato delle informazioni di debug, il compilatore non produce informazioni di debug, quindi la compilazione è più veloce.

### <a name="z7"></a>/Z7

L'opzione **/Z7** produce file oggetto che contengono anche informazioni complete sul debug simbolico da utilizzare con il debugger. Questi file oggetto e il file eseguibile compilato possono essere sostanzialmente più grandi dei file senza informazioni di debug. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga. Non viene prodotto alcun file PDB.

Per i distributori di versioni di debug di librerie di terze parti, non è disponibile un file PDB. Tuttavia, i file oggetto per tutte le intestazioni precompilate sono necessari durante la fase di collegamento della libreria e per il debug. Se sono presenti solo informazioni sul tipo (e nessun codice) nel file oggetto pch, è necessario usare anche l'opzione [/YL (inserisce il riferimento PCH per la libreria di debug)](yl-inject-pch-reference-for-debug-library.md) , che è abilitata per impostazione predefinita quando si compila la libreria.

L'opzione deprecata [/GM (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) non è disponibile quando si specifica **/Z7** .

### <a name="zi"></a>/ZI

L'opzione **/Zi** produce un file PDB separato che contiene tutte le informazioni sul debug simbolico da utilizzare con il debugger. Le informazioni di debug non sono incluse nei file oggetto o nell'eseguibile, rendendole molto più piccole.

L'uso di **/Zi** non influisce sulle ottimizzazioni. Tuttavia, **/Zi** implica **/debug**; Per ulteriori informazioni, vedere [/debug (genera informazioni di debug)](debug-generate-debug-info.md) .

Quando si specifica sia **/Zi** che **/CLR**, l'attributo <xref:System.Diagnostics.DebuggableAttribute> non viene inserito nei metadati dell'assembly. Se lo si desidera, è necessario specificarlo nel codice sorgente. Questo attributo potrà avere effetto sulle prestazioni di runtime dell'applicazione. Per ulteriori informazioni sul modo in cui **l'attributo** di cui è possibile eseguire il debug influiscono sulle prestazioni e su come modificare l'impatto sulle prestazioni, vedere semplificazione del [debug di un'immagine](/dotnet/framework/debug-trace-profile/making-an-image-easier-to-debug).

Il compilatore denomina il file PDB *Project*. pdb. Se si compila un file all'esterno di un progetto, il compilatore crea un file PDB denominato VC*x*. pdb, dove *x* è una concatenazione del numero di versione principale e secondario della versione del compilatore in uso. Il compilatore incorpora il nome del PDB e una firma timestamp di identificazione in ogni file oggetto creato utilizzando questa opzione, che punta il debugger alla posizione delle informazioni simboliche e del numero di riga. Il nome e la firma nel file PDB devono corrispondere all'eseguibile per i simboli da caricare nel debugger. Il debugger WinDBG può caricare simboli non corrispondenti usando il comando `.symopt+0x40`. Visual Studio non dispone di un'opzione simile per caricare simboli non corrispondenti.

Se si crea una libreria da oggetti compilati con **/Zi**, il file con estensione pdb associato deve essere disponibile quando la libreria è collegata a un programma. Pertanto, se si distribuisce la libreria, è necessario distribuire anche il file PDB. Per creare una libreria che contiene informazioni di debug senza usare i file PDB, è necessario selezionare l'opzione **/Z7** . Se si usano le opzioni di intestazioni precompilate, le informazioni di debug per l'intestazione precompilata e il resto del codice sorgente vengono inserite nel file PDB.

### <a name="zi"></a>/ZI

L'opzione **/Zi** è simile a **/Zi**, ma produce un file PDB in un formato che supporta la funzionalità [modifica e continuazione](/visualstudio/debugger/edit-and-continue-visual-cpp) . Per usare le funzionalità di debug di modifica e continuazione, è necessario usare questa opzione. La funzionalità modifica e continuazione è utile per la produttività degli sviluppatori, ma può causare problemi in termini di dimensioni del codice, prestazioni e conformità del compilatore. Poiché la maggior parte delle ottimizzazioni non è compatibile con modifica e continuazione, l'uso di **/Zi** Disabilita qualsiasi istruzione `#pragma optimize` nel codice. L'opzione **/Zi** è inoltre incompatibile con l' [ &#95; &#95;utilizzo della macro&#95; &#95; di riga predefinita](../../preprocessor/predefined-macros.md). il codice compilato con **/Zi** non **&#95; &#95;può&#95;** utilizzare la riga come argomento di modello non di tipo, sebbene **&#95; &#95;&#95;** sia possibile utilizzare la riga nelle espansioni della macro.

L'opzione **/Zi** impone l'uso delle opzioni [/Gy (Abilita collegamento a livello di funzione)](gy-enable-function-level-linking.md) e [/FC (percorso completo del file di codice sorgente nella diagnostica)](fc-full-path-of-source-code-file-in-diagnostics.md) per la compilazione.

**/Zi** non è compatibile con [/CLR (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md).

> [!NOTE]
> L'opzione **/Zi** è disponibile solo nei compilatori destinati a processori x86 e x64; Questa opzione del compilatore non è disponibile nei compilatori destinati ai processori ARM.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Aprire le **proprietà di configurazione** > pagina delle proprietà **generale** di **CC++ /**  > .

1. Modificare la proprietà **formato informazioni di debug** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
