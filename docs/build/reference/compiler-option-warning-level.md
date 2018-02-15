---
title: -w,-W0,-W1, - W2,-W3, - W4,-w1,-w2,-w3,-/W4,-parete, -wd,-abbiamo -wo, -Wv, - WX (livello avviso) | Documenti Microsoft
ms.custom: 
ms.date: 01/31/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: be7e86065b52ee5c55058b9a672f3bf543454cf8
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="w-w0-w1-w2-w3-w4-w1-w2-w3-w4-wall-wd-we-wo-wv-wx-warning-level"></a>/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /, abbiamo /wo, /WV., /WX (livello avviso)

Specifica la modalità di generazione degli avvisi del compilatore per una determinata compilazione.

## <a name="syntax"></a>Sintassi

> **/w**  
> **/W0**  
> **/W1**  
> **/W2**  
> **/W3**  
> **/W4**  
> **/Wall**  
> **/Wv**\[**:**_version_]  
> **/WX**  
> **/w1**_warning_  
> **/w2**_warning_  
> **/w3**_warning_  
> **/w4**_warning_  
> **/wd**_warning_  
> **/we**_warning_  
> **/wo**_warning_  

## <a name="remarks"></a>Note

Le opzioni di avviso specificano quali avvisi del compilatore da visualizzare e il comportamento di avviso per la compilazione di intero.

Nella tabella seguente sono descritte le opzioni di avviso e gli argomenti correlati:

