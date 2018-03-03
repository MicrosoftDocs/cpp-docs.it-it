---
title: Impostazioni per CStatusBarCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CStatusBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- status bar controls [MFC], settings
- CStatusBarCtrl class [MFC], settings
ms.assetid: adeba0c3-17f3-435c-b140-a57845e9ce49
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 814c12b13333d589cb568c5c637f0fa34956847e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="settings-for-the-cstatusbarctrl"></a>Impostazioni per CStatusBarCtrl
La posizione predefinita di un [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) finestra di stato è nella parte inferiore della finestra padre, ma è possibile specificare il `CCS_TOP` stile affinché venga visualizzato nella parte superiore dell'area client della finestra padre.  
  
 È possibile specificare il **SBARS_SIZEGRIP** stile da un riquadro di ridimensionamento a destra di includere il `CStatusBarCtrl` finestra di stato. Un riquadro di ridimensionamento è simile a un bordo di ridimensionamento. è un'area rettangolare che l'utente può fare clic e trascinare per ridimensionare la finestra padre.  
  
> [!NOTE]
>  Se si combinano il `CCS_TOP` e **SBARS_SIZEGRIP** stili, il riquadro di ridimensionamento non è disponibile anche se viene disegnato nella finestra di stato.  
  
 Nella routine della finestra di stato imposta automaticamente le dimensioni iniziali e la posizione della finestra del controllo. La larghezza è uguale a quella dell'area client della finestra padre. L'altezza è basata sulle metriche del tipo di carattere attualmente selezionato nel contesto di dispositivo della finestra di stato e alla larghezza dei bordi della finestra.  
  
 La procedura della finestra Modifica automaticamente le dimensioni della finestra di stato ogni volta che riceve un `WM_SIZE` messaggio. In genere, quando cambiano le dimensioni della finestra padre, l'elemento padre invia un `WM_SIZE` messaggio nella finestra di stato.  
  
 È possibile impostare l'altezza minima dell'area di disegno di una finestra di stato chiamando [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight), che specifica l'altezza minima in pixel. L'area di disegno non include i bordi della finestra.  
  
 Per recuperare la larghezza dei bordi di una finestra di stato chiamando [GetBorders](../mfc/reference/cstatusbarctrl-class.md#getborders). Questa funzione membro include il puntatore a una matrice di tre elementi che riceve la larghezza del bordo orizzontale, verticale bordo e il bordo tra i rettangoli.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

