---
title: Notifiche da un Rich Edit controllo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- messages [MFC], notification [MFC]
- CRichEditCtrl class [MFC], notifications
- rich edit controls [MFC], notifications
- notifications [MFC], from CRichEditCtrl
ms.assetid: eb5304fe-f4f3-4557-9ebf-3095dea383c4
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e09ebafbeb0d4aa1357ff9dc6e378ff4058d772a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="notifications-from-a-rich-edit-control"></a>Notifiche da un controllo Rich Edit
I messaggi di notifica report di controllo di eventi che interessano un rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)). Può essere elaborati dalla finestra padre o, usando la reflection di messaggio, da rich edit controllo stesso. I controlli rich edit supportano tutti i messaggi di notifica utilizzati con i controlli di modifica, nonché numerosi altri messaggi. È possibile determinare quali messaggi di notifica un controllo rich edit invia alla finestra padre mediante l'impostazione relativa "maschera evento".  
  
 Per impostare la maschera eventi per un controllo rich edit, utilizzare il [SetEventMask](../mfc/reference/cricheditctrl-class.md#seteventmask) funzione membro. È possibile recuperare la maschera corrente di eventi per un controllo rich edit utilizzando la [GetEventMask](../mfc/reference/cricheditctrl-class.md#geteventmask) funzione membro.  
  
 Di seguito sono descritte diverse notifiche specifiche e il relativo utilizzo:  
  
-   **EN_MSGFILTER** gestisce il **EN_MSGFILTER** notifica consente a una classe, entrambi rich edit controllo o la relativa finestra padre, filtrare tutti i tasti e input al controllo del mouse. Il gestore può impedire l'elaborazione messaggio della tastiera o mouse o possibile cambiare il messaggio modificando specificato [MSGFILTER](http://msdn.microsoft.com/library/windows/desktop/bb787936) struttura.  
  
-   **EN_PROTECTED affinché** gestire il **EN_PROTECTED affinché** messaggio di notifica per rilevare quando l'utente tenta di modificare un testo protetto. Per contrassegnare un intervallo di testo come protetto, è possibile impostare l'effetto di carattere protetto. Per ulteriori informazioni, vedere [la formattazione dei caratteri in controlli Rich Edit](../mfc/character-formatting-in-rich-edit-controls.md).  
  
-   **EN_DROPFILES** consentono all'utente di eliminare i file in un controllo rich edit dall'elaborazione di **EN_DROPFILES** messaggio di notifica. Specificato [ENDROPFILES](http://msdn.microsoft.com/library/windows/desktop/bb787895) struttura contiene informazioni sui file da eliminare.  
  
-   **EN_SELCHANGE** un'applicazione è possibile rilevare quando cambia la selezione corrente dall'elaborazione di **EN_SELCHANGE** messaggio di notifica. Specifica il messaggio di notifica un [SELCHANGE](http://msdn.microsoft.com/library/windows/desktop/bb787952) struttura contenente informazioni sulla nuova selezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

