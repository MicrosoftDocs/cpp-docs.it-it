---
title: -Z7, - Zi, - ZI (formato informazioni di Debug) | Documenti Microsoft
ms.custom: 
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
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f6e3de89c5336cda98960b67b80932df8f67d183
ms.sourcegitcommit: 2cca90d965f76ebf1d741ab901693a15d5b8a4df
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/24/2018
---
# <a name="z7-zi-zi-debug-information-format"></a>/Z7, /Zi, /ZI (Formato informazioni di debug)

Specifica il tipo di informazioni di debug create per il programma e indica se queste informazioni vengono mantenute in file oggetto o in un file di programma (PDB) di database.

## <a name="syntax"></a>Sintassi

> **/Z**{**7**|**i**|**I**}  

## <a name="remarks"></a>Note

Le opzioni di formato informazioni di debug sono descritte nelle sezioni seguenti.  
  
### <a name="none"></a>nessuno

Per impostazione predefinita, se è specificata alcuna opzione di formato di informazioni di debug, il compilatore non produce alcuna informazione di debug, pertanto la compilazione è più veloce.  
  
### <a name="z7"></a>/Z7

Il **/Z7** opzione produce un *file oggetto*, un file con estensione obj, contenente informazioni di debug complete sui simboli per l'utilizzo con il debugger. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga. Non *file PDB*, un file con estensione pdb, viene generato.

Per i distributori di librerie di terze parti, è disponibile un vantaggio di non disporre di un file PDB. Tuttavia, i file oggetto per le intestazioni precompilate sono necessari durante la fase di collegamento e per il debug. Se sono presenti solo tipi di informazioni (e nessun codice) nei file oggetto pch, è necessario utilizzare anche il [/Yl (inserisce il riferimento PCH per la libreria di Debug)](../../build/reference/yl-inject-pch-reference-for-debug-library.md) opzione, abilitata per impostazione predefinita.

### <a name="zi"></a>/ZI

Il **/Zi** opzione produce un file PDB che contiene informazioni sul tipo e informazioni sul debug simbolici da utilizzare con il debugger. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, nonché le funzioni e i numeri di riga.

Utilizzo di **/Zi** non influisce sulle ottimizzazioni. Tuttavia, **/Zi** implica **/debug**; vedere [/DEBUG (genera informazioni di Debug)](../../build/reference/debug-generate-debug-info.md) per ulteriori informazioni.

Quando **/Zi** viene specificato, le informazioni sul tipo viene inseriti nel file PDB e non nel file oggetto.

È possibile utilizzare [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) con **/Zi**, ma **/Gm** non è disponibile quando **/Z7** specificato.

Quando si specificano entrambi **/Zi** e **/clr**, <xref:System.Diagnostics.DebuggableAttribute> attributo non viene inserito nei metadati dell'assembly. Se si desidera, è necessario specificarlo nel codice sorgente. Questo attributo potrà avere effetto sulle prestazioni di runtime dell'applicazione. Per ulteriori informazioni su come **attributo Debuggable** attributo influisce sulle prestazioni e su come è possibile modificare l'impatto sulle prestazioni, vedere [semplificazione del Debug di un'immagine](/dotnet/framework/debug-trace-profile/making-an-image-easier-to-debug).

### <a name="zi"></a>/ZI

Il **/ZI** opzione produce un file PDB in un formato che supporta il [modifica e continuazione](/visualstudio/debugger/edit-and-continue-visual-cpp) funzionalità. Se si desidera utilizzare il debug di Modifica e continuazione, è necessario utilizzare questa opzione. La funzionalità Modifica e continuazione è utile per la produttività degli sviluppatori, ma può causare problemi di conformità del compilatore, le dimensioni del codice e delle prestazioni. Poiché la maggior parte delle ottimizzazioni non sono compatibili con modifica e continuazione, l'utilizzo **/ZI** disabilita qualsiasi `#pragma optimize` istruzioni nel codice. Il **/ZI** opzione è incompatibile con uso di anche il [&#95; &#95; RIGA &#95; &#95; la macro](../../preprocessor/predefined-macros.md). Il codice compilato con **/ZI** non è possibile utilizzare **&#95; &#95; RIGA &#95; &#95;**  come argomento di modello non di tipo, sebbene **&#95; &#95; RIGA &#95; &#95;**  possono essere usati in espansioni della macro.

Il **/ZI** opzione impone entrambi il [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md) e [/FC (completo percorso del File di codice sorgente nella diagnostica)](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md) le opzioni da utilizzare nella compilazione.

**/Zi** non è compatibile con [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

> [!NOTE]
> Il **/ZI** opzione disponibile solo nei compilatori destinati a processori x86 e x64; l'opzione del compilatore non è disponibile nei compilatori destinati a processori ARM.

Il compilatore assegna il file PDB *progetto*con estensione pdb. Se si compila un file all'esterno di un progetto, il compilatore crea un file PDB denominato VC*x*0.pdb, in cui *x* è il numero di versione principale della versione di Visual Studio in uso. Il compilatore incorpora il nome del file PDB in ogni file obj creato utilizzando questa opzione, puntando il debugger alla posizione delle informazioni sui simboli e sul numero di riga. Quando si utilizza questa opzione, i file obj sono inferiori, perché le informazioni di debug vengono archiviate nel file PDB anziché nei file obj.

Se si crea una libreria da oggetti compilati utilizzando questa opzione, il file pdb associato deve essere disponibile quando la libreria viene collegata a un programma. In questo modo, se si distribuisce la libreria, è necessario distribuire il file PDB.

Per creare una libreria che contiene le informazioni di debug senza utilizzare file PDB, è necessario selezionare compatibile C del compilatore 7.0 (**/Z7**) opzione. Se si usano le opzioni di intestazioni precompilate, informazioni di debug per l'intestazione precompilata e il resto del codice sorgente viene inserita nel file PDB. Il **/Yd** opzione viene ignorata quando viene specificata l'opzione di Database di programma.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Aprire il **le proprietà di configurazione** > **C/C++** > **generale** pagina delle proprietà.

1. Modificare il **formato informazioni di Debug** proprietà. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  

