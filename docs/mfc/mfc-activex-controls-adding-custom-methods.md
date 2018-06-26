---
title: 'Controlli ActiveX MFC: Aggiunta di metodi personalizzati | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 6b20d649bc89d9d66103f258ebdfdac767f431b5
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930048"
---
# <a name="mfc-activex-controls-adding-custom-methods"></a>Controlli ActiveX MFC: aggiunta di metodi personalizzati
Metodi personalizzati differiscono dai metodi predefiniti in non sono già implementati da `COleControl`. È necessario fornire l'implementazione per ogni metodo personalizzato che aggiunge al controllo del codice.  
  
 Utente di un controllo ActiveX può chiamare un metodo personalizzato in qualsiasi momento per eseguire azioni specifiche del controllo. Voce della mappa di invio per i metodi personalizzati è nel formato DISP_FUNCTION.  
  
##  <a name="_core_adding_a_custom_method_with_classwizard"></a> Aggiunta di un metodo personalizzato con l'aggiunta guidata metodo  
 La procedura seguente illustra come aggiungere il metodo personalizzato PtInCircle al codice di base di un controllo ActiveX. PtInCircle determina se le coordinate passate al controllo sono all'interno o all'esterno del cerchio. Questa stessa procedura può anche essere consente di aggiungere altri metodi personalizzati. Sostituire con il nome del metodo personalizzato e i relativi parametri per i parametri e il nome del metodo PtInCircle.  
  
> [!NOTE]
>  Questo esempio viene utilizzato il `InCircle` funzione dall'articolo eventi. Per ulteriori informazioni su questa funzione, vedere l'articolo [controlli ActiveX MFC: aggiunta di eventi personalizzati a un controllo ActiveX](../mfc/mfc-activex-controls-adding-custom-events.md).  
  
#### <a name="to-add-the-ptincircle-custom-method-using-the-add-method-wizard"></a>Per aggiungere il metodo personalizzato PtInCircle mediante l'aggiunta guidata metodo  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **metodo Add**.  
  
     Verrà aperta l'aggiunta guidata metodo.  
  
5.  Nel **nome del metodo** , digitare *PtInCircle*.  
  
6.  Nel **nome interno** casella, digitare il nome della funzione interna del metodo o usare il valore predefinito (in questo caso, *PtInCircle*).  
  
7.  Nel **Return Type** fare clic su **VARIANT_BOOL** per il tipo restituito del metodo.  
  
8.  Utilizzando il **parametro di tipo** e **nome del parametro** controlli, aggiungere un parametro denominato *xCoord* (tipo *OLE_XPOS_PIXELS*).  
  
9. Utilizzando il **parametro di tipo** e **nome del parametro** controlli, aggiungere un parametro denominato *yCoord* (tipo *OLE_YPOS_PIXELS*).  
  
10. Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_custom_methods"></a> Aggiunta guidata del metodo viene modificato per i metodi personalizzati  
 Quando si aggiunge un metodo personalizzato, l'aggiunta guidata metodo apporta alcune modifiche per l'intestazione della classe controllo (. H) e implementazione (. File CPP). La riga seguente viene aggiunta alla dichiarazione della mappa di invio nell'intestazione della classe di controllo (. H) file:  
  
 [!code-cpp[NVC_MFC_AxUI#18](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_1.h)]  
  
 Questo codice dichiara un gestore di metodo di spedizione denominato `PtInCircle`. Questa funzione può essere chiamata dall'utente del controllo utilizzando il nome esterno `PtInCircle`.  
  
 La riga seguente viene aggiunto al controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxUI#19](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_2.idl)]  
  
 Questa riga assegna il `PtInCircle` metodo uno specifico numero di ID, posizione del metodo nell'elenco di proprietà e metodi di aggiunta guidata metodo. Poiché l'aggiunta guidata metodo è stato usato per aggiungere il metodo personalizzato, la voce è stato aggiunto automaticamente al progetto. File IDL.  
  
 Inoltre, la riga seguente, che si trova nell'implementazione (. I file CPP) della classe del controllo, viene aggiunto alla mappa di invio del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#20](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_3.cpp)]  
  
 DISP_FUNCTION (macro) viene eseguito il mapping del metodo `PtInCircle` alla funzione di gestione del controllo, `PtInCircle`, dichiara il tipo restituito da **VARIANT_BOOL**e dichiara due parametri di tipo **VTS_XPOS_PIXELS** e **VTS_YPOSPIXELS** deve essere passato `PtInCircle`.  
  
 Infine, l'aggiunta guidata metodo aggiunge la funzione stub `CSampleCtrl::PtInCircle` alla fine dell'implementazione del controllo (. File CPP). Per `PtInCircle` per funzionare come indicato in precedenza, è necessario modificarlo nel modo seguente:  
  
 [!code-cpp[NVC_MFC_AxUI#21](../mfc/codesnippet/cpp/mfc-activex-controls-adding-custom-methods_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Icone di Visualizzazione classi e Visualizzatore oggetti](/visualstudio/ide/class-view-and-object-browser-icons)

