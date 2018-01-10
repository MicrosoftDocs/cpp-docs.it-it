---
title: -w,-W0,-W1, - W2,-W3, - W4,-w1,-w2,-w3,-/W4,-parete, -wd,-abbiamo -wo, -Wv, - WX (livello avviso) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
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
dev_langs: C++
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
ms.assetid: d6bc7bf5-c754-4879-909c-8e3a67e2629f
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4f38328f94fd68b3b5402d08ddb6d2bd97e3de76
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="w-w0-w1-w2-w3-w4-w1-w2-w3-w4-wall-wd-we-wo-wv-wx-warning-level"></a>/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /, abbiamo /wo, /WV., /WX (livello avviso)
Specifica la modalità di generazione degli avvisi del compilatore per una determinata compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/w  
/W0  
/W1  
/W2  
/W3  
/W4  
/Wall  
/Wv[<version>]  
/WX  
/w1<warning>   
/w2<warning>   
/w3<warning>   
/w4<warning>   
/wd<warning>   
/we<warning>   
/wo<warning>  
```  
  
## <a name="remarks"></a>Note  
 Le opzioni di avviso specificano quali avvisi del compilatore da visualizzare e il comportamento di avviso per la compilazione di intero.  
  
 Nella tabella seguente sono descritte le opzioni di avviso e gli argomenti correlati:  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**/w**|Elimina tutti gli avvisi del compilatore.|  
|**/W0**<br /><br /> **/W1**<br /><br /> **/W2**<br /><br /> **/W3**<br /><br /> **/W4**|Specifica il livello degli avvisi deve essere generato dal compilatore. I livelli di avviso valido compreso tra 0 e 4:<br /><br /> -   **/W0** Elimina tutti gli avvisi.<br />-   **/W1** vengono visualizzati avvisi di livello 1 (gravità). **/W1** è l'impostazione predefinita.<br />-   **/W2** consente di visualizzare il livello 1 e avvisi di livello 2 (significativi).<br />-   **/W3** consente di visualizzare il livello 1, livello 2 e avvisi di livello 3 (produzione di qualità).<br />-   **/W4** consente di visualizzare il livello 1, livello 2 e avvisi di livello 3 e tutti livello 4 avvisi (informativi) che non sono disattivati per impostazione predefinita. Si consiglia di utilizzare questa opzione solo per fornire avvisi di tipo lint. Tuttavia, per un nuovo progetto, potrebbe essere preferibile utilizzare **/W4** in tutte le compilazioni; in questo modo i difetti di codice da trovare possibili minimi.|  
|**/Wall**|Visualizza tutti gli avvisi visualizzati da **/W4** e tutti gli altri avvisi che **/W4** non include, ad esempio, gli avvisi che sono disattivate per impostazione predefinita. Per ulteriori informazioni, vedere [del compilatore avvisi che sono disattivata per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).|  
|**/WV.**`:version`|Esclusione di avvisi introdotti nelle versioni del compilatore più recente `version`. È possibile utilizzare questa opzione per determinare se sono presenti nuovi avvisi nel codice compilato senza avvisi quando si utilizza una versione precedente del compilatore e per evitare temporaneamente gli avvisi di nuovo dal processo di compilazione mentre è correggerli. Il parametro facoltativo `version` assume il formato `nn`[.`mm` [. `bbbbb`]] dove `nn` è il numero di versione principale, `mm` è il numero di versione secondario facoltativo, e `bbbbb` è il numero di build facoltativo del compilatore. Ad esempio, utilizzare `/Wv:17.00.00000` esclusione di avvisi introdotti in Visual C++ 2012 e versioni successive. Per impostazione predefinita, **/WV.** utilizza il numero di versione del compilatore corrente e non gli avvisi vengono soppressi. Per informazioni su quali avvisi vengono soppressi dalla versione del compilatore, vedere [gli avvisi del compilatore dalla versione del compilatore](../..//error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md).|  
|**/WX**|Considera tutti gli avvisi del compilatore come errori. Per un nuovo progetto, potrebbe essere preferibile utilizzare **/WX** in tutte le compilazioni; risolvere tutti gli avvisi assicura i difetti di codice da trovare possibili minimi.<br /><br /> Il linker dispone anche un **/WX** opzione. Per altre informazioni, vedere [/WX (Considera gli avvisi del linker come errori)](../../build/reference/wx-treat-linker-warnings-as-errors.md).|  
|**/W1**`n`<br /><br /> **/W2**`n`<br /><br /> **/w3**`n`<br /><br /> **/W4**`n`|Imposta il livello di avviso per il numero di avviso specificato da `n`. È possibile modificare il comportamento del compilatore per l'avviso quando è impostato un livello di avviso specifico. Per applicare gli standard di codifica personalizzati per gli avvisi, anziché il valore predefinito di quelli forniti da Visual Studio, è possibile utilizzare queste opzioni in combinazione con altre opzioni di avviso.<br /><br /> Ad esempio, `/w34326` di come un avviso di livello 3 anziché a livello 1 C4326. Se esegue la compilazione utilizzando sia il `/w34326` opzione e `/W2` opzione, l'avviso C4326 non viene generato.|  
|**/wd**`n`|Elimina l'avviso del compilatore specificato da `n`.<br /><br /> Ad esempio, `/wd4326` Elimina l'avviso del compilatore C4326.|  
|**/we**`n`|Considera l'avviso del compilatore specificato da `n` come un errore.<br /><br /> Ad esempio, `/we4326` fa sì che il numero di avviso C4326 venga considerato un errore dal compilatore.|  
|**/wo**`n`|L'avviso del compilatore che è specificato dal report `n` una sola volta.<br /><br /> Ad esempio, `/wo4326` cause avviso C4326 venga segnalato una sola volta, la prima volta che viene rilevata dal compilatore.|  
  
 Se si utilizza una delle opzioni di avviso quando si crea un'intestazione precompilata usando il [/Yc](../../build/reference/yc-create-precompiled-header-file.md) opzione, qualsiasi utilizzo dell'intestazione precompilata usando il [/Yu](../../build/reference/yu-use-precompiled-header-file.md) opzione consente di applicare le stesse opzioni di avviso nuovo. È possibile ignorare le opzioni di avviso impostate nell'intestazione precompilata usando un'altra opzione di avviso della riga di comando.  
  
 È possibile utilizzare un [#pragma avviso](../../preprocessor/warning.md) direttiva per controllare il livello di avviso segnalato in fase di compilazione nei file di origine specifico.  
  
 Direttive di avviso pragma nel codice sorgente non sono influenzate il **/w** opzione.  
  
 Il [documentazione sugli errori di compilazione](../../error-messages/compiler-errors-1/c-cpp-build-errors.md) descrive gli avvisi e i livelli di avviso e indica perché alcune istruzioni potrebbero non essere compilato nel modo desiderato.  
  
### <a name="to-set-the-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare **C/C++**.  
  
3.  Nel **generale** proprietà, modificare il **il livello di avviso** o **considera gli avvisi come errori** proprietà.  
  
4.  Nel **avanzate** proprietà, modificare il **Disabilita avvisi specifici** proprietà.  
  
5.  Per le opzioni rimanenti, nel **riga di comando** proprietà, digitare l'opzione del compilatore nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-the-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarningLevel%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WarnAsError%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DisableSpecificWarnings%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)