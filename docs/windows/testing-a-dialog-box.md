---
title: Test di una finestra di dialogo (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- Test Dialog command
- testing, dialog boxes
- dialog boxes [C++], testing
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
ms.openlocfilehash: 101a2b556b2593953bfa6482f96d5b1aadc38d1c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50625065"
---
# <a name="testing-a-dialog-box-c"></a>Test di una finestra di dialogo (C++)

Quando si progetta una finestra di dialogo, è possibile simularne e verificarne il comportamento in fase di esecuzione senza compilare il programma. In questo modo è possibile:

- Digitare un testo, selezionare elementi dagli elenchi della casella combinata, attivare o disattivare le opzioni e scegliere i comandi.

- Testare l'ordine di tabulazione.

- Verificare il raggruppamento di controlli, quali pulsanti di opzione e caselle di controllo.

- Verificare i tasti di scelta rapida per i controlli nella finestra di dialogo.

   > [!NOTE]
   > Le connessioni al codice della finestra di dialogo effettuate tramite le procedure guidate non vengono incluse nella simulazione.

Durante la verifica di una finestra di dialogo, la posizione in cui quest'ultima viene visualizzata è in genere relativa alla finestra principale del programma. Se è stata impostata la finestra di dialogo **Absolute Align** proprietà **True**, la finestra di dialogo vengono visualizzati in una posizione esterna rispetto all'angolo superiore sinistro della schermata.

### <a name="to-test-a-dialog-box"></a>Per testare una finestra di dialogo

1. Quando la **finestra di dialogo** editor è la finestra attiva, sulla barra dei menu, scegliere **formato** > **verifica finestra di dialogo**.

2. Per terminare la simulazione, premere **Esc**, oppure sceglierne le **Chiudi** pulsante nella finestra di dialogo si sta testando.

Per informazioni su come aggiungere risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Editor finestre](../windows/dialog-editor.md)<br/>
[Attivazione o disattivazione della visualizzazione della barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)