---
title: Panoramica del controllo Rich Edit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rich edit controls [MFC]
ms.assetid: ad589b9f-a3fd-4820-bf1f-6b1965997e68
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 143fc93fb07d9ac7c4e803bbce426c114c02bfeb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="overview-of-the-rich-edit-control"></a>Panoramica sul controllo Rich Edit
> [!IMPORTANT]
>  Se si utilizza un controllo rich edit in una finestra di dialogo (indipendentemente dal fatto che l'applicazione SDI, MDI o basato su finestra di dialogo), è necessario chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) una volta prima la finestra di dialogo viene visualizzata. Un tipico chiamare questa funzione è in un programma `InitInstance` funzione membro. Non è necessario chiamarlo per ogni volta che si visualizza la finestra di dialogo, solo la prima volta. Non è necessario chiamare `AfxInitRichEdit` se si lavora con `CRichEditView`.  
  
 Controlli rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare qualsiasi componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente. Vale a dire, il controllo rich edit supporta la modifica gli attributi di tipo carattere o paragrafo del testo selezionato. Alcuni esempi di attributi sono di carattere grassetto, corsivo, famiglia di caratteri e la dimensione. Allineamento, margini e tabulazioni sono esempi di attributi di paragrafo. Tuttavia, è responsabilità dell'utente per fornire l'interfaccia utente, se i pulsanti della barra degli strumenti, le voci di menu o una finestra di dialogo Formato carattere. Sono inoltre disponibili funzioni per eseguire una query il controllo rich edit per gli attributi della selezione corrente. Utilizzare queste funzioni per visualizzare le impostazioni correnti per gli attributi, ad esempio, l'impostazione di un segno di spunta sul comando dell'interfaccia utente se la selezione include l'attributo di formattazione di caratteri in grassetto.  
  
 Per ulteriori informazioni sulla formattazione di carattere e paragrafo, vedere [la formattazione di carattere](../mfc/character-formatting-in-rich-edit-controls.md) e [la formattazione di paragrafo](../mfc/paragraph-formatting-in-rich-edit-controls.md) più avanti in questo argomento.  
  
 Rich edit supporto controlli quasi tutte le operazioni e messaggi di notifica utilizzati con i controlli di modifica su più righe. Di conseguenza, le applicazioni che già utilizzare i controlli di modifica possono essere facilmente modificati per utilizzare rich edit (controlli). Notifiche e messaggi aggiuntivi consentono alle applicazioni di accedere ai controlli di modifica univoco completo di funzionalità. Per informazioni sui controlli di modifica, vedere [CEdit](../mfc/reference/cedit-class.md).  
  
 Per ulteriori informazioni sulle notifiche, vedere [notifiche da un controllo Rich Edit](../mfc/notifications-from-a-rich-edit-control.md) più avanti in questo argomento.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

