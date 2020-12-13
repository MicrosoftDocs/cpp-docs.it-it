---
description: "Altre informazioni su: personalizzazione dell'aspetto di un controllo Toolbar"
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
ms.openlocfilehash: 715062484f5856da92e0668740bb6f8ac8f9d363
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336837"
---
# <a name="customizing-the-appearance-of-a-toolbar-control"></a>Personalizzazione dell'aspetto di un controllo Toolbar

La classe `CToolBarCtrl` fornisce molti stili che interessano l'aspetto (e, occasionalmente, il comportamento) dell'oggetto Toolbar. Modificare l'oggetto Toolbar impostando il `dwCtrlStyle` parametro della `CToolBarCtrl::Create` `CToolBar::CreateEx` funzione membro (o), quando si crea per la prima volta il controllo Toolbar.

Gli stili seguenti influiscono sull'aspetto "3D" dei pulsanti della barra degli strumenti e sul posizionamento del testo del pulsante:

- **TBSTYLE_FLAT** Crea una barra degli strumenti piatta in cui sia la barra degli strumenti che i pulsanti sono trasparenti. Il testo del pulsante viene visualizzato sotto bitmap di pulsanti. Quando si usa questo stile, il pulsante sotto il cursore viene evidenziato automaticamente.

- **TBSTYLE_TRANSPARENT** Crea una barra degli strumenti trasparente. In una barra degli strumenti trasparente la barra degli strumenti è trasparente, ma i pulsanti non lo sono. Il testo del pulsante viene visualizzato sotto bitmap di pulsanti.

- **TBSTYLE_LIST** Inserisce il testo del pulsante a destra delle bitmap dei pulsanti.

> [!NOTE]
> Per evitare problemi di ridisegno, è necessario impostare gli stili **TBSTYLE_FLAT** e **TBSTYLE_TRANSPARENT** prima che l'oggetto della barra degli strumenti sia visibile.

Gli stili seguenti determinano se la barra degli strumenti consente a un utente di riposizionare i singoli pulsanti in un oggetto barra degli strumenti usando il trascinamento della selezione:

- **TBSTYLE_ALTDRAG** Consente agli utenti di modificare la posizione di un pulsante della barra degli strumenti trascinandolo tenendo premuto ALT. Se questo stile non viene specificato, l'utente deve tenere premuto MAIUSC durante il trascinamento di un pulsante.

    > [!NOTE]
    >  È necessario specificare lo stile **CCS_ADJUSTABLE** per abilitare il trascinamento dei pulsanti della barra degli strumenti.

- **TBSTYLE_REGISTERDROP** Genera **TBN_GETOBJECT** messaggi di notifica per richiedere l'eliminazione di oggetti destinazione quando il puntatore del mouse passa sopra i pulsanti della barra degli strumenti.

Gli stili rimanenti influiscono sugli aspetti visivi e non visivi dell'oggetto barra degli strumenti:

- **TBSTYLE_WRAPABLE** Crea una barra degli strumenti che può avere più righe di pulsanti. I pulsanti della barra degli strumenti possono essere "a capo" nella riga successiva quando la barra degli strumenti diventa troppo stretta per includere tutti i pulsanti sulla stessa riga. Il wrapping si verifica in corrispondenza dei limiti di separazione e non di gruppo.

- **TBSTYLE_CUSTOMERASE** Genera messaggi di notifica **NM_CUSTOMDRAW** durante l'elaborazione dei messaggi di **WM_ERASEBKGND** .

- **TBSTYLE_TOOLTIPS** Consente di creare un controllo descrizione comando che può essere utilizzato da un'applicazione per visualizzare il testo descrittivo per i pulsanti della barra degli strumenti.

Per un elenco completo degli stili della barra degli strumenti e degli stili estesi, vedere stili dei [pulsanti e controllo Toolbar](/windows/win32/Controls/toolbar-control-and-button-styles) e [stili estesi](/windows/win32/Controls/toolbar-extended-styles) della barra degli strumenti nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CToolBarCtrl](using-ctoolbarctrl.md)<br/>
[Controlli](controls-mfc.md)
