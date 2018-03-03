---
title: Controlli Rich Edit infiniti | Documenti Microsoft
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
- bottomless rich edit controls
- rich edit controls [MFC], bottomless
- CRichEditCtrl class [MFC], bottomless
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f8a92b180ed44937c29cd880dea7439e0cfe20b6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="bottomless-rich-edit-controls"></a>Controlli Rich Edit infiniti
L'applicazione può ridimensionare un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) in base alle esigenze in modo che sia sempre la stessa dimensione del relativo contenuto. Un controllo rich edit supporta questa funzionalità "infinita" cosiddetta inviando la relativa finestra padre un [EN_REQUESTRESIZE](http://msdn.microsoft.com/library/windows/desktop/bb787983) messaggio di notifica ogni volta che cambiano le dimensioni del relativo contenuto.  
  
 Durante l'elaborazione di **EN_REQUESTRESIZE** messaggio di notifica, un'applicazione deve ridimensionare il controllo per le dimensioni di specificato [REQRESIZE](http://msdn.microsoft.com/library/windows/desktop/bb787950) struttura. Un'applicazione potrebbe inoltre spostare qualsiasi informazione vicino al controllo per adattarsi alla modifica dell'altezza del controllo. Per ridimensionare il controllo, è possibile utilizzare il `CWnd` funzione [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos).  
  
 È possibile forzare un controllo di rich edit infiniti per inviare un **EN_REQUESTRESIZE** messaggio di notifica tramite il [RequestResize](../mfc/reference/cricheditctrl-class.md#requestresize) funzione membro. Questo messaggio può essere utile il [OnSize](../mfc/reference/cwnd-class.md#onsize) gestore.  
  
 Per ricevere **EN_REQUESTRESIZE** messaggi di notifica, è necessario abilitare la notifica tramite il `SetEventMask` funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

