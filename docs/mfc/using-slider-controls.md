---
title: "Utilizzo di controlli Slider | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "CSliderCtrl (classe), utilizzo"
  - "scorrimento (controlli)"
  - "scorrimento (controlli), utilizzo"
ms.assetid: 2b1a8ac8-2b17-41e1-aa24-83c1fd737049
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di controlli Slider
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo tipico di un controllo dispositivo di scorrimento segue il modello descritto di seguito:  
  
-   Viene creato il controllo.  Se il controllo è specificato nel modello di finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. \(È necessario avere un membro [CSliderCtrl](../mfc/reference/csliderctrl-class.md) nella classe della finestra di dialogo che corrisponde al controllo dispositivo di scorrimento.\) In alternativa, è possibile utilizzare la funzione membro [Create](../Topic/CSliderCtrl::Create.md) per creare il controllo come finestra figlio di una qualsiasi finestra.  
  
-   Chiamare le varie funzioni Set del membro per impostare i valori per il controllo.  Le modifiche effettuabili includono l'impostazione delle posizioni minime e massime per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento.  Per i controlli in una finestra di dialogo, è consigliabile effettuare le modifiche nella funzione [OnInitDialog](../Topic/CDialog::OnInitDialog.md) della finestra di dialogo.  
  
-   Mentre l'utente interagisce con il controllo, esso invierà diversi messaggi di notifica.  È possibile estrarre il valore del dispositivo di scorrimento dal controllo chiamando la funzione membro [GetPos](../Topic/CSliderCtrl::GetPos.md).  
  
-   Dopo aver utilizzato il controllo, è necessario assicurarsi che venga eliminato correttamente.  Se il controllo è in una finestra di dialogo, sia il controllo, sia l'oggetto `CSliderCtrl` verranno distrutti automaticamente.  In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CSliderCtrl` vengono eliminati correttamente.  
  
## Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)