|Opzione|Descrizione|
------------|-----------------|
|**/w**|Elimina tutti gli avvisi del compilatore.|
|**/W0**<br /><br /> **/W1**<br /><br /> **/W2**<br /><br /> **/W3**<br /><br /> **/W4**|Specifica il livello degli avvisi deve essere generato dal compilatore. I livelli di avviso valido compreso tra 0 e 4:<br />**/W0** Elimina tutti gli avvisi. Ciò equivale a **/w**.<br />**/W1** vengono visualizzati avvisi di livello 1 (gravità). **/W1** è l'impostazione predefinita nel compilatore da riga di comando.<br />**/W2** consente di visualizzare il livello 1 e avvisi di livello 2 (significativi).<br />**/W3** consente di visualizzare il livello 1, livello 2 e avvisi di livello 3 (produzione di qualità). **/W3** è l'impostazione predefinita nell'IDE.<br />**/W4** consente di visualizzare il livello 1, livello 2 e avvisi di livello 3 e tutti livello 4 avvisi (informativi) che non sono disattivati per impostazione predefinita. È consigliabile utilizzare questa opzione per fornire avvisi di tipo lint. Per un nuovo progetto, potrebbe essere preferibile utilizzare **/W4** in tutte le compilazioni; in questo modo i difetti di codice da trovare possibili minimi.|
|**/Wall**|Visualizza tutti gli avvisi visualizzati da **/W4** e tutti gli altri avvisi che **/W4** non include, ad esempio, gli avvisi che sono disattivate per impostazione predefinita. Per ulteriori informazioni, vedere [del compilatore avvisi che sono disattivata per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).|
|**/Wv**\[**:**_version_]|Consente di visualizzare solo gli avvisi introdotti nella versione del compilatore *versione* e versioni precedenti. È possibile utilizzare questa opzione per eliminare gli avvisi di nuovo nel codice, quando esegue la migrazione a una versione più recente del compilatore e per gestire il processo di compilazione esistente mentre è correggerli. Il parametro facoltativo *versione* assume il formato  *nn* [. *mm*[. *bbbbb*]] dove  *nn*  è il numero di versione principale, *mm* è il numero di versione secondario facoltativo, e *bbbbb* è la numero di build facoltativo del compilatore. Ad esempio, utilizzare */Wv:17* per visualizzare gli avvisi introdotti in Visual Studio 2012 (qualsiasi versione del compilatore che ha un numero di versione principale di 17) o versioni precedenti, ma non visualizzare gli avvisi introdotti in Visual Studio 2013 (versione principale 18) e versioni successive. Per impostazione predefinita, **/WV.** utilizza il numero di versione del compilatore corrente e non gli avvisi vengono soppressi. Per informazioni su quali avvisi vengono soppressi dalla versione del compilatore, vedere [gli avvisi del compilatore dalla versione del compilatore](../..//error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md).|
|**/WX**|Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile utilizzare **/WX** in tutte le compilazioni; risolvere tutti gli avvisi assicura i difetti di codice da trovare possibili minimi.<br /><br /> Il linker dispone anche un **/WX** opzione. Per altre informazioni, vedere [/WX (Considera gli avvisi del linker come errori)](../../build/reference/wx-treat-linker-warnings-as-errors.md).|
|**/w1**_nnnn_<br /><br /> **/w2**_nnnn_<br /><br /> **/w3**_nnnn_<br /><br /> **/w4**_nnnn_|Imposta il livello di avviso per il numero di avviso specificato da  _nnnn_ . È possibile modificare il comportamento del compilatore per l'avviso quando è impostato un livello di avviso specifico. Per applicare gli standard di codifica personalizzati per gli avvisi, anziché il valore predefinito di quelli forniti da Visual Studio, è possibile utilizzare queste opzioni in combinazione con altre opzioni di avviso.<br /><br /> Ad esempio, **/w34326** di come un avviso di livello 3 anziché a livello 1 C4326. Se esegue la compilazione utilizzando sia il **/w34326** opzione e **/W2** opzione, l'avviso C4326 non viene generato.|
|**/wd**_nnnn_|Elimina l'avviso del compilatore specificato da  _nnnn_ .<br /><br /> Ad esempio, **/wd4326** Elimina l'avviso del compilatore C4326.|
|**/we**_nnnn_|Considera l'avviso del compilatore specificato da  _nnnn_  come un errore.<br /><br /> Ad esempio, **/we4326** fa sì che il numero di avviso C4326 venga considerato un errore dal compilatore.|
|**/wo**_nnnn_|L'avviso del compilatore che è specificato dal report  _nnnn_  una sola volta.<br /><br /> Ad esempio, **/wo4326** cause avviso C4326 venga segnalato una sola volta, la prima volta che viene rilevata dal compilatore.|

Se si utilizza una delle opzioni di avviso quando si crea un'intestazione precompilata usando il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) opzione, qualsiasi utilizzo dell'intestazione precompilata usando il [/Yu](../../build/reference/yu-use-precompiled-header-file.md) opzione consente di applicare le stesse opzioni di avviso nuovo. È possibile ignorare le opzioni di avviso impostate nell'intestazione precompilata usando un'altra opzione di avviso della riga di comando.

È possibile utilizzare un [#pragma avviso](../../preprocessor/warning.md) direttiva per controllare il livello di avviso segnalato in fase di compilazione nei file di origine specifico.

Direttive pragma di avviso nel codice sorgente non sono influenzate il **/w** opzione.

Il [documentazione sugli errori di compilazione](../../error-messages/compiler-errors-1/c-cpp-build-errors.md) descrive gli avvisi e i livelli di avviso e indica perché alcune istruzioni potrebbero non essere compilato nel modo desiderato.

### <a name="to-set-the-compiler-options-in-the-visual-studio-development-environment"></a>Per impostare le opzioni del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Per impostare il **/W0**, **/W1**, **/W2**, **/W3**, **/W4**, **/Wall**m **/WV.**, **/WX** o **/WX-** opzioni, selezionare il **le proprietà di configurazione** > **C / C++** > **generale** pagina delle proprietà.

   - Per impostare il **/W0**, **/W1**, **/W2**, **/W3**, **/W4**, o **/Wall** opzioni, modificare il **livello di avviso** proprietà.

   - Per impostare il **/WX** o **/WX-** opzioni, modificare il **considera gli avvisi come errori** proprietà.

   - Per impostare la versione per il **/WV.** opzione, immettere il numero di versione del compilatore di **avviso versione** proprietà.

1. Per impostare il **/wd** o **/we** opzioni, selezionare il **le proprietà di configurazione** > **C/C++**  >   **Advanced** pagina delle proprietà.

   - Per impostare il **/wd** opzione, selezionare il **Disabilita avvisi specifici** proprietà controllo a discesa e quindi scegliere **modifica**. Nella casella di testo di **Disabilita avvisi specifici** finestra di dialogo, immettere il numero di avviso. Per immettere più di un avviso, separare i valori utilizzando un punto e virgola (**;**). Per disabilitare C4001 sia C4010, ad esempio, immettere **4001; 4010**. Scegliere **OK** per salvare le modifiche e tornare al **pagine delle proprietà** finestra di dialogo.

   - Per impostare il **/we** opzione, selezionare il **considera avvisi specifici come errori** proprietà controllo a discesa e quindi scegliere **modifica**. Nella casella di testo di **considera avvisi specifici come errori** finestra di dialogo, immettere il numero di avviso. Per immettere più di un avviso, separare i valori utilizzando un punto e virgola (**;**). Per considerare C4001 sia C4010 come errori, ad esempio, immettere **4001; 4010**. Scegliere **OK** per salvare le modifiche e tornare al **pagine delle proprietà** finestra di dialogo.

1. Per impostare il **/wo** opzione, selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella.

1. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-the-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarningLevel%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarnAsError%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableSpecificWarnings%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
