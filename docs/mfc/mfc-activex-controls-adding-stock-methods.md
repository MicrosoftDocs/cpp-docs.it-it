---
title: 'Controlli ActiveX MFC: Aggiunta di metodi predefiniti | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], stock methods
- MFC ActiveX controls [MFC], methods
- DoClick method [MFC]
ms.assetid: bc4fad78-cabd-4cc0-a798-464b1a682f0b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 604a095ab26abf4953d56786e00461cabd07e579
ms.sourcegitcommit: b4432d30f255f0cb58dce69cbc8cbcb9d44bc68b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/13/2018
ms.locfileid: "45534950"
---
# <a name="mfc-activex-controls-adding-stock-methods"></a>Controlli ActiveX MFC: aggiunta di metodi predefiniti
Un metodo è diverso da un metodo personalizzato in quanto si è già implementato dalla classe [COleControl](../mfc/reference/colecontrol-class.md). Ad esempio, `COleControl` contiene una funzione di membro predefinito che supporta il metodo di aggiornamento per il controllo. Voce della mappa di invio per questo metodo è DISP_STOCKFUNC_REFRESH.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).  
  
 `COleControl` supporta due metodi predefiniti: metodo predefinito DoClick e l'aggiornamento. L'aggiornamento viene richiamato dall'utente del controllo per aggiornare immediatamente l'aspetto del controllo. DoClick viene richiamato per l'attivazione fare clic su del controllo eventi.  
  
|Metodo|Voce della mappa di invio|Commento|  
|------------|------------------------|-------------|  
|`DoClick`|**DISP_STOCKPROP_DOCLICK)**|Genera un evento Click.|  
|`Refresh`|**DISP_STOCKPROP_REFRESH)**|Aggiorna immediatamente l'aspetto del controllo.|  
  
##  <a name="_core_adding_a_stock_method_using_classwizard"></a> Aggiunta di un metodo predefinito tramite l'aggiunta guidata metodo  
 Aggiunta di un metodo è semplice usando il [Aggiunta guidata metodo](../ide/add-method-wizard.md). La procedura seguente illustra come aggiungere il metodo di aggiornamento per un controllo creato mediante la creazione guidata controllo ActiveX MFC.  
  
#### <a name="to-add-the-stock-refresh-method-using-the-add-method-wizard"></a>Per aggiungere il metodo di aggiornamento predefinito tramite l'aggiunta guidata metodo  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi metodo**.  
  
     Verrà visualizzata l'aggiunta guidata metodo.  
  
5.  Nel **nome del metodo** fare clic su **aggiornare**.  
  
6.  Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_stock_methods"></a> Aggiunta guidata del metodo viene modificato per metodi predefiniti  
 Poiché il metodo di aggiornamento predefinito è supportato dalla classe di base del controllo, il **Aggiunta guidata metodo** non influisce in alcun modo dichiarazione di classe del controllo. Aggiunge una voce per il metodo per mappa di invio del controllo e al relativo. File IDL. La riga seguente viene aggiunto alla mappa di invio del controllo, situata nella propria implementazione (. File CPP):  
  
 [!code-cpp[NVC_MFC_AxUI#16](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-methods_1.cpp)]  
  
 Questo rende il metodo di aggiornamento disponibile per gli utenti del controllo.  
  
 La riga seguente viene aggiunto al controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxUI#17](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-methods_2.idl)]  
  
 Questa riga assegna il metodo di aggiornamento di un numero ID specifico.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

