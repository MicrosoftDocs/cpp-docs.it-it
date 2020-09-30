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
ms.openlocfilehash: 078d702232cde49a4666551a8d9fcbb320173450
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91503536"
---
# <a name="binary-editor-c"></a>Editor binario (C++)

> [!CAUTION]
> La modifica di risorse come le finestre di dialogo, le immagini o i menu nell' **editor binario** è pericolosa. Una modifica non corretta potrebbe danneggiare la risorsa, rendendola illeggibile nell'editor originale.

L' **editor binario** consente di modificare qualsiasi risorsa a livello binario in formato esadecimale o ASCII. È anche possibile usare il [comando Trova](/visualstudio/ide/reference/find-command) per cercare le stringhe ASCII o i byte esadecimali. Usare l' **editor binario** solo quando è necessario visualizzare o apportare modifiche minime alle risorse personalizzate o ai tipi di risorsa non supportati dall'ambiente di Visual Studio. L' **editor binario** non è disponibile nelle edizioni Express.

- Per aprire l' **editor binario** in un nuovo file, passare a menu **file**  >  **nuovo**  >  **file**, selezionare il tipo di file da modificare, quindi selezionare la freccia accanto al pulsante **Apri** e scegliere **Apri con**  >  **editor binario**.

- Per aprire l' **editor binario** in un file esistente, passare a menu **file**  >  **Apri**  >  **file**, selezionare il file che si desidera modificare, quindi selezionare la freccia accanto al pulsante **Apri** e scegliere **Apri con**  >  **editor binario**.

   ![Editor binario](../mfc/media/vcbinaryeditor2.gif "vcBinaryEditor2")<br/>
   Dati binari per una finestra di dialogo visualizzata nell' **editor binario**

Nell' **editor binario** vengono rappresentati solo alcuni valori ASCII (0x20 tramite 0x7E). I caratteri estesi vengono visualizzati come punti nella sezione valore ASCII del riquadro destro dell' **editor binario**. I caratteri stampabili sono valori ASCII compresi tra 32 e 126.

> [!TIP]
> Quando si usa l' **editor binario**, in molti casi è possibile fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. I comandi disponibili dipendono dalla destinazione a cui fa riferimento il cursore. Se ad esempio si fa clic con il pulsante destro del mouse mentre si punta all' **editor binario** con i valori esadecimali selezionati, il menu di scelta rapida Mostra i comandi **taglia**, **copia**e **Incolla** .

## <a name="how-to"></a>Procedure

L' **editor binario** consente di:

### <a name="to-open-a-windows-desktop-resource-for-binary-editing"></a>Per aprire una risorsa desktop di Windows per la modifica binaria

1. In [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)selezionare il file di risorse che si vuole modificare.

1. Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri dati binari**.

> [!NOTE]
> Se si usa la finestra **visualizzazione risorse** per aprire una risorsa con un formato non riconosciuto da Visual Studio, ad esempio RCDATA o una risorsa personalizzata, la risorsa viene aperta automaticamente nell' **editor binario**.

### <a name="to-open-a-managed-resource-for-binary-editing"></a>Per aprire una risorsa gestita per la modifica binaria

1. In **Esplora soluzioni**selezionare il file di risorse specifico che si desidera modificare.

1. Fare clic con il pulsante destro del mouse sulla risorsa e scegliere **Apri con**.

1. Nella finestra di dialogo **Apri con** scegliere **Editor binario**.

> [!NOTE]
> È possibile usare l' [editor di immagini](image-editor-for-icons.md) e l' **editor binario** per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

### <a name="to-edit-a-resource"></a>Per modificare una risorsa

Se si vuole usare l' **editor binario** su una risorsa già modificata in un'altra finestra dell'editor, chiudere prima l'altra finestra dell'editor.

1. Selezionare il byte che si desidera modificare.

   Il tasto **Tab** sposta lo stato attivo tra le sezioni esadecimali e ASCII dell' **editor binario**. È possibile utilizzare i tasti **PGSU** e **PGGIÙ** per spostarsi tra le risorse una schermata alla volta.

1. Digitare il nuovo valore.

   Il valore viene modificato immediatamente nelle sezioni esadecimali e ASCII e lo stato attivo passa al valore successivo nella riga.

> [!NOTE]
> L' **editor binario** accetta automaticamente le modifiche quando si chiude l'editor.

### <a name="to-find-binary-data"></a>Per trovare i dati binari

È possibile cercare stringhe ASCII o byte esadecimali. Ad esempio, per trovare *Hello*, è possibile cercare la stringa *Hello* o il relativo valore esadecimale, *48 65 6C 6C 6F*.

1. Passare a menu **modifica**  >  [trova](/visualstudio/ide/reference/find-command).

1. Nella casella **trova** selezionare una stringa di ricerca precedente dall'elenco a discesa o digitare i dati che si desidera trovare.

1. Selezionare una delle opzioni **trova** e scegliere **Trova successivo**.

### <a name="to-create-a-new-custom-or-data-resource"></a>Per creare una nuova risorsa personalizzata o di dati

È possibile creare una nuova risorsa personalizzata o di dati inserendo la risorsa in un file separato usando la normale sintassi del file script di risorsa (RC), quindi includendo tale file facendo clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e selezionando **Includi risorse**.

1. [Creare un file RC](how-to-create-a-resource-script-file.md) che contenga la risorsa personalizzata o di dati.

   È possibile digitare dati personalizzati in un file RC sotto forma di stringhe con terminazione Null racchiuse tra virgolette o di numeri interi in formato decimale, esadecimale o ottale.

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul file RC del progetto e scegliere **Includi risorse**.

1. Nella casella **direttive in fase di compilazione** Digitare un' `#include` istruzione che fornisce il nome del file che contiene la risorsa personalizzata, ad esempio:

    ```cpp
    #include mydata.rc
    ```

   Assicurarsi che le informazioni digitate siano corrette dal punto di vista sintattico e ortografico. Il contenuto della casella **direttive in fase di compilazione** viene inserito nel file di script di risorsa esattamente durante la digitazione.

1. Selezionare **OK** per registrare le modifiche.

Un altro modo per creare una risorsa personalizzata consiste nell'importare un file esterno come risorsa personalizzata, vedere [procedura: gestire le risorse](./how-to-copy-resources.md).

> [!NOTE]
> La creazione di nuove risorse personalizzate o di dati richiede Win32.

## <a name="requirements"></a>Requisiti

Nessuno

## <a name="see-also"></a>Vedere anche

[Editor di risorse](resource-editors.md)
