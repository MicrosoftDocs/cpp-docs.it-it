---
title: 'Controlli ActiveX MFC: Aggiunta di metodi personalizzati | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], methods
- PtInCircle custom method [MFC]
ms.assetid: 8f8dc344-44a0-4021-8db5-4cdd3d700e18
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0973bb21771796f40a0464e2376101ee35a0d1a3
ms.sourcegitcommit: a3c9e7888b8f437a170327c4c175733ad9eb0454
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50204550"
---
# <a name="mfc-activex-controls-adding-custom-methods"></a>Controlli ActiveX MFC: aggiunta di metodi personalizzati

Metodi personalizzati differiscono da metodi predefiniti che non sono già implementati da `COleControl`. È necessario fornire l'implementazione per ogni metodo personalizzato da aggiungere al controllo.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Un utente di un controllo ActiveX può chiamare un metodo personalizzato in qualsiasi momento per eseguire azioni specifiche del controllo. Voce della mappa di invio per i metodi personalizzati è nel formato DISP_FUNCTION.

##  <a name="_core_adding_a_custom_method_with_classwizard"></a> Aggiunta di un metodo personalizzato con l'aggiunta guidata metodo

La procedura seguente illustra come aggiungere il metodo personalizzato PtInCircle alla struttura del codice di un controllo ActiveX. PtInCircle determina se le coordinate passate al controllo sono all'interno o all'esterno del cerchio. Questa stessa procedura è anche utilizzabile per aggiungere altri metodi personalizzati. Sostituire con il nome del metodo personalizzato e i relativi parametri per il nome del metodo PtInCircle e sui parametri.

> [!NOTE]
>  Questo esempio viene usato il `InCircle` funzione dall'articolo gli eventi. Per altre informazioni su questa funzione, vedere l'articolo [controlli ActiveX MFC: aggiunta di eventi personalizzati a un controllo ActiveX](../mfc/mfc-activex-controls-adding-custom-events.md).

#### <a name="to-add-the-ptincircle-custom-method-using-the-add-method-wizard"></a>Per aggiungere il metodo personalizzato PtInCircle tramite l'aggiunta guidata metodo

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi metodo**.

   Verrà visualizzata l'aggiunta guidata metodo.

1. Nel **nome del metodo** , digitare *PtInCircle*.

1. Nel **nome interno** casella, digitare il nome della funzione interna del metodo o usare il valore predefinito (in questo caso *PtInCircle*).

1. Nel **Return Type** fare clic su **VARIANT_BOOL** per il tipo restituito del metodo.

1. Usando il **tipo di parametro** e **nome del parametro** controlli, aggiungere un parametro denominato *xCoord* (tipo *OLE_XPOS_PIXELS*).

9. Usando il **tipo di parametro** e **nome del parametro** controlli, aggiungere un parametro denominato *yCoord* (tipo *OLE_YPOS_PIXELS*).

10. Scegliere **Fine**.

##  <a name="_core_classwizard_changes_for_custom_methods"></a> Aggiunta guidata del metodo viene modificato per i metodi personalizzati

Quando si aggiunge un metodo personalizzato, l'aggiunta guidata metodo apporta alcune modifiche per l'intestazione della classe controllo (. H) e all'implementazione (. File CPP). La riga seguente viene aggiunto alla dichiarazione di mappa di invio nell'intestazione della classe di controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#18](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_1.h)]

Questo codice dichiara un gestore del metodo di recapito chiamato `PtInCircle`. Questa funzione può essere chiamata dall'utente del controllo utilizzando il nome esterno `PtInCircle`.

La riga seguente viene aggiunto al controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#19](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_2.idl)]

Questa riga viene assegnato il `PtInCircle` metodo uno specifico numero di ID, posizione del metodo nell'elenco di proprietà e metodi di aggiunta guidata metodo. Poiché l'aggiunta guidata metodo utilizzato per aggiungere il metodo personalizzato, la voce è stato aggiunto automaticamente al progetto. File IDL.

Inoltre, la riga seguente, che si trova nell'implementazione (. File CPP) della classe del controllo, viene aggiunto alla mappa di invio del controllo:

[!code-cpp[NVC_MFC_AxUI#20](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_3.cpp)]

DISP_FUNCTION (macro) viene eseguito il mapping del metodo `PtInCircle` alla funzione di gestione del controllo, `PtInCircle`, viene dichiarato il tipo restituito sia **VARIANT_BOOL**e dichiara due parametri di tipo **VTS_XPOS_PIXELS** e **VTS_YPOSPIXELS** deve essere passato `PtInCircle`.

Infine, l'aggiunta guidata metodo aggiunge la funzione di stub `CSampleCtrl::PtInCircle` nella parte inferiore dell'implementazione del controllo (. File CPP). Per `PtInCircle` per funzionare come indicato in precedenza, deve essere modificata come segue:

[!code-cpp[NVC_MFC_AxUI#21](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_4.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)<br/>
[Icone di Visualizzazione classi e Visualizzatore oggetti](/visualstudio/ide/class-view-and-object-browser-icons)

