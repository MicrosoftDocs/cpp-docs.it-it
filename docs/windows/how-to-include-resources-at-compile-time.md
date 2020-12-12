---
description: 'Altre informazioni su: procedura: includere risorse in fase di compilazione (C++)'
title: 'Procedura: includere risorse in fase di compilazione (C++)'
ms.date: 02/14/2019
f1_keywords:
- vs.resvw.resource.including
- vc.resvw.resource.including
- vc.editors.resourceincludes
helpviewer_keywords:
- comments [C++], compiled files
- resources [C++], including at compile time
- projects [C++], including resources
- '#include directive'
- include directive (#include)
- Resource Includes dialog box [C++]
- rc files [C++], changing storage
- symbol header files [C++], changing
- .rc files [C++], changing storage
- symbol header files [C++], read-only
- symbols [C++], symbol header files
- directories [C++], specifying include paths for resources
- include files [C++], specifying for resources
- resources [C++], including in projects
- symbols [C++], finding
- resources [C++], searching for symbols
ms.assetid: 357e93c2-0a29-42f9-806f-882f688b8924
ms.openlocfilehash: 18c391351c3a97a8adbbd79691f9c0e3ec07abae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329347"
---
# <a name="how-to-include-resources-at-compile-time-c"></a>Procedura: includere risorse in fase di compilazione (C++)

Per impostazione predefinita, tutte le risorse si trovano in un file di script di risorsa (RC), tuttavia esistono diversi motivi per inserire le risorse in un file diverso dal file RC principale:

- Per aggiungere commenti alle istruzioni delle risorse che non verranno eliminate quando si salva il file RC.

- Per includere le risorse che sono già state sviluppate e testate e non sono necessarie altre modifiche. Eventuali file inclusi, ma che non hanno un'estensione RC, non saranno modificabili dagli editor di risorse.

- Per includere le risorse utilizzate da progetti diversi o che fanno parte di un sistema di controllo della versione del codice sorgente. Queste risorse devono esistere in una posizione centrale in cui le modifiche avranno effetto su tutti i progetti.

- Per includere le risorse, ad esempio le risorse RCDATA, che sono un formato personalizzato. Le risorse di RCDATA presentano requisiti speciali in cui non è possibile usare un'espressione come valore per il `nameID` campo.

Se sono presenti sezioni nei file RC esistenti che soddisfano una di queste condizioni, inserire queste sezioni in uno o più file RC distinti e includerli nel progetto usando la finestra di dialogo **Inclusioni risorsa** .

## <a name="resource-includes"></a>Inclusioni risorsa

È possibile aggiungere risorse da altri file al progetto in fase di compilazione visualizzandoli nella casella **direttive in fase di compilazione** della finestra di dialogo **Inclusioni risorsa** . Utilizzare la finestra di dialogo **Inclusioni risorsa** per modificare la normale disposizione operativa dell'ambiente di progetto per archiviare tutte le risorse nel file Project. RC e tutti i [simboli](../windows/symbols-resource-identifiers.md) in `Resource.h` .

Per iniziare, aprire la finestra di dialogo **Inclusioni risorsa** facendo clic con il pulsante destro del mouse su un file rc in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources), scegliere **Includi risorse** e prendere nota delle proprietà seguenti:

| Proprietà | Descrizione |
|---|---|
| **File di intestazione simboli** | Consente di modificare il nome del file di intestazione in cui vengono archiviate le definizioni dei simboli per i file di risorse.<br/><br/>Per ulteriori informazioni, vedere [modifica dei nomi dei file di intestazione dei simboli](./changing-a-symbol-or-symbol-name-id.md). |
| **Direttive per simboli di sola lettura** | Consente di includere i file di intestazione che contengono simboli che non devono essere modificati.<br/><br/>Ad esempio, i file di simboli da condividere con altri progetti. Può inoltre includere i file con estensione h MFC. Per ulteriori informazioni, vedere [inclusione di simboli condivisi (di sola lettura) o calcolati](./changing-a-symbol-or-symbol-name-id.md). |
| **Direttive in fase di compilazione** | Consente di includere i file di risorse creati e modificati separatamente dalle risorse nel file di risorse principale, che contengono direttive in fase di compilazione, ad esempio le direttive che includono le risorse in modo condizionale, o che contengono risorse in un formato personalizzato.<br/><br/>È anche possibile usare la **casella direttive in fase di compilazione** per includere file di risorse MFC standard. |

> [!NOTE]
> Le voci in queste caselle di testo vengono visualizzate nel file RC contrassegnato `TEXTINCLUDE 1` rispettivamente da, `TEXTINCLUDE 2` e `TEXTINCLUDE 3` . Per ulteriori informazioni, vedere [TN035: utilizzo di più file di risorse e file di intestazione con Visual C++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).

Dopo aver apportato modifiche al file di risorse usando la finestra di dialogo **Inclusioni risorsa** , è necessario chiudere e riaprire il file *RC* per rendere effettive le modifiche.

### <a name="to-include-resources-in-your-project-at-compile-time"></a>Per includere risorse nel progetto in fase di compilazione

1. Inserire le risorse in un file script di risorsa con un nome file univoco. Non usare *NomeProgetto. RC* perché è il nome del file usato per il file di script di risorsa principale.

1. Fare clic con il pulsante destro del mouse sul file *RC* in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources) e scegliere **Includi risorse**.

1. Nella casella **direttive in fase di compilazione** aggiungere la direttiva del compilatore [#include](../preprocessor/hash-include-directive-c-cpp.md) per includere il nuovo file di risorse nel file di risorse principale nell'ambiente di sviluppo.

Le risorse nei file inclusi in questo modo vengono rese solo parte del file eseguibile in fase di compilazione e non sono disponibili per la modifica o la modifica quando si lavora sul file RC principale del progetto. I file RC inclusi devono essere aperti separatamente e tutti i file inclusi senza l'estensione RC non saranno modificabili dagli editor di risorse.

### <a name="to-specify-include-directories-for-a-specific-resource-rc-file"></a>Per specificare le directory di inclusione per un file di risorse (RC) specifico

1. Fare clic con il pulsante destro del mouse sul file *RC* in **Esplora soluzioni** e scegliere **proprietà**.

1. Selezionare il nodo **risorse** nel riquadro a sinistra e specificare eventuali directory di inclusione aggiuntive nella proprietà **directory di inclusione aggiuntive** .

### <a name="to-find-symbols-in-resources"></a>Per trovare i simboli nelle risorse

1. Vai a menu **modifica**  >  [Trova simbolo](/visualstudio/ide/go-to).

   > [!TIP]
   > Per usare le [espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) nella ricerca, selezionare [Cerca nei file](/visualstudio/ide/reference/find-command) nel menu **modifica** anziché **Trova simbolo**. Selezionare la casella di controllo **USA: espressioni regolari** nella finestra di [dialogo Trova](/visualstudio/ide/finding-and-replacing-text) e nella casella **trova** è possibile scegliere un'espressione di ricerca regolare dall'elenco a discesa. Quando si seleziona un'espressione da questo elenco, viene sostituito come testo di ricerca nella casella **trova** .

1. Nella casella **trova** selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare il tasto di scelta rapida che si desidera trovare, ad esempio `ID_ACCEL1` .

1. Selezionare una delle opzioni **trova** e scegliere **Trova successivo**.

> [!NOTE]
> Non è possibile cercare simboli in risorse di stringa, tasti di scelta rapida o binarie.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedi anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Procedura: creare risorse](../windows/how-to-create-a-resource-script-file.md)<br/>
[Procedura: gestire le risorse](../windows/how-to-copy-resources.md)<br/>
