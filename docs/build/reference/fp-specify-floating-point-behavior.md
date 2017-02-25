---
title: "/fp (Specifica il comportamento della virgola mobile) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.floatingPointModel"
  - "VC.Project.VCCLWCECompilerTool.FloatingPointExceptions"
  - "/fp"
  - "VC.Project.VCCLWCECompilerTool.floatingPointModel"
  - "VC.Project.VCCLCompilerTool.FloatingPointExceptions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/fp (opzione del compilatore) [C++]"
  - "-fp (opzione del compilatore) [C++]"
ms.assetid: 10469d6b-e68b-4268-8075-d073f4f5d57e
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# /fp (Specifica il comportamento della virgola mobile)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il comportamento della virgola mobile in un file di codice sorgente.  
  
## Sintassi  
  
```  
/fp:[precise | except[-] | fast | strict ]  
```  
  
## Flag  
 **precise**  
 Valore predefinito.  
  
 Migliora la coerenza dei test di uguaglianza e disuguaglianza per la virgola mobile disabilitando le ottimizzazioni che potrebbero modificare la precisione delle operazioni di calcolo a virgola mobile. Il mantenimento di una precisione specifica è necessario ai fini della conformità allo standard ANSI. Per impostazione predefinita, nel codice destinato alle architetture x86 il compilatore utilizza i registri a 80 bit del coprocessore per conservare i risultati intermedi delle operazioni di calcolo a virgola mobile.  In questo modo la velocità del programma aumenta e le relative dimensioni diminuiscono.  Tuttavia, poiché queste operazioni di calcolo interessano tipi di dati a virgola mobile rappresentati in memoria da meno di 80 bit, la presenza di bit aggiuntivi di precisione \(80 bit meno il numero di bit in un tipo a virgola mobile più piccolo\) in un'operazione di calcolo complessa può produrre risultati incoerenti.  
  
 Con **\/fp:precise** su processori x86, il compilatore esegue l'arrotondamento su variabili di tipo `float` in base alla precisione corretta per assegnazioni e cast e quando i parametri vengono passati a una funzione.  Grazie a questo arrotondamento i dati non risultano più significativi della capacità del relativo tipo.  Un programma compilato con l'opzione **\/fp:precise** può essere più lento e di dimensioni maggiori rispetto a uno compilato senza **\/fp:precise**.  L'opzione **\/fp:precise** disabilita gli intrinseci che vengono sostituiti dalle routine della libreria di runtime standard.  Per ulteriori informazioni, vedere [\/Oi \(Genera funzioni intrinseche\)](../../build/reference/oi-generate-intrinsic-functions.md).  
  
 Il comportamento della virgola mobile seguente viene abilitato con **\/fp:precise**:  
  
-   Forme contratte, ovvero l'utilizzo di un'operazione composita con un solo arrotondamento alla fine per sostituire più operazioni.  
  
-   Le ottimizzazioni delle espressioni non valide per valori speciali \(NaN, \+infinity, \-infinity, \+0, \-0\) non sono consentite.  Le ottimizzazioni x\-x \=\> 0, x\*0 \=\> 0, x\-0 \=\> x, x\+0 \=\> x e 0\-x \=\> \-x non sono valide per diversi motivi. Vedere gli standard IEEE 754 e C99.  
  
-   Il compilatore gestisce correttamente i confronti che interessano NaN.  Ad esempio, x \!\= x restituisce **true** se `x` è NaN e i confronti ordinati che interessano NaN generano un'eccezione.  
  
-   La valutazione delle espressioni segue C99 FLT\_EVAL\_METHOD\=2 con questa eccezione: quando si eseguono programmazioni per i processori x86, poiché l'unità FPU è impostata su una precisione a 53 bit, si parla di precisione di tipo long\-double.  
  
-   La moltiplicazione per 1,0 è stata sostituita dall'utilizzo dell'altro fattore.  x\*y\*1.0 viene convertito in x\*y.  Analogamente, x\*1.0\*y viene convertito in x\*y.  
  
-   La divisione per 1,0 è stata sostituita dall'utilizzo del dividendo.  x\*y\/1.0 viene convertito in x\*y.  Analogamente, x\/1.0\*y viene convertito in x\*y.  
  
 L'utilizzo di **\/fp:precise** quando [fenv\_access](../../preprocessor/fenv-access.md) è impostato su ON comporta la disabilitazione di alcune ottimizzazioni quali le valutazioni di espressioni a virgola mobile in fase di compilazione.  Se ad esempio si utilizza [\_control87, \_controlfp, \_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md) per modificare la modalità di arrotondamento e il compilatore esegue un calcolo a virgola mobile, la modalità di arrotondamento specificata verrà attivata solo se `fenv_access` è impostato su ON.  
  
 **\/fp:precise** sostituisce l'opzione del compilatore **\/Op**.  
  
 **fast**  
 Crea codice più veloce nella maggior parte dei casi rendendo meno rigide le regole per l'ottimizzazione delle operazioni di calcolo a virgola mobile.  In questo modo, il codice a virgola mobile verrà ottimizzato ai fini della velocità, ma a scapito della precisione e della correttezza.  Quando si specifica **\/fp:fast**, il compilatore potrebbe non eseguire correttamente l'arrotondamento in corrispondenza di istruzioni di assegnazione, typecast o chiamate di funzione e potrebbe non eseguirlo del tutto per le espressioni intermedie.  Il compilatore potrebbe riordinare le operazioni o eseguire trasformazioni algebriche, ad esempio seguendo regole associative e distributive, senza considerare l'effetto sui risultati con precisione finita.  Il compilatore potrebbe modificare le operazioni e gli operandi in base alla precisione singola anziché seguire le regole di promozione del tipo C\+\+.  Le ottimizzazioni delle forme contratte specifiche della virgola mobile sono sempre abilitate \([fp\_contract](../../preprocessor/fp-contract.md) è impostato su ON\).  Le eccezioni a virgola mobile e l'accesso all'ambiente FPU sono disabilitati \(**\/fp:except\-** è implicito e [fenv\_access](../../preprocessor/fenv-access.md) è impostato su OFF\).  
  
 **\/fp:fast** non può essere utilizzato con **\/fp:strict** o **\/fp:precise**.  Viene utilizzata l'ultima opzione specificata sulla riga di comando.  Se si specificano entrambe le opzioni **\/fp:fast** e **\/fp:except** viene generato un errore di compilazione.  
  
 Se si specificano [\/Za, \/Ze \(Disabilita estensioni linguaggio\)](../../build/reference/za-ze-disable-language-extensions.md) \(compatibilità ANSI\) e **\/fp:fast** si può verificare un comportamento imprevisto.  Ad esempio, le operazioni a virgola mobile a precisione singola non possono essere arrotondate alla precisione singola.  
  
 **except\[\-\]**  
 Modello di eccezione a virgola mobile affidabile.  Vengono generate eccezioni immediatamente dopo l'attivazione.  Per impostazione predefinita, questa opzione è impostata su OFF.  L'aggiunta di un segno meno all'opzione ne comporta la disabilitazione in modo esplicito.  
  
 **strict**  
 Modello a virgola mobile strict di livello massimo.  **\/fp:strict** fa in modo che [fp\_contract](../../preprocessor/fp-contract.md) sia impostato su OFF e [fenv\_access](../../preprocessor/fenv-access.md) su ON.  L'opzione **\/fp:except** è implicita e può essere disabilitata specificando in modo esplicito **\/fp:except\-**.  Se utilizzata con **\/fp:except\-**, l'opzione **\/fp:strict** impone la semantica rigida della virgola mobile, ma senza considerare eventi eccezionali.  
  
## Note  
 È possibile specificare più opzioni **\/fp** nella stessa compilazione.  
  
 Per controllare il comportamento della virgola mobile funzione per funzione, vedere il pragma [float\_control](../../preprocessor/float-control.md).  In questo modo, viene eseguito l'override dell'impostazione del compilatore **\/fp**.  Ai fini della progettazione è consigliabile salvare e ripristinare il comportamento della virgola mobile locale:  
  
```css  
#pragma float_control(precise, on, push)  
// Code that uses /fp:precise mode  
#pragma float_control(pop)  
```  
  
 La maggior parte delle ottimizzazioni a virgola mobile correlate a **\/fp:strict**, **\/fp:except** \(e ai pragma corrispondenti\) e al pragma `fp_contract` dipende dal computer.  Le opzioni **\/fp:strict** e **\/fp:except** non sono compatibili con **\/clr**.  
  
 **\/fp:precise** dovrebbe consentire la soddisfazione della maggior parte dei requisiti di un'applicazione in termini di virgola mobile.  È possibile utilizzare **\/fp:except** e **\/fp:strict**, ma potrebbe verificarsi un calo delle prestazioni.  Se le prestazioni sono importanti, valutare la possibilità di utilizzare **\/fp:fast**.  
  
 **\/fp:strict**, **\/fp:fast** e **\/fp:precise** sono modalità di precisione \(correttezza\).  Può essere attiva una sola modalità alla volta.  Se vengono specificate entrambe le opzioni **\/fp:strict** e **\/fp:precise**, il compilatore utilizzerà quella elaborata per ultima.  Non è possibile specificare entrambe le opzioni **\/fp:strict** e **\/fp:fast**.  
  
 Per ulteriori informazioni, vedere [Ottimizzazione a virgola mobile di Microsoft Visual C\+\+](http://msdn.microsoft.com/library/aa289157.aspx).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **C\/C\+\+**.  
  
4.  Selezionare la pagina **Generazione codice**.  
  
5.  Modificare la proprietà **Modello virgola mobile**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.floatingPointModel%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Ottimizzazione a virgola mobile di Microsoft Visual C\+\+](http://msdn.microsoft.com/library/aa289157.aspx)