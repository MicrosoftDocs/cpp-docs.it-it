---
title: "Creazione del controllo Header | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHeaderCtrl (classe), creazione"
  - "controlli intestazione, creazione"
ms.assetid: 7864d9d2-4a2c-4622-b58b-7b110a1e28d2
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione del controllo Header
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il controllo intestazione non è disponibile direttamente nell'editor finestre \(sebbene sia possibile aggiungere un controllo elenco, che include un controllo header.  
  
### Per inserire un controllo intestazione in una finestra di dialogo  
  
1.  Importare manualmente una variabile membro di tipo [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) nella classe della finestra di dialogo.  
  
2.  In [OnInitDialog](../Topic/CDialog::OnInitDialog.md), creare e impostare gli stili per `CHeaderCtrl`, inserirlo e visualizzare.  
  
3.  Aggiungere elementi al controllo intestazione.  
  
4.  Utilizzare la Finestra Proprietà per eseguire il mapping delle funzioni di gestione nella classe della finestra di dialogo per tutti i messaggi di notifica del controllo intestazione è necessario gestire \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)\).  
  
### Per inserire un controllo intestazione in una visualizzazione \(not a CListView\)  
  
1.  Importare un oggetto di [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) nella classe di visualizzazione.  
  
2.  Lo stile, posizione e verrà visualizzata la finestra di controllo header nella funzione membro di [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) della visualizzazione.  
  
3.  Aggiungere elementi al controllo intestazione.  
  
4.  Utilizzare la Finestra Proprietà per eseguire il mapping delle funzioni di gestione nella classe di visualizzazione per tutti i messaggi di notifica del controllo intestazione è necessario gestire \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md)\).  
  
 In entrambi i casi, l'oggetto controllo incorporato viene creato quando la visualizzazione o l'oggetto della finestra di dialogo viene creata.  È quindi necessario chiamare [CHeaderCtrl::Create](../Topic/CHeaderCtrl::Create.md) per creare la finestra di controllo.  Per posizionare il controllo, la chiamata [CHeaderCtrl::Layout](../Topic/CHeaderCtrl::Layout.md) per determinare la dimensione iniziale del controllo e per posizionare e [SetWindowPos](../Topic/CWnd::SetWindowPos.md) per impostare la posizione desiderata.  Quindi aggiungere elementi come descritto in [Aggiunta di elementi al controllo intestazione](../mfc/adding-items-to-the-header-control.md).  
  
 Per ulteriori informazioni, vedere [Creare un controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775238) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)