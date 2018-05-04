---
title: -Z7, - Zi, - ZI (formato informazioni di Debug) | Documenti Microsoft
ms.custom: ''
ms.date: 02/22/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.DebugInformationFormat
- /ZI
- /Zi
- /Z7
- VC.Project.VCCLWCECompilerTool.DebugInformationFormat
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a86605b8fd47c0febedfc9ab022dfc2c2728822a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="z7-zi-zi-debug-information-format"></a>/Z7, /Zi, /ZI (Formato informazioni di debug)

Specifica il tipo di informazioni di debug create per il programma e indica se queste informazioni vengono mantenute in file oggetto o in un file di programma (PDB) di database.

## <a name="syntax"></a>Sintassi

> **/Z**{**7**|**i**|**I**}  

## <a name="remarks"></a>Note

Quando il codice viene compilato e compilato in modalità di debug, il compilatore genera i nomi dei simboli per funzioni e variabili, le informazioni sul tipo e percorsi di numeri di riga per l'utilizzo dal debugger. Queste informazioni di debug sui simboli possono essere incluse nei file oggetto (file con estensione obj) generati dal compilatore, o in un file PDB (file con estensione pdb) separato per il file eseguibile.  Le opzioni di formato informazioni di debug sono descritte nelle sezioni seguenti.  
  
### <a name="none"></a>Nessuno

Per impostazione predefinita, se è specificata alcuna opzione di formato di informazioni di debug, il compilatore non produce alcuna informazione di debug, pertanto la compilazione è più veloce.  
  
### <a name="z7"></a>/Z7

Il **/Z7** opzione produce file oggetto che contiene informazioni di debug complete sui simboli per l'utilizzo con il debugger. Questi file oggetto e il file eseguibile compilato può essere notevolmente superiore rispetto ai file senza informazioni di debug. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga. Non viene generato alcun file PDB.

Per i server di distribuzione delle versioni di debug delle librerie di terze parti, è disponibile un vantaggio di non disporre di un file PDB. Tuttavia, i file oggetto per le intestazioni precompilate sono necessari durante la fase di collegamento di libreria e per il debug. Se sono presenti solo tipi di informazioni (e nessun codice) nel file pch, è necessario utilizzare anche il [/Yl (inserisce il riferimento PCH per la libreria di Debug)](../../build/reference/yl-inject-pch-reference-for-debug-library.md) opzione, è abilitata per impostazione predefinita, quando si compila la libreria.

Il [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) opzione non è disponibile quando **/Z7** specificato.

### <a name="zi"></a>/ZI

Il **/Zi** opzione produce un file PDB separato che contiene tutte le informazioni sui simboli debug per l'utilizzo con il debugger. Le informazioni di debug non sono incluso nei file oggetto o file eseguibile, che li rende molto più piccolo.

Utilizzo di **/Zi** non influisce sulle ottimizzazioni. Tuttavia, **/Zi** implica **/debug**; vedere [/DEBUG (genera informazioni di Debug)](../../build/reference/debug-generate-debug-info.md) per ulteriori informazioni.


Quando si specificano entrambi **/Zi** e **/clr**, <xref:System.Diagnostics.DebuggableAttribute> attributo non viene inserito nei metadati dell'assembly. Se si desidera, è necessario specificarlo nel codice sorgente. Questo attributo potrà avere effetto sulle prestazioni di runtime dell'applicazione. Per ulteriori informazioni su come **attributo Debuggable** attributo influisce sulle prestazioni e su come è possibile modificare l'impatto sulle prestazioni, vedere [semplificazione del Debug di un'immagine](/dotnet/framework/debug-trace-profile/making-an-image-easier-to-debug).

Il compilatore assegna il file PDB *progetto*con estensione pdb. Se si compila un file all'esterno di un progetto, il compilatore crea un file PDB denominato VC*x*file PDB, dove *x* è una concatenazione del numero di versione principale e secondario della versione del compilatore in uso. Il compilatore incorpora il nome del file PDB e identificazione della firma timestamp in ogni file oggetto creato con questa opzione, che fa riferimento il debugger per la posizione delle informazioni sui simboli e numero di riga. Il nome e la firma nel file PDB deve corrispondere il file eseguibile per i simboli da caricare nel debugger. Il debugger WinDBG può caricare i simboli non corrispondenti tramite il `.symopt+0x40` comando. Visual Studio non dispone di un'opzione simile per caricare i simboli non corrispondenti.

Se si crea una raccolta di oggetti che sono stati compilati utilizzando **/Zi**, il file con estensione pdb associato deve essere disponibile quando la libreria è collegata a un programma. Pertanto, se si distribuisce la libreria, è necessario distribuire il file PDB. Per creare una raccolta che contiene le informazioni di debug senza utilizzare file PDB, è necessario selezionare il **/Z7** opzione. Se si usano le opzioni di intestazioni precompilate, informazioni di debug per l'intestazione precompilata e il resto del codice sorgente viene inserita nel file PDB.

### <a name="zi"></a>/ZI

Il **/ZI** ed è simile al **/Zi**, ma genera un file PDB in un formato che supporta il [modifica e continuazione](/visualstudio/debugger/edit-and-continue-visual-cpp) funzionalità. Per utilizzare Modifica e continuazione le funzionalità di debug, è necessario utilizzare questa opzione. La funzionalità Modifica e continuazione è utile per la produttività degli sviluppatori, ma può causare problemi in conformità di dimensioni, prestazioni e del compilatore di codice. Poiché la maggior parte delle ottimizzazioni non sono compatibili con modifica e continuazione, l'utilizzo **/ZI** disabilita qualsiasi `#pragma optimize` istruzioni nel codice. Il **/ZI** opzione è incompatibile con uso di anche il [ &#95; &#95;riga&#95; &#95; macro predefinita](../../preprocessor/predefined-macros.md); codice compilato con **/ZI** non è possibile utilizzare **&#95; &#95;Riga&#95; &#95;** come argomento di modello non di tipo, anche se **&#95; &#95;riga&#95; &#95;** può essere usato in espansioni della macro.

Il **/ZI** opzione impone entrambi il [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md) e [/FC (completo percorso del File di codice sorgente nella diagnostica)](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md) le opzioni da utilizzare nella compilazione.

**/Zi** non è compatibile con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

> [!NOTE]
> Il **/ZI** opzione disponibile solo nei compilatori destinati a processori x86 e x64; l'opzione del compilatore non è disponibile nei compilatori destinati a processori ARM.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione** > **C/C++** > **generale** pagina delle proprietà.

1. Modificare il **formato informazioni di Debug** proprietà. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  

