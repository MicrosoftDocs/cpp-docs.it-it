---
title: Test di una finestra di dialogo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Test Dialog command
- testing, dialog boxes
- dialog boxes, testing
ms.assetid: 45034ee9-c554-4f4b-8c46-6ddefdee8951
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cf9e5e24e77a14b3baf86c1b83d653dd833ebbbb
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652070"
---
# <a name="testing-a-dialog-box"></a>Verifica di una finestra di dialogo
Quando si progetta una finestra di dialogo, è possibile simularne e verificarne il comportamento in fase di esecuzione senza compilare il programma. In questo modo è possibile:  
  
-   Digitare un testo, selezionare elementi dagli elenchi della casella combinata, attivare o disattivare le opzioni e scegliere i comandi.  
  
-   Testare l'ordine di tabulazione.  
  
-   Verificare il raggruppamento di controlli, quali pulsanti di opzione e caselle di controllo.  
  
-   Verificare i tasti di scelta rapida per i controlli nella finestra di dialogo.  
  
    > [!NOTE]
    >  Le connessioni al codice della finestra di dialogo effettuate tramite le procedure guidate non vengono incluse nella simulazione.  
  
 Durante la verifica di una finestra di dialogo, la posizione in cui quest'ultima viene visualizzata è in genere relativa alla finestra principale del programma. Se è stata impostata la finestra di dialogo **Absolute Align** proprietà **True**, la finestra di dialogo vengono visualizzati in una posizione esterna rispetto all'angolo superiore sinistro della schermata.  
  
### <a name="to-test-a-dialog-box"></a>Per testare una finestra di dialogo  
  
1.  Quando l'editor finestre è la finestra attiva, sulla barra dei menu scegliere **Formato**, **Verifica finestra di dialogo**.  
  
2.  Per terminare la simulazione, premere **Esc**, oppure sceglierne le **Chiudi** pulsante nella finestra di dialogo si sta testando.  
  
 Per informazioni su come aggiungere risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Editor finestre](../windows/dialog-editor.md)   
 [Attivazione o disattivazione della visualizzazione della barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md)