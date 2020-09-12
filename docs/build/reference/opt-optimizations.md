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
ms.openlocfilehash: 7f576d971425a67fc533bb417583173617615e3b
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040405"
---
# <a name="opt-optimizations"></a>/OPT (Ottimizzazioni)

Controlla le ottimizzazioni eseguite da LINK durante una compilazione.

## <a name="syntax"></a>Sintassi

> **/opt:**{**ref** \| **NOREF**} \
> **/Opt:**{**ICF** \[ **=** _iterazioni_ICF] \| **NOICF**} \
> **/opt:**{**LBR** \| **NOLBR**}

## <a name="arguments"></a>Argomenti

**REF** &#124; **NOREF**

**/Opt: Ref** Elimina le funzioni e i dati a cui non viene mai fatto riferimento. **/Opt: NOREF** mantiene le funzioni e i dati a cui non viene mai fatto riferimento.

Quando/OPT: REF è abilitato, LINK rimuove le funzioni e i dati in pacchetto senza riferimenti, noti come *COMDAT*. Questa ottimizzazione è nota come eliminazione COMDAT transitiva. L'opzione **/opt: Ref** Disabilita inoltre il collegamento incrementale.

Le funzioni inline e le funzioni membro definite all'interno di una dichiarazione di classe sono sempre COMDAT. Tutte le funzioni in un file oggetto vengono apportate in COMDAT se vengono compilate tramite l'opzione [/Gy](gy-enable-function-level-linking.md) . Per inserire **`const`** i dati in COMDAT, è necessario dichiararli usando `__declspec(selectany)` . Per informazioni su come specificare i dati per la rimozione o la riduzione, vedere [selectany](../../cpp/selectany.md).

Per impostazione predefinita, **/opt: Ref** è abilitato dal linker a meno che non sia specificato **/opt: NOREF** o [/debug](debug-generate-debug-info.md) . Per eseguire l'override di questa impostazione predefinita e lasciare COMDAT senza riferimenti nel programma, specificare **/opt: NOREF**. È possibile usare l'opzione [/include](include-force-symbol-references.md) per eseguire l'override della rimozione di un simbolo specifico.

Se si specifica [/debug](debug-generate-debug-info.md) , l'impostazione predefinita per **/opt** è **NOREF**e tutte le funzioni vengono mantenute nell'immagine. Per eseguire l'override di questa impostazione predefinita e ottimizzare una build di debug, specificare **/opt: Ref**. Questo può ridurre le dimensioni del file eseguibile e può essere un'ottimizzazione utile anche nelle build di debug. Si consiglia inoltre di specificare **/opt: NOICF** per mantenere funzioni identiche nelle compilazioni di debug. Questo semplifica la lettura delle tracce dello stack e l'impostazione di punti di interruzione nelle funzioni che altrimenti verrebbero ridotte insieme.

**ICF** \[ ICF **=** _iterazioni_] &#124; **NOICF**

Usare **ICF**le \[ **=** _iterazioni_ICF] per eseguire una riduzione COMDAT identica. I dati COMDAT ridondanti possono essere rimossi dall'output del linker. Il parametro facoltativo *iterazioni* specifica il numero di volte in cui attraversare i simboli dei duplicati. Il numero predefinito di iterazioni è 1. Attraverso iterazioni aggiuntive si potrebbero trovare più duplicati rivelati attraverso la riduzione nell'iterazione precedente.

Per impostazione predefinita, **/opt: ICF** è abilitato dal linker a meno che non sia specificato **/opt: NOICF** o [/debug](debug-generate-debug-info.md) . Per eseguire l'override di questa impostazione predefinita e impedire che COMDAT venga ripiegato nel programma, specificare **/opt: NOICF**.

In una build di debug è necessario specificare in modo esplicito **/opt: ICF** per abilitare la riduzione del COMDAT. Tuttavia, poiché **/opt: ICF** può unire dati o funzioni identiche, può modificare i nomi di funzione visualizzati nelle analisi dello stack. Consente inoltre di impostare punti di interruzione in determinate funzioni o di esaminare alcuni dati nel debugger e di accedere a funzioni impreviste quando si esegue una sola istruzione nel codice. Il comportamento del codice è identico, ma la presentazione del debugger può creare confusione. Pertanto, non è consigliabile utilizzare **/opt: ICF** nelle build di debug, a meno che i vantaggi del codice più piccolo superino questi svantaggi.

