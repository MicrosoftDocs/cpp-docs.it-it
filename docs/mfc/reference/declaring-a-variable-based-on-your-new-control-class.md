---
title: Dichiarazione di una variabile basata su una nuova classe di controlli
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.classes.control.variable
helpviewer_keywords:
- variables [MFC], control classes
- control classes [MFC], variables
- classes [MFC], declaring variables based on
ms.assetid: 5722dc38-c0eb-40bd-93da-67a808140d03
ms.openlocfilehash: 994f81524001a80d1cf0dd3783b9de742d61e84d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365839"
---
# <a name="declaring-a-variable-based-on-your-new-control-class"></a>Dichiarazione di una variabile basata su una nuova classe di controlli

Dopo aver creato una classe di controllo MFC, è possibile dichiarare una variabile basata su di essa. Per fornire un contesto per la nuova variabile, è necessario aprire l'editor finestre e modificare la finestra di dialogo in cui si desidera utilizzare il controllo riutilizzabile. Inoltre, la finestra di dialogo deve avere già una classe associata. Per informazioni sull'utilizzo dell'editor finestre, vedere [Editor finestre](../../windows/dialog-editor.md).

### <a name="to-declare-a-variable-based-on-your-reusable-class"></a>Per dichiarare una variabile in base alla classe riutilizzabileTo declare a variable based on your reusable class

1. Durante la modifica della finestra di dialogo, trascinare un controllo dello stesso tipo della classe base del nuovo controllo dalla barra degli strumenti Controlli nella finestra di dialogo.

1. Posizionare il puntatore del mouse sul controllo rilasciato.

1. Tenendo premuto il tasto CTRL, fare doppio clic sul controllo.

   Verrà visualizzata la finestra di dialogo [Aggiungi variabile membro.](../../ide/add-member-variable-wizard.md)

1. Nella casella **Accesso** selezionare l'accesso corretto per il controllo.

1. Fare clic sulla casella di controllo **Variabile di** controllo.

1. Nella casella **Nome variabile** digitare un nome.

1. In **Categoria**fare clic su **Controllo**.

1. Nell'elenco **ID controllo** selezionare il controllo aggiunto. Nell'elenco **Tipo di variabile** dovrebbe essere visualizzato il tipo di variabile corretto e nella casella Tipo di **controllo** dovrebbe essere visualizzato il tipo di controllo corretto.

1. Nella casella **Commento** aggiungere il commento che si desidera visualizzare nel codice.

1. Fare clic su **OK**.

## <a name="see-also"></a>Vedere anche

[Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigate-code-cpp.md)
