---
title: Editor binario (C++)
ms.date: 02/14/2019
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
ms.openlocfilehash: 420c5ecf44f8e8b264d9eafd93de58c0db3bedf4
ms.sourcegitcommit: e06648107065f3dea35f40c1ae5999391087b80b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/01/2019
ms.locfileid: "57210718"
---
# <a name="binary-editor-c"></a>Editor binario (C++)

> [!CAUTION]
> Modifica di risorse, ad esempio le finestre di dialogo, immagini o i menu nella **Editor binario** è pericoloso. Una modifica non corretta potrebbe danneggiare la risorsa, rendendola illeggibile nell'editor originale.

Il **Editor binario** consente di modificare qualsiasi risorsa a livello binario in formato esadecimale o ASCII. È anche possibile usare il [comando Trova](/visualstudio/ide/reference/find-command) per cercare le stringhe ASCII o i byte esadecimali. Usare la **Editor binario** solo quando è necessario visualizzare o apportare secondaria viene modificato per le risorse personalizzate o tipi di risorse non è supportati dall'ambiente di Visual Studio.

Per aprire la **Editor binario** per i nuovi file, passare al menu **File** > **nuovo** > **File**, selezionare il tipo di file che si desidera modificare, quindi selezionare la freccia accanto al **aperto** e scegliere **aperta con** > **Editor binario**.

Per aprire la **Editor binario** in un file esistente, passare al menu **File** > **aprire** > **File**, selezionare il file che si desidera modificare, quindi selezionare la freccia accanto al **aperto** e scegliere **aperta con** > **Editor binario**.

   ![Binary Editor](../mfc/media/vcbinaryeditor2.gif "vcBinaryEditor2")<br/>
   Dati binari per una finestra di dialogo visualizzata nel **Editor binario**

Solo determinati valori ASCII sono rappresentati nel **Editor binario** (da 0x20 a 0x7E). I caratteri estesi vengono visualizzati come punti nella sezione valore ASCII pannello destro del **Editor binario**. I caratteri stampabili sono valori ASCII da 32 a 126.

> [!TIP]
> Quando si usa la **Editor binario**, in molti casi è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il cursore. Ad esempio, se si fa clic mentre si punta al **Editor binario** con i valori esadecimali selezionati, nel menu di scelta rapida vengono visualizzati i **Taglia**, **copia**, e **Incolla**  comandi.

Il **Editor binario** non è disponibile nelle edizioni Express.

## <a name="how-to"></a>Procedure

Il **Editor binario** consente di:

### <a name="to-open-a-windows-desktop-resource-for-binary-editing"></a>Per aprire una risorsa desktop di Windows per la modifica binaria

1. In [Visualizzazione risorse](../windows/resource-view-window.md)selezionare il file di risorse che si vuole modificare.

1. La risorsa destro e selezionare **Apri dati binari**.

> [!NOTE]
> Se si usa la [visualizzazione di risorse](../windows/resource-view-window.md) finestra per aprire una risorsa in un formato che Visual Studio non riconosce, ad esempio RCDATA o una risorsa personalizzata, la risorsa viene aperto automaticamente nel **Editor binario**.

### <a name="to-open-a-managed-resource-for-binary-editing"></a>Per aprire una risorsa gestita per la modifica binaria

1. Nelle **Esplora soluzioni**, selezionare il file di risorse che si desidera modificare.

1. La risorsa destro e selezionare **aperta con**.

1. Nella finestra di dialogo **Apri con** scegliere **Editor binario**.

> [!NOTE]
> È possibile usare la [Editor di immagini](../windows/image-editor-for-icons.md) e il **Editor binario** per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

### <a name="to-edit-a-resource"></a>Per modificare una risorsa

> [!NOTE]
> Se si desidera utilizzare il **Editor binario** su una risorsa già modificata in un'altra finestra dell'editor, chiudere l'altra finestra dell'editor prima di tutto.

1. Selezionare il byte di cui che si desidera modificare.

   Il **della scheda** chiave sposta lo stato attivo tra le sezioni esadecimale e ASCII delle **Editor binario**. È possibile usare la **PGSU** e **PGGIÙ** tasti per spostarsi tra la risorsa di una schermata alla volta.

1. Digitare il nuovo valore.

   Il valore viene modificato immediatamente in entrambe le sezioni esadecimale e ASCII e lo stato attivo passa al valore nella riga successivo.

> [!NOTE]
> Il **Editor binario** accetta le modifiche automaticamente quando si chiude l'editor.

### <a name="to-find-binary-data"></a>Per trovare i dati binari

È possibile cercare le stringhe ASCII o byte esadecimali. Ad esempio, per trovare *Hello*, è possibile cercare la stringa *Hello* o il relativo valore esadecimale, *48 65 6C 6C 6F*.

1. Dal **Edit** menu, scegliere [trovare](/visualstudio/ide/reference/find-command).

1. Nel **Find What** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa scegliere o immettere i dati da trovare.

1. Selezionare una qualsiasi delle **trovare** opzioni e scegliere **Trova successivo**.

### <a name="to-create-a-new-custom-or-data-resource"></a>Per creare una nuova risorsa personalizzata o di dati

È possibile creare una nuova risorsa personalizzata o di dati inserendo tale risorsa in un file separato usando la sintassi dei file di script (RC) di risorsa normale, quindi includendo tale file facendo clic con il progetto in **Esplora soluzioni** e selezionando  **Inclusioni risorsa**.

1. [Creare un file RC](../windows/how-to-create-a-resource-script-file.md) che contenga la risorsa personalizzata o di dati.

   È possibile digitare dati personalizzati in un file RC sotto forma di stringhe con terminazione Null racchiuse tra virgolette o di numeri interi in formato decimale, esadecimale o ottale.

1. Nelle **Esplora soluzioni**, fare clic sul file RC del progetto e selezionare **Inclusioni risorsa**.

1. Nel **direttive in fase di compilazione** , digitare un `#include` istruzione che fornisce il nome del file contenente la risorsa personalizzata, ad esempio:

    ```cpp
    #include mydata.rc
    ```

   Assicurarsi che le informazioni digitate siano corrette dal punto di vista sintattico e ortografico. Il contenuto del **direttive in fase di compilazione** casella vengono inseriti nel file di script della risorsa esattamente come vengono digitati.

1. Selezionare **OK** per registrare le modifiche.

È possibile creare una risorsa personalizzata per importare un file esterno come risorsa personalizzata, vedere [come: Gestire le risorse](../windows/how-to-import-and-export-resources.md).

> [!NOTE]
> Creazione di nuove risorse personalizzata o di dati richiede Win32.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)