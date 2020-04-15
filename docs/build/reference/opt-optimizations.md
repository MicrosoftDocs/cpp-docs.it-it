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
ms.openlocfilehash: b25db4d6c260c3c6751de293aa2a82df8aa05e7e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336217"
---
# <a name="opt-optimizations"></a>/OPT (Ottimizzazioni)

Controlla le ottimizzazioni eseguite da LINK durante una compilazione.

## <a name="syntax"></a>Sintassi

> **/OPT:**-**REF** | **NOREF**<br/>
> **/OPT:**-**ICF**[**=**_iterazioni_] **NOICF**<br/>
> **/OPT:****: LBR** | **NOLBR**

## <a name="arguments"></a>Argomenti

**&#124;** **RIFERIMENTO NOREF**

**/OPT:REF** elimina le funzioni e i dati a cui non viene mai fatto riferimento; **/OPT:NOREF** mantiene le funzioni e i dati a cui non viene mai fatto riferimento.

Quando /OPT:REF è abilitato, LINK rimuove i dati e le funzioni in pacchetto senza riferimenti, noti come *COMDATs*. Questa ottimizzazione è nota come eliminazione COMDAT transitiva. L'opzione **/OPT:REF** disabilita anche il collegamento incrementale.

Le funzioni inline e le funzioni membro definite all'interno di una dichiarazione di classe sono sempre COMDAT. Tutte le funzioni in un file oggetto vengono trasformate in COMDAT se viene compilato utilizzando l'opzione [/Gy.](gy-enable-function-level-linking.md) Per inserire dati **const** in COMDAT, è `__declspec(selectany)`necessario dichiararla utilizzando . Per informazioni su come specificare i dati per la rimozione o la piegatura, vedere [selectany](../../cpp/selectany.md).

Per impostazione predefinita, **/OPT:REF** è abilitato dal linker, a meno che non venga specificato **/OPT:NOREF** o [/DEBUG.](debug-generate-debug-info.md) Per eseguire l'override di questa impostazione predefinita e mantenere i COMDAT senza riferimenti nel programma, specificare **/OPT:NOREF**. È possibile utilizzare l'opzione [/INCLUDE](include-force-symbol-references.md) per ignorare la rimozione di un simbolo specifico.

Se si specifica [/DEBUG,](debug-generate-debug-info.md) il valore predefinito per **/OPT** è **NOREF**e tutte le funzioni vengono mantenute nell'immagine. Per eseguire l'override di questa impostazione predefinita e ottimizzare una build di debug, specificare **/OPT:REF**. Ciò può ridurre le dimensioni dell'eseguibile e può essere un'utile ottimizzazione anche nelle build di debug. È consigliabile specificare anche **/OPT:NOICF** per mantenere funzioni identiche nelle build di debug. Questo semplifica la lettura delle tracce dello stack e l'impostazione di punti di interruzione nelle funzioni che altrimenti verrebbero ridotte insieme.

**Iterazioni ICF**\[**=**_iterations_] &#124; **NOICF**

Utilizzare_le iterazioni_ **ICF**\[**=**] per eseguire la riduzione COMDAT identica. I dati COMDAT ridondanti possono essere rimossi dall'output del linker. Il parametro *facoltativo iterazioni* consente di specificare il numero di volte in cui attraversare i simboli per i duplicati. Il numero predefinito di iterazioni è 1.The default number of iterations is 1. Attraverso iterazioni aggiuntive si potrebbero trovare più duplicati rivelati attraverso la riduzione nell'iterazione precedente.

Per impostazione predefinita, **/OPT:ICF** è abilitato dal linker, a meno che non venga specificato **/OPT:NOICF** o [/DEBUG.](debug-generate-debug-info.md) Per ignorare questa impostazione predefinita e impedire che i COMDAT vengano sottoposti a piegatura nel programma, specificare **/OPT:NOICF**.

In una build di debug, è necessario specificare in modo esplicito **/OPT:ICF** per abilitare la riduzione COMDAT. Tuttavia, poiché **/OPT:ICF** può unire funzioni o dati identici, è possibile modificare i nomi delle funzioni visualizzati nelle tracce dello stack. Può anche rendere impossibile impostare punti di interruzione in determinate funzioni o esaminare alcuni dati nel debugger e può prendere in funzioni impreviste quando si passo a passo attraverso il codice. Il comportamento del codice è identico, ma la presentazione del debugger può essere molto confusa. Pertanto, non è consigliabile utilizzare **/OPT:ICF** nelle build di debug a meno che i vantaggi del codice più piccolo non superino questi svantaggi.

