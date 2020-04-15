---
title: 'Controlli ActiveX MFC: aggiunta di metodi personalizzati'
ms.date: 09/12/2018
helpviewer_keywords:
- MFC ActiveX controls [MFC], methods
- PtInCircle custom method [MFC]
ms.assetid: 8f8dc344-44a0-4021-8db5-4cdd3d700e18
ms.openlocfilehash: 88d486248eab5d980463764db34bf40b05b830dc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364719"
---
# <a name="mfc-activex-controls-adding-custom-methods"></a>Controlli ActiveX MFC: aggiunta di metodi personalizzati

I metodi personalizzati differiscono dai metodi di `COleControl`stock in quanto non sono già implementati da . È necessario fornire l'implementazione per ogni metodo personalizzato aggiunto al controllo.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Un utente di un controllo ActiveX può chiamare un metodo personalizzato in qualsiasi momento per eseguire azioni specifiche del controllo. La voce della mappa di invio per i metodi personalizzati ha la forma DISP_FUNCTION.

## <a name="adding-a-custom-method-with-the-add-method-wizard"></a><a name="_core_adding_a_custom_method_with_classwizard"></a>Aggiunta di un metodo personalizzato con l'Aggiunta guidata metodo

Nella procedura seguente viene illustrata l'aggiunta del metodo personalizzato PtInCircle al codice dello scheletro di un controllo ActiveX.The following procedure demonstrates adding the custom method PtInCircle to an ActiveX control's skeleton code. PtInCircle determina se le coordinate passate al controllo sono all'interno o all'esterno del cerchio. Questa stessa procedura può essere utilizzata anche per aggiungere altri metodi personalizzati. Sostituire il nome del metodo personalizzato e i relativi parametri per il nome e i parametri del metodo PtInCircle.

> [!NOTE]
> In questo `InCircle` esempio viene utilizzata la funzione dell'articolo Events. Per ulteriori informazioni su questa funzione, vedere l'articolo [Controlli ActiveX MFC: aggiunta di eventi personalizzati a un controllo ActiveX](../mfc/mfc-activex-controls-adding-custom-events.md).

#### <a name="to-add-the-ptincircle-custom-method-using-the-add-method-wizard"></a>Per aggiungere il metodo personalizzato PtInCircle utilizzando l'Aggiunta guidata metodo

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi metodo**.

   Verrà visualizzata l'Aggiunta guidata metodo.

1. Nella casella **Nome metodo** digitare *PtInCircle*.

1. Nella casella **Nome interno** digitare il nome della funzione interna del metodo o utilizzare il valore predefinito, in questo caso *PtInCircle .*

1. Nella casella **Tipo restituito** fare clic su **VARIANT_BOOL** per il tipo restituito del metodo.

1. Utilizzando i controlli **Tipo parametro** e **Nome parametro,** aggiungere un parametro denominato *xCoord* (tipo *OLE_XPOS_PIXELS*).

1. Utilizzando i controlli **Tipo parametro** e **Nome parametro,** aggiungere un parametro denominato *yCoord* (tipo *OLE_YPOS_PIXELS*).

1. Fare clic su **Fine**.

## <a name="add-method-wizard-changes-for-custom-methods"></a><a name="_core_classwizard_changes_for_custom_methods"></a>Modifiche della procedura guidata Aggiungi metodo per i metodi personalizzati

Quando si aggiunge un metodo personalizzato, l'Aggiunta guidata metodo apporta alcune modifiche all'intestazione della classe del controllo (. H) e l'attuazione (. CPP). La riga seguente viene aggiunta alla dichiarazione della mappa di invio nell'intestazione della classe del controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#18](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_1.h)]

Questo codice dichiara un gestore del metodo dispatch denominato `PtInCircle`. Questa funzione può essere chiamata dall'utente `PtInCircle`del controllo utilizzando il nome esterno .

La riga seguente viene aggiunta al controllo . File IDL:

[!code-cpp[NVC_MFC_AxUI#19](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_2.idl)]

Questa riga assegna `PtInCircle` al metodo un numero ID specifico, la posizione del metodo nell'elenco di metodi e proprietà dell'Aggiunta guidata metodo. Poiché l'Aggiunta guidata metodo è stata utilizzata per aggiungere il metodo personalizzato, la relativa voce è stata aggiunta automaticamente al file . File IDL.

Inoltre, la riga seguente, che si trova nell'implementazione (. CPP) della classe del controllo, viene aggiunto alla mappa di invio del controllo:

[!code-cpp[NVC_MFC_AxUI#20](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_3.cpp)]

La macro DISP_FUNCTION `PtInCircle` esegue il mapping del `PtInCircle`metodo alla funzione del gestore del controllo, , dichiara il tipo `PtInCircle`restituito da **VARIANT_BOOL**e dichiara due parametri di tipo **VTS_XPOS_PIXELS** e **VTS_YPOSPIXELS** da passare a .

Infine, l'Aggiunta guidata metodo `CSampleCtrl::PtInCircle` aggiunge la funzione stub nella parte inferiore dell'implementazione del controllo (. CPP). Per `PtInCircle` funzionare come indicato in precedenza, deve essere modificato come segue:

[!code-cpp[NVC_MFC_AxUI#21](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Icone Visualizzazione classi e Visualizzatore oggetti](/visualstudio/ide/class-view-and-object-browser-icons)
