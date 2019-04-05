---
title: /w, /W0, / W1, / W2, / w3, / W4, / W1, / W2, / w3, / W4, /Wall, /wd, / we, /wo, /Wv, /WX (livello avviso)
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
ms.openlocfilehash: 7b5c19c95cff3058bb3dcc6640f8ab07cf01edd6
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59040069"
---
# <a name="w-w0-w1-w2-w3-w4-w1-w2-w3-w4-wall-wd-we-wo-wv-wx-warning-level"></a>/w, /W0, / W1, / W2, / w3, / W4, / W1, / W2, / w3, / W4, /Wall, /wd, / we, /wo, /Wv, /WX (livello avviso)

Specifica la modalità di generazione degli avvisi del compilatore per una determinata compilazione.

## <a name="syntax"></a>Sintassi

> **/w**
>  **/W0**
>  **/W1**
>  **/W2**
>  **/w3** 
>  **/W4**
>  **/Wall**
>  **/Wv**\[**:**_versione _] **/WX**
>  **/W1**_avviso_
>  **/W2** _ avviso_
>  **/w3**_avviso_
>  **/W4**_avviso_ 
>  **/wd**_avviso_
>  **/we**_avviso_ 
>  **/wo**_avviso_

## <a name="remarks"></a>Note

Le opzioni di avviso specificano quali gli avvisi del compilatore da visualizzare e il comportamento di avviso per la compilazione dell'intero.

Nella tabella seguente sono descritte le opzioni di avviso e argomenti correlati:

|Opzione|Descrizione|
------------|-----------------|
|**/w**|Elimina tutti gli avvisi del compilatore.|
|**/W0**<br /><br /> **/W1**<br /><br /> **/W2**<br /><br /> **/W3**<br /><br /> **/W4**|Specifica il livello degli avvisi deve essere generato dal compilatore. I livelli di avviso valido compreso tra 0 e 4:<br />**/ W0** Elimina tutti gli avvisi. Ciò equivale a **/w**.<br />**/ W1** vengono visualizzati avvisi di livello 1 (gravità). **/ W1** è l'impostazione predefinita nel compilatore della riga di comando.<br />**/ W2** consente di visualizzare il livello 1 e avvisi di livello 2 (significativi).<br />**/ W3** consente di visualizzare il livello 1, livello 2 e avvisi di livello 3 (qualità di produzione). **/ W3** è l'impostazione predefinita nell'IDE.<br />**/ W4** consente di visualizzare il livello 1, livello 2 e avvisi di livello 3 e tutto il livello 4 (informativi) gli avvisi non sono stati disabilitate per impostazione predefinita. È consigliabile utilizzare questa opzione per l'utente viene avvisato lint simile. Per un nuovo progetto, potrebbe essere preferibile usare **/W4** in tutte le compilazioni; Ciò garantirà i minor numero di codice difficile da trovare possibili difetti.|
|**/Wall**|Visualizza tutti gli avvisi visualizzati dal **/W4** e tutti gli altri avvisi che **/W4** non include, ad esempio avvisi disattivati per impostazione predefinita. Per altre informazioni, vedere [del compilatore avvisi che sono disattivata per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).|
|**/Wv**\[**:**_version_]|Consente di visualizzare solo gli avvisi introdotti nella versione del compilatore *versione* e versioni precedenti. È possibile usare questa opzione per non visualizzare nuovi avvisi nel codice quando esegue la migrazione a una versione più recente del compilatore e per gestire il processo di compilazione esistente mentre correggerli. Il parametro facoltativo *versione* assume la forma *nn*[. *mm*[. *bbbbb*]] in cui *nn* è il numero di versione principale *mm* è il numero di versione secondario facoltativo, e *bbbbb* è il numero di build facoltativo il compilatore. Ad esempio, usare */Wv:17* per visualizzare gli avvisi introdotti in Visual Studio 2012 (vale a dire, qualsiasi versione del compilatore che ha un numero di versione principale di 17) o versioni precedenti, ma non visualizzare gli avvisi introdotti in Visual Studio 2013 (versione principale 18) e versioni successive. Per impostazione predefinita **/Wv** Usa il numero di versione del compilatore corrente e non gli avvisi vengono soppressi. Per informazioni su quali avvisi vengono soppressi dalla versione del compilatore, vedere [gli avvisi del compilatore dalla versione del compilatore](../../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md).|
|**/WX**|Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile usare **/WX** in tutte le compilazioni; la risoluzione di tutti gli avvisi assicura i minor numero di codice difficile da trovare possibili difetti.<br /><br /> Il linker ha anche un **/WX** opzione. Per altre informazioni, vedere [/WX (Considera gli avvisi del linker come errori)](wx-treat-linker-warnings-as-errors.md).|
|**/w1**_nnnn_<br /><br /> **/w2**_nnnn_<br /><br /> **/w3**_nnnn_<br /><br /> **/w4**_nnnn_|Imposta il livello di avviso per il numero di avviso specificato da _nnnn_. Ciò consente di modificare il comportamento del compilatore per questo avviso quando è impostato un livello di avviso specifico. È possibile usare queste opzioni in combinazione con altre opzioni di avviso per imporre il proprio codice standard per gli avvisi, anziché quelli predefiniti forniti da Visual Studio.<br /><br /> Ad esempio, **/w34326** provoca C4326 venga generato come un avviso di livello 3 anziché a livello 1. Se esegue la compilazione utilizzando sia la **/w34326** opzione e il **/W2** opzione, l'avviso C4326 non viene generato.|
|**/wd**_nnnn_|Elimina l'avviso del compilatore specificato da _nnnn_.<br /><br /> Ad esempio, **/wd4326** Disattiva avviso C4326 del compilatore.|
|**/we**_nnnn_|Considera l'avviso del compilatore specificato da _nnnn_ come errore.<br /><br /> Ad esempio, **/we4326** fa sì che il numero di avviso C4326 per essere considerato come errore dal compilatore.|
|**/wo**_nnnn_|I report di avviso del compilatore che è specificato da _nnnn_ una sola volta.<br /><br /> Ad esempio, **/wo4326** cause avviso C4326 siano riportati solo una volta, la prima volta che viene rilevata dal compilatore.|

