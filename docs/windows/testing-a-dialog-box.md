---
title: Progettazione di una finestra di dialogo (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- Test Dialog command
- testing, dialog boxes
- dialog boxes [C++], testing
- dialog boxes [C++], size
- dialog boxes [C++], positioning
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
ms.openlocfilehash: 4a879f6bb1cdcd4b4897e510fb21d04500dfd3f2
ms.sourcegitcommit: 52c05e10b503e834c443ef11e7ca1987e332f876
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2019
ms.locfileid: "55742687"
---
# <a name="designing-a-dialog-box-c"></a>Progettazione di una finestra di dialogo (C++)

La posizione e dimensioni di una finestra di dialogo di C++ e la posizione e dimensioni dei controlli in essa contenuti vengono misurati in unità di misura della finestra. I valori per i singoli controlli e la finestra di dialogo vengono visualizzati in basso a destra della barra quando si seleziona di stato di Visual Studio.

Quando si progetta una finestra di dialogo, è anche possibile simulare e verificarne il comportamento in fase di esecuzione senza compilare il programma. In questo modo è possibile:

- Digitare un testo, selezionare elementi dagli elenchi della casella combinata, attivare o disattivare le opzioni e scegliere i comandi.

- Testare l'ordine di tabulazione.

- Verificare il raggruppamento di controlli, quali pulsanti di opzione e caselle di controllo.

- Verificare i tasti di scelta rapida per i controlli nella finestra di dialogo.

   > [!NOTE]
   > Le connessioni al codice della finestra di dialogo effettuate tramite le procedure guidate non vengono incluse nella simulazione.

Durante la verifica di una finestra di dialogo, la posizione in cui quest'ultima viene visualizzata è in genere relativa alla finestra principale del programma. Se è stata impostata la finestra di dialogo **Absolute Align** proprietà **True**, la finestra di dialogo vengono visualizzati in una posizione esterna rispetto all'angolo superiore sinistro della schermata.

Per informazioni su come aggiungere risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index).

## <a name="to-specify-the-location-and-size-of-a-dialog-box"></a>Per specificare la posizione e dimensione di una finestra di dialogo

Esistono tre proprietà che è possibile impostare nella [finestra proprietà](/visualstudio/ide/reference/properties-window) per specificare in una finestra di dialogo verrà visualizzata sullo schermo. Il **centro** proprietà è un valore booleano; se si imposta il valore su **True**, la finestra di dialogo verrà sempre visualizzato al centro della schermata. Se viene impostata su **False**, quindi è possibile impostare il **XPos** e **YPos** proprietà da definire in modo esplicito in cui sullo schermo verrà visualizzata la finestra di dialogo. Le proprietà di posizione sono valori di offset dall'angolo superiore sinistro dell'area di visualizzazione, che è definita come `{X=0, Y=0}`. È anche in base alla posizione di **Absolute Align** proprietà: se **True**, le coordinate sono relative schermo; se **False**, le coordinate sono relative la finestra di dialogo finestra del proprietario.

## <a name="to-test-a-dialog-box"></a>Per testare una finestra di dialogo

1. Quando la **finestra di dialogo** editor è la finestra attiva, sulla barra dei menu, scegliere **formato** > **verifica finestra di dialogo**.

1. Per terminare la simulazione, premere **Esc**, oppure sceglierne le **Chiudi** pulsante nella finestra di dialogo si sta testando.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Editor finestre](../windows/dialog-editor.md)<br/>
[Attivazione o disattivazione della visualizzazione della barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)