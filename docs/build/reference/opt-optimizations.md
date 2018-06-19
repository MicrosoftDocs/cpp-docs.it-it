---
title: /OPT (ottimizzazioni) | Documenti Microsoft
ms.custom: ''
ms.date: 05/18/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.OptimizeReferences
- /opt
- VC.Project.VCLinkerTool.OptimizeForWindows98
- VC.Project.VCLinkerTool.EnableCOMDATFolding
- VC.Project.VCLinkerTool.OptimizeFolding
- VC.Project.VCLinkerTool.FoldingIterations
- VC.Project.VCLinkerTool.OptimizeFoldingIterations
dev_langs:
- C++
helpviewer_keywords:
- LINK tool [C++], controlling optimizations
- -OPT linker option
- linker [C++], optimizations
- OPT linker option
- optimization, linker
- /OPT linker option
ms.assetid: 8f229863-5f53-48a8-9478-243a647093ac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc9f7f66b9bd0ee2c0da65d17eac33e1cbc8c316
ms.sourcegitcommit: da7b7533d1a4dc141cc0f09149e4e4196f2fe329
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/23/2018
ms.locfileid: "34463105"
---
# <a name="opt-optimizations"></a>/OPT (Ottimizzazioni)

Controlla le ottimizzazioni eseguite da LINK durante una compilazione.

## <a name="syntax"></a>Sintassi

> **/OPT:**{**REF** | **NOREF**}<br/>
> **/OPT:**{**ICF**[**=**_iterazioni_] | **NOICF**}<br/>
> **/OPT:**{**LBR** | **NOLBR**}

## <a name="arguments"></a>Argomenti

**REF** &AMP;#124; **NOREF**

**/OPT: ref** Elimina le funzioni e i dati a cui non fanno riferimento mai; **/OPT: NOREF** mantiene le funzioni e dati che non sono mai utilizzato come riferimento.

Quando /OPT: REF è abilitato, LINK rimuove le funzioni di package e dati, noto come *COMDAT*. Questa ottimizzazione è nota come eliminazione COMDAT transitiva. Il **/OPT: ref** anche disabilita il collegamento incrementale.

Le funzioni rese inline e le funzioni membro definite all'interno di una dichiarazione di classe sono sempre COMDAT. Tutte le funzioni in un file oggetto vengono eseguite in COMDAT se viene compilato utilizzando la [/Gy](../../build/reference/gy-enable-function-level-linking.md) opzione. Per inserire **const** dati COMDAT, è necessario dichiararla utilizzando `__declspec(selectany)`. Per informazioni su come specificare i dati per la rimozione o la riduzione, vedere [selectany](../../cpp/selectany.md).

Per impostazione predefinita, **/OPT: ref** è abilitata per il linker a meno che non **/OPT: NOREF** o [/debug](../../build/reference/debug-generate-debug-info.md) è specificato. Per eseguire l'override di questa impostazione predefinita e mantenere i dati COMDAT nel programma, specificare **/OPT: NOREF**. È possibile utilizzare il [/INCLUDONO](../../build/reference/include-force-symbol-references.md) opzione per ignorare la rimozione di un simbolo specifico.

Se [/debug](../../build/reference/debug-generate-debug-info.md) è specificato, il valore predefinito per **/OPT** è **NOREF**, e tutte le funzioni vengono mantenute nell'immagine. Per eseguire l'override di questa impostazione predefinita e ottimizzare una build di debug, specificare **/OPT: ref**. Questo può ridurre le dimensioni dell'eseguibile che può risultare che compila un'ottimizzazione utile anche in modalità debug. È consigliabile specificare anche **/OPT: NOICF** mantenere identici compila le funzioni di debug. Questo semplifica la lettura delle tracce dello stack e l'impostazione di punti di interruzione nelle funzioni che altrimenti verrebbero ridotte insieme.

**ICF**\[**=**_iterazioni_] &#124; **NOICF**

Uso **ICF**\[**=**_iterazioni_] per eseguire la riduzione di COMDAT identici. I dati COMDAT ridondanti possono essere rimossi dall'output del linker. Il parametro facoltativo *iterazioni* parametro specifica il numero di volte in cui scorrere i simboli per i duplicati. Il numero predefinito di iterazioni è 1. Attraverso iterazioni aggiuntive si potrebbero trovare più duplicati rivelati attraverso la riduzione nell'iterazione precedente.

Per impostazione predefinita, **/OPT: ICF** è abilitata per il linker a meno che non **/OPT: NOICF** o [/debug](../../build/reference/debug-generate-debug-info.md) è specificato. Per sostituire questa impostazione predefinita e impedire che i dati COMDAT viene ridotta del programma, specificare **/OPT: NOICF**.

In una build di debug, è necessario specificare esplicitamente **/OPT: ICF** per abilitare la riduzione di COMDAT. Tuttavia, poiché **/OPT: ICF** unisce funzioni o dati identici, può modificare i nomi delle funzioni visualizzati nelle tracce dello stack. Possono inoltre impedire la per impostare i punti di interruzione in alcune funzioni o per esaminare alcuni dati nel debugger ed è possibile accedere a funzioni impreviste quando avanza all'interno del codice. Il comportamento del codice è identico, ma la presentazione di debugger può essere molto ambiguo. Pertanto, si consiglia di non utilizzare **/OPT: ICF** nelle build di debug a meno che i vantaggi del codice di dimensioni ridotte rendano tali svantaggi irrilevanti.

> [!NOTE]
> Poiché **/OPT: ICF** può provocare lo stesso indirizzo per poter essere assegnati a differenti funzioni o membri dati di sola lettura (vale a dire **const** variabili quando viene compilato utilizzando **/Gy**), può causare interruzioni in un programma che dipende da indirizzi univoci per le funzioni o membri dati di sola lettura. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](../../build/reference/gy-enable-function-level-linking.md).

**LBR** &AMP;#124; **NOLBR**

Il **/OPT: lbr** e **/OPT:NOLBR** opzioni si applicano solo ai dati binari ARM. Poiché alcune istruzioni branch del processore ARM presentano un intervallo limitato, se il linker rileva un salto a un indirizzo non compreso in tale intervallo, sostituisce l'indirizzo di destinazione dell'istruzione branch con l'indirizzo di un'"isola" di codice contenente un'istruzione branch destinata alla destinazione effettiva. È possibile utilizzare **/OPT: lbr** per ottimizzare il rilevamento di istruzioni branch lunghe e il posizionamento di isole di codice intermedie per ridurre al minimo la dimensione complessiva del codice. **/OPT:NOLBR** indica al linker di generare isole di codice per istruzioni branch lunghe man mano che vengono rilevate, senza ottimizzazione.

Per impostazione predefinita, il **/OPT: lbr** opzione viene impostata quando il collegamento incrementale non è abilitato. Se si desidera un collegamento non incrementale, ma non ottimizzazioni branch lunghe, specificare **/OPT:NOLBR**. Il **/OPT: lbr** disabilita il collegamento incrementale.

## <a name="remarks"></a>Note

Quando usato nella riga di comando, il linker predefinito corrisponde a **LBR /OPT: REF, ICF,**. Se **/DEBUG** è specificato, il valore predefinito è **NOLBR /OPT: NOREF, NOICR,**.

Il **/OPT** ottimizzazioni in genere diminuire le dimensioni dell'immagine e aumentare la velocità del programma. Questi miglioramenti possono essere notevoli in programmi di dimensioni elevate, motivo per cui essi sono abilitati per impostazione predefinita per la build in versione finale.

Ottimizzazione del linker adottare tempo aggiuntivo necessario in anticipo, ma il codice ottimizzato consente anche di risparmiare tempo quando il linker ha meno rilocazioni da correggere e crea un'immagine finale più piccola e viene salvato anche più tempo quando dispone di meno informazioni di debug per elaborare e scrivere nel file PDB. Quando ottimizzazione è attivata, questo può comportare tempi di collegamento in generale, come il piccolo costi aggiuntivi durante l'analisi potrebbero essere più di offset nel momento in cui un risparmio in linker posizionato su più piccoli dei file binari.

Il **/OPT** argomenti possono essere specificati insieme, separati da virgole. Ad esempio, invece di **/OPT: REF /OPT: NOICF**, è possibile specificare **/OPT: REF, NOICF**.

È possibile usare il [/Verbose](../../build/reference/verbose-print-progress-messages.md) l'opzione del linker per visualizzare le funzioni rimosse da **/OPT: ref** e le funzioni che quelle ridotte da **/OPT: ICF**.

Il **/OPT** gli argomenti vengono spesso impostati per i progetti creati tramite il **nuovo progetto** finestra di dialogo nell'IDE di Visual Studio, e in genere hanno valori diversi per il debug e configurazioni di rilascio. Se è impostato alcun valore per queste opzioni del linker nel progetto, è possibile ottenere le impostazioni predefinite del progetto, che possono essere diverse dai valori predefiniti usati dal linker nella riga di comando.

### <a name="to-set-the-opticf-or-optref-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:ICF o OPT:REF nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **proprietà di configurazione** > **Linker** > **ottimizzazione** pagina delle proprietà.

1. Modificare una di queste proprietà:

   - **Abilita riduzione COMDAT**

   - **Riferimenti**

### <a name="to-set-the-optlbr-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:LBR nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere l'opzione in **opzioni aggiuntive**:

   `/opt:lbr` o `/opt:nolbr`

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A>.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)
- [Opzioni del linker](../../build/reference/linker-options.md)
