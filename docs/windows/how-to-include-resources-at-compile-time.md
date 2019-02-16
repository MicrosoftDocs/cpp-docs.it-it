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
ms.openlocfilehash: 06ad2f90e7e72492f1e6ca4000a6c101fc36b205
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320666"
---
# <a name="how-to-include-resources-at-compile-time-c"></a>Procedura: Includere le risorse in fase di compilazione (C++)

In genere è facile e comodo usare la disposizione predefinita di tutte le risorse in un file di script (RC) di risorsa. Tuttavia, esistono diversi motivi per cui inserire le risorse in un file diverso dal file RC principale:

- Per aggiungere commenti alle istruzioni di risorse che non vengono eliminate quando si salva il file RC.

   Editor di risorse non leggono direttamente RC o `resource.h` file. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non ottiene sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e `resource.h` file). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto.

- Per includere risorse già sviluppate e testate e non richiedono altre modifiche. (Tutti i file inclusi, ma non hanno estensione RC non saranno modificati dagli editor di risorse).

- Per includere le risorse usate da progetti diversi o che fanno parte di un sistema di controllo della versione del codice sorgente e pertanto deve essere presente in una posizione centrale in cui le modifiche influiranno su tutti i progetti.

- Per includere risorse (ad esempio, risorse RCDATA) che sono in un formato personalizzato. Le risorse RCDATA possono avere requisiti speciali. Ad esempio, è possibile utilizzare un'espressione come valore per il campo nameID. Per altre informazioni, vedere la documentazione di Windows SDK.

## <a name="resource-includes"></a>Inclusioni risorsa

È possibile aggiungere di risorse in altri file al progetto corrente in fase di compilazione elencandoli nella **direttive in fase di compilazione** nella casella il **Inclusioni risorsa** nella finestra di dialogo.

Se si dispone di sezioni nel file RC esistenti che soddisfano una di queste condizioni, è necessario inserire le sezioni in uno o più file RC separati e includerli nel progetto usando il **Inclusioni risorsa** nella finestra di dialogo. Il *Projectname*file RC2 creato nella sottodirectory \res di un nuovo progetto viene usato per questo scopo.

È possibile usare la **Inclusioni risorsa** finestra di dialogo in un progetto C++ per modificare la disposizione dell'ambiente normale utilizzo di tutte le risorse vengono archiviate nel file RC del progetto e tutte le [simboli](../windows/symbols-resource-identifiers.md) in Resource. h.

Per aprire la **Inclusioni risorsa** file nella finestra di dialogo scelta un' RC [visualizzazione risorse](../windows/resource-view-window.md), quindi scegliere **Inclusioni risorsa** dal menu di scelta rapida. Vedere le proprietà seguenti:

|Proprietà|Descrizione|
|--|----|
|**File di intestazione simboli**|Consente di modificare il nome del file di intestazione in cui vengono archiviate le definizioni dei simboli per il file di risorse. Per altre informazioni, vedere [modifica i nomi dei file di intestazione simboli](../windows/changing-the-names-of-symbol-header-files.md).|
|**Direttive per simboli di sola lettura**|Consente di includere file di intestazione contenenti simboli che non devono essere modificati durante una sessione di modifica. È, ad esempio, possibile includere un file di simboli condiviso da più progetti. È anche possibile includere file H di MFC. Per altre informazioni, vedere [simboli inclusi condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).|
|**Direttive in fase di compilazione**|Consente di includere i file di risorse che vengono creati e modificati separatamente dalle risorse nel file di risorse principale, contengono direttive in fase di compilazione (ad esempio, le direttive che includono in modo condizionale risorse) o contenere le risorse in un formato personalizzato. È anche possibile usare la **casella direttive in fase di compilazione** per includere i file di risorse MFC standard.|

> [!NOTE]
> Visualizzazione delle voci in queste caselle di testo nel file RC contrassegnato da `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, e `TEXTINCLUDE 3` rispettivamente. Per altre informazioni, vedere [TN035: Uso di più file di risorse e i file di intestazione Visual c++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).

Dopo aver apportato le modifiche apportate al file di risorse usando il **Inclusioni risorsa** finestra di dialogo, è necessario chiudere il file con estensione RC e quindi riaprirlo rendere effettive le modifiche.

### <a name="to-include-resources-in-your-project-at-compile-time"></a>Per includere risorse nel progetto in fase di compilazione

1. Inserire le risorse in un file script di risorsa con un nome file univoco. Non usare *projectname*. rc, poiché questo nome è il nome del file utilizzato per il file di script di risorse principale.

1. Fare clic sul file RC (in [visualizzazione di risorse](../windows/resource-view-window.md)) e scegliere **Inclusioni risorsa** dal menu di scelta rapida.

1. Nel **direttive in fase di compilazione** , aggiungere il [#include](../preprocessor/hash-include-directive-c-cpp.md) direttiva del compilatore di includere il nuovo file di risorse nel file di risorse principale nell'ambiente di sviluppo.

   Le risorse nei file incluse in questo modo diventano parte del file eseguibile in fase di compilazione. Non sono direttamente disponibili per la modifica quando si lavora sul file RC principale del progetto. Aprire i file RC inclusi separatamente. Tutti i file inclusi, ma non hanno estensione RC non saranno modificati dagli editor di risorse.

### <a name="to-specify-include-directories-for-a-specific-resource-rc-file"></a>Per specificare directory di inclusione per una risorsa specifica (file con estensione RC)

1. Fare clic sul file RC in Esplora soluzioni e selezionare **proprietà** dal menu di scelta rapida.

1. Selezionare il **le risorse** nodo nel riquadro sinistro e specificare qualsiasi altro nella directory di inclusione il **directory di inclusione aggiuntive** proprietà.

### <a name="to-find-symbols-in-resources"></a>Per trovare i simboli nelle risorse

1. Dal **Edit** menu, scegliere [Trova simbolo](/visualstudio/ide/go-to).

1. Nel **Find What** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare il tasto di scelta rapida si desidera trovare (ad esempio, `ID_ACCEL1`).

   > [!TIP]
   > Da utilizzare [le espressioni regolari](/visualstudio/ide/using-regular-expressions-in-visual-studio) per la ricerca, è necessario utilizzare il [comando Cerca nei file](/visualstudio/ide/reference/find-command) dal **modifica** menu anziché il **Trova simbolo**comando. Per abilitare le espressioni regolari, è necessario disporre di **usare: Le espressioni regolari** selezionata nella casella di controllo la [finestra di dialogo Find](/visualstudio/ide/finding-and-replacing-text). È quindi possibile selezionare il pulsante freccia destra a destra del **Find What** casella per visualizzare un elenco di espressioni regolari di ricerca. Quando si seleziona un'espressione da questo elenco, viene sostituita come testo di ricerca nella **Find What** casella.

1. Selezionare una qualsiasi delle **trovare** opzioni e scegliere **Trova successivo**.

> [!NOTE]
> Non è possibile cercare simboli in risorse di stringa, tasti di scelta rapida o binarie.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Creare le risorse](../windows/how-to-create-a-resource-script-file.md)<br/>
[Gestire le risorse](../windows/how-to-copy-resources.md)<br/>