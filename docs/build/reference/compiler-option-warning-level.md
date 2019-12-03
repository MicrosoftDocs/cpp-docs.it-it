---
title: /w,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)
ms.date: 01/31/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.DisableSpecificWarnings
- VC.Project.VCCLCompilerTool.WarningLevel
- VC.Project.VCCLWCECompilerTool.DisableSpecificWarnings
- VC.Project.VCCLCompilerTool.WarnAsError
- VC.Project.VCCLWCECompilerTool.WarnAsError
- /wx
- VC.Project.VCCLWCECompilerTool.WarningLevel
- /wall
- VC.Project.VCCLCompilerTool.TreatSpecificWarningsAsErrors
- /Wv
- /w0
- /w1
- /w2
- /w3
- /w4
- /wd
- /we
- /wo
helpviewer_keywords:
- /W1 compiler option [C++]
- w compiler option [C++]
- -wo compiler option [C++]
- Warning Level compiler option
- W1 compiler option [C++]
- -we compiler option [C++]
- /WX compiler option [C++]
- -wd compiler option [C++]
- WX compiler option [C++]
- wo compiler option [C++]
- Wall compiler option [C++]
- /w compiler option
- W2 compiler option [C++]
- -W2 compiler option [C++]
- wd compiler option [C++]
- /we compiler option [C++]
- we compiler option [C++]
- -W1 compiler option [C++]
- -W4 compiler option [C++]
- -Wall compiler option [C++]
- /Wall compiler option [C++]
- -W0 compiler option [C++]
- W0 compiler option [C++]
- -WX compiler option [C++]
- /wo compiler option [C++]
- W4 compiler option [C++]
- W3 compiler option [C++]
- /wd compiler option [C++]
- warnings, as errors compiler option
- /W3 compiler option [C++]
- /W0 compiler option [C++]
- /W4 compiler option [C++]
- -W3 compiler option [C++]
- -w compiler option [C++]
- /W2 compiler option [C++]
- /Wv compiler option [C++]
ms.openlocfilehash: 7d2fd21c476ef4346aa86e682047ea644183b2f3
ms.sourcegitcommit: d0504e2337bb671e78ec6dd1c7b05d89e7adf6a7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/02/2019
ms.locfileid: "74683063"
---
# <a name="w-w0-w1-w2-w3-w4-w1-w2-w3-w4-wall-wd-we-wo-wv-wx-warning-level"></a>/w,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)

Specifica la modalità di generazione degli avvisi del compilatore per una determinata compilazione.

## <a name="syntax"></a>Sintassi

> \ **/w**
> \ **/W0**
> \ **/W1**
> \ **/W2**
> \ **/W3**
> \ **/W4**
> \ **/Wall**
> **/WV**\[ **:** _Version_] \
> \ **/WX**
> \ di_avviso_ **/W1**
> \ di_avviso_ **/W2**
> \ di_avviso_ **/W3**
> \ di_avviso_ **/W4**
> \ di_avviso_ **/WD.**
> \ di_avviso_ **/we**
> _avviso_ di/wo

## <a name="remarks"></a>Note

Le opzioni di avviso specificano gli avvisi del compilatore da visualizzare e il comportamento di avviso per l'intera compilazione.

Nella tabella seguente sono descritte le opzioni di avviso e gli argomenti correlati:

|Opzione|Descrizione|
------------|-----------------|
|**/w**|Disattiva tutti gli avvisi del compilatore.|
|**/W0**<br /><br /> **/W1**<br /><br /> **/W2**<br /><br /> **/W3**<br /><br /> **/W4**|Specifica il livello degli avvisi che devono essere generati dal compilatore. I livelli di avviso validi sono compresi tra 0 e 4:<br />**/W0** disattiva tutti gli avvisi. Equivale a **/w**.<br />**/W1** Visualizza avvisi di livello 1 (grave). **/W1** è l'impostazione predefinita nel compilatore della riga di comando.<br />**/W2** Visualizza avvisi di livello 1 e 2 (significativi).<br />**/W3** Visualizza gli avvisi di livello 1, livello 2 e livello 3 (qualità di produzione). **/W3** è l'impostazione predefinita nell'IDE.<br />**/W4** Visualizza gli avvisi di livello 1, livello 2 e livello 3 e tutti gli avvisi di livello 4 (informativi) che non sono disattivati per impostazione predefinita. Si consiglia di usare questa opzione per fornire avvisi di tipo lanugine. Per un nuovo progetto, potrebbe essere preferibile usare **/W4** in tutte le compilazioni. in questo modo si otterrà il minor numero possibile di errori del codice di difficile individuazione.|
|**/Wall**|Visualizza tutti gli avvisi visualizzati da **/W4** e tutti gli altri avvisi non inclusi in **/W4** , ad esempio gli avvisi che sono disattivati per impostazione predefinita. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).|
|\[/WV **:** _Version_]|Visualizza solo gli avvisi introdotti nella *versione del compilatore e versioni* precedenti. È possibile utilizzare questa opzione per eliminare nuovi avvisi nel codice quando si esegue la migrazione a una versione più recente del compilatore e per gestire il processo di compilazione esistente durante la correzione. La *versione* facoltativa del parametro assume il formato *nn*[. *mm*[. *bbbbb*]] dove *nn* è il numero di versione principale, *mm* è il numero di versione secondario facoltativo e *bbbbb* è il numero di build facoltativo del compilatore. Usare ad esempio */WV: 17* per visualizzare gli avvisi introdotti in Visual Studio 2012 (ovvero qualsiasi versione del compilatore con un numero di versione principale di 17) o versioni precedenti, ma non vengono eliminati gli avvisi introdotti in Visual Studio 2013 (versione principale 18) e versioni successive. Per impostazione predefinita, **/WV** usa il numero di versione corrente del compilatore e nessun avviso viene eliminato. Per informazioni sugli avvisi eliminati dalla versione del compilatore, vedere la pagina relativa agli [avvisi del compilatore in base alla versione del](../../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md)compilatore.|
|**/WX**|Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile usare **/WX** in tutte le compilazioni. la risoluzione di tutti gli avvisi garantisce il minor numero possibile di errori del codice di difficile individuazione.<br /><br /> Il linker include anche un'opzione **/WX** . Per altre informazioni, vedere [/WX (Considera gli avvisi del linker come errori)](wx-treat-linker-warnings-as-errors.md).|
|**/W1**_nnnn_<br /><br /> **/W2**_nnnn_<br /><br /> **/W3**_nnnn_<br /><br /> **/W4**_nnnn_|Imposta il livello di avviso per il numero di avviso specificato da _nnnn_. In questo modo è possibile modificare il comportamento del compilatore per l'avviso quando viene impostato un livello di avviso specifico. È possibile usare queste opzioni insieme ad altre opzioni di avviso per applicare gli standard di codifica per gli avvisi, anziché quelli predefiniti forniti da Visual Studio.<br /><br /> Ad esempio, **/w34326** fa sì che C4326 venga generato come avviso di livello 3 anziché come livello 1. Se si esegue la compilazione con l'opzione **/w34326** e l'opzione **/W2** , l'avviso C4326 non viene generato.|
|**/WD.** _nnnn_|Elimina l'avviso del compilatore specificato da _nnnn_.<br /><br /> **/Wd4326** , ad esempio, disattiva C4326 avviso del compilatore.|
|**/we**_nnnn_|Considera l'avviso del compilatore specificato da _nnnn_ come un errore.<br /><br /> Ad esempio, **/we4326** fa sì che il numero di avviso C4326 venga considerato come un errore dal compilatore.|
|**/wo**_nnnn_|Segnala l'avviso del compilatore specificato da _nnnn_ una sola volta.<br /><br /> Ad esempio, **/wo4326** fa sì che l'avviso C4326 venga segnalato una sola volta, la prima volta che viene rilevata dal compilatore.|

