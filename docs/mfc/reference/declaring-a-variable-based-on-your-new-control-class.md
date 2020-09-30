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
ms.openlocfilehash: a828351a9e789228143d43d4c0a756abda879989
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506688"
---
# <a name="declaring-a-variable-based-on-your-new-control-class"></a>Dichiarazione di una variabile basata su una nuova classe di controlli

Una volta creata una classe del controllo MFC, è possibile dichiarare una variabile in base a essa. Per fornire un contesto per la nuova variabile, è necessario aprire l'editor finestre e modificare la finestra di dialogo in cui si desidera utilizzare il controllo riutilizzabile. Inoltre, alla finestra di dialogo deve essere già associata una classe. Per informazioni sull'uso dell'editor finestre, vedere [editor finestre](../../windows/dialog-editor.md).

### <a name="to-declare-a-variable-based-on-your-reusable-class"></a>Per dichiarare una variabile in base alla classe riutilizzabile

1. Durante la modifica della finestra di dialogo, trascinare un controllo dello stesso tipo della classe di base del nuovo controllo dalla barra degli strumenti controlli nella finestra di dialogo.

1. Posizionare il puntatore del mouse sul controllo eliminato.

1. Quando si preme il tasto CTRL, fare doppio clic sul controllo.

   Verrà visualizzata la finestra di dialogo [Aggiungi variabile membro](../../ide/adding-a-member-variable-visual-cpp.md#add-member-variable-wizard) .

1. Nella casella **accesso** selezionare l'accesso corretto per il controllo.

1. Fare clic sulla casella di controllo **variabile di controllo** .

1. Digitare un nome nella casella **nome variabile** .

1. In **categoria**fare clic su **controllo**.

1. Nell'elenco **ID controllo** selezionare il controllo aggiunto. Nell'elenco **tipo di variabile** dovrebbe essere visualizzato il tipo di variabile corretto e nella casella tipo di **controllo** dovrebbe essere visualizzato il tipo di controllo corretto.

1. Nella casella **Commento** aggiungere qualsiasi commento che si vuole visualizzare nel codice.

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
