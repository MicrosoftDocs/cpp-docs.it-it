---
title: 'Procedura: Includere le risorse in fase di compilazione (C++)'
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
ms.openlocfilehash: ca24a10f905e61feb2b090ba3966c752db3d4444
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59041503"
---
# <a name="how-to-include-resources-at-compile-time-c"></a>Procedura: Includere le risorse in fase di compilazione (C++)

Per impostazione predefinita che tutte le risorse si trovano in un file di risorse (RC), tuttavia esistono molti motivi per inserire le risorse in un file diverso dal file RC principale:

- Per aggiungere commenti alle istruzioni di risorse che non vengono eliminate quando si salva il file RC.

- Per includere risorse già sviluppate e testate e non richiedono altre modifiche. Tutti i file inclusi, ma non hanno estensione RC non saranno modificati dagli editor di risorse.

- Per includere le risorse usate da progetti diversi o che fanno parte di un sistema di controllo della versione del codice sorgente. Queste risorse devono esistere in una posizione centrale in cui le modifiche influiranno su tutti i progetti.

- Per includere risorse (ad esempio, risorse RCDATA) che sono un formato personalizzato. Le risorse RCDATA hanno requisiti speciali in cui è possibile usare un'espressione come un valore per il `nameID` campo.

Se si dispone di sezioni nel file RC esistenti che soddisfano una di queste condizioni, inserire queste sezioni in uno o più file RC separati e includerli nel progetto usando il **Inclusioni risorsa** nella finestra di dialogo.

## <a name="resource-includes"></a>Inclusioni risorsa

È possibile aggiungere di risorse da altri file al progetto in fase di compilazione elencandoli nella **direttive in fase di compilazione** nella casella il **Inclusioni risorsa** nella finestra di dialogo. Usare la **Inclusioni risorsa** finestra di dialogo per modificare normale disposizione di lavoro tutte le risorse vengono archiviate nel file RC del progetto e tutte le dell'ambiente del progetto [simboli](../windows/symbols-resource-identifiers.md) in `Resource.h`.

Per iniziare, aprire il **Inclusioni risorsa** finestra di dialogo facendo clic su un file RC [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources), selezionare **Inclusioni risorsa** e prendere nota delle proprietà seguenti:

| Proprietà | Descrizione |
|---|---|
| **File di intestazione simboli** | Consente di modificare il nome del file di intestazione in cui sono archiviate le definizioni dei simboli per i file di risorse.<br/><br/>Per altre informazioni, vedere [modifica i nomi dei file di intestazione simboli](../windows/changing-the-names-of-symbol-header-files.md). |
| **Direttive per simboli di sola lettura** | Consente di includere file di intestazione contenenti simboli che non devono essere modificati.<br/><br/>Ad esempio, i file di simboli devono essere condivisi con altri progetti. Può anche includere file h di MFC. Per altre informazioni, vedere [simboli inclusi condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md). |
| **Direttive in fase di compilazione** | Consente di includere i file di risorse che vengono creati e modificati separatamente dalle risorse nel file di risorse principale, contengono direttive in fase di compilazione (ad esempio, le direttive che includono in modo condizionale risorse) o contenere le risorse in un formato personalizzato.<br/><br/>È anche possibile usare la **casella direttive in fase di compilazione** per includere i file di risorse MFC standard. |

> [!NOTE]
> Visualizzazione delle voci in queste caselle di testo nel file RC contrassegnato da `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, e `TEXTINCLUDE 3` rispettivamente. Per altre informazioni, vedere [TN035: Uso di più file di risorse e i file di intestazione Visual c++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).

Una volta che vengono apportate modifiche al file di risorse usando il **Inclusioni risorsa** finestra di dialogo, è necessario chiudere e riaprire il *RC* file rendere effettive le modifiche.

### <a name="to-include-resources-in-your-project-at-compile-time"></a>Per includere risorse nel progetto in fase di compilazione

1. Inserire le risorse in un file script di risorsa con un nome file univoco. Non usare *projectname.rc*, poiché si tratta del nome del file utilizzato per il file di script di risorsa principale.

1. Fare doppio clic sui *RC* del file in [Resource View](how-to-create-a-resource-script-file.md#create-resources) e selezionare **Inclusioni risorsa**.

1. Nel **direttive in fase di compilazione** , aggiungere il [#include](../preprocessor/hash-include-directive-c-cpp.md) direttiva del compilatore di includere il nuovo file di risorse nel file di risorse principale nell'ambiente di sviluppo.

Le risorse nei file incluse in questo modo vengono apportate solo parte del file eseguibile in fase di compilazione e non sono disponibili per la modifica quando si lavora sul file RC principale del progetto. È necessario aprire separatamente i file RC inclusi e qualsiasi file incluso senza l'estensione RC non sono modificabile dall'editor di risorse.

### <a name="to-specify-include-directories-for-a-specific-resource-rc-file"></a>Per specificare directory di inclusione per un file di risorse (RC)

1. Fare doppio clic il *RC* del file in **Esplora soluzioni** e selezionare **proprietà**.

1. Selezionare il **le risorse** nodo nel riquadro sinistro e specificare qualsiasi altro nella directory di inclusione il **directory di inclusione aggiuntive** proprietà.

### <a name="to-find-symbols-in-resources"></a>Per trovare i simboli nelle risorse

1. Passare al menu di scelta **Edit** > [Trova simbolo](/visualstudio/ide/go-to).

   > [!TIP]
   > Per usare [le espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) nella ricerca, selezionare [Cerca nei file](/visualstudio/ide/reference/find-command) nel **modifica** menu anziché **Trova simbolo**. Selezionare il **usare: Le espressioni regolari** casella di controllo nel [finestra di dialogo Find](/visualstudio/ide/finding-and-replacing-text) e nel **Find What** finestra è possibile scegliere un'espressione regolare ricerca nell'elenco a discesa. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **Find What** casella.

1. Nel **Find What** , selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare il tasto di voler calcolare, ad esempio, `ID_ACCEL1`.

1. Selezionare una qualsiasi delle **trovare** opzioni e scegliere **Trova successivo**.

> [!NOTE]
> Non è possibile cercare simboli in risorse di stringa, tasti di scelta rapida o binarie.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Procedura: Creare le risorse](../windows/how-to-create-a-resource-script-file.md)<br/>
[Procedura: Gestire le risorse](../windows/how-to-copy-resources.md)<br/>