> [!NOTE]
> Poiché **/opt: ICF** può causare l'assegnazione dello stesso indirizzo a funzioni diverse o a membri dati di sola lettura (ovvero **`const`** variabili quando vengono compilati tramite **/Gy**), può interrompere un programma che dipende da indirizzi univoci per le funzioni o i membri dati di sola lettura. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](gy-enable-function-level-linking.md).

**LBR** &#124; **NOLBR**

Le opzioni **/opt: LBR** e **/opt: NOLBR** si applicano solo ai file binari ARM. Dato che alcune istruzioni branch del processore ARM hanno un intervallo limitato, se il linker rileva un salto a un indirizzo non compreso nell'intervallo, sostituisce l'indirizzo di destinazione dell'istruzione Branch con l'indirizzo di un "isola" di codice contenente un'istruzione branch destinata alla destinazione effettiva. È possibile usare **/opt: LBR** per ottimizzare il rilevamento di istruzioni branch lunghe e il posizionamento di isole di codice intermedie per ridurre al minimo le dimensioni complessive del codice. **/Opt: NOLBR** indica al linker di generare le isole di codice per le istruzioni di Branch prolunghe quando vengono rilevate, senza ottimizzazione.

Per impostazione predefinita, l'opzione **/opt: LBR** viene impostata quando il collegamento incrementale non è abilitato. Se si desidera un collegamento non incrementale, ma non le ottimizzazioni del ramo lungo, specificare **/opt: NOLBR**. L'opzione **/opt: LBR** Disabilita il collegamento incrementale.

## <a name="remarks"></a>Commenti

Quando viene usato nella riga di comando, per impostazione predefinita il linker è **/opt: Ref, ICF, LBR**. Se si specifica **/debug** , il valore predefinito è **/opt: NOREF, NOICF, NOLBR**.

Le ottimizzazioni **/opt** in genere riducono le dimensioni dell'immagine e aumentano la velocità del programma. Questi miglioramenti possono risultare sostanziali nei programmi più grandi, motivo per cui sono abilitati per impostazione predefinita per le compilazioni al dettaglio.

L'ottimizzazione del linker prevede un tempo di anticipo aggiuntivo, ma il codice ottimizzato consente anche di risparmiare tempo quando il linker ha meno rilocazioni per correggere e creare un'immagine finale più piccola e consente di risparmiare ancora più tempo quando dispone di meno informazioni di debug da elaborare e scrivere nel PDB. Quando l'ottimizzazione è abilitata, può comportare un tempo di collegamento più veloce, in quanto il minor costo aggiuntivo nell'analisi può essere maggiore dell'offset in base al risparmio di tempo nel linker passa su file binari più piccoli.

Gli argomenti **/opt** possono essere specificati insieme, separati da virgole. Ad esempio, invece di **/opt: Ref/opt: NOICF**, è possibile specificare **/opt: Ref, NOICF**.

È possibile usare l'opzione del linker [/verbose](verbose-print-progress-messages.md) per visualizzare le funzioni che sono state rimosse da **/opt: Ref** e dalle funzioni riflesse da **/opt: ICF**.

Gli argomenti **/opt** sono spesso impostati per i progetti creati usando la finestra di dialogo **nuovo progetto** nell'IDE di Visual Studio e in genere hanno valori diversi per le configurazioni di debug e rilascio. Se non è impostato alcun valore per queste opzioni del linker nel progetto, è possibile ottenere le impostazioni predefinite del progetto, che possono essere diverse dai valori predefiniti usati dal linker dalla riga di comando.

### <a name="to-set-the-opticf-or-optref-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:ICF o OPT:REF nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà di ottimizzazione del**linker**delle proprietà di configurazione  >  **Optimization** .

1. Modificare una di queste proprietà:

   - **Abilita riduzione COMDAT**

   - **Riferimenti**

### <a name="to-set-the-optlbr-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:LBR nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà della riga di comando del**linker**proprietà di configurazione  >  **Command Line** .

1. Immettere l'opzione in **Opzioni aggiuntive**:

   `/opt:lbr` o `/opt:nolbr`

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A>.

## <a name="see-also"></a>Vedi anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
