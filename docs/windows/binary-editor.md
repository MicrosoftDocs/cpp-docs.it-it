---
title: Editor binario (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.binary.F1
- vc.editors.binary
helpviewer_keywords:
- editors, Binary
- resources [C++], editing
- resource editors [C++], Binary editor
- Binary editor
- binary data, editing
- resources [C++], opening for binary editing
- binary data
- hexadecimal bytes in binary data
- strings [C++], searching for
- file searches [C++]
- binary data, finding
- ASCII characters, finding in binary data
- custom resources [C++]
- data resources [C++]
- resources [C++], creating
ms.assetid: 2483c48b-1252-4dbc-826b-82e6c1a0e9cb
ms.openlocfilehash: 06c4a224b745f5aba8c9105d32489f8ca3109e1c
ms.sourcegitcommit: b488462a6e035131121e6f32d8f3b108cc798b5e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/30/2019
ms.locfileid: "55293598"
---
# <a name="binary-editor-c"></a>Editor binario (C++)

> [!WARNING]
> Il **Editor binario** non è disponibile nelle edizioni Express.

L'editor binario consente di modificare qualsiasi risorsa a livello binario in formato esadecimale o ASCII. È anche possibile usare il [comando Trova](/visualstudio/ide/reference/find-command) per cercare le stringhe ASCII o i byte esadecimali. È consigliabile usare la **binario** editor solo quando è necessario visualizzare o apportare secondaria viene modificato per le risorse personalizzate o tipi di risorse non è supportati dall'ambiente di Visual Studio.

Per aprire la **Editor binario**, in primo luogo scegliere **File** > **nuovo** > **File** dal menu principale, selezionare il file che si desidera modificare, quindi fare clic sulla freccia accanto al **aperto** e scegliere **aperta con** > **Editor binario**.

> [!CAUTION]
> La modifica di risorse come le finestre di dialogo, le immagini o i menu nell'editor binario è rischiosa. Una modifica non corretta potrebbe danneggiare la risorsa, rendendola illeggibile nell'editor originale.

> [!TIP]
> Quando si usa la **binario** editor, in molti casi, è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il cursore. Ad esempio, se si fa clic mentre si punta al **binario** Mostra il menu di scelta rapida editor con i valori esadecimali selezionati, il **Taglia**, **copia**, e **Incolla**  comandi.

## <a name="binary-editor-how-to"></a>Procedure relative al Editor binario

Con il **binario** editor, vedere le azioni seguenti:

### <a name="to-open-a-resource-for-binary-editing"></a>Per aprire una risorsa per la modifica binaria

#### <a name="to-open-a-windows-desktop-resource"></a>Per aprire una risorsa desktop di Windows

1. In [Visualizzazione risorse](../windows/resource-view-window.md)selezionare il file di risorse che si vuole modificare.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri dati binari** dal menu di scelta rapida.

   > [!NOTE]
   > Se si usa la [visualizzazione di risorse](../windows/resource-view-window.md) finestra per aprire una risorsa con un formato che Visual Studio non riconosce la risorsa (ad esempio RCDATA o una risorsa personalizzata), viene aperto automaticamente nel **binario** editor.

#### <a name="to-open-a-managed-resource"></a>Per aprire una risorsa gestita

1. Nelle **Esplora soluzioni**, selezionare il file di risorse che si desidera modificare.

1. Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri con** dal menu di scelta rapida.

1. Nella finestra di dialogo **Apri con** scegliere **Editor binario**.

   > [!NOTE]
   > È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

![Binary Editor](../mfc/media/vcbinaryeditor2.gif "vcBinaryEditor2")<br/>
Dati binari per una finestra di dialogo visualizzata nell'editor binario

Nell'editor binario vengono rappresentati solo alcuni valori ASCII (da 0x20 a 0x7E). I caratteri estesi vengono visualizzati come punti nella sezione Valore ASCII dell'editor binario (riquadro a destra). I caratteri "stampabili" sono valori ASCII da 32 a 126.

> [!NOTE]
> Se si desidera utilizzare il **binario** editor su una risorsa già modificata in un'altra finestra dell'editor, chiudere l'altra finestra dell'editor prima di tutto.

### <a name="to-edit-a-resource-in-the-binary-editor"></a>Per modificare una risorsa nell'editor binario

1. Selezionare il byte di cui che si desidera modificare.

   Il **della scheda** chiave sposta lo stato attivo tra le sezioni esadecimale e ASCII del **binario** editor. È possibile usare la **PGSU** e **PGGIÙ** tasti per spostarsi tra la risorsa di una schermata alla volta.

1. Digitare il nuovo valore.

   Il valore viene modificato immediatamente in entrambe le sezioni esadecimale e ASCII e lo stato attivo passa al valore nella riga successivo.

   > [!NOTE]
   > Il **binario** editor accetta le modifiche automaticamente quando si chiude l'editor.

### <a name="to-find-binary-data"></a>Per trovare i dati binari

È possibile cercare le stringhe ASCII o byte esadecimali. Ad esempio, per trovare "Hello", è possibile cercare una stringa "Hello" o per "48 65 6C 6C 6F" (l'equivalente esadecimale).

1. Dal **Edit** menu, scegliere [trovare](/visualstudio/ide/reference/find-command).

1. Nel **Find What** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa scegliere o immettere i dati da trovare.

1. Selezionare una qualsiasi delle **trovare** opzioni.

1. Selezionare **Trova successivo**.

### <a name="to-create-a-new-custom-or-data-resource"></a>Per creare una nuova risorsa personalizzata o di dati

È possibile creare una nuova risorsa personalizzata o di dati inserendo tale risorsa in un file separato usando la sintassi dei file di script (RC) di risorsa normale, quindi includendo tale file facendo clic con il progetto in **Esplora soluzioni** e scegliendo  **Inclusioni risorsa** menu di scelta rapida.

1. [Creare un file RC](../windows/how-to-create-a-resource-script-file.md) che contenga la risorsa personalizzata o di dati.

   È possibile digitare dati personalizzati in un file RC sotto forma di stringhe con terminazione Null racchiuse tra virgolette o di numeri interi in formato decimale, esadecimale o ottale.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul file RC del progetto e scegliere **Inclusioni risorsa** nel menu di scelta rapida.

1. Nel **direttive in fase di compilazione** , digitare un `#include` istruzione che fornisce il nome del file contenente la risorsa personalizzata. Ad esempio:

    ```cpp
    #include mydata.rc
    ```

   Assicurarsi che le informazioni digitate siano corrette dal punto di vista sintattico e ortografico. Il contenuto della casella **Direttive in fase di compilazione** viene inserito nel file di script della risorsa esattamente nel modo in cui viene digitato.

1. Selezionare **OK** per registrare le modifiche.

Un altro metodo per creare una risorsa personalizzata consiste nell'importare un file esterno come risorsa personalizzata. Per altre informazioni, vedere [Importazione ed esportazione di risorse](../windows/how-to-import-and-export-resources.md).

> [!NOTE]
> Creazione di nuove risorse personalizzata o di dati richiede Win32.

## <a name="managed-resources"></a>Risorse gestite

È possibile usare la [editor di immagini](../windows/image-editor-for-icons.md) e il **binario** editor per lavorare con file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)