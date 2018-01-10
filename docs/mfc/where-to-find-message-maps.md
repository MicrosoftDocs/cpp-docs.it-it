---
title: Dove trovare le mappe messaggi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- macros, message map
- locating message maps
- message classes [MFC], finding
- message-map macros
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6fa0b0b31d76c55851d69f4c528f11e7d23ff0d9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="where-to-find-message-maps"></a>Dove trovare le mappe messaggi
Quando si crea una nuova applicazione di base con la creazione guidata applicazione, la creazione guidata applicazione scrive una mappa messaggi per ogni classe di destinazione comando che viene creato automaticamente. Ciò include l'applicazione derivata, documento, visualizzazione e classi finestra cornice. Alcune di queste mappe messaggi già le voci fornite per la creazione guidata applicazione per alcuni messaggi e comandi predefiniti e alcuni sono semplicemente segnaposto per i gestori che verrà aggiunto.  
  
 Mappa dei messaggi di una classe si trova nel. File CPP della classe. Utilizzo con le mappe messaggi di base che crea la creazione guidata applicazione, utilizzare la finestra proprietà per aggiungere voci per i comandi che consente di gestire ciascuna classe e i messaggi. Dopo l'aggiunta di alcune voci, una tipica mappa dei messaggi potrebbe essere simile al seguente:  
  
 [!code-cpp[NVC_MFCMessageHandling#1](../mfc/codesnippet/cpp/where-to-find-message-maps_1.cpp)]  
  
 La mappa dei messaggi è costituito da una raccolta di macro. Le due macro [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) e [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map), la mappa dei messaggi. Altre macro, ad esempio `ON_COMMAND`, inserire il contenuto della mappa messaggi.  
  
> [!NOTE]
>  Le macro di mappa dei messaggi non sono seguite da un punto e virgola.  
  
 Quando si utilizza la procedura guidata Aggiungi classe per creare una nuova classe, viene fornita una mappa messaggi per la classe. In alternativa, è possibile creare una mappa messaggi manualmente utilizzando l'editor del codice sorgente.  
  
## <a name="see-also"></a>Vedere anche  
 [Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)

