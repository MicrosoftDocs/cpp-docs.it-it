---
title: "Controlli ActiveX MFC: aggiunta di metodi predefiniti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DoClick (metodo)"
  - "MFC (controlli ActiveX), metodi"
  - "MFC (controlli ActiveX), metodi standard"
ms.assetid: bc4fad78-cabd-4cc0-a798-464b1a682f0b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: aggiunta di metodi predefiniti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un metodo predefinito si differenzia da un metodo personalizzato in quanto è già implementato dalla classe [COleControl](../mfc/reference/colecontrol-class.md).  Ad esempio, `COleControl` contiene una funzione membro predefinita che supporta il metodo aggiorna per il controllo.  La voce della mappa di invio per questo metodo predefinito consiste **DISP\_STOCKFUNC\_REFRESH**.  
  
 supporto di`COleControl` due metodi predefiniti: DoClick e aggiorna.  L'aggiornamento viene richiamato dall'utente del controllo immediato per aggiornare l'aspetto del controllo; DoClick viene richiamato per generare l'evento Click del controllo.  
  
|Metodo|Voce di mapping di invio|Commento|  
|------------|------------------------------|--------------|  
|`DoClick`|**DISP\_STOCKPROP\_DOCLICK\( \)**|Genera un evento Click.|  
|**Aggiorna**|**DISP\_STOCKPROP\_REFRESH\( \)**|Aggiorna immediatamente l'aspetto del controllo.|  
  
##  <a name="_core_adding_a_stock_method_using_classwizard"></a> Aggiunta di un metodo predefinito tramite Aggiunta guidata metodo  
 L'aggiunta del metodo predefinito è semplice mediante [Aggiunta guidata metodo](../ide/add-method-wizard.md).  La procedura riportata di seguito viene illustrato come aggiungere un metodo di aggiornamento in un controllo creato mediante la Creazione guidata controllo ActiveX MFC.  
  
#### Per aggiungere le azioni aggiornare il metodo tramite Aggiunta guidata metodo  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, scegliere **Aggiungi** quindi scegliere **Aggiungi metodo**.  
  
     Verrà avviata l'aggiunta guidata metodo.  
  
5.  Nella casella di **Nome metodo**, fare clic **Aggiorna**.  
  
6.  Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_stock_methods"></a> Modifiche dell'Aggiunta guidata metodo per i metodi predefiniti  
 Poiché le azioni aggiorna il metodo è supportato dalla classe di base control, **Aggiunta guidata metodo** non modifica la dichiarazione della classe del controllo in alcun modo.  Aggiunge una voce per il metodo alla mappa di invio di un controllo e il relativo file di .IDL.  La riga seguente viene aggiunta alla mappa di invio del controllo, che si trova nel file di implementazione \(.CPP\):  
  
 [!code-cpp[NVC_MFC_AxUI#16](../mfc/codesnippet/CPP/mfc-activex-controls-adding-stock-methods_1.cpp)]  
  
 Ciò rende disponibile il metodo aggiorna gli utenti del controllo.  
  
 La riga seguente viene aggiunta del file .IDL del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#17](../mfc/codesnippet/CPP/mfc-activex-controls-adding-stock-methods_2.idl)]  
  
 Questa riga assegna al metodo aggiorna un numero ID specifici.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)