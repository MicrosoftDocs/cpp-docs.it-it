---
title: Finestre di dialogo modali e non modali | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], modeless
- modeless dialog boxes [MFC]
- MFC dialog boxes [MFC], modal
- modal dialog boxes [MFC]
ms.assetid: e83df336-5994-4b8f-8233-7942f997315b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c4f03d67e1eb9962f4303694db4850e800151404
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="modal-and-modeless-dialog-boxes"></a>Finestre di dialogo modali e non modali
È possibile utilizzare una classe [CDialog](../mfc/reference/cdialog-class.md) per gestire due tipi di finestre di dialogo:  
  
-   *Finestre di dialogo modali*, che richiede all'utente di rispondere prima di continuare il programma  
  
-   *Finestre di dialogo non modale*, che rimangono sulla schermata e sono disponibili per l'utilizzo in qualsiasi momento, ma consentire attività utente  
  
 La modifica delle risorse e le procedure per la creazione di un modello di finestra di dialogo sono gli stessi per le finestre di dialogo modali e non.  
  
 La creazione di una finestra di dialogo per il programma richiede i passaggi seguenti:  
  
1.  Utilizzare il [editor finestre](../windows/dialog-editor.md) per progettare la finestra di dialogo e creare la risorsa modello di finestra di dialogo.  
  
2.  Creare una classe di finestra di dialogo.  
  
3.  Connettere il [controlli della risorsa finestra di dialogo per i gestori di messaggi](../windows/adding-event-handlers-for-dialog-box-controls.md) nella classe di finestra di dialogo.  
  
4.  Aggiungere i membri dati associati a controlli della finestra di dialogo e per specificare [DDX](../mfc/dialog-data-exchange.md) e [la convalida dei dati di finestra di dialogo](../mfc/dialog-data-validation.md) per i controlli.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

