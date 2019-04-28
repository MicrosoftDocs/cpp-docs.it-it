---
title: /OPT (Ottimizzazioni)
ms.date: 05/18/2018
f1_keywords:
- VC.Project.VCLinkerTool.OptimizeReferences
- /opt
- VC.Project.VCLinkerTool.OptimizeForWindows98
- VC.Project.VCLinkerTool.EnableCOMDATFolding
- VC.Project.VCLinkerTool.OptimizeFolding
- VC.Project.VCLinkerTool.FoldingIterations
- VC.Project.VCLinkerTool.OptimizeFoldingIterations
helpviewer_keywords:
- LINK tool [C++], controlling optimizations
- -OPT linker option
- linker [C++], optimizations
- OPT linker option
- optimization, linker
- /OPT linker option
ms.assetid: 8f229863-5f53-48a8-9478-243a647093ac
ms.openlocfilehash: fb59b861bc46c93a3f5fa1b6c6b8d1b73ddefc66
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320246"
---
# <a name="opt-optimizations"></a>/OPT (Ottimizzazioni)

Controlla le ottimizzazioni eseguite da LINK durante una compilazione.

## <a name="syntax"></a>Sintassi

> **/OPT:**{**REF** | **NOREF**}<br/>
> **/OPT:**{**ICF**[**=**_iterations_] | **NOICF**}<br/>
> **/OPT:**{**LBR** | **NOLBR**}

## <a name="arguments"></a>Argomenti

**REF** &#124; **NOREF**

**/OPT: ref** Elimina le funzioni e i dati che non sono mai fatto riferimento. **/OPT: NOREF** mantiene le funzioni e i dati che non vengono mai fatto riferimento.

Quando /OPT: REF è abilitato, LINK rimuove le funzioni di package e dati, detti *COMDAT*. Questa ottimizzazione è nota come eliminazione COMDAT transitiva. Il **/OPT: ref** opzione inoltre disabilita il collegamento incrementale.

Le funzioni rese inline e le funzioni membro definite all'interno di una dichiarazione di classe sono sempre COMDAT. Tutte le funzioni in un file oggetto vengono trasformate in COMDAT se viene compilato usando il [/Gy](gy-enable-function-level-linking.md) opzione. Per posizionare **const** dei dati nei dati COMDAT, è necessario dichiararlo tramite `__declspec(selectany)`. Per informazioni su come specificare i dati per la rimozione o la riduzione, vedere [selectany](../../cpp/selectany.md).

Per impostazione predefinita, **/OPT: ref** è abilitata per il linker a meno che non **/OPT: NOREF** oppure [/debug](debug-generate-debug-info.md) è specificato. Per eseguire l'override di questa impostazione predefinita e mantenere dati COMDAT senza riferimenti nel programma, specificare **/OPT: NOREF**. È possibile usare la [/include](include-force-symbol-references.md) opzione per ignorare la rimozione di un simbolo specifico.

Se [/debug](debug-generate-debug-info.md) è specificato, il valore predefinito per **/zip** viene **NOREF**, e tutte le funzioni vengono mantenute nell'immagine. Per eseguire l'override di questa impostazione predefinita e ottimizzare una build di debug, specificare **/OPT: ref**. Questo può ridurre le dimensioni del file eseguibile che può risultare che si basa un'ottimizzazione utile anche in modalità debug. È consigliabile specificare anche **/OPT: NOICF** mantenere identica build funzioni in modalità debug. Questo semplifica la lettura delle tracce dello stack e l'impostazione di punti di interruzione nelle funzioni che altrimenti verrebbero ridotte insieme.

**ICF**\[**=**_iterations_] &#124; **NOICF**

Uso **ICF**\[**=**_iterazioni_] per eseguire la riduzione di COMDAT identici. I dati COMDAT ridondanti possono essere rimossi dall'output del linker. L'opzione facoltativa *iterazioni* parametro specifica il numero di volte in cui scorrere i simboli per i duplicati. Il numero predefinito di iterazioni è 1. Attraverso iterazioni aggiuntive si potrebbero trovare più duplicati rivelati attraverso la riduzione nell'iterazione precedente.

Per impostazione predefinita, **/OPT: ICF** è abilitata per il linker a meno che non **/OPT: NOICF** oppure [/debug](debug-generate-debug-info.md) è specificato. Per eseguire l'override di questa impostazione predefinita e impedire che i dati COMDAT viene ridotta al programma, specificare **/OPT: NOICF**.

