---
title: Utilizzo di una barra di finestra di dialogo con un controllo Rebar | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- WM_EX_TRANSPARENT
dev_langs:
- C++
helpviewer_keywords:
- WS_EX_TRANSPARENT style
- rebar controls [MFC], dialog bars
- dialog bars [MFC], using with rebar bands
ms.assetid: e528cea0-6b81-4bdf-9643-7c03b6176590
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bd4eb47da7c3866e01ee563b9f6b42fa21ada109
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-a-dialog-bar-with-a-rebar-control"></a>Utilizzo di una barra di finestra di dialogo con un controllo Rebar
Come accennato [controlli Rebar e bande](../mfc/rebar-controls-and-bands.md), ogni band può contenere un solo figlio finestra (o controllo). Potrebbe trattarsi di una limitazione se si desidera disporre di più di una finestra figlio per ogni banda. Una pratica soluzione alternativa consiste nel creare una risorsa barra di finestra di dialogo con più controlli e quindi aggiungere un controllo rebar band (che include la barra di finestra di dialogo) per il controllo rebar.  
  
 In genere, se si desidera che la finestra di dialogo barra trasparente, impostare il **WS_EX_TRANSPARENT** extended style per l'oggetto barra di finestra di dialogo. Tuttavia, poiché **WS_EX_TRANSPARENT** presenta alcuni problemi con il disegno dello sfondo di una barra di finestra di dialogo, è necessario eseguire un lavoro supplementare per ottenere l'effetto desiderato.  
  
 La procedura seguente illustra in dettaglio i passaggi necessari per ottenere la trasparenza senza utilizzare il **WS_EX_TRANSPARENT** stile esteso.  
  
### <a name="to-implement-a-transparent-dialog-bar-in-a-rebar-band"></a>Per implementare una barra di finestra di dialogo trasparente in un controllo rebar band  
  
1.  Utilizzo di [la finestra di dialogo Aggiungi classe](../mfc/reference/adding-an-mfc-class.md), aggiungere una nuova classe (ad esempio, `CMyDlgBar`) che implementa l'oggetto barra di finestra di dialogo.  
  
2.  Aggiungere un gestore per il `WM_ERASEBKGND` messaggio.  
  
3.  Nel gestore di nuovo, modificare il codice esistente affinché corrisponda all'esempio seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#29](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_1.cpp)]  
  
4.  Aggiungere un gestore per il `WM_MOVE` messaggio.  
  
5.  Nel gestore di nuovo, modificare il codice esistente affinché corrisponda all'esempio seguente:  
  
     [!code-cpp[NVC_MFCControlLadenDialog#30](../mfc/codesnippet/cpp/using-a-dialog-bar-with-a-rebar-control_2.cpp)]  
  
 I nuovi gestori per simulare la trasparenza della barra della finestra di dialogo inoltro il `WM_ERASEBKGND` messaggio alla finestra padre e la forzatura di un aggiornamento ogni volta che viene spostato l'oggetto barra di finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

