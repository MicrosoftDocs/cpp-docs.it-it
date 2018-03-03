---
title: -fp (specificare il comportamento della virgola mobile) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLCompilerTool.floatingPointModel
- VC.Project.VCCLWCECompilerTool.FloatingPointExceptions
- /fp
- VC.Project.VCCLWCECompilerTool.floatingPointModel
- VC.Project.VCCLCompilerTool.FloatingPointExceptions
dev_langs:
- C++
helpviewer_keywords:
- -fp compiler option [C++]
- /fp compiler option [C++]
ms.assetid: 10469d6b-e68b-4268-8075-d073f4f5d57e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0f4a86c7bbbd38887944080a5a5c8124310fdd4a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fp-specify-floating-point-behavior"></a>/fp (Specifica il comportamento della virgola mobile)
Specifica il comportamento della virgola mobile in un file di codice sorgente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/fp:[precise | except[-] | fast | strict ]  
```  
  
## <a name="flags"></a>Flag  
 **precise**  
 Valore predefinito.  
  
 Migliora la coerenza dei test di uguaglianza e disuguaglianza per la virgola mobile disabilitando le ottimizzazioni che potrebbero modificare la precisione delle operazioni di calcolo a virgola mobile. Il mantenimento di una precisione specifica è necessario ai fini della conformità allo standard ANSI. Per impostazione predefinita, nel codice destinato alle architetture x86 il compilatore utilizza i registri a 80 bit del coprocessore per conservare i risultati intermedi delle operazioni di calcolo a virgola mobile. In questo modo la velocità del programma aumenta e le relative dimensioni diminuiscono. Tuttavia, poiché queste operazioni di calcolo interessano tipi di dati a virgola mobile rappresentati in memoria da meno di 80 bit, la presenza di bit aggiuntivi di precisione (80 bit meno il numero di bit in un tipo a virgola mobile più piccolo) in un'operazione di calcolo complessa può produrre risultati incoerenti.  
  
 Con **/fp: precise** x86 processori, il compilatore esegue l'arrotondamento su variabili di tipo `float` alla precisione corretta per assegnazioni e cast e quando i parametri vengono passati a una funzione. Grazie a questo arrotondamento i dati non risultano più significativi della capacità del relativo tipo. Un programma compilato con **/fp: precise** può essere più lento e di dimensioni maggiori rispetto a uno compilato senza **/fp: precise**. **/fp: precise** Disabilita intrinseci; la libreria di runtime standard routine vengono invece utilizzate. Per altre informazioni, vedere [/Oi (Genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md).  
  
 Il seguente comportamento a virgola mobile è abilitato con **/fp: precise**:  
  
-   Forme contratte, ovvero l'utilizzo di un'operazione composita con un solo arrotondamento alla fine per sostituire più operazioni.  
  
-   Le ottimizzazioni delle espressioni non valide per valori speciali (NaN, +infinity, -infinity, +0, -0) non sono consentite. Le ottimizzazioni x-x = > 0, x * 0 = > 0, x-0 = > x, x + 0 = > x e 0-x = > - x non sono validi per vari motivi. Vedere gli standard IEEE 754 e C99.  
  
-   Il compilatore gestisce correttamente i confronti che interessano NaN. Ad esempio x! = x restituisce **true** se `x` è NaN e i confronti ordinati che interessano NaN generano un'eccezione.  
  
-   La valutazione delle espressioni segue C99 FLT_EVAL_METHOD=2 con questa eccezione: quando si eseguono programmazioni per i processori x86, poiché l'unità FPU è impostata su una precisione a 53 bit, si parla di precisione di tipo long-double.  
  
-   La moltiplicazione per 1,0 è stata sostituita dall'utilizzo dell'altro fattore. x * y\*1.0 viene trasformato in x\*y. Analogamente, x\*1.0\*y viene trasformato in x\*y.  
  
-   La divisione per 1,0 è stata sostituita dall'uso del dividendo. x * y/1.0 viene trasformato in x\*y. Analogamente, x / 1.0\*y viene trasformato in x\*y.  
  
 Utilizzando **/fp: precise** quando [fenv_access](../../preprocessor/fenv-access.md) è disabilita le ottimizzazioni, ad esempio valutazioni in fase di compilazione delle espressioni a virgola mobile. Ad esempio, se si utilizza [control87, controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) per modificare la modalità di arrotondamento e il compilatore esegue un calcolo a virgola mobile, la modalità di arrotondamento specificato non è in effetti a meno che non `fenv_access`è impostata su ON.  
  
 **/fp: precise** sostituisce il **/Op** l'opzione del compilatore.  
  
 **veloce**  
 Crea codice più veloce nella maggior parte dei casi rendendo meno rigide le regole per l'ottimizzazione delle operazioni di calcolo a virgola mobile. In questo modo, il codice a virgola mobile verrà ottimizzato ai fini della velocità, ma a scapito della precisione e della correttezza. Quando **Fast** viene specificato, il compilatore potrebbe non correttamente l'arrotondamento in istruzioni di assegnazione, typecast o chiamate di funzione e non può eseguire l'arrotondamento di espressioni intermedie. Il compilatore potrebbe riordinare le operazioni o eseguire trasformazioni algebriche, ad esempio seguendo regole associative e distributive, senza considerare l'effetto sui risultati con precisione finita. Il compilatore potrebbe modificare le operazioni e gli operandi in base alla precisione singola anziché seguire le regole di promozione del tipo C++. Le ottimizzazioni contrazione specifiche di virgola mobile sono sempre abilitate ([fp_contract](../../preprocessor/fp-contract.md) è impostata su ON). Eccezioni a virgola mobile e l'accesso all'ambiente FPU sono disabilitate (**/fp: tranne-** è implicita e [fenv_access](../../preprocessor/fenv-access.md) è impostata su OFF).  
  
 **Fast** non può essere utilizzato con **/fp: strict** o **/fp: precise**. Viene utilizzata l'ultima opzione specificata sulla riga di comando. Se si specifica sia **Fast** e **/fp: tranne** genera un errore del compilatore.  
  
 Specifica di [/Za, /Ze (Disabilita estensioni di linguaggio)](../../build/reference/za-ze-disable-language-extensions.md) (compatibilità ANSI) e **Fast** può causare comportamenti imprevisti. Ad esempio, le operazioni a virgola mobile a precisione singola non possono essere arrotondate alla precisione singola.  
  
 **except [-]**  
 Modello di eccezione a virgola mobile affidabile. Vengono generate eccezioni immediatamente dopo l'attivazione. Per impostazione predefinita, questa opzione è impostata su OFF. L'aggiunta di un segno meno all'opzione ne comporta la disabilitazione in modo esplicito.  
  
 **Strict**  
 Modello a virgola mobile strict di livello massimo. **/fp: strict** causa [fp_contract](../../preprocessor/fp-contract.md) su OFF e [fenv_access](../../preprocessor/fenv-access.md) sia impostato su ON. **/fp: tranne** è implicita e può essere disabilitata specificando in modo esplicito **/fp: tranne-**. Se usato con **/fp: tranne-**, **/fp: strict** applica una semantica a virgola mobile strict ma senza considerare eventi eccezionali.  
  
## <a name="remarks"></a>Note  
 Più **/fp** possibile specificare le opzioni nella stessa compilazione.  
  
 Per controllare il comportamento a virgola mobile e dalla funzione, vedere il [float_control](../../preprocessor/float-control.md) pragma. Esegue l'override di **/fp** impostazione del compilatore. Ai fini della progettazione è consigliabile salvare e ripristinare il comportamento della virgola mobile locale:  
  
```cpp  
#pragma float_control(precise, on, push)  
// Code that uses /fp:precise mode  
#pragma float_control(pop)  
```  
  
 La maggior parte delle ottimizzazioni a virgola mobile correlate a **/fp: strict**, **/fp: tranne** (e ai pragma corrispondenti) e `fp_contract` pragma sono dipendenti dal computer. **/fp: strict** e **/fp: tranne** non sono compatibili con **/clr**.  
  
 **/fp: precise** deve prendere in considerazione la maggior parte dei requisiti di un'applicazione a virgola mobile. È possibile utilizzare **/fp: tranne** e **/fp: strict**, ma potrebbero essere presenti un calo delle prestazioni. Se le prestazioni sono più importanti, considerare la possibilità di utilizzare **Fast**.  
  
 **/fp: strict**, **Fast**, e **/fp: precise** sono modalità di precisione (correttezza). Può essere attiva una sola modalità alla volta. Se entrambi **/fp: strict** e **/fp: precise** specificato, il compilatore utilizzerà quella elaborata per ultima. Entrambi **/fp: strict** e **Fast** non può essere specificato.  
  
 Per ulteriori informazioni, vedere [Microsoft Visual C++ a virgola mobile ottimizzazione](http://msdn.microsoft.com/library/aa289157.aspx).  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **C/C++** nodo.  
  
4.  Selezionare il **la generazione di codice** pagina delle proprietà.  
  
5.  Modificare il **modello virgola mobile** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.floatingPointModel%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Microsoft Visual C++ mobile punto ottimizzazione](http://msdn.microsoft.com/library/aa289157.aspx)