---
title: 'Controlli ActiveX MFC: Eventi | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], events
- notifications [MFC], notifying containers of events
- custom events [MFC], adding to ActiveX controls
- events [MFC], mapping
- COleControl class [MFC], handling of events
- mappings [MFC], events
- stock events [MFC]
- container events [MFC]
- events [MFC], ActiveX controls
- OLE events [MFC]
ms.assetid: e1e57e0c-206b-4923-a0b5-682c26564f74
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 3903be230f130aeaeb1953faf73a0c8af4c3492f
ms.openlocfilehash: f4e6cfc21a12288a53eca391eccb86bb4ea3ff55
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="mfc-activex-controls-events"></a>Controlli ActiveX MFC: eventi
Controlli ActiveX utilizzano eventi per notificare a un contenitore in cui è avvenuto qualcosa al controllo. Esempi comuni di eventi includono clic sul controllo, i dati immessi utilizzando la tastiera e le modifiche nello stato del controllo. Quando si verificano queste azioni, il controllo genera un evento per generare un avviso del contenitore.  
  
 Gli eventi vengono chiamati anche i messaggi.  
  
 MFC supporta due tipi di eventi: predefinite e personalizzate. Eventi predefiniti sono gli eventi che classe [COleControl](../mfc/reference/colecontrol-class.md) gestisce automaticamente. Per un elenco completo di eventi predefiniti, vedere l'articolo [controlli ActiveX MFC: aggiunta di eventi predefiniti](../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md). Eventi personalizzati consentono un controllo di notificare al contenitore quando si verifica un'azione specifica a tale controllo. Alcuni esempi possono essere una modifica lo stato interno di un controllo o la ricezione di un determinato messaggio della finestra.  
  
 Per il controllo generare eventi in modo corretto, la classe di controllo necessario eseguire il mapping di ogni evento del controllo a una funzione membro che deve essere chiamata quando si verifica l'evento correlato. Questo meccanismo di mapping (chiamato mappa eventi) centralizza le informazioni sull'evento e consente a Visual Studio per facilmente accedere e modificare gli eventi del controllo. Questa mappa di evento è dichiarata dalla macro seguente, si trova nell'intestazione (. H) file della dichiarazione di classe di controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#2](../mfc/codesnippet/cpp/mfc-activex-controls-events_1.h)]  
  
 La mappa eventi è stata dichiarata, deve essere definito nell'implementazione del controllo (. File CPP). Le righe di codice seguenti definiscono la mappa di eventi, consentendo al controllo di generare eventi specifici:  
  
 [!code-cpp[NVC_MFC_AxUI#3](../mfc/codesnippet/cpp/mfc-activex-controls-events_2.cpp)]  
[!code-cpp[NVC_MFC_AxUI#4](../mfc/codesnippet/cpp/mfc-activex-controls-events_3.cpp)]  
  
 Se si utilizza Creazione guidata controllo ActiveX MFC per creare il progetto, viene aggiunta automaticamente queste righe. Se non si utilizza Creazione guidata controllo ActiveX MFC, è necessario aggiungere manualmente queste righe.  
  
 In visualizzazione classi, è possibile aggiungere eventi predefiniti supportati dalla classe `COleControl` o gli eventi personalizzati definiti. Per ogni nuovo evento, Visualizzazione classi aggiunge automaticamente la voce corretta mappa eventi del controllo e il controllo. File IDL.  
  
 Questa sezione illustra gli eventi in modo dettagliato altri due articoli:  
  
-   [Controlli ActiveX MFC: Aggiunta di eventi predefiniti](../mfc/mfc-activex-controls-adding-stock-events-to-an-activex-control.md)  
  
-   [Controlli ActiveX MFC: aggiunta di eventi personalizzati](../mfc/mfc-activex-controls-adding-custom-events.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC: metodi](../mfc/mfc-activex-controls-methods.md)   
 [Classe COleControl](../mfc/reference/colecontrol-class.md)

