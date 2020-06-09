---
title: Panoramica sul controllo Rich Edit
ms.date: 11/04/2016
helpviewer_keywords:
- rich edit controls [MFC]
ms.assetid: ad589b9f-a3fd-4820-bf1f-6b1965997e68
ms.openlocfilehash: b99a5c6faaae4679b6aef67f240febbfb0f596e8
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617715"
---
# <a name="overview-of-the-rich-edit-control"></a>Panoramica sul controllo Rich Edit

> [!IMPORTANT]
> Se si utilizza un controllo Rich Edit in una finestra di dialogo (indipendentemente dal fatto che l'applicazione sia SDI, MDI o basata su finestra di dialogo), è necessario chiamare [AfxInitRichEdit](reference/application-information-and-management.md#afxinitrichedit) una volta prima che venga visualizzata la finestra di dialogo. Una posizione tipica per chiamare questa funzione è la `InitInstance` funzione membro del programma. Non è necessario chiamarlo per ogni volta che viene visualizzata la finestra di dialogo, solo la prima volta. Non è necessario chiamare `AfxInitRichEdit` se si utilizza `CRichEditView` .

I controlli Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) forniscono un'interfaccia di programmazione per la formattazione del testo. Tuttavia, un'applicazione deve implementare tutti i componenti dell'interfaccia utente necessari per rendere disponibili le operazioni di formattazione per l'utente. Ovvero, il controllo Rich Edit supporta la modifica degli attributi di carattere o paragrafo del testo selezionato. Alcuni esempi di attributi di caratteri sono grassetto, corsivo, famiglia di caratteri e dimensioni del punto. Esempi di attributi di paragrafo includono allineamento, margini e tabulazioni. Tuttavia, è necessario fornire l'interfaccia utente, ovvero i pulsanti della barra degli strumenti, le voci di menu o una finestra di dialogo formato carattere. Sono inoltre disponibili funzioni per eseguire una query sul controllo Rich Edit per gli attributi della selezione corrente. Usare queste funzioni per visualizzare le impostazioni correnti per gli attributi, ad esempio impostando un segno di spunta sull'interfaccia utente del comando se la selezione contiene l'attributo di formattazione dei caratteri in grassetto.

Per ulteriori informazioni sulla formattazione di caratteri e paragrafi, vedere Formattazione dei [caratteri](character-formatting-in-rich-edit-controls.md) e [formattazione dei paragrafi](paragraph-formatting-in-rich-edit-controls.md) più avanti in questo argomento.

I controlli Rich Edit supportano quasi tutte le operazioni e i messaggi di notifica utilizzati con i controlli di modifica su più righe. Pertanto, le applicazioni che già utilizzano i controlli di modifica possono essere facilmente modificate per l'utilizzo di controlli Rich Edit. Messaggi e notifiche aggiuntivi consentono alle applicazioni di accedere alla funzionalità univoca per i controlli Rich Edit. Per informazioni sui controlli di modifica, vedere [CEdit](reference/cedit-class.md).

Per ulteriori informazioni sulle notifiche, vedere [notifiche da un controllo Rich Edit](notifications-from-a-rich-edit-control.md) più avanti in questo argomento.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
