---
title: "Contenitori di controlli ActiveX: gestione di eventi da un controllo ActiveX | Microsoft Docs"
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
  - "contenitori dei controlli ActiveX [C++], sink di evento"
  - "ActiveX (controlli) [C++], eventi"
  - "BEGIN_EVENTSINK_MAP (macro)"
  - "END_EVENTSINK_MAP (macro), utilizzo"
  - "gestori eventi [C++], controlli ActiveX"
  - "gestione eventi [C++], controlli ActiveX"
  - "eventi (C++), controlli ActiveX"
  - "ON_EVENT (macro)"
ms.assetid: f9c106db-052f-4e32-82ad-750646aa760b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Contenitori di controlli ActiveX: gestione di eventi da un controllo ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come utilizzare la Finestra Proprietà per configurare i gestori eventi per i controlli ActiveX in un contenitore di controlli ActiveX.  I gestori eventi vengono utilizzati per ricevere le notifiche \(dal controllo\) di determinati eventi e per eseguire un'azione nella risposta.  Questa notifica viene chiamata l'esempio l'attivazione l'evento.  
  
> [!NOTE]
>  In questo articolo viene utilizzato un progetto a finestre contenitore di controlli ActiveX denominato Container e un controllo incorporato denominato Circ ad esempio nelle procedure e nel codice.  
  
 Utilizzando il pulsante Eventi nella Finestra Proprietà, è possibile creare una mappa di eventi che possono verificarsi nell'applicazione contenitore di controlli ActiveX.  Questa mappa, denominata "una mappa del sink di eventi," viene creato e gestito da Visual C\+\+ quando si aggiungono gestori eventi alla classe del contenitore di controlli.  Ogni gestore eventi, implementato con una voce della mappa eventi, esegue il mapping di un evento specifico a una funzione membro del gestore eventi del contenitore.  Questa funzione del gestore eventi viene chiamata quando l'evento specificato è generato dall'oggetto del controllo ActiveX.  
  
 Per ulteriori informazioni sulle mappe del sink di eventi, vedere [Mappe del sink di eventi](../mfc/reference/event-sink-maps.md)*in riferimenti alla libreria di classi*.  
  
##  <a name="_core_event_handler_modifications_to_the_project"></a> Modifiche del gestore eventi al progetto  
 Quando si utilizza la Finestra Proprietà per aggiungere gestori eventi, una mappa del sink di eventi è dichiarata e definita nel progetto.  Le istruzioni seguenti vengono aggiunte al file del controllo .CPP la prima volta un gestore eventi viene aggiunto.  Questo codice dichiara una mappa del sink di eventi della classe della finestra di dialogo \(in questo caso, `CContainerDlg`\):  
  
 [!code-cpp[NVC_MFC_AxCont#8](../mfc/codesnippet/CPP/activex-control-containers-handling-events-from-an-activex-control_1.cpp)]  
[!code-cpp[NVC_MFC_AxCont#9](../mfc/codesnippet/CPP/activex-control-containers-handling-events-from-an-activex-control_2.cpp)]  
  
 Quando si utilizza la Finestra Proprietà per aggiungere eventi, una voce della mappa eventi \(`ON_EVENT`\) viene aggiunto alla mappa del sink di eventi e una funzione del gestore eventi viene aggiunto al file di implementazione del contenitore \(.CPP\).  
  
 Nell'esempio seguente viene dichiarato un gestore eventi, denominato `OnClickInCircCtrl`, per l'evento di **ClickIn** del controllo di Circ:  
  
 [!code-cpp[NVC_MFC_AxCont#10](../mfc/codesnippet/CPP/activex-control-containers-handling-events-from-an-activex-control_3.cpp)]  
  
 Inoltre, il modello viene aggiunto al file di implementazione della classe di `CContainerDlg` \(.CPP\) per la funzione membro gestore eventi:  
  
 [!code-cpp[NVC_MFC_AxCont#11](../mfc/codesnippet/CPP/activex-control-containers-handling-events-from-an-activex-control_4.cpp)]  
  
 Per ulteriori informazioni sulle macro del sink di evento, vedere [Mappe del sink di eventi](../mfc/reference/event-sink-maps.md)*in riferimenti alla libreria di classi*.  
  
#### Per creare una funzione del gestore eventi  
  
1.  In Visualizzazione classi, selezionare la classe della finestra di dialogo contenente il controllo ActiveX.  Per questo esempio, utilizzare `CContainerDlg`.  
  
2.  Nella finestra Proprietà fare clic sul pulsante **Eventi**.  
  
3.  Nella Finestra Proprietà, selezionare l'id del controllo ActiveX incorporato.  Per questo esempio, utilizzare `IDC_CIRCCTRL1`.  
  
     Nella Finestra Proprietà verrà visualizzato un elenco di eventi che possono essere generati dal controllo ActiveX incorporato.  Qualsiasi funzione membro visualizzata in grassetto dispone già di funzioni di gestione assegnate.  
  
4.  Selezionare l'evento desiderato la classe della finestra di dialogo per gestire.  Per questo esempio, **Clic**selezionato.  
  
5.  Nell'elenco a discesa a destra, selezionare **\<Add\> ClickCircctrl1**.  
  
6.  Fare doppio clic su nuova funzione di gestione da Visualizzazione classi per passare al codice del gestore eventi nel file di implementazione \(.CPP\) di `CContainerDlg`.  
  
## Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)