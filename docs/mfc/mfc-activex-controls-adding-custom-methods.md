---
description: 'Altre informazioni su: controlli ActiveX MFC: aggiunta di metodi personalizzati'
title: 'Controlli ActiveX MFC: aggiunta di metodi personalizzati'
ms.date: 09/12/2018
helpviewer_keywords:
- MFC ActiveX controls [MFC], methods
- PtInCircle custom method [MFC]
ms.assetid: 8f8dc344-44a0-4021-8db5-4cdd3d700e18
ms.openlocfilehash: a7ac7ad1f1635976b3190c84b02b40bf73551e70
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202951"
---
# <a name="mfc-activex-controls-adding-custom-methods"></a>Controlli ActiveX MFC: aggiunta di metodi personalizzati

I metodi personalizzati sono diversi dai metodi azionari perché non sono già implementati da `COleControl` . È necessario fornire l'implementazione per ogni metodo personalizzato aggiunto al controllo.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Un utente del controllo ActiveX può chiamare un metodo personalizzato in qualsiasi momento per eseguire azioni specifiche del controllo. Il formato della voce della mappa di invio per i metodi personalizzati è DISP_FUNCTION.

## <a name="adding-a-custom-method-with-the-add-method-wizard"></a><a name="_core_adding_a_custom_method_with_classwizard"></a> Aggiunta di un metodo personalizzato con la procedura guidata Aggiungi metodo

Nella procedura seguente viene illustrato come aggiungere il metodo personalizzato PtInCircle al codice di scheletro di un controllo ActiveX. PtInCircle determina se le coordinate passate al controllo si trovano all'interno o all'esterno del cerchio. Questa stessa procedura può essere usata anche per aggiungere altri metodi personalizzati. Sostituire il nome del metodo personalizzato con i relativi parametri per il nome e i parametri del metodo PtInCircle.

> [!NOTE]
> Questo esempio usa la `InCircle` funzione degli eventi degli articoli. Per ulteriori informazioni su questa funzione, vedere l'articolo [controlli ActiveX MFC: aggiunta di eventi personalizzati a un controllo ActiveX](mfc-activex-controls-adding-custom-events.md).

#### <a name="to-add-the-ptincircle-custom-method-using-the-add-method-wizard"></a>Per aggiungere il metodo personalizzato PtInCircle utilizzando Aggiunta guidata metodo

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi metodo**.

   Verrà visualizzata la procedura guidata Aggiungi metodo.

1. Nella casella **nome metodo** digitare *PtInCircle*.

1. Nella casella **nome interno** Digitare il nome della funzione interna del metodo o usare il valore predefinito (in questo caso, *PtInCircle*).

1. Nella casella **tipo restituito** fare clic su **VARIANT_BOOL** per il tipo restituito del metodo.

1. Utilizzando i controlli **tipo di parametro** e **nome parametro** , aggiungere un parametro denominato *xCoord* (tipo *OLE_XPOS_PIXELS*).

1. Utilizzando i controlli **tipo di parametro** e **nome parametro** , aggiungere un parametro denominato *yCoord* (tipo *OLE_YPOS_PIXELS*).

1. Fare clic su **Fine**.

## <a name="add-method-wizard-changes-for-custom-methods"></a><a name="_core_classwizard_changes_for_custom_methods"></a> Modifiche alla procedura guidata Aggiungi metodo per metodi personalizzati

Quando si aggiunge un metodo personalizzato, la procedura guidata Aggiungi metodo apporta alcune modifiche all'intestazione della classe del controllo (. H) e implementazione di (. File CPP). La riga seguente viene aggiunta alla dichiarazione della mappa di invio nell'intestazione della classe del controllo (. H) file:

[!code-cpp[NVC_MFC_AxUI#18](codesnippet/cpp/mfc-activex-controls-adding-custom-methods_1.h)]

Questo codice dichiara un gestore del metodo dispatch denominato `PtInCircle` . Questa funzione può essere chiamata dall'utente del controllo utilizzando il nome esterno `PtInCircle` .

La riga seguente viene aggiunta all'oggetto del controllo. File IDL:

[!code-cpp[NVC_MFC_AxUI#19](codesnippet/cpp/mfc-activex-controls-adding-custom-methods_2.idl)]

Questa riga assegna al `PtInCircle` Metodo un numero ID specifico, ovvero la posizione del metodo nell'elenco di proprietà e metodi dell'aggiunta guidata metodo. Poiché è stata usata la procedura guidata Aggiungi metodo per aggiungere il metodo personalizzato, la relativa voce è stata aggiunta automaticamente all'oggetto del progetto. File IDL.

Inoltre, la riga seguente, che si trova nell'implementazione di (. CPP) file della classe del controllo, viene aggiunto alla mappa di invio del controllo:

[!code-cpp[NVC_MFC_AxUI#20](codesnippet/cpp/mfc-activex-controls-adding-custom-methods_3.cpp)]

La macro DISP_FUNCTION esegue il mapping del metodo `PtInCircle` alla funzione del gestore del controllo, `PtInCircle` , dichiara il tipo restituito da **VARIANT_BOOL** e dichiara due parametri di tipo **VTS_XPOS_PIXELS** e **VTS_YPOSPIXELS** da passare a `PtInCircle` .

Infine, la procedura guidata Aggiungi metodo aggiunge la funzione stub `CSampleCtrl::PtInCircle` alla parte inferiore dell'implementazione del controllo (. File CPP). Affinché `PtInCircle` funzioni come indicato in precedenza, deve essere modificato nel modo seguente:

[!code-cpp[NVC_MFC_AxUI#21](codesnippet/cpp/mfc-activex-controls-adding-custom-methods_4.cpp)]

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Icone Visualizzazione classi e Visualizzatore oggetti](/visualstudio/ide/class-view-and-object-browser-icons)
