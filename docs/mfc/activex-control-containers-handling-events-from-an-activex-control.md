---
title: 'Contenitori di controlli ActiveX: Gestione degli eventi da un controllo ActiveX | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- event handlers [MFC], ActiveX controls
- ActiveX control containers [MFC], event sinks
- event handling [MFC], ActiveX controls
- ON_EVENT macro [MFC]
- ActiveX controls [MFC], events [MFC]
- END_EVENTSINK_MAP macro, using
- events [MFC], ActiveX controls
- BEGIN_EVENTSINK_MAP macro
ms.assetid: f9c106db-052f-4e32-82ad-750646aa760b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3a3844788330cfe79366221ee215c437fc4aefc8
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930661"
---
# <a name="activex-control-containers-handling-events-from-an-activex-control"></a>Contenitori di controlli ActiveX: gestione di eventi da un controllo ActiveX
Questo articolo viene illustrato l'utilizzo della finestra proprietà per installare i gestori eventi per i controlli ActiveX in un contenitore di controlli ActiveX. I gestori eventi vengono utilizzati per ricevere le notifiche (dal controllo) di determinati eventi ed eseguire un'azione in risposta. Questa notifica viene chiamata "generazione" l'evento.  
  
> [!NOTE]
>  Questo articolo viene utilizzata un finestra di dialogo progetto basato su ActiveX controllo contenitore denominato contenitore e un controllo incorporato denominato Circ come esempi di procedure e codice.  
  
 Usando il pulsante eventi nella finestra Proprietà, è possibile creare una mappa di eventi che possono verificarsi nell'applicazione contenitore di controlli ActiveX. Questa mappa, denominata 'evento sink mappa ', viene creata e gestita da Visual C++ quando si aggiungono i gestori eventi alla classe contenitore del controllo. Ogni gestore eventi, implementato con una voce della mappa di evento, esegue il mapping di un evento specifico per una funzione del membro contenitore gestore eventi. Questa funzione del gestore eventi viene chiamata quando viene generato l'evento specificato dall'oggetto controllo ActiveX.  
  
 Per ulteriori informazioni sulle mappe sink di evento, vedere [mappe Sink di evento](../mfc/reference/event-sink-maps.md) nel *libreria di classi*.  
  
##  <a name="_core_event_handler_modifications_to_the_project"></a> Modifiche del gestore eventi per il progetto  
 Quando si utilizza la finestra proprietà per aggiungere gestori eventi, una mappa del sink di evento è dichiarato e definito nel progetto. Le istruzioni seguenti vengono aggiunti al controllo. File CPP la prima volta che viene aggiunto un gestore eventi. Questo codice dichiara una mappa del sink di evento per la classe della finestra di dialogo (in questo caso, `CContainerDlg`):  
  
 [!code-cpp[NVC_MFC_AxCont#8](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_1.cpp)]  
[!code-cpp[NVC_MFC_AxCont#9](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_2.cpp)]  
  
 Quando si utilizza la finestra proprietà per aggiungere eventi, un evento voce della mappa (`ON_EVENT`) viene aggiunto alla mappa del sink di evento e un gestore eventi (funzione) viene aggiunto all'implementazione del contenitore (. File CPP).  
  
 L'esempio seguente viene dichiarato un gestore eventi, denominato `OnClickInCircCtrl`, per il controllo Circ `ClickIn` evento:  
  
 [!code-cpp[NVC_MFC_AxCont#10](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_3.cpp)]  
  
 Inoltre, il modello seguente viene aggiunto per il `CContainerDlg` implementazione della classe (. File CPP) per la funzione membro del gestore eventi:  
  
 [!code-cpp[NVC_MFC_AxCont#11](../mfc/codesnippet/cpp/activex-control-containers-handling-events-from-an-activex-control_4.cpp)]  
  
 Per ulteriori informazioni sulle macro sink di evento, vedere [mappe Sink di evento](../mfc/reference/event-sink-maps.md) nel *libreria di classi*.  
  
#### <a name="to-create-an-event-handler-function"></a>Per creare una funzione del gestore eventi  
  
1.  Dalla visualizzazione classi, selezionare la classe di finestra di dialogo che contiene il controllo ActiveX. Per questo esempio, utilizzare `CContainerDlg`.  
  
2.  Nella finestra Proprietà, scegliere il **eventi** pulsante.  
  
3.  Nella finestra Proprietà, selezionare l'ID di controllo del controllo ActiveX incorporato. Per questo esempio, utilizzare `IDC_CIRCCTRL1`.  
  
     Finestra proprietà consente di visualizzare un elenco di eventi che possono essere attivati da controllo ActiveX incorporato. Qualsiasi funzione membro visualizzato in grassetto già dispone di funzioni di gestione assegnate.  
  
4.  Selezionare l'evento che si desidera che la classe di finestra di dialogo per la gestione. Per questo esempio, selezionare **fare clic su**.  
  
5.  Dalla casella di riepilogo a destra, selezionare  **\<Aggiungi > ClickCircctrl1**.  
  
6.  Fare doppio clic su nuova funzione di gestione da Visualizzazione classi per passare al codice del gestore eventi nell'implementazione (. I file CPP) di `CContainerDlg`.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

