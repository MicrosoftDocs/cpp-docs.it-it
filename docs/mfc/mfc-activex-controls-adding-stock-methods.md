---
title: 'Controlli ActiveX MFC: Aggiunta di metodi predefiniti | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: f02712f3df56bf2fc04fba736f28931250f7bcb8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="mfc-activex-controls-adding-stock-methods"></a>Controlli ActiveX MFC: aggiunta di metodi predefiniti
Un metodo è diverso da un metodo personalizzato che si è già implementato dalla classe [COleControl](../mfc/reference/colecontrol-class.md). Ad esempio, `COleControl` contiene una funzione membro predefinite che supporta il metodo di aggiornamento per il controllo. La voce della mappa di invio per questo metodo è **DISP_STOCKFUNC_REFRESH**.  
  
 `COleControl` supporta due metodi predefiniti: DoClick e l'aggiornamento. L'aggiornamento viene richiamato dall'utente del controllo per aggiornare immediatamente l'aspetto del controllo. DoClick viene richiamato per l'attivazione scegliere del controllo eventi.  
  
|Metodo|Voce della mappa di invio|Commento|  
|------------|------------------------|-------------|  
|`DoClick`|**DISP_STOCKPROP_DOCLICK)**|Viene generato un evento Click.|  
|**Aggiorna**|**DISP_STOCKPROP_REFRESH)**|Aggiorna immediatamente l'aspetto del controllo.|  
  
##  <a name="_core_adding_a_stock_method_using_classwizard"></a> Aggiunta di un metodo tramite l'aggiunta guidata metodo  
 Aggiunta di un metodo è semplice tramite il [Aggiunta guidata metodo](../ide/add-method-wizard.md). La procedura seguente viene illustrato come aggiungere il metodo di aggiornamento a un controllo creato mediante Creazione guidata controllo ActiveX MFC.  
  
#### <a name="to-add-the-stock-refresh-method-using-the-add-method-wizard"></a>Per aggiungere il metodo di aggiornamento predefinito tramite l'aggiunta guidata metodo  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi metodo**.  
  
     Verrà visualizzata l'aggiunta guidata metodo.  
  
5.  Nel **nome del metodo** fare clic su **aggiornamento**.  
  
6.  Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_stock_methods"></a> Aggiunta guidata del metodo viene modificato per metodi predefiniti  
 Poiché il metodo di aggiornamento predefinito è supportato dalla classe di base del controllo, il **Aggiunta guidata metodo** non modifica la dichiarazione di classe del controllo in alcun modo. Viene aggiunta una voce per il metodo alla mappa di invio del controllo e al relativo. File IDL. La riga seguente viene aggiunto alla mappa di invio del controllo, si trova nella sua implementazione (. File CPP):  
  
 [!code-cpp[NVC_MFC_AxUI#16](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-methods_1.cpp)]  
  
 In questo modo il metodo di aggiornamento disponibili per gli utenti del controllo.  
  
 La riga seguente viene aggiunto al controllo. File IDL:  
  
 [!code-cpp[NVC_MFC_AxUI#17](../mfc/codesnippet/cpp/mfc-activex-controls-adding-stock-methods_2.idl)]  
  
 Questa riga assegna il metodo di aggiornamento di un numero di ID.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

