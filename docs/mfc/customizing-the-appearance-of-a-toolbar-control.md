---
title: "Personalizzazione dell&#39;aspetto di un controllo Toolbar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TBSTYLE_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolBar (classe), stili"
  - "CToolBarCtrl (classe), stili di oggetto"
  - "barre degli strumenti semplici"
  - "TBSTYLE_ (stili)"
  - "controlli della barra degli strumenti [MFC], stile"
  - "barre degli strumenti trasparenti"
ms.assetid: fd0a73db-7ad1-4fe4-889b-02c3980f49e8
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Personalizzazione dell&#39;aspetto di un controllo Toolbar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe `CToolBarCtrl` fornisce numerosi stili che influenzano l'aspetto \(e, in alcuni casi, il comportamento dell'oggetto della barra degli strumenti.  Modificare l'oggetto della barra degli strumenti impostando il parametro di `dwCtrlStyle` la funzione membro `CToolBar::CreateEx`\(o di `CToolBarCtrl::Create` \), quando si crea il controllo toolbar.  
  
 I seguenti stili influenzano l'aspetto "3D" i pulsanti della barra degli strumenti e la posizione del testo del pulsante:  
  
-   **TBSTYLE\_FLAT** crea una barra degli strumenti semplice in cui sia la barra degli strumenti che i pulsanti sono transparent.  Il testo del pulsante viene visualizzato nelle bitmap button.  Quando viene utilizzato, il pulsante sotto il cursore viene automaticamente evidenziato.  
  
-   **TBSTYLE\_TRANSPARENT** crea una barra degli strumenti trasparente.  Nella barra degli strumenti trasparente, la barra degli strumenti è trasparente ma i pulsanti non lo sono.  Il testo del pulsante viene visualizzato nelle bitmap button.  
  
-   Testo del pulsante delle posizioni di**TBSTYLE\_LIST**a destra delle bitmap button.  
  
> [!NOTE]
>  Per impedire per aggiornare i problemi, gli stili di **TBSTYLE\_TRANSPARENT** e di **TBSTYLE\_FLAT** devono essere impostati prima dell'oggetto della barra degli strumenti sia visibile.  
  
 I seguenti stili determinare se la barra degli strumenti consente a un utente di riposizionare i singoli pulsanti all'interno di un oggetto della barra degli strumenti mediante trascinamento e cada:  
  
-   **TBSTYLE\_ALTDRAG** consente agli utenti di modificare una posizione del pulsante della barra degli strumenti trascinandola e tenere premuto ALT.  Se questo stile non viene specificato, l'utente deve tenere premuto MAIUSC mentre trascinare un pulsante.  
  
    > [!NOTE]
    >  Lo stile di `CCS_ADJUSTABLE` è necessario specificare per abilitare i pulsanti della barra degli strumenti trascinare.  
  
-   **TBSTYLE\_REGISTERDROP** genera messaggi di notifica di **TBN\_GETOBJECT** per richiedere gli oggetti di destinazione di rilascio quando il puntatore del mouse passa i pulsanti della barra degli strumenti.  
  
 Gli stili rimanenti influiscono su visivo e gli aspetti senza visualizzazione della barra degli strumenti oggetto:  
  
-   `TBSTYLE_WRAPABLE` crea una barra degli strumenti che può avere più righe di pulsanti.  I pulsanti della barra degli strumenti possono "il wrapping" alla riga successiva quando la barra degli strumenti è troppo stretta per includere tutti i pulsanti nella stessa riga.  Il wrapping si verifica nei limiti del nongroup e la separazione.  
  
-   **TBSTYLE\_CUSTOMERASE** genera messaggi di notifica di **NM\_CUSTOMDRAW** durante l'elaborazione dei messaggi di `WM_ERASEBKGND`.  
  
-   `TBSTYLE_TOOLTIPS` crea un controllo tooltip che un'applicazione può utilizzare per visualizzare il testo descrittivo per i pulsanti nella barra degli strumenti.  
  
 Per un elenco completo degli stili della barra degli strumenti e degli stili estesi, vedere [Controllo toolbar e stili del pulsante](http://msdn.microsoft.com/library/windows/desktop/bb760439) e [Stili estesi della barra degli strumenti](http://msdn.microsoft.com/library/windows/desktop/bb760430) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)