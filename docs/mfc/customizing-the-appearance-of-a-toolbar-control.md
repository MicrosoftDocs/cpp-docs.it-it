---
title: Personalizzazione dell'aspetto di un controllo Toolbar | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- TBSTYLE_
dev_langs:
- C++
helpviewer_keywords:
- flat toolbars
- CToolBar class [MFC], styles
- transparent toolbars
- TBSTYLE_ styles [MFC]
- CToolBarCtrl class [MFC], object styles
- toolbar controls [MFC], style
ms.assetid: fd0a73db-7ad1-4fe4-889b-02c3980f49e8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 48825a264b7d82152f47e70c5911bea400c313db
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932117"
---
# <a name="customizing-the-appearance-of-a-toolbar-control"></a>Personalizzazione dell'aspetto di un controllo Toolbar
Classe `CToolBarCtrl` fornisce numerosi stili che interessano l'aspetto (e, in alcuni casi, il comportamento) dell'oggetto della barra degli strumenti. Modificare l'oggetto della barra degli strumenti impostando il `dwCtrlStyle` parametro del `CToolBarCtrl::Create` (o `CToolBar::CreateEx`) la funzione membro, al momento della creazione del controllo toolbar.  
  
 Gli stili seguenti interessano l'aspetto "3D" dei pulsanti della barra degli strumenti e la posizione del testo del pulsante:  
  
-   **TBSTYLE_FLAT** crea una semplice barra degli strumenti in cui sia la barra degli strumenti e i pulsanti sono transparent. Testo del pulsante viene visualizzata sotto le bitmap dei pulsanti. Quando viene utilizzato questo stile, il pulsante sotto il cursore viene automaticamente evidenziato.  
  
-   **TBSTYLE_TRANSPARENT** crea una barra degli strumenti trasparente. In una barra degli strumenti trasparente, la barra degli strumenti è visibile ma non sono i pulsanti. Testo del pulsante viene visualizzata sotto le bitmap dei pulsanti.  
  
-   **TBSTYLE_LIST** posizioni pulsante testo a destra della bitmap di pulsanti.  
  
> [!NOTE]
>  Per evitare problemi, il **TBSTYLE_FLAT** e **TBSTYLE_TRANSPARENT** stili devono essere impostati prima che l'oggetto della barra degli strumenti è visibile.  
  
 Gli stili seguenti determinano se la barra degli strumenti consente a un utente riposizionare i singoli pulsanti all'interno di un oggetto barra degli strumenti mediante trascinamento e rilascio:  
  
-   **TBSTYLE_ALTDRAG** consente agli utenti di modificare la posizione del pulsante della barra degli strumenti mediante il trascinamento tenendo premuto ALT. Se questo stile non è specificato, l'utente deve tenere premuto MAIUSC e trascinare un pulsante.  
  
    > [!NOTE]
    >  Il **CCS_ADJUSTABLE** per abilitare i pulsanti della barra degli strumenti essere trascinato è necessario specificare lo stile.  
  
-   **TBSTYLE_REGISTERDROP** genera **TBN_GETOBJECT** notifica messaggi per richiedere eliminare oggetti di destinazione quando si passa il puntatore del mouse sui pulsanti della barra degli strumenti.  
  
 Gli stili rimanenti influiscono su aspetti visivi e dell'oggetto della barra degli strumenti:  
  
-   **TBSTYLE_WRAPABLE** crea una barra degli strumenti che può avere più righe di pulsanti. Pulsanti della barra degli strumenti possono "includere" alla riga successiva quando la barra degli strumenti diventa troppo stretta per includere tutti i pulsanti sulla stessa riga. Ritorno a capo avviene nella separazione e l'invio dei limiti.  
  
-   **TBSTYLE_CUSTOMERASE** genera **NM_CUSTOMDRAW** i messaggi di notifica durante l'elaborazione **WM_ERASEBKGND** messaggi.  
  
-   **TBSTYLE_TOOLTIPS** crea un controllo descrizione comando che un'applicazione può utilizzare per visualizzare il testo descrittivo per i pulsanti sulla barra degli strumenti.  
  
 Per un elenco completo degli stili della barra degli strumenti e gli stili estesi, vedere [Toolbar (controllo) e stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb760439) e [sulla barra degli strumenti stili estesi](http://msdn.microsoft.com/library/windows/desktop/bb760430) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

