---
description: 'Altre informazioni su: controlli Rich Edit senza fondo'
title: Controlli Rich Edit infiniti
ms.date: 11/04/2016
helpviewer_keywords:
- bottomless rich edit controls
- rich edit controls [MFC], bottomless
- CRichEditCtrl class [MFC], bottomless
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
ms.openlocfilehash: ad3f78fb4a5e172c16faf3421b6a9da91d422888
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339813"
---
# <a name="bottomless-rich-edit-controls"></a>Controlli Rich Edit infiniti

L'applicazione può ridimensionare un controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) in base alle esigenze, in modo da avere sempre le stesse dimensioni del contenuto. Un controllo Rich Edit supporta questa funzionalità cosiddetta "senza fondo" inviando la finestra padre di un messaggio di notifica [EN_REQUESTRESIZE](/windows/win32/Controls/en-requestresize) ogni volta che viene modificata la dimensione del contenuto.

Quando si elabora il messaggio di notifica di **EN_REQUESTRESIZE** , un'applicazione deve ridimensionare il controllo alle dimensioni nella struttura [REQRESIZE](/windows/win32/api/richedit/ns-richedit-reqresize) specificata. Un'applicazione potrebbe inoltre spostare qualsiasi informazione vicino al controllo per adattarsi alla modifica dell'altezza del controllo. Per ridimensionare il controllo, è possibile usare la `CWnd` funzione [SetWindowPos](reference/cwnd-class.md#setwindowpos).

È possibile forzare un controllo Rich Edit senza fondo per inviare un messaggio di notifica **EN_REQUESTRESIZE** tramite la funzione membro [REQUESTRESIZE](reference/cricheditctrl-class.md#requestresize) . Questo messaggio può essere utile nel gestore [OnSize](reference/cwnd-class.md#onsize) .

Per ricevere **EN_REQUESTRESIZE** messaggi di notifica, è necessario abilitare la notifica tramite la `SetEventMask` funzione membro.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