Se si utilizza una delle opzioni di avviso quando si crea un'intestazione precompilata usando il [/Yc](yc-create-precompiled-header-file.md) opzione, qualsiasi utilizzo dell'intestazione precompilata usando la [/Yu](yu-use-precompiled-header-file.md) opzione fa in modo che le stesse opzioni di avviso siano validi anche in questo caso. È possibile ignorare le opzioni di avviso impostate nell'intestazione precompilata usando un'altra opzione di avviso della riga di comando.

È possibile usare una [#pragma avviso](../../preprocessor/warning.md) direttiva per controllare il livello di avviso segnalato in fase di compilazione nei file di origine specifico.

Direttive pragma warning nel codice sorgente non sono interessate dal **/w** opzione.

Il [documentazione sugli errori di compilazione](../../error-messages/compiler-errors-1/c-cpp-build-errors.md) descrive gli avvisi e i livelli di avviso e indica il motivo per cui alcune istruzioni non vengono compilate come previsto.

### <a name="to-set-the-compiler-options-in-the-visual-studio-development-environment"></a>Per impostare le opzioni del compilatore nell'ambiente di sviluppo Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Per impostare il **/W0**, **/W1**, **/W2**, **/w3**, **/W4**, **/Wall**, **/Wv**, **/WX** oppure **/WX-** opzioni, selezionare il **le proprietà di configurazione** > **C / C++** > **generali** pagina delle proprietà.

   - Per impostare il **/W0**, **/W1**, **/W2**, **/w3**, **/W4**, oppure **/Wall** opzioni, modificare il **livello di avviso** proprietà.

   - Per impostare il **/WX** oppure **/WX-** opzioni, modificare il **considera gli avvisi come errori** proprietà.

   - Per impostare la versione per il **/Wv** opzione, immettere il numero di versione del compilatore il **avviso versione** proprietà.

1. Per impostare il **/wd** oppure **/we** opzioni, selezionare il **le proprietà di configurazione** > **C/C++**  >   **Advanced** pagina delle proprietà.

   - Per impostare il **/wd** opzione, selezionare la **Disabilita avvisi specifici** proprietà controllo elenco a discesa e quindi scegliere **Edit**. Nella casella di testo il **Disabilita avvisi specifici** finestra di dialogo immettere il numero di avviso. Per immettere più di un avviso, separare i valori tramite punto e virgola (**;**). Ad esempio, per disabilitare C4001 e C4010, immettere **4001; 4010**. Scegli **OK** per salvare le modifiche e tornare alle **pagine delle proprietà** finestra di dialogo.

   - Per impostare il **/we** opzione, selezionare la **considera avvisi specifici come errori** proprietà controllo elenco a discesa e quindi scegliere **Edit**. Nella casella di testo il **considera avvisi specifici come errori** finestra di dialogo immettere il numero di avviso. Per immettere più di un avviso, separare i valori tramite punto e virgola (**;**). Ad esempio, per considerare C4001 sia C4010 come errori, immettere **4001; 4010**. Scegli **OK** per salvare le modifiche e tornare alle **pagine delle proprietà** finestra di dialogo.

1. Per impostare il **/wo** opzione, selezionare la **delle proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella.

1. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-the-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarningLevel%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarnAsError%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableSpecificWarnings%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
