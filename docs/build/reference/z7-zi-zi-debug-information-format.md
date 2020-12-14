---
description: Ulteriori informazioni su:/Z7,/Zi,/ZI (formato informazioni di debug)
title: /Z7, /Zi, /ZI (Formato informazioni di debug)
ms.date: 07/06/2020
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
ms.openlocfilehash: 604c34cac5c3cd049f23e21f5db033c0ecc8c480
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263231"
---
# <a name="z7-zi-zi-debug-information-format"></a>/Z7, /Zi, /ZI (Formato informazioni di debug)

Le **`/Z7`** **`/Zi`** Opzioni del compilatore,, e **`/ZI`** specificano il tipo di informazioni di debug create per il programma e se queste informazioni vengono mantenute in file oggetto o in un file di database di programma (PDB).

## <a name="syntax"></a>Sintassi

> **`/Z7`**\
> **`/Zi`**\
> **`/ZI`**

## <a name="remarks"></a>Osservazioni

Quando si specifica un'opzione di debug, il compilatore produce nomi di simboli per le funzioni e le variabili, le informazioni sul tipo e i percorsi delle righe per l'uso da parte del debugger. Queste informazioni sul debug simbolico possono essere incluse nei file oggetto ( *`.obj`* file) prodotti dal compilatore o in un file PDB separato (un *`.pdb`* file) per il file eseguibile. Le opzioni relative al formato delle informazioni di debug sono descritte nelle sezioni riportate di seguito.

### <a name="none"></a>Nessuno

Per impostazione predefinita, se non viene specificata alcuna opzione di formato delle informazioni di debug, il compilatore non produce informazioni di debug, quindi la compilazione è più veloce.

### <a name="z7"></a>/Z7

L' **`/Z7`** opzione produce file oggetto che contengono anche informazioni complete sul debug simbolico da utilizzare con il debugger. Questi file oggetto e qualsiasi libreria compilata da essi possono essere sostanzialmente più grandi dei file senza informazioni di debug. Le informazioni sul debug simbolico includono i nomi e i tipi di variabili, funzioni e numeri di riga. Il compilatore non genera alcun file PDB. Tuttavia, se al linker viene passata l'opzione, è comunque possibile generare un file PDB da questi file oggetto o librerie **`/DEBUG`** .

Per i distributori di versioni di debug di librerie di terze parti, non è disponibile un file PDB. Tuttavia, i file oggetto per tutte le intestazioni precompilate sono necessari durante la fase di collegamento della libreria e per il debug. Se nel file oggetto sono presenti solo informazioni sul tipo (e nessun codice) *`.pch`* , è necessario usare anche l'opzione [ `/Yl` (inserire riferimento PCH per la libreria di debug)](yl-inject-pch-reference-for-debug-library.md) , che è abilitata per impostazione predefinita quando si compila la libreria.

L'opzione deprecata [ `/Gm` (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) non è disponibile quando **`/Z7`** si specifica.

### <a name="zi"></a>/Zi

L' **`/Zi`** opzione produce un file PDB separato contenente tutte le informazioni sul debug simbolico da utilizzare con il debugger. Le informazioni di debug non sono incluse nei file oggetto o nell'eseguibile, rendendole molto più piccole.

L'uso di **`/Zi`** non influisce sulle ottimizzazioni. Tuttavia, **`/Zi`** implica **`/debug`** . Per ulteriori informazioni, vedere [ `/DEBUG` (genera informazioni di debug)](debug-generate-debug-info.md).

Quando si specificano sia **`/Zi`** che **`/clr`** , l' <xref:System.Diagnostics.DebuggableAttribute> attributo non viene inserito nei metadati dell'assembly. Se lo si desidera, è necessario specificarlo nel codice sorgente. Questo attributo potrà avere effetto sulle prestazioni di runtime dell'applicazione. Per ulteriori informazioni sul modo `Debuggable` in cui l'attributo influisca sulle prestazioni e su come è possibile modificare l'impatto sulle prestazioni, vedere semplificazione del [debug di un'immagine](/dotnet/framework/debug-trace-profile/making-an-image-easier-to-debug).

Il compilatore denomina il file PDB *`<project>.pdb`* , dove *`<project>`* è il nome del progetto. Se si compila un file all'esterno di un progetto, il compilatore crea un file PDB denominato *`VC<x>.pdb`* , dove *`<x>`* è una concatenazione del numero di versione principale e secondario della versione del compilatore in uso. Il compilatore incorpora il nome del PDB e una firma timestamp di identificazione in ogni file oggetto creato utilizzando questa opzione. Questo nome e firma puntano il debugger alla posizione delle informazioni simboliche e del numero di riga. Il nome e la firma nel file PDB devono corrispondere all'eseguibile per i simboli da caricare nel debugger. Il debugger WinDBG può caricare simboli non corrispondenti tramite il **`.symopt+0x40`** comando. Visual Studio non ha un'opzione simile per caricare i simboli non corrispondenti.

Se si crea una libreria da oggetti compilati utilizzando **`/Zi`** , il file PDB associato deve essere disponibile quando la libreria è collegata a un programma. Ciò significa che, se si distribuisce la libreria, è necessario distribuire anche il file PDB. Per creare una raccolta che contiene informazioni di debug senza utilizzare i file PDB, è necessario selezionare l' **`/Z7`** opzione. Se si usano le opzioni di intestazioni precompilate, le informazioni di debug per l'intestazione precompilata e il resto del codice sorgente vengono inserite nel file PDB.

### <a name="zi"></a>/Zi

L' **`/ZI`** opzione è simile a **`/Zi`** , ma produce un file PDB in un formato che supporta la funzionalità [modifica e continuazione](/visualstudio/debugger/edit-and-continue-visual-cpp) . Per usare le funzionalità di debug di modifica e continuazione, è necessario usare questa opzione. La funzionalità modifica e continuazione è utile per la produttività degli sviluppatori, ma può causare problemi in termini di dimensioni del codice, prestazioni e conformità del compilatore. Poiché la maggior parte delle ottimizzazioni non è compatibile con modifica e continuazione, l'utilizzo di **`/ZI`** Disabilita qualsiasi `#pragma optimize` istruzione nel codice. **`/ZI`** Anche l'opzione non è compatibile con l'uso della [ `__LINE__` macro predefinita](../../preprocessor/predefined-macros.md). il codice compilato con **`/ZI`** non può usare `__LINE__` come argomento di modello non di tipo, sebbene `__LINE__` possa essere usato nelle espansioni di macro.

Con l' **`/ZI`** opzione vengono forzate le opzioni [ `/Gy` (abilita il collegamento Function-Level)](gy-enable-function-level-linking.md) e [ `/FC` (percorso completo del file di codice sorgente nella diagnostica)](fc-full-path-of-source-code-file-in-diagnostics.md) da utilizzare nella compilazione.

**`/ZI`** è incompatibile con [ `/clr` (compilazione Common Language Runtime)](clr-common-language-runtime-compilation.md).

> [!NOTE]
> L' **`/ZI`** opzione è disponibile solo nei compilatori destinati a processori x86 e x64. Questa opzione del compilatore non è disponibile nei compilatori destinati ai processori ARM.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire la pagina delle proprietà generale relativa alle **proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **formato informazioni di debug** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DebugInformationFormat%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
