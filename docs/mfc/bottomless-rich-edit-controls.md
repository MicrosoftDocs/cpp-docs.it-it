---
title: Controlli Rich Edit infiniti
ms.date: 11/04/2016
helpviewer_keywords:
- bottomless rich edit controls
- rich edit controls [MFC], bottomless
- CRichEditCtrl class [MFC], bottomless
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
ms.openlocfilehash: d5650d34ffc350444061aa6147c38af016458811
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68915263"
---
# <a name="bottomless-rich-edit-controls"></a>Controlli Rich Edit infiniti

L'applicazione può ridimensionare un controllo Rich Edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) in base alle esigenze, in modo da avere sempre le stesse dimensioni del contenuto. Un controllo Rich Edit supporta questa funzionalità cosiddetta "senza fondo" inviando la finestra padre di un messaggio di notifica [EN_REQUESTRESIZE](/windows/desktop/Controls/en-requestresize) ogni volta che viene modificata la dimensione del contenuto.

Quando si elabora il messaggio di notifica **EN_REQUESTRESIZE** , un'applicazione deve ridimensionare il controllo alle dimensioni nella struttura [REQRESIZE](/windows/desktop/api/richedit/ns-richedit-reqresize) specificata. Un'applicazione potrebbe inoltre spostare qualsiasi informazione vicino al controllo per adattarsi alla modifica dell'altezza del controllo. Per ridimensionare il controllo, è possibile usare `CWnd` la funzione [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos).

È possibile forzare un controllo Rich Edit senza fondo per inviare un messaggio di notifica **EN_REQUESTRESIZE** usando la funzione membro [REQUESTRESIZE](../mfc/reference/cricheditctrl-class.md#requestresize) . Questo messaggio può essere utile nel gestore [OnSize](../mfc/reference/cwnd-class.md#onsize) .

Per ricevere i messaggi di notifica **EN_REQUESTRESIZE** , è necessario abilitare la notifica tramite `SetEventMask` la funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
