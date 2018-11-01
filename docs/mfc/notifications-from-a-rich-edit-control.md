---
title: Notifiche da un controllo Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- messages [MFC], notification [MFC]
- CRichEditCtrl class [MFC], notifications
- rich edit controls [MFC], notifications
- notifications [MFC], from CRichEditCtrl
ms.assetid: eb5304fe-f4f3-4557-9ebf-3095dea383c4
ms.openlocfilehash: 87168b6e58264b4257b7adfb32207ec1dd40729e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50529207"
---
# <a name="notifications-from-a-rich-edit-control"></a>Notifiche da un controllo Rich Edit

Report di controllo di eventi che interessano un rich edit i messaggi di notifica ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Può essere elaborati dalla finestra padre o, usando la reflection di messaggio, dal ricco di modifica controllo stesso. I controlli rich edit supportano tutti i messaggi di notifica usati con i controlli di modifica, nonché alcune tabelle aggiuntive. È possibile determinare quali messaggi di notifica un controllo rich edit inviati alla finestra padre mediante l'impostazione "maschera dell'evento."

Per impostare la maschera di eventi per un controllo rich edit, usare il [SetEventMask](../mfc/reference/cricheditctrl-class.md#seteventmask) funzione membro. È possibile recuperare la maschera corrente di eventi per un controllo rich edit utilizzando la [GetEventMask](../mfc/reference/cricheditctrl-class.md#geteventmask) funzione membro.

Di seguito sono descritte diverse notifiche specifiche e i relativi utilizzi:

- EN_MSGFILTER la gestione della notifica EN_MSGFILTER consente a una classe, ovvero controllo rich edit o finestra padre, filtrare tutti tastiera e mouse per il controllo di input. Il gestore di è possibile evitare il messaggio di mouse o tastiera in fase di elaborazione o possono modificare il messaggio modificando l'oggetto specificato [MSGFILTER](/windows/desktop/api/richedit/ns-richedit-_msgfilter) struttura.

- EN_PROTECTED consente di gestire il messaggio di notifica EN_PROTECTED consente di rilevare quando l'utente tenta di modificare un testo protetto. Per contrassegnare un intervallo di testo come protetto, è possibile impostare gli effetti carattere protetto. Per altre informazioni, vedere [formattazione di caratteri in controlli Rich Edit](../mfc/character-formatting-in-rich-edit-controls.md).

- EN_DROPFILES è possibile abilitare l'utente eliminare i file in un controllo rich edit per l'elaborazione del messaggio di notifica EN_DROPFILES. L'oggetto specificato [ENDROPFILES](/windows/desktop/api/richedit/ns-richedit-_endropfiles) struttura contiene informazioni sui file da eliminare.

- EN_SELCHANGE un'applicazione può rilevare quando cambia la selezione corrente per l'elaborazione del messaggio di notifica EN_SELCHANGE. Il messaggio di notifica specifica un [SELCHANGE](/windows/desktop/api/richedit/ns-richedit-_selchange) struttura che contiene informazioni sulla nuova selezione.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

