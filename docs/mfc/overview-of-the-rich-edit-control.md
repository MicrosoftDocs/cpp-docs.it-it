---
title: Panoramica sul controllo Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- rich edit controls [MFC]
ms.assetid: ad589b9f-a3fd-4820-bf1f-6b1965997e68
ms.openlocfilehash: c45cb638ec860bb803c7de32065606dc3cc176b2
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57287713"
---
# <a name="overview-of-the-rich-edit-control"></a>Panoramica sul controllo Rich Edit

> [!IMPORTANT]
>  Se si usa un controllo rich edit in una finestra di dialogo (indipendentemente dal fatto che l'applicazione SDI, MDI o basato su finestra di dialogo), è necessario chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) una volta prima la finestra di dialogo viene visualizzata la finestra. Un contesto tipico per chiamare questa funzione è il programma `InitInstance` funzione membro. Non occorre chiamarlo per ogni volta che si visualizza la finestra di dialogo, solo la prima volta. Non è necessario chiamare `AfxInitRichEdit` se si lavora con `CRichEditView`.

I controlli rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare eventuali componenti dell'interfaccia utente necessarie per rendere disponibili le operazioni di formattazione per l'utente. Vale a dire, il controllo rich edit supporta la modifica gli attributi di tipo carattere o paragrafo del testo selezionato. Alcuni esempi di carattere sono gli attributi grassetto, corsivo, famiglia di caratteri e dimensione in punti. Esempi di attributi di paragrafo includono allineamento, margini e punti di tabulazione. Tuttavia, è responsabilità dell'utente per fornire l'interfaccia utente, i pulsanti della barra degli strumenti, le voci di menu o una finestra di dialogo Formato carattere. Sono inoltre disponibili funzioni per eseguire una query controllo rich edit per gli attributi della selezione corrente. Usare queste funzioni per visualizzare le impostazioni correnti per gli attributi, ad esempio, impostando un segno di spunta sul comando dell'interfaccia utente se la selezione è presente il carattere in grassetto attributi di formattazione.

Per altre informazioni sul carattere e formattazione di paragrafo, vedere [formattazione di carattere](../mfc/character-formatting-in-rich-edit-controls.md) e [formattazione di paragrafo](../mfc/paragraph-formatting-in-rich-edit-controls.md) più avanti in questo argomento.

Rich edit controlli supportano quasi tutte le operazioni e messaggi di notifica usati con i controlli di modifica su più righe. Di conseguenza, le applicazioni che già Usa controlli di modifica possono essere facilmente modificati per usare rich i controlli di modifica. Le notifiche e i messaggi aggiuntivi consentono alle applicazioni di accedere ai controlli di funzionalità univoche per rich edit. Per informazioni sui controlli di modifica, vedere [CEdit](../mfc/reference/cedit-class.md).

Per altre informazioni sulle notifiche, vedere [notifiche da un controllo Rich Edit](../mfc/notifications-from-a-rich-edit-control.md) più avanti in questo argomento.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