In una build di debug, è necessario specificare esplicitamente **/OPT: ICF** per abilitare la riduzione COMDAT. Tuttavia, poiché **/OPT: ICF** può unire funzioni o dati identici, può modificare i nomi delle funzioni visualizzati nelle analisi dello stack. Può anche rendere Impossibile impostare i punti di interruzione in alcune funzioni o per esaminare alcuni dati nel debugger e può offrire a funzioni impreviste quando è passo a passo del codice. Il comportamento del codice è identico, ma la presentazione del debugger può essere molto ambiguo. Pertanto, non è consigliabile usare **/OPT: ICF** nelle build di debug, a meno che i vantaggi del codice di dimensioni ridotte rendano tali svantaggi irrilevanti.

> [!NOTE]
> Poiché **/OPT: ICF** possono causare lo stesso indirizzo da assegnare a differenti funzioni o i membri dati di sola lettura (vale a dire **const** variabili durante la compilazione usando **/Gy**), è possibile interrompere un programma che dipende da indirizzi univoci per le funzioni o i membri dati di sola lettura. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](gy-enable-function-level-linking.md).

**LBR** &#124; **NOLBR**

Il **/OPT: lbr** e **/OPT:NOLBR** opzioni si applicano solo ai file binari ARM. Poiché alcune istruzioni branch del processore ARM presentano un intervallo limitato, se il linker rileva un salto a un indirizzo non compreso in tale intervallo, sostituisce l'indirizzo di destinazione dell'istruzione branch con l'indirizzo di un'"isola" di codice contenente un'istruzione branch destinata alla destinazione effettiva. È possibile usare **/OPT: lbr** per ottimizzare il rilevamento delle istruzioni long branch e il posizionamento di isole di codice intermedie per ridurre al minimo la dimensione globale del codice. **/OPT:NOLBR** indica al linker di generare isole di codice per istruzioni branch lunghe quando vengono rilevati, senza ottimizzazione.

Per impostazione predefinita, il **/OPT: lbr** opzione viene impostata quando il collegamento incrementale non è abilitato. Se si desidera un collegamento non incrementale, ma non ottimizzazioni branch lunghe, specificare **/OPT:NOLBR**. Il **/OPT: lbr** disabilita il collegamento incrementale.

## <a name="remarks"></a>Note

Se usato nella riga di comando, il linker per impostazione predefinita **/OPT: REF, Firewall connessione Internet, LBR**. Se **/debug** è specificato, il valore predefinito è **/OPT: NOREF, NOICF, NOLBR**.

Il **/zip** ottimizzazioni a livello generale diminuire le dimensioni dell'immagine e aumentare la velocità del programma. Questi miglioramenti possono essere notevoli in programmi di dimensioni superiori, motivo per cui sono abilitati per impostazione predefinita per le compilazioni delle vendite al dettaglio.

Ottimizzazione del linker richiedere ulteriore tempo fin dall'inizio, ma il codice ottimizzato consente anche di risparmiare tempo quando il linker ha meno rilocazioni sistemare e crea un'immagine finale più piccola, e consentono di risparmiare ancora più tempo quando dispone di meno informazioni di debug per elaborare e scrivere nel file PDB. Quando è abilitata l'ottimizzazione, può comportare tempi di collegamento in generale, come il piccolo costo aggiuntivo durante l'analisi potrebbe essere più che ripagato entro l'ora di risparmi in linker passa tramite i file binari più piccoli.

Il **/zip** argomenti possono essere specificati insieme, separati da virgole. Ad esempio, invece di **/OPT: REF /OPT: NOICF**, è possibile specificare **/OPT: REF, NOICF**.

È possibile usare la [/verbose /Progress](verbose-print-progress-messages.md) l'opzione del linker per visualizzare le funzioni che sono state rimosse dal **/OPT: ref** e le funzioni che quelle ridotte da **/OPT: ICF**.

Il **/zip** gli argomenti vengono spesso impostati per i progetti creati usando la **nuovo progetto** finestra di dialogo nell'IDE di Visual Studio, e in genere presentano valori diversi per il debug e configurazioni di rilascio. Se è impostato alcun valore per queste opzioni del linker nel progetto, è possibile ottenere le impostazioni predefinite del progetto, che possono essere diverse dai valori predefiniti usati dal linker nella riga di comando.

### <a name="to-set-the-opticf-or-optref-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:ICF o OPT:REF nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **ottimizzazione** pagina delle proprietà.

1. Modificare una di queste proprietà:

   - **Abilita riduzione COMDAT**

   - **Riferimenti**

### <a name="to-set-the-optlbr-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:LBR nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione in **opzioni aggiuntive**:

   `/opt:lbr` o `/opt:nolbr`

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
