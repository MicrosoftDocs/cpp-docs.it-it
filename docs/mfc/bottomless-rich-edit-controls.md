---
title: Controlli Rich Edit infiniti
ms.date: 11/04/2016
helpviewer_keywords:
- bottomless rich edit controls
- rich edit controls [MFC], bottomless
- CRichEditCtrl class [MFC], bottomless
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
ms.openlocfilehash: 567bb5b7f2eb2c203b40b9f1f6add82f5451d672
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616428"
---
# <a name="bottomless-rich-edit-controls"></a>Controlli Rich Edit infiniti

L'applicazione può ridimensionare un controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) in base alle esigenze, in modo da avere sempre le stesse dimensioni del contenuto. Un controllo Rich Edit supporta questa funzionalità cosiddetta "senza fondo" inviando la finestra padre di un messaggio di notifica [EN_REQUESTRESIZE](/windows/win32/Controls/en-requestresize) ogni volta che viene modificata la dimensione del contenuto.

Quando si elabora il messaggio di notifica di **EN_REQUESTRESIZE** , un'applicazione deve ridimensionare il controllo alle dimensioni nella struttura [REQRESIZE](/windows/win32/api/richedit/ns-richedit-reqresize) specificata. Un'applicazione potrebbe inoltre spostare qualsiasi informazione vicino al controllo per adattarsi alla modifica dell'altezza del controllo. Per ridimensionare il controllo, è possibile usare la `CWnd` funzione [SetWindowPos](reference/cwnd-class.md#setwindowpos).

È possibile forzare un controllo Rich Edit senza fondo per inviare un messaggio di notifica **EN_REQUESTRESIZE** tramite la funzione membro [REQUESTRESIZE](reference/cricheditctrl-class.md#requestresize) . Questo messaggio può essere utile nel gestore [OnSize](reference/cwnd-class.md#onsize) .

Per ricevere **EN_REQUESTRESIZE** messaggi di notifica, è necessario abilitare la notifica tramite la `SetEventMask` funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
