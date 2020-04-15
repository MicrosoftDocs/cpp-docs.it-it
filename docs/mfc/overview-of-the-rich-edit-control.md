---
title: Panoramica sul controllo Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- rich edit controls [MFC]
ms.assetid: ad589b9f-a3fd-4820-bf1f-6b1965997e68
ms.openlocfilehash: 9ef696bc348dfb18b797b487224b97261020e11c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366868"
---
# <a name="overview-of-the-rich-edit-control"></a>Panoramica sul controllo Rich Edit

> [!IMPORTANT]
> Se si utilizza un controllo Rich Edit in una finestra di dialogo (indipendentemente dal fatto che l'applicazione sia basata su SDI, MDI o finestra di dialogo), è necessario chiamare [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) una volta prima che venga visualizzata la finestra di dialogo. Una posizione tipica per chiamare questa funzione `InitInstance` è nella funzione membro del programma. Non è necessario chiamarlo ogni volta che si visualizza la finestra di dialogo, solo la prima volta. Non è necessario `AfxInitRichEdit` chiamare se si `CRichEditView`sta lavorando con .

I controlli Rich Edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili all'utente le operazioni di formattazione. In altre parte, il controllo Rich Edit supporta la modifica degli attributi di carattere o paragrafo del testo selezionato. Alcuni esempi di attributi di carattere sono il grassetto, il corsivo, la famiglia di caratteri e la dimensione in punti. Esempi di attributi di paragrafo includono l'allineamento, i margini e le tabulazioni. Tuttavia, spetta all'utente fornire l'interfaccia utente, che si tratti di pulsanti della barra degli strumenti, voci di menu o una finestra di dialogo formato carattere. Sono inoltre disponibili funzioni per eseguire una query sul controllo Rich Edit per gli attributi della selezione corrente. Utilizzare queste funzioni per visualizzare le impostazioni correnti per gli attributi, ad esempio l'impostazione di un segno di spunta nell'interfaccia utente del comando se la selezione ha l'attributo di formattazione dei caratteri in grassetto.

Per ulteriori informazioni sulla formattazione di caratteri e paragrafi, vedere [Formattazione dei caratteri](../mfc/character-formatting-in-rich-edit-controls.md) e [formattazione](../mfc/paragraph-formatting-in-rich-edit-controls.md) dei paragrafi più avanti in questo argomento.

I controlli Rich Edit supportano quasi tutte le operazioni e i messaggi di notifica utilizzati con i controlli di modifica su più righe. Di conseguenza, le applicazioni che già utilizzano i controlli di modifica possono essere facilmente modificate per utilizzare i controlli Rich Edit. Messaggi e notifiche aggiuntivi consentono alle applicazioni di accedere alla funzionalità univoca per i controlli Rich Edit. Per informazioni sui controlli di modifica, vedere [CEdit](../mfc/reference/cedit-class.md).

Per altre informazioni sulle notifiche, vedere [Notifiche da un controllo Rich Edit](../mfc/notifications-from-a-rich-edit-control.md) più avanti in questo argomento.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
