---
title: Personalizzazione dell'aspetto di un controllo Toolbar
ms.date: 11/04/2016
f1_keywords:
- TBSTYLE_
helpviewer_keywords:
- flat toolbars
- CToolBar class [MFC], styles
- transparent toolbars
- TBSTYLE_ styles [MFC]
- CToolBarCtrl class [MFC], object styles
- toolbar controls [MFC], style
ms.assetid: fd0a73db-7ad1-4fe4-889b-02c3980f49e8
ms.openlocfilehash: 9f4f9d90113d5074555d1b0cc411f854abc67fe5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377469"
---
# <a name="customizing-the-appearance-of-a-toolbar-control"></a>Personalizzazione dell'aspetto di un controllo Toolbar

Classe `CToolBarCtrl` fornisce molti stili che influiscono sull'aspetto (e, occasionalmente, il comportamento) dell'oggetto barra degli strumenti. Modificare l'oggetto barra `dwCtrlStyle` degli `CToolBarCtrl::Create` strumenti `CToolBar::CreateEx`impostando il parametro della funzione membro (o), quando si crea per la prima volta il controllo barra degli strumenti.

I seguenti stili influiscono sull'aspetto "3D" dei pulsanti della barra degli strumenti e sulla posizione del testo del pulsante:

- **TBSTYLE_FLAT** Crea una barra degli strumenti piatta in cui sia la barra degli strumenti che i pulsanti sono trasparenti. Il testo del pulsante viene visualizzato sotto le bitmap dei pulsanti. Quando si utilizza questo stile, il pulsante sotto il cursore viene evidenziato automaticamente.

- **TBSTYLE_TRANSPARENT** Crea una barra degli strumenti trasparente. In una barra degli strumenti trasparente, la barra degli strumenti è trasparente, ma i pulsanti non lo sono. Il testo del pulsante viene visualizzato sotto le bitmap dei pulsanti.

- **TBSTYLE_LIST** Posiziona il testo del pulsante a destra delle bitmap dei pulsanti.

> [!NOTE]
> Per evitare problemi di ridisegno, gli stili **di TBSTYLE_FLAT** e **TBSTYLE_TRANSPARENT** devono essere impostati prima che l'oggetto barra degli strumenti sia visibile.

Gli stili seguenti determinano se la barra degli strumenti consente all'utente di riposizionare singoli pulsanti all'interno di un oggetto barra degli strumenti mediante trascinamento della selezione:

- **TBSTYLE_ALTDRAG** Consente agli utenti di modificare la posizione di un pulsante della barra degli strumenti trascinandolo tenendo premuto ALT. Se questo stile non è specificato, l'utente deve tenere premuto MAIUSC durante il trascinamento di un pulsante.

    > [!NOTE]
    >  È necessario **specificare lo** stile CCS_ADJUSTABLE per consentire il trascinato dei pulsanti della barra degli strumenti.

- **TBSTYLE_REGISTERDROP** Genera **TBN_GETOBJECT** messaggi di notifica per richiedere gli oggetti di destinazione di rilascio quando il puntatore del mouse passa sui pulsanti della barra degli strumenti.

Gli stili rimanenti influiscono sugli aspetti visivi e non visivi dell'oggetto barra degli strumenti:

- **TBSTYLE_WRAPABLE** Crea una barra degli strumenti che può avere più righe di pulsanti. I pulsanti della barra degli strumenti possono "avvolgere" alla riga successiva quando la barra degli strumenti diventa troppo stretta per includere tutti i pulsanti sulla stessa riga. Il wrapping viene eseguito sui limiti di separazione e non di gruppo.

- **TBSTYLE_CUSTOMERASE** Genera **NM_CUSTOMDRAW** messaggi di notifica quando elabora i messaggi **WM_ERASEBKGND.**

- **TBSTYLE_TOOLTIPS** Crea un controllo descrizione comandi che un'applicazione può utilizzare per visualizzare testo descrittivo per i pulsanti nella barra degli strumenti.

Per un elenco completo degli stili della barra degli strumenti e degli stili estesi, vedere [Toolbar Control and Button Styles](/windows/win32/Controls/toolbar-control-and-button-styles) e Toolbar Extended [Styles](/windows/win32/Controls/toolbar-extended-styles) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
