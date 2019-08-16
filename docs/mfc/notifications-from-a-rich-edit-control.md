---
title: Notifiche da un controllo Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- messages [MFC], notification [MFC]
- CRichEditCtrl class [MFC], notifications
- rich edit controls [MFC], notifications
- notifications [MFC], from CRichEditCtrl
ms.assetid: eb5304fe-f4f3-4557-9ebf-3095dea383c4
ms.openlocfilehash: d097996e61a3d461dacd3d30e13b9262c7d32434
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508042"
---
# <a name="notifications-from-a-rich-edit-control"></a>Notifiche da un controllo Rich Edit

I messaggi di notifica segnalano gli eventi che influiscono su un controllo Rich Edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Possono essere elaborati dalla finestra padre o, usando la reflection del messaggio, dal controllo Rich Edit. I controlli Rich Edit supportano tutti i messaggi di notifica utilizzati con i controlli di modifica, oltre a diversi altri. È possibile determinare i messaggi di notifica che un controllo Rich Edit invia alla finestra padre impostando la relativa "maschera eventi".

Per impostare la maschera eventi per un controllo Rich Edit, utilizzare la funzione membro [SetEventMask](../mfc/reference/cricheditctrl-class.md#seteventmask) . È possibile recuperare la maschera eventi corrente per un controllo Rich Edit utilizzando la funzione membro [GetEventMask](../mfc/reference/cricheditctrl-class.md#geteventmask) .

I paragrafi seguenti elencano diverse notifiche specifiche e i relativi utilizzi:

- EN_MSGFILTER che gestisce la notifica EN_MSGFILTER consente a una classe, ovvero il controllo Rich Edit o la relativa finestra padre, di filtrare tutti gli input della tastiera e del mouse sul controllo. Il gestore può impedire l'elaborazione del messaggio della tastiera o del mouse oppure può modificare il messaggio modificando la struttura [msgfilter](/windows/win32/api/richedit/ns-richedit-msgfilter) specificata.

- EN_PROTECTED gestisce il messaggio di notifica EN_PROTECTED per rilevare quando l'utente tenta di modificare il testo protetto. Per contrassegnare un intervallo di testo come protetto, è possibile impostare l'effetto carattere protetto. Per altre informazioni, vedere [formattazione dei caratteri nei controlli Rich Edit](../mfc/character-formatting-in-rich-edit-controls.md).

- EN_DROPFILES è possibile consentire all'utente di eliminare i file in un controllo Rich Edit elaborando il messaggio di notifica EN_DROPFILES. La struttura [ENDROPFILES](/windows/win32/api/richedit/ns-richedit-endropfiles) specificata contiene informazioni sui file eliminati.

- EN_SELCHANGE un'applicazione può rilevare quando la selezione corrente viene modificata elaborando il messaggio di notifica EN_SELCHANGE. Il messaggio di notifica specifica una struttura [selChange](/windows/win32/api/richedit/ns-richedit-selchange) contenente informazioni sulla nuova selezione.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
