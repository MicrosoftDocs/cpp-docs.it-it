---
title: Test di una finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Test Dialog command
- testing, dialog boxes
- dialog boxes, testing
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d81d288453e56acfb02a123075692b907d371578
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="testing-a-dialog-box"></a>Verifica di una finestra di dialogo
Quando si progetta una finestra di dialogo, è possibile simularne e verificarne il comportamento in fase di esecuzione senza compilare il programma. In questo modo è possibile:  
  
-   Digitare un testo, selezionare elementi dagli elenchi della casella combinata, attivare o disattivare le opzioni e scegliere i comandi.  
  
-   Testare l'ordine di tabulazione.  
  
-   Verificare il raggruppamento di controlli, quali pulsanti di opzione e caselle di controllo.  
  
-   Verificare i tasti di scelta rapida per i controlli nella finestra di dialogo.  
  
    > [!NOTE]
    >  Le connessioni al codice della finestra di dialogo effettuate tramite le procedure guidate non vengono incluse nella simulazione.  
  
 Durante la verifica di una finestra di dialogo, la posizione in cui quest'ultima viene visualizzata è in genere relativa alla finestra principale del programma. Se la proprietà Absolute Align della finestra di dialogo è stata impostata su True, la posizione in cui viene visualizzata la finestra di dialogo viene definita in base all'angolo superiore sinistro dello schermo.  
  
### <a name="to-test-a-dialog-box"></a>Per testare una finestra di dialogo  
  
1.  Quando l'editor finestre è la finestra attiva, sulla barra dei menu scegliere **Formato**, **Verifica finestra di dialogo**.  
  
2.  Per terminare la simulazione, premere ESC oppure scegliere il pulsante **Chiudi** nella finestra di dialogo da testare.  
  
 Per informazioni su come aggiungere risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Editor finestre](../windows/dialog-editor.md)   
 [Attivazione o disattivazione della visualizzazione della barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)

