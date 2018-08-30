---
title: Controlli Rich Edit infiniti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- bottomless rich edit controls
- rich edit controls [MFC], bottomless
- CRichEditCtrl class [MFC], bottomless
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c9e3115000b7b45d9b48a1ac0d274eb32c11f4d0
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43218879"
---
# <a name="bottomless-rich-edit-controls"></a>Controlli Rich Edit infiniti
L'applicazione può ridimensionare un controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) in base alle esigenze, in modo che sia sempre le stesse dimensioni del relativo contenuto. Un controllo rich edit supporta la cosiddetta funzionalità "infinita" tramite l'invio alla finestra padre un' [EN_REQUESTRESIZE](/windows/desktop/Controls/en-requestresize) messaggio di notifica ogni volta che cambiano le dimensioni del relativo contenuto.  
  
 Durante l'elaborazione di **EN_REQUESTRESIZE** messaggio di notifica di un'applicazione deve ridimensionare il controllo per le dimensioni di specificato [REQRESIZE](/windows/desktop/api/richedit/ns-richedit-_reqresize) struttura. Un'applicazione potrebbe inoltre spostare qualsiasi informazione vicino al controllo per adattarsi alla modifica dell'altezza del controllo. Per ridimensionare il controllo, è possibile usare la `CWnd` funzione [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos).  
  
 È possibile forzare un controllo rich edit per inviare un' **EN_REQUESTRESIZE** messaggio di notifica tramite il [RequestResize](../mfc/reference/cricheditctrl-class.md#requestresize) funzione membro. Questo messaggio può essere utile per la [OnSize](../mfc/reference/cwnd-class.md#onsize) gestore.  
  
 Per ricevere **EN_REQUESTRESIZE** dei messaggi di notifica, è necessario abilitare la notifica tramite il `SetEventMask` funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

