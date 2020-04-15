---
title: 'Controlli ActiveX MFC: aggiunta di metodi predefiniti'
ms.date: 09/12/2018
helpviewer_keywords:
- MFC ActiveX controls [MFC], stock methods
- MFC ActiveX controls [MFC], methods
- DoClick method [MFC]
ms.assetid: bc4fad78-cabd-4cc0-a798-464b1a682f0b
ms.openlocfilehash: ec59ccc0cbd48fc3114eb2dc0833dd3dd65691de
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364680"
---
# <a name="mfc-activex-controls-adding-stock-methods"></a>Controlli ActiveX MFC: aggiunta di metodi predefiniti

Un metodo stock differisce da un metodo personalizzato in quanto è già implementato dalla classe [COleControl](../mfc/reference/colecontrol-class.md). Ad esempio, `COleControl` contiene una funzione membro predefinita che supporta il Refresh metodo per il controllo. La voce della mappa di invio per questo metodo azionario è DISP_STOCKFUNC_REFRESH.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

`COleControl`supporta due metodi di stock: DoClick e Refresh. Refresh viene richiamato dall'utente del controllo per aggiornare immediatamente l'aspetto del controllo; DoClick viene richiamato per generare l'evento Click del controllo.

|Metodo|Voce della mappa di spedizione|Comment|
|------------|------------------------|-------------|
|`DoClick`|**DISP_STOCKPROP_DOCLICK( )**|Genera un evento Click.|
|`Refresh`|**DISP_STOCKPROP_REFRESH( )**|Aggiorna immediatamente l'aspetto del controllo.|

## <a name="adding-a-stock-method-using-the-add-method-wizard"></a><a name="_core_adding_a_stock_method_using_classwizard"></a>Aggiunta di un metodo Stock mediante l'Aggiunta guidata metodo

L'aggiunta di un metodo di stock è semplice mediante [l'Aggiunta guidata metodo](../ide/add-method-wizard.md). Nella procedura seguente viene illustrata l'aggiunta del metodo Refresh a un controllo creato mediante la Creazione guidata controllo ActiveX MFC.

#### <a name="to-add-the-stock-refresh-method-using-the-add-method-wizard"></a>Per aggiungere il metodo Refresh predefinita mediante l'Aggiunta guidata metodo

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi metodo**.

   Verrà visualizzata l'Aggiunta guidata metodo.

1. Nella casella **Nome metodo** fare clic su **Aggiorna**.

1. Fare clic su **Fine**.

## <a name="add-method-wizard-changes-for-stock-methods"></a><a name="_core_classwizard_changes_for_stock_methods"></a>Aggiungi modifiche dell'Aggiunta guidata metodo per i metodi di supportoAdd Method Wizard Changes for Stock Methods

Poiché il metodo Refresh supportato dalla classe base del controllo, **l'Aggiunta guidata metodo** non modifica in alcun modo la dichiarazione di classe del controllo. Aggiunge una voce per il metodo alla mappa di invio del controllo e al relativo oggetto . File IDL. La riga seguente viene aggiunta alla mappa di invio del controllo, che si trova nella relativa implementazione (. CPP) :

[!code-cpp[NVC_MFC_AxUI#16](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-methods_1.cpp)]

In questo modo il Refresh metodo disponibile per gli utenti del controllo.

La riga seguente viene aggiunta al controllo . File IDL:

[!code-cpp[NVC_MFC_AxUI#17](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-methods_2.idl)]

Questa riga assegna al metodo Refresh un numero ID specifico.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
