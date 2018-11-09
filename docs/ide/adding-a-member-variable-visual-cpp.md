---
title: Aggiunta di una variabile membro (Visual C++)
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.classes.member.variable
helpviewer_keywords:
- member variables, adding
- member variables
ms.assetid: 437783bd-8eb4-4508-8b73-7380116e9d71
ms.openlocfilehash: 3c7f64fae00e489da7c71bcfe5731db72e1afdf7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50595776"
---
# <a name="adding-a-member-variable--visual-c"></a>Aggiunta di una variabile membro (Visual C++)

È possibile aggiungere una variabile membro in una classe usando la Visualizzazione classi. Le variabili membro possono essere per [lo scambio di dati e la convalida di dati](../mfc/dialog-data-exchange-and-validation.md) oppure possono essere generiche. L'Aggiunta guidata variabile membro è specificatamente progettata per ottenere le informazioni rilevanti e usarle per l'inserimento di elementi nei file origine nei percorsi appropriati. È possibile aggiungere una variabile membro dall'[Editor di finestre](../windows/dialog-editor.md) nella [Visualizzazione risorse](../windows/resource-view-window.md) o dalla [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code).

> [!NOTE]
>  Quando si progetta e implementa una finestra di dialogo, può essere utile usare l'Editor di finestre per aggiungere i controlli delle finestre di dialogo e quindi implementare le variabili membro dei controlli.

### <a name="to-add-a-member-variable-for-a-dialog-control-in-resource-view-using-the-add-member-variable-wizard"></a>Per aggiungere una variabile membro per un controllo di finestra di dialogo nella Visualizzazione risorse usando l'Aggiunta guidata variabile membro

1. Nella Visualizzazione risorse espandere il nodo del progetto e il nodo della finestra di dialogo per visualizzare l'elenco delle finestre di dialogo del progetto.

1. Fare doppio clic sulla finestra di dialogo in cui si vuole aggiungere la variabile membro per aprirla nell'Editor di finestre.

1. Nella finestra di dialogo visualizzata nell'Editor di finestre fare clic con il pulsante destro del mouse sul controllo a cui aggiungere la variabile membro.

1. Nel menu di scelta rapida fare clic su **Aggiungi variabile** per visualizzare l'[Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md).

   > [!NOTE]
   > In **ID controllo** è già specificato un valore predefinito.

1. Specificare le informazioni nelle caselle appropriate della procedura guidata. Per altre informazioni, vedere [Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md).

1. Fare clic su **Fine** per aggiungere la definizione e il codice di implementazione al progetto e chiudere la procedura guidata.

### <a name="to-add-a-member-variable-from-class-view-using-the-add-member-variable-wizard"></a>Per aggiungere una variabile membro dalla Visualizzazione classi usando l'Aggiunta guidata variabile membro

1. Nella [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) espandere il nodo del progetto per visualizzare le classi nel progetto.

1. Fare clic con il pulsante destro del mouse sulla classe in cui si vuole aggiungere una variabile.

1. Nel menu di scelta rapida fare clic su **Aggiungi** e quindi su **Aggiungi variabile** per visualizzare l'Aggiunta guidata variabile membro.

1. Specificare le informazioni nelle caselle appropriate della procedura guidata. Per informazioni dettagliate, vedere [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md).

1. Fare clic su **Fine** per aggiungere la definizione e il codice di implementazione al progetto e chiudere la procedura guidata.

## <a name="see-also"></a>Vedere anche

[Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)<br>
[Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)<br>
[Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)<br>
[Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)<br>
[Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)