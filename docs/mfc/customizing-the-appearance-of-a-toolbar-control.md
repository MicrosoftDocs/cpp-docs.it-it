---
title: Personalizzazione dell'aspetto di un controllo Toolbar | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: TBSTYLE_
dev_langs: C++
helpviewer_keywords:
- flat toolbars
- CToolBar class [MFC], styles
- transparent toolbars
- TBSTYLE_ styles [MFC]
- CToolBarCtrl class [MFC], object styles
- toolbar controls [MFC], style
ms.assetid: fd0a73db-7ad1-4fe4-889b-02c3980f49e8
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5c40b7e055585a11b90c2cec1fefb967b51b35cf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="customizing-the-appearance-of-a-toolbar-control"></a>Personalizzazione dell'aspetto di un controllo Toolbar
Classe `CToolBarCtrl` fornisce numerosi stili che influiscono sull'aspetto (e, in alcuni casi, il comportamento) dell'oggetto della barra degli strumenti. Modificare l'oggetto della barra degli strumenti impostando il `dwCtrlStyle` parametro del `CToolBarCtrl::Create` (o `CToolBar::CreateEx`) la funzione membro, al momento della creazione del controllo toolbar.  
  
 Gli stili seguenti interessano l'aspetto "3D" dei pulsanti della barra degli strumenti e la posizione del testo del pulsante:  
  
-   **TBSTYLE_FLAT** crea una semplice barra degli strumenti in cui sia la barra degli strumenti e i pulsanti sono transparent. Testo del pulsante viene visualizzata sotto le bitmap dei pulsanti. Quando viene utilizzato questo stile, il pulsante sotto il cursore viene automaticamente evidenziato.  
  
-   **TBSTYLE_TRANSPARENT** crea una barra degli strumenti trasparente. Sulla barra degli strumenti trasparenti, la barra degli strumenti è trasparente, ma i pulsanti non lo sono. Testo del pulsante viene visualizzata sotto le bitmap dei pulsanti.  
  
-   **TBSTYLE_LIST** posizioni pulsante testo a destra del pulsante bitmap.  
  
> [!NOTE]
>  Per evitare problemi, il **TBSTYLE_FLAT** e **TBSTYLE_TRANSPARENT** stili devono essere impostati prima che l'oggetto della barra degli strumenti è visibile.  
  
 Gli stili seguenti determinano se la barra degli strumenti consente all'utente di riposizionare i singoli pulsanti all'interno di un oggetto barra degli strumenti mediante trascinamento e rilascio:  
  
-   **TBSTYLE_ALTDRAG** consente agli utenti di modificare la posizione del pulsante della barra degli strumenti mediante il trascinamento tenendo premuto ALT. Se non viene specificato questo stile, l'utente deve tenere premuto MAIUSC mentre si trascina un pulsante.  
  
    > [!NOTE]
    >  Il `CCS_ADJUSTABLE` stile, è necessario specificare per abilitare i pulsanti della barra degli strumenti.  
  
-   **TBSTYLE_REGISTERDROP** genera **TBN_GETOBJECT** notifica messaggi di richiesta di eliminare gli oggetti di destinazione quando si passa il puntatore del mouse sui pulsanti della barra degli strumenti.  
  
 Gli stili rimanenti influiscono su aspetti visivi e dell'oggetto della barra degli strumenti:  
  
-   `TBSTYLE_WRAPABLE`Crea una barra degli strumenti che può avere più righe di pulsanti. Pulsanti della barra degli strumenti possono "includere" alla riga successiva quando la barra degli strumenti diventa troppo stretta per includere tutti i pulsanti sulla stessa riga. Ritorno a capo avviene in separazione e l'invio dei limiti.  
  
-   **TBSTYLE_CUSTOMERASE** genera **NM_CUSTOMDRAW** quando elabora i messaggi di notifica `WM_ERASEBKGND` messaggi.  
  
-   `TBSTYLE_TOOLTIPS`Crea un controllo descrizione comando che un'applicazione può utilizzare per visualizzare il testo descrittivo per i pulsanti nella barra degli strumenti.  
  
 Per un elenco completo degli stili e gli stili estesi, vedere [controllo barra degli strumenti e stili dei pulsanti](http://msdn.microsoft.com/library/windows/desktop/bb760439) e [degli stili estesi](http://msdn.microsoft.com/library/windows/desktop/bb760430) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

