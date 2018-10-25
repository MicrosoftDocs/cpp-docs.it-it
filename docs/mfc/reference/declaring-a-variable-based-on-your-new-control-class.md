---
title: Dichiarazione di una variabile basata su nuova classe di controlli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.classes.control.variable
dev_langs:
- C++
helpviewer_keywords:
- variables [MFC], control classes
- control classes [MFC], variables
- classes [MFC], declaring variables based on
ms.assetid: 5722dc38-c0eb-40bd-93da-67a808140d03
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6d2e5e91465df0c3e7608b949c6e1f4b8dfc80bc
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50064147"
---
# <a name="declaring-a-variable-based-on-your-new-control-class"></a>Dichiarazione di una variabile basata su una nuova classe di controlli

Dopo aver creato una classe di controllo MFC, è possibile dichiarare una variabile basata su di esso. Per fornire un contesto per la nuova variabile, è necessario aprire l'editor finestre e modificare la finestra di dialogo in cui si desidera utilizzare il controllo riutilizzabile. Inoltre, la finestra di dialogo deve avere già una classe associata. Per informazioni sull'uso dell'editor finestre, vedere [finestra di dialogo Editor](../../windows/dialog-editor.md).

### <a name="to-declare-a-variable-based-on-your-reusable-class"></a>Per dichiarare una variabile basata su classe riutilizzabile

1. Quando si modifica la finestra di dialogo, trascinare un controllo dello stesso tipo come classe di base del nuovo controllo nella barra degli strumenti di controlli nella finestra di dialogo.

1. Posizionare il puntatore del mouse sul controllo rilasciato.

1. Tenere premuto il tasto CTRL e fare doppio clic sul controllo.

   Il [Aggiunta guidata variabile membro](../../ide/add-member-variable-wizard.md) verrà visualizzata la finestra di dialogo.

1. Nel **accesso** , selezionare l'accesso corretto per il controllo.

1. Scegliere il **variabile di controllo** casella di controllo.

1. Nel **nome della variabile** , digitare un nome.

1. Sotto **categoria**, fare clic su **controllo**.

1. Nel **ID del controllo** elencare, selezionare il controllo aggiunto. Il **tipo di variabile** elenco verrà visualizzato il tipo di variabile corretto e il **tipo di controllo** casella deve essere visualizzato il tipo di controllo.

9. Nel **commento** , aggiungere qualsiasi commento da visualizzare nel codice.

10. Fare clic su **OK**.

## <a name="see-also"></a>Vedere anche

[Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)
