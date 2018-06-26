---
title: Notifiche da un Rich Edit controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- messages [MFC], notification [MFC]
- CRichEditCtrl class [MFC], notifications
- rich edit controls [MFC], notifications
- notifications [MFC], from CRichEditCtrl
ms.assetid: eb5304fe-f4f3-4557-9ebf-3095dea383c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 928728093ff6e2150578c4ba48f2d8081620a48d
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931144"
---
# <a name="notifications-from-a-rich-edit-control"></a>Notifiche da un controllo Rich Edit
Report controllo di eventi che interessano un rich edit i messaggi di notifica ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Gli utenti possono essere elaborati dalla finestra padre o, usando la reflection di messaggio, da rich edit controllo stesso. Controlli rich edit supportano tutti i messaggi di notifica utilizzati con i controlli di modifica, nonché numerosi altri messaggi. È possibile determinare quali messaggi di notifica un controllo rich edit invia alla finestra padre mediante l'impostazione relativa "maschera evento".  
  
 Per impostare la maschera di evento per un controllo rich edit, utilizzare il [SetEventMask](../mfc/reference/cricheditctrl-class.md#seteventmask) funzione membro. È possibile recuperare la maschera corrente di eventi per un controllo rich edit utilizzando la [GetEventMask](../mfc/reference/cricheditctrl-class.md#geteventmask) funzione membro.  
  
 Di seguito sono descritte diverse notifiche specifiche e il relativo utilizzo:  
  
-   EN_MSGFILTER la gestione della notifica EN_MSGFILTER consente a una classe, ovvero controllo rich edit o finestra padre, filtrare tutti tastiera e mouse di input al controllo. Il gestore può impedire l'elaborazione messaggio della tastiera o mouse o possibile cambiare il messaggio modificando l'oggetto specificato [MSGFILTER](http://msdn.microsoft.com/library/windows/desktop/bb787936) struttura.  
  
-   EN_PROTECTED consente di gestire il messaggio di notifica EN_PROTECTED consente di rilevare quando l'utente tenta di modificare un testo protetto. Per contrassegnare un intervallo di testo come protetto, è possibile impostare l'effetto di carattere protetto. Per altre informazioni, vedere [formattazione caratteri nei controlli Rich Edit](../mfc/character-formatting-in-rich-edit-controls.md).  
  
-   EN_DROPFILES è possibile consentire all'utente di rilasciare un file in un controllo rich edit per l'elaborazione del messaggio di notifica EN_DROPFILES. L'oggetto specificato [ENDROPFILES](http://msdn.microsoft.com/library/windows/desktop/bb787895) struttura contiene informazioni sui file da eliminare.  
  
-   EN_SELCHANGE un'applicazione è possibile rilevare quando cambia la selezione corrente per l'elaborazione del messaggio di notifica EN_SELCHANGE. Il messaggio di notifica specifica un [SELCHANGE](http://msdn.microsoft.com/library/windows/desktop/bb787952) struttura contenente informazioni sulla nuova selezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

