---
title: "Controlli ActiveX MFC: aggiunta di metodi personalizzati | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC (controlli ActiveX), metodi"
  - "PtInCircle (metodo personalizzato)"
ms.assetid: 8f8dc344-44a0-4021-8db5-4cdd3d700e18
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: aggiunta di metodi personalizzati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I metodi personalizzati sono diversi dai metodi predefiniti in quanto non sono implementati da `COleControl`.  È necessario fornire l'implementazione per ogni metodo che personalizzato aggiunto al controllo.  
  
 Un utente del controllo ActiveX può chiamare un metodo personalizzato in qualsiasi momento per eseguire azioni specifiche.  La voce della mappa di invio per i metodi personalizzati è espresso in formato `DISP_FUNCTION`.  
  
##  <a name="_core_adding_a_custom_method_with_classwizard"></a> Aggiunta di un metodo personalizzato con l'aggiunta guidata metodo  
 La procedura riportata di seguito viene illustrato come aggiungere un metodo personalizzato PtInCircle al codice di base di un controllo ActiveX.  PtInCircle determina se le coordinate passate al controllo sono all'interno del controllo circle.  Questa procedura può essere utilizzata per aggiungere altri metodi personalizzati.  Sostituire il nome del metodo personalizzato e i relativi parametri per il metodo e i parametri di PtInCircle.  
  
> [!NOTE]
>  In questo esempio viene utilizzata la funzione di `InCircle` dagli eventi dell'articolo.  Per ulteriori informazioni su questa funzione, vedere l'articolo [Controlli ActiveX MFC: Aggiunta di eventi personalizzati a un controllo ActiveX](../mfc/mfc-activex-controls-adding-custom-events.md).  
  
#### Per aggiungere il metodo personalizzato di PtInCircle mediante l'aggiunta guidata metodo  
  
1.  Caricare il progetto di controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, scegliere **Aggiungi** quindi scegliere **Aggiungi metodo**.  
  
     Verrà avviata l'aggiunta guidata metodo.  
  
5.  Nella casella di **Nome metodo**, digitare `PtInCircle`.  
  
6.  Nella casella di **Nome interno**, digitare il nome della funzione interna del metodo o utilizzare il valore predefinito \(in questo caso, `PtInCircle`\).  
  
7.  Nella casella di **Tipo restituito**, fare clic **VARIANT\_BOOL** per il tipo restituito del metodo.  
  
8.  Utilizzando i controlli di **Nome parametro** e di **Tipo parametro**, aggiungere un parametro denominato `xCoord` \(tipo **OLE\_XPOS\_PIXELS**\).  
  
9. Utilizzando i controlli di **Nome parametro** e di **Tipo parametro**, aggiungere un parametro denominato `yCoord` \(tipo **OLE\_YPOS\_PIXELS**\).  
  
10. Scegliere **Fine**.  
  
##  <a name="_core_classwizard_changes_for_custom_methods"></a> Modifiche dell'Aggiunta guidata metodo per i metodi personalizzati  
 Quando si aggiunge un metodo personalizzato, l'aggiunta guidata metodo esegue alcune modifiche all'intestazione della classe del controllo \(. H\) e file di implementazione \(.CPP\).  La riga seguente viene aggiunta alla dichiarazione della mappa di invio nell'intestazione della classe del controllo \(. H\) file:  
  
 [!code-cpp[NVC_MFC_AxUI#18](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-methods_1.h)]  
  
 Questo codice dichiara un metodo `PtInCircle`chiamato gestore di invio.  Questa funzione può essere chiamata dall'utente del controllo mediante il nome esterno PtInCircle.  
  
 La riga seguente viene aggiunta del file .IDL del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#19](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-methods_2.idl)]  
  
 Questa riga assegna al metodo di PtInCircle un numero ID specifici, la posizione del metodo nei metodi di Aggiunta guidata metodo e l'elenco delle proprietà.  Poiché l'aggiunta guidata metodo è stata utilizzata per aggiungere il metodo personalizzato, la voce che è stata aggiunta automaticamente al file .IDL del progetto.  
  
 Inoltre, la riga seguente, che si trova nel file di implementazione \(.CPP\) della classe del controllo, viene aggiunto alla mappa di invio del controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#20](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-methods_3.cpp)]  
  
 La macro di `DISP_FUNCTION` esegue il mapping del metodo PtInCircle alla funzione di controllo, `PtInCircle`, dichiara il tipo restituito per essere **VARIANT\_BOOL** e dichiara due parametri di tipo **VTS\_XPOS\_PIXELS**  e **VTS\_YPOSPIXELS** per passare a `PtInCircle`.  
  
 Infine, l'aggiunta guidata metodo aggiunge la funzione `CSampleCtrl::PtInCircle` stub alla fine del file di implementazione del controllo \(.CPP\).  Per `PtInCircle` funzioni come indicato in precedenza, deve essere modificato come segue:  
  
 [!code-cpp[NVC_MFC_AxUI#21](../mfc/codesnippet/CPP/mfc-activex-controls-adding-custom-methods_4.cpp)]  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Icone di Visualizzazione classi e Visualizzatore oggetti](../Topic/Class%20View%20and%20Object%20Browser%20Icons.md)