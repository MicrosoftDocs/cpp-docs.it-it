---
title: /fp (Specifica il comportamento della virgola mobile)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.floatingPointModel
- VC.Project.VCCLWCECompilerTool.FloatingPointExceptions
- /fp
- VC.Project.VCCLWCECompilerTool.floatingPointModel
- VC.Project.VCCLCompilerTool.FloatingPointExceptions
helpviewer_keywords:
- -fp compiler option [C++]
- /fp compiler option [C++]
ms.assetid: 10469d6b-e68b-4268-8075-d073f4f5d57e
ms.openlocfilehash: 8b948edba3244eb22089b2ef5b4c8131736e1fb3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50452572"
---
# <a name="fp-specify-floating-point-behavior"></a>/fp (Specifica il comportamento della virgola mobile)

Specifica il comportamento della virgola mobile in un file di codice sorgente.

## <a name="syntax"></a>Sintassi

> **/fp:**[**preciso** | **tranne**[**-**] | **veloci** | **strict**]

### <a name="arguments"></a>Argomenti

#### <a name="precise"></a>Precisa

Il valore predefinito **/fp** viene **/fp: precise**.

Il **/fp: precise** flag migliora la coerenza dei test a virgola mobile per verificarne l'uguaglianza e disuguaglianza disabilitando le ottimizzazioni che potrebbero modificare la precisione dei calcoli a virgola mobile. Il mantenimento di una precisione specifica è necessario ai fini della conformità allo standard ANSI. Per impostazione predefinita, nel codice per x86 che utilizzare x87 coprocessore istruzioni, il compilatore usi il coprocessore architetture di 80 bit registri per contenere i risultati intermedi di calcolo a virgola mobile. In questo modo la velocità del programma aumenta e le relative dimensioni diminuiscono. Tuttavia, poiché queste operazioni di calcolo interessano tipi di dati a virgola mobile rappresentati in memoria da meno di 80 bit, la presenza di bit aggiuntivi di precisione (80 bit meno il numero di bit in un tipo a virgola mobile più piccolo) in un'operazione di calcolo complessa può produrre risultati incoerenti.

Con **/fp: precise** x86 processori, il compilatore esegue l'arrotondamento su variabili di tipo `float` alla precisione corretta per assegnazioni e cast e quando i parametri vengono passati a una funzione. Grazie a questo arrotondamento i dati non risultano più significativi della capacità del relativo tipo. Un programma compilato con **/fp: precise** può essere più lente e di dimensioni maggiori rispetto a uno compilato senza **/fp: precise**. **/fp: precise** Disabilita funzioni intrinseche; la libreria runtime standard vengono infatti utilizzate le routine. Per altre informazioni, vedere [/Oi (Genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md).

Il seguente comportamento a virgola mobile è abilitato con **/fp: precise**:

- Forme contratte, ovvero l'utilizzo di un'operazione composita con un solo arrotondamento alla fine per sostituire più operazioni.

- Le ottimizzazioni delle espressioni non valide per valori speciali (NaN, +infinity, -infinity, +0, -0) non sono consentite. Le ottimizzazioni x-x = > 0, x * 0 = > 0, x-0 = > x, x + 0 = > x e x-0 = > - x non sono valide per diversi motivi. Vedere gli standard IEEE 754 e C99.

- Il compilatore gestisce correttamente i confronti che interessano NaN. Ad esempio, x! = x viene valutata **true** se `x` è NaN e i confronti ordinati che interessano NaN generano un'eccezione.

- La valutazione delle espressioni segue C99 FLT_EVAL_METHOD=2 con questa eccezione: quando si eseguono programmazioni per i processori x86, poiché l'unità FPU è impostata su una precisione a 53 bit, si parla di precisione di tipo long-double.

- La moltiplicazione per 1,0 è stata sostituita dall'utilizzo dell'altro fattore. x * y\*1.0 viene trasformato in x\*y. Analogamente, x\*1.0\*y viene trasformato in x\*y.

- La divisione per 1,0 è stata sostituita dall'uso del dividendo. x * y/1.0 viene trasformato in x\*y. Analogamente, x / 1,0\*y viene trasformato in x\*y.

Usando **/fp: precise** quando [fenv_access](../../preprocessor/fenv-access.md) si trova in Disabilita alcune ottimizzazioni quali le valutazioni in fase di compilazione di espressioni a virgola mobile. Ad esempio, se si usa [_control87, controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) per modificare la modalità di arrotondamento e il compilatore esegue un calcolo a virgola mobile, la modalità di arrotondamento specificata non è in effetti a meno che non `fenv_access`è impostata su ON.

**/fp: precise** sostituisce il **/op.** opzione del compilatore.

#### <a name="fast"></a>Fast