Se si utilizza una qualsiasi delle opzioni di avviso quando si crea un'intestazione precompilata utilizzando l'opzione [/YC](yc-create-precompiled-header-file.md) , qualsiasi utilizzo dell'intestazione precompilata utilizzando l'opzione [/Yu](yu-use-precompiled-header-file.md) determina nuovamente le stesse opzioni di avviso. È possibile eseguire l'override delle opzioni di avviso impostate nell'intestazione precompilata usando un'altra opzione di avviso nella riga di comando.

È possibile utilizzare una direttiva di [avviso #pragma](../../preprocessor/warning.md) per controllare il livello di avviso segnalato in fase di compilazione in file di origine specifici.

Le direttive pragma warning nel codice sorgente non sono interessate dall'opzione **/w** .

La [documentazione relativa agli errori di compilazione](../../error-messages/compiler-errors-1/c-cpp-build-errors.md) descrive i livelli di avviso e avviso e indica perché alcune istruzioni potrebbero non essere compilate come previsto.

### <a name="to-set-the-compiler-options-in-the-visual-studio-development-environment"></a>Per impostare le opzioni del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Per impostare le opzioni **/W0**, **/W1**, **/W2**, **/W3**, **/W4**, **/Wall**, **/WV**, **/WX** o **/WX-** , selezionare le **proprietà di configurazione** > pagina delle proprietà **generale** **C++ C/**  > .

   - Per impostare le opzioni **/W0**, **/W1**, **/W2**, **/W3**, **/W4**o **/Wall** , modificare la proprietà **livello di avviso** .

   - Per impostare le opzioni **/WX** o **/WX-** , modificare la proprietà **Considera gli avvisi come errori** .

   - Per impostare la versione per l'opzione **/WV** , immettere il numero di versione del compilatore nella proprietà **warning Version** .

1. Per impostare le opzioni **/WD.** o **/we** , selezionare le **proprietà di configurazione** > pagina delle proprietà **Avanzate** di **C/C++**  > .

   - Per impostare l'opzione **/WD.** , selezionare il controllo elenco a discesa **Disabilita proprietà avvisi specifici** , quindi scegliere **modifica**. Nella casella di modifica della finestra di dialogo **Disabilita avvisi specifici** , immettere il numero di avviso. Per immettere più di un avviso, separare i valori usando un punto e virgola ( **;** ). Per disabilitare, ad esempio, C4001 e C4010, immettere **4001; 4010**. Scegliere **OK** per salvare le modifiche e tornare alla finestra di dialogo **pagine delle proprietà** .

   - Per impostare l'opzione **/we** , selezionare il controllo elenco a discesa **Considera avvisi specifici come errori** , quindi scegliere **modifica**. Nella casella di modifica della finestra di dialogo **Considera avvisi specifici come errori** immettere il numero di avviso. Per immettere più di un avviso, separare i valori usando un punto e virgola ( **;** ). Per trattare, ad esempio, C4001 e C4010 come errori, immettere **4001; 4010**. Scegliere **OK** per salvare le modifiche e tornare alla finestra di dialogo **pagine delle proprietà** .

1. Per impostare l'opzione **/wo** , selezionare le proprietà di **configurazione** > pagina delle proprietà della **riga di comando** **C/C++**  > . Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** .

1. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-the-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarningLevel%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarnAsError%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableSpecificWarnings%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
