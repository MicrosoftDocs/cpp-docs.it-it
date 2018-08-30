---
title: Personalizzazione dell'aspetto di un controllo Toolbar | Microsoft Docs
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
ms.openlocfilehash: 54c512bd727b7ef36ee94eb5ccaf3018be692d14
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43197695"
---
# <a name="customizing-the-appearance-of-a-toolbar-control"></a>Personalizzazione dell'aspetto di un controllo Toolbar
Classe `CToolBarCtrl` fornisce molti stili che interessano l'aspetto (e, in alcuni casi, il comportamento) dell'oggetto della barra degli strumenti. Modificare l'oggetto della barra degli strumenti, impostando il `dwCtrlStyle` parametro del `CToolBarCtrl::Create` (o `CToolBar::CreateEx`) funzione membro, al momento della creazione del controllo toolbar.  
  
 Gli stili seguenti interessano l'aspetto di "3D" dei pulsanti della barra degli strumenti e il posizionamento del testo del pulsante:  
  
-   **TBSTYLE_FLAT** consente di creare una semplice barra degli strumenti in cui sia la barra degli strumenti e i pulsanti sono trasparenti. Testo del pulsante viene visualizzata sotto le bitmap dei pulsanti. Quando viene usato questo stile, il pulsante sotto il cursore viene automaticamente evidenziato.  
  
-   **TBSTYLE_TRANSPARENT** crea una barra degli strumenti trasparente. In una barra degli strumenti trasparente, la barra degli strumenti è trasparente, ma non sono i pulsanti. Testo del pulsante viene visualizzata sotto le bitmap dei pulsanti.  
  
-   **TBSTYLE_LIST** posizioni pulsante testo a destra della bitmap di pulsanti.  
  
> [!NOTE]
>  Per evitare problemi, il **TBSTYLE_FLAT** e **TBSTYLE_TRANSPARENT** stili devono essere impostati prima che l'oggetto della barra degli strumenti è visibile.  
  
 Gli stili seguenti determinano se la barra degli strumenti consente all'utente di riposizionare i singoli pulsanti all'interno di un oggetto della barra degli strumenti tramite il trascinamento e rilascio:  
  
-   **TBSTYLE_ALTDRAG** consente agli utenti di modificare posizione di un pulsante barra degli strumenti, trascinarlo tenendo premuto ALT. Se questo stile non viene specificato, l'utente deve tenere premuto MAIUSC e trascinare un pulsante.  
  
    > [!NOTE]
    >  Il **CCS_ADJUSTABLE** lo stile deve essere specificato per abilitare i pulsanti della barra degli strumenti trascinare.  
  
-   **TBSTYLE_REGISTERDROP** enera **TBN_GETOBJECT** notifica i messaggi di richiesta eliminare oggetti di destinazione quando il puntatore del mouse viene spostato sopra i pulsanti della barra degli strumenti.  
  
 Gli stili rimanenti influenzare gli aspetti visivi e dell'oggetto della barra degli strumenti:  
  
-   **TBSTYLE_WRAPABLE** crea una barra degli strumenti che può avere più righe di pulsanti. I pulsanti della barra degli strumenti possono "wrap" alla riga successiva quando la barra degli strumenti diventa troppo stretta per includere tutti i pulsanti sulla stessa riga. Ritorno a capo si verifica la separazione e l'invio dei limiti.  
  
-   **TBSTYLE_CUSTOMERASE** enera **NM_CUSTOMDRAW** quando elabora i messaggi di notifica **WM_ERASEBKGND** messaggi.  
  
-   **TBSTYLE_TOOLTIPS** crea un controllo descrizione comandi che un'applicazione può utilizzare per visualizzare il testo descrittivo per i pulsanti sulla barra degli strumenti.  
  
 Per un elenco completo di stili della barra degli strumenti e gli stili estesi, vedere [controllo della barra degli strumenti e stili dei pulsanti](/windows/desktop/Controls/toolbar-control-and-button-styles) e [sulla barra degli strumenti stili estesi](/windows/desktop/Controls/toolbar-extended-styles) nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