> [!NOTE]
> Poiché **/OPT:ICF** può fare in modo che lo stesso indirizzo venga assegnato a funzioni diverse o a membri dati di sola lettura, ovvero variabili **const** quando vengono compilate utilizzando **/Gy**, può interrompere un programma che dipende da indirizzi univoci per funzioni o membri dati di sola lettura. Per altre informazioni, vedere [/Gy (Attiva collegamento a livello di funzione)](gy-enable-function-level-linking.md).

**LBR** &#124; **NOLBR**

Le opzioni **/OPT:LBR** e **/OPT:NOLBR** si applicano solo ai file binari ARM. Poiché alcune istruzioni di ramo del processore ARM hanno un intervallo limitato, se il linker rileva un salto a un indirizzo non compreso nell'intervallo, sostituisce l'indirizzo di destinazione dell'istruzione branch con l'indirizzo di un codice "isola" che contiene un'istruzione branch destinata alla destinazione effettiva. È possibile utilizzare **/OPT:LBR** per ottimizzare il rilevamento delle istruzioni di ramo lungo e il posizionamento delle isole di codice intermedio per ridurre al minimo le dimensioni complessive del codice. **/OPT:NOLBR** indica al linker di generare isole di codice per istruzioni di diramazione lunghe man mano che vengono rilevate, senza ottimizzazione.

Per impostazione predefinita, l'opzione **/OPT:LBR** è impostata quando il collegamento incrementale non è abilitato. Se si desidera un collegamento non incrementale ma non ottimizzazioni di diramazione lunghe, specificare **/OPT:NOLBR**. L'opzione **/OPT:LBR** disabilita il collegamento incrementale.

## <a name="remarks"></a>Osservazioni

Se utilizzato dalla riga di comando, il linker utilizza per impostazione predefinita **/OPT:REF,ICF,LBR**. Se si specifica **/DEBUG,** il valore predefinito è **/OPT:NOREF,NOICF,NOLBR**.

Le ottimizzazioni **/OPT** in genere riducono le dimensioni dell'immagine e aumentano la velocità del programma. Questi miglioramenti possono essere sostanziali nei programmi più grandi, motivo per cui sono abilitati per impostazione predefinita per le build di vendita al dettaglio.

L'ottimizzazione del linker richiede molto tempo in anticipo, ma il codice ottimizzato consente inoltre di risparmiare tempo quando il linker ha meno rilocazioni per risolvere il problema e crea un'immagine finale più piccola e consente di risparmiare ancora più tempo quando dispone di meno informazioni di debug per elaborare e scrivere nel file PDB. Quando l'ottimizzazione è abilitata, può comportare un tempo di collegamento più veloce nel complesso, poiché il piccolo costo aggiuntivo nell'analisi può essere più che compensato dal risparmio di tempo nel passaggio del linker su file binari più piccoli.

Gli argomenti **/OPT** possono essere specificati insieme, separati da virgole. Ad esempio, anziché **/OPT:REF /OPT:NOICF**, è possibile specificare **/OPT:REF,NOICF**.

È possibile utilizzare l'opzione del linker [/VERBOSE](verbose-print-progress-messages.md) per visualizzare le funzioni rimosse da **/OPT:REF** e le funzioni che vengono ripiegate da **/OPT:ICF**.

Gli argomenti **/OPT** vengono spesso impostati per i progetti creati utilizzando la finestra di dialogo **Nuovo progetto** nell'IDE di Visual Studio e in genere hanno valori diversi per le configurazioni di debug e rilascio. Se non è impostato alcun valore per queste opzioni del linker nel progetto, è possibile ottenere i valori predefiniti del progetto, che possono essere diversi dai valori predefiniti utilizzati dal linker nella riga di comando.

### <a name="to-set-the-opticf-or-optref-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:ICF o OPT:REF nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà**Ottimizzazione** **linker** >  **delle proprietà** > di configurazione.

1. Modificare una di queste proprietà:

   - **Abilita riduzione COMDAT**

   - **Riferimenti**

### <a name="to-set-the-optlbr-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker OPT:LBR nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà**Riga di comando** del**linker** >  **delle proprietà** > di configurazione.

1. Immettere l'opzione in **Opzioni aggiuntive**:

   `/opt:lbr` o `/opt:nolbr`

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableCOMDATFolding%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OptimizeReferences%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