Il **/fp: fast** opzione crea il codice più veloce nella maggior parte dei casi rendendo meno rigide le regole per l'ottimizzazione delle operazioni a virgola mobile. In questo modo, il codice a virgola mobile verrà ottimizzato ai fini della velocità, ma a scapito della precisione e della correttezza. Quando **/fp: fast** viene specificato, il compilatore potrebbe non correttamente l'arrotondamento in istruzioni di assegnazione, typecast o chiamate di funzione e non può eseguire l'arrotondamento di espressioni intermedie. Il compilatore potrebbe riordinare le operazioni o eseguire trasformazioni algebriche, ad esempio seguendo regole associative e distributive, senza considerare l'effetto sui risultati con precisione finita. Il compilatore potrebbe modificare le operazioni e gli operandi in base alla precisione singola anziché seguire le regole di promozione del tipo C++. Ottimizzazioni delle forme contratte mobile specifiche sono sempre abilitati ([fp_contract](../../preprocessor/fp-contract.md) è impostata su ON). Eccezioni a virgola mobile e l'accesso all'ambiente FPU sono disabilitati (**/fp: eccetto-** è implicita e [fenv_access](../../preprocessor/fenv-access.md) è impostata su OFF).

**/fp: fast** non può essere usato con **/fp: strict** oppure **/fp: precise**. Viene utilizzata l'ultima opzione specificata sulla riga di comando. Se si specifica sia **/fp: fast** e **/fp: tranne** genera un errore del compilatore.

Che specifica [/Za, /Ze (Disabilita estensioni linguaggio)](../../build/reference/za-ze-disable-language-extensions.md) (compatibilità ANSI) e **/fp: fast** può causare comportamenti imprevisti. Ad esempio, le operazioni a virgola mobile a precisione singola non possono essere arrotondate alla precisione singola.

#### <a name="except"></a>except

Il **/fp: tranne** opzione Abilita un modello di eccezione a virgola mobile affidabile. Vengono generate eccezioni immediatamente dopo l'attivazione. Per impostazione predefinita, questa opzione è impostata su OFF. Aggiunta di un segno meno (-) all'opzione (**/fp: eccetto-**) in modo esplicito lo disabilita.

#### <a name="strict"></a>strict

Il **/fp: strict** opzione attiva il modello a virgola mobile più stretto. **/fp: strict** provoca [fp_contract](../../preprocessor/fp-contract.md) sia impostato su OFF e [fenv_access](../../preprocessor/fenv-access.md) sia impostato su ON. **/fp: tranne** è implicita e può essere disabilitata specificando in modo esplicito **/fp: eccetto-**. Quando abbinata **/fp: tranne-**, **/fp: strict** applica la semantica della virgola mobile strict ma senza considerare eventi eccezionali.

## <a name="remarks"></a>Note

Più **/fp** opzioni possono essere specificate nella stessa compilazione.

Per controllare il comportamento a virgola mobile e dalla funzione, vedere la [float_control](../../preprocessor/float-control.md) pragma. Questa impostazione sostituisce il **/fp** impostazione del compilatore. Ai fini della progettazione è consigliabile salvare e ripristinare il comportamento della virgola mobile locale:

```cpp
#pragma float_control(precise, on, push)
// Code that uses /fp:precise mode
#pragma float_control(pop)
```

La maggior parte delle ottimizzazioni a virgola mobile correlate a **/fp: strict**, **/fp: eccetto** (e ai pragma corrispondenti) e il `fp_contract` pragma sono dipendenti dal computer. **/fp: strict** e **/fp: tranne** non sono compatibili con **/clr**.

**/fp: precise** deve prendere in considerazione la maggior parte dei requisiti a virgola mobile di un'applicazione. È possibile usare **/fp: tranne** e **/fp: strict**, ma potrebbe esserci un calo delle prestazioni. Se le prestazioni sono più importanti, considerare la possibilità di usare **/fp: fast**.

**/fp: strict**, **/fp: fast**, e **/fp: precise** sono le modalità di precisione (correttezza). Può essere attiva una sola modalità alla volta. Se entrambe **/fp: strict** e **/fp: precise** vengono specificati, il compilatore utilizzerà quella elaborata per ultima. Entrambe **/fp: strict** e **/fp: fast** non può essere specificato.

Per altre informazioni, vedere [ottimizzazione di Microsoft Visual C++ a virgola mobile](floating-point-optimization.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere la **le proprietà di configurazione** > **C/C++** > **Code Generation** pagina delle proprietà.

1. Modificare il **modello virgola mobile** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.floatingPointModel%2A>.

## <a name="see-also"></a>Vedere anche

- [Opzioni del compilatore](compiler-options.md)
- [Impostazione delle opzioni del compilatore](setting-compiler-options.md)
- [Microsoft Visual C++ ottimizzazione virgola mobile](floating-point-optimization.md)