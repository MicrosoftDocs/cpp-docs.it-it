---
title: 'Controlli ActiveX MFC: aggiunta di metodi predefiniti'
ms.date: 09/12/2018
helpviewer_keywords:
- MFC ActiveX controls [MFC], stock methods
- MFC ActiveX controls [MFC], methods
- DoClick method [MFC]
ms.assetid: bc4fad78-cabd-4cc0-a798-464b1a682f0b
ms.openlocfilehash: 42d8dfecd32b4aecd0daa4034497ec9abff6d11a
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619930"
---
# <a name="mfc-activex-controls-adding-stock-methods"></a>Controlli ActiveX MFC: aggiunta di metodi predefiniti

Un metodo di azione è diverso da un metodo personalizzato perché è già implementato dalla classe [COleControl](reference/colecontrol-class.md). Ad esempio, `COleControl` contiene una funzione membro predefinita che supporta il metodo Refresh per il controllo. La voce della mappa di invio per questo metodo di inventario è DISP_STOCKFUNC_REFRESH.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

`COleControl`supporta due metodi di azione: DoClick e Refresh. L'aggiornamento viene richiamato dall'utente del controllo per aggiornare immediatamente l'aspetto del controllo; DoClick viene richiamato per attivare l'evento click del controllo.

|Metodo|Voce della mappa di invio|Commento|
|------------|------------------------|-------------|
|`DoClick`|**DISP_STOCKPROP_DOCLICK ()**|Genera un evento click.|
|`Refresh`|**DISP_STOCKPROP_REFRESH ()**|Aggiorna immediatamente l'aspetto del controllo.|

## <a name="adding-a-stock-method-using-the-add-method-wizard"></a><a name="_core_adding_a_stock_method_using_classwizard"></a>Aggiunta di un metodo di azione con la procedura guidata Aggiungi metodo

L'aggiunta di un metodo di azione è semplice mediante l' [Aggiunta guidata metodo](../ide/add-method-wizard.md). Nella procedura riportata di seguito viene illustrato come aggiungere il metodo Refresh a un controllo creato mediante la creazione guidata controllo ActiveX MFC.

#### <a name="to-add-the-stock-refresh-method-using-the-add-method-wizard"></a>Per aggiungere il metodo di aggiornamento azionario utilizzando Aggiunta guidata metodo

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi metodo**.

   Verrà visualizzata la procedura guidata Aggiungi metodo.

1. Nella casella **nome metodo** fare clic su **Aggiorna**.

1. Fare clic su **Fine**.

## <a name="add-method-wizard-changes-for-stock-methods"></a><a name="_core_classwizard_changes_for_stock_methods"></a>Modifiche alla procedura guidata Aggiungi metodo per i metodi azionari

Poiché il metodo di aggiornamento azionario è supportato dalla classe base del controllo, la **procedura guidata Aggiungi metodo** non modifica in alcun modo la dichiarazione di classe del controllo. Aggiunge una voce per il metodo alla mappa di invio del controllo e al relativo oggetto. File IDL. La riga seguente viene aggiunta alla mappa di invio del controllo, che si trova nella relativa implementazione (. File CPP):

[!code-cpp[NVC_MFC_AxUI#16](codesnippet/cpp/mfc-activex-controls-adding-stock-methods_1.cpp)]

In questo modo il metodo Refresh viene reso disponibile agli utenti del controllo.

La riga seguente viene aggiunta all'oggetto del controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#17](codesnippet/cpp/mfc-activex-controls-adding-stock-methods_2.idl)]

Questa riga assegna al metodo Refresh un numero ID specifico.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
