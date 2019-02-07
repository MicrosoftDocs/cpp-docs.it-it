---
title: 'Procedura: Creare un File di Script di risorsa (C++)'
ms.date: 11/04/2016
f1_keywords:
- vc.editors.resource
helpviewer_keywords:
- rc files [C++], creating
- .rc files [C++], creating
- resource script files [C++], creating
- resources [C++], viewing
- rc files [C++], viewing resources
- .rc files [C++], viewing resources
- resource script files [C++], viewing resources
- resource script files [C++], opening in text format
- .rc files [C++], opening in text format
- rc files [C++], opening in text format
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
ms.openlocfilehash: f3f0adff256742c98a672e40e6b31de9bd7a84ed
ms.sourcegitcommit: bd637e9c39650cfd530520ea978a22fa4caa0e42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/07/2019
ms.locfileid: "55849958"
---
# <a name="how-to-create-a-resource-script-file-c"></a>Procedura: Creare un File di Script di risorsa (C++)

> [!NOTE]
> Il **Editor di risorse** non è disponibile nelle edizioni Express.
>
> Questo materiale si riferisce alle applicazioni desktop di Windows. I progetti in linguaggi .NET non usano file di script della risorsa. Per altre informazioni, vedere [file di risorse](../windows/resource-files-visual-studio.md), per altre informazioni.

## <a name="to-create-a-new-resource-script-rc-file"></a>Per creare un nuovo file script di risorsa (RC)

1. Spostare lo stato attivo nella cartella del progetto esistente in **Esplora soluzioni**, ad esempio, `MyProject`.

   > [!NOTE]
   > Non confondere la cartella del progetto con la cartella della soluzione in **Esplora soluzioni**. Se si seleziona il **soluzione** cartella, le scelte effettuate nel **Aggiungi nuovo elemento** (nel passaggio 3) finestra di dialogo sarà diverso.

1. Scegliere **Aggiungi nuovo elemento** dal menu **Progetto**.

1. Nel **Aggiungi nuovo elemento** finestra di dialogo, seleziona la **Visual C++** cartella, quindi scegliere **File di risorse (RC)** nel riquadro di destra.

1. Specificare un nome per il file di script di risorsa nella **Name** testo casella e quindi scegliere **Open**.

A questo punto è possibile [creare](../windows/how-to-create-a-resource.md) e aggiungere nuove risorse al file RC.

> [!NOTE]
> Si può aggiungere uno script di risorsa (file RC) solo a un progetto esistente caricato nell'IDE di Visual Studio. Non è possibile creare un file RC autonomo, esterno al progetto. È possibile creare[modelli di risorse](../windows/how-to-use-resource-templates.md) (file con estensione rct) in qualsiasi momento.

## <a name="to-open-a-resource-script-file-outside-of-a-c-project-standalone"></a>Per aprire un file di script di risorsa all'esterno di un progetto C++ (autonomo)

È possibile visualizzare le risorse in un file RC anche se non è aperto alcun progetto. Il file con estensione RC verrà aperto in una finestra del documento anziché nella [visualizzazione risorse](../windows/resource-view-window.md) finestra (come avviene quando il file è aperto all'interno di un progetto).

> [!NOTE]
> Questa distinzione è importante poiché alcuni comandi sono disponibili solo quando il file viene aperto in modo autonomo, all'esterno di un progetto. Ad esempio, è possibile solo salvare un file in un formato diverso o con un nome diverso quando il file viene aperto all'esterno di un progetto (il **Salva con nome** comando non è disponibile quando un file viene aperto all'interno di un progetto).

### <a name="to-open-an-rc-file-outside-a-project"></a>Per aprire un file RC all'esterno di un progetto

1. Dal **File** menu, scegliere **Open**, quindi selezionare **File**.

1. Nel **Apri File** finestra di dialogo passare al file di script di risorse si vuole visualizzare, evidenziare il file e selezionare **Open**.

   > [!NOTE]
   > Se si apre innanzitutto il progetto (**File**, **aprire**, **progetto**), alcuni comandi non saranno disponibili all'utente. Aprire un file "in modo autonomo" significa aprirlo senza caricare il progetto.

### <a name="to-open-multiple-rc-files-outside-a-project"></a>Per aprire più file RC all'esterno di un progetto

1. Aprire entrambi i file di risorsa in modo autonomo. Ad esempio, aprire `Source1.rc` e `Source2.rc`.

   1. Dal **File** menu, scegliere **Open**, quindi selezionare **File**.

   1. Nel **Apri File** finestra di dialogo passare per il primo file di script di risorsa che si desidera aprire (`Source1.rc`), evidenziare il file e scegliere **aprire**.

   1. Ripetere il passaggio precedente per aprire il secondo file RC (`Source2.rc`).

       I file RC verranno quindi aperti in finestre del documento separate.

1. Quando entrambi i file RC sono aperti, affiancare le finestra in modo da visualizzarle contemporaneamente:

   - Dal **finestra** menu, scegliere **nuovo gruppo di schede orizzontali** oppure **nuovo gruppo di schede verticali**.

       \- oppure -

   - Fare doppio clic su uno dei file con estensione RC e scegliere **nuovo gruppo di schede orizzontali** oppure **gruppo di schede verticali** dal menu di scelta rapida.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

## <a name="to-open-a-resource-script-file-in-text-format"></a>Per aprire un file di script di risorsa in formato testo

Talvolta può essere utile visualizzare il contenuto del file di script di risorsa (RC) del progetto senza aprire una risorsa, quale una finestra di dialogo, all'interno dell'editor di risorse specifico. È ad esempio possibile che si desideri cercare una stringa in tutte le finestre di dialogo del file di risorse senza che sia necessario aprire separatamente ogni finestra.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

È possibile aprire il file di risorse con facilità in formato testo per visualizzare tutte le risorse in che esso contenute e completare le operazioni globali supportate dall'editor di testo.

> [!NOTE]
> Editor di risorse non leggono direttamente RC o `resource.h` file. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [tra cui le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).

### <a name="to-open-a-resource-script-file-as-text"></a>Per aprire un file script di risorsa in formato testo

1. Dal **File** dal menu **Open**, quindi scegliere **File**.

1. Nel **Apri File** finestra di dialogo passare al file di script di risorse che si desidera visualizzare in formato testo.

1. Evidenziare il file, quindi selezionare la freccia a discesa nel **aperto** pulsante (che si trova a destra del pulsante).

1. Scegli **aperta con** dal menu di riepilogo a discesa.

1. Nel **Apri con** finestra di dialogo **Editor di codice sorgente (testo)**.

1. Dal **aperto come** elenco a discesa, seleziona **testo**.

   La risorsa viene aperta nel **codice sorgente** editor.

\- oppure -

1. Nelle **Esplora soluzioni**, fare clic sul file RC.

1. Dal menu di scelta rapida, scegliere **Apri con...** , quindi selezionare **Editor di codice sorgente (testo)**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)