---
title: "Utilizzo di un controllo Animation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli animazione [C++]"
  - "CAnimateCtrl (classe), controlli animazione"
  - "controlli [MFC], animazione"
ms.assetid: a009a464-e12d-4112-bf52-04a09b28dd88
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Utilizzo di un controllo Animation
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo tipico di un controllo animazione segue il modello di seguito:  
  
-   Il controllo viene creato.  Se il controllo è specificato nel modello di finestra di dialogo, la creazione automatica è quando la finestra di dialogo viene creata. \(È necessario essere un membro di [CAnimateCtrl](../mfc/reference/canimatectrl-class.md) nella classe della finestra di dialogo corrispondente al controllo animazione\). In alternativa, è possibile utilizzare la funzione membro di [Crea](../Topic/CAnimateCtrl::Create.md) per creare il controllo come finestra figlio di una finestra.  
  
-   Caricare un clip AVI nel controllo animazione chiamando la funzione membro di [Apri](../Topic/CAnimateCtrl::Open.md).  Se il controllo animazione si trova in una finestra di dialogo, si consiglia di effettuare questa operazione è la funzione di [OnInitDialog](../Topic/CDialog::OnInitDialog.md) la classe della finestra di dialogo.  
  
-   Riprodurre il clip chiamando la funzione membro di [Riproduci](../Topic/CAnimateCtrl::Play.md).  Se il controllo animazione si trova in una finestra di dialogo, si consiglia di effettuare questa operazione è la funzione di **OnInitDialog** la classe della finestra di dialogo.  Chiamare **Riproduci** non è necessaria se il controllo l'animazione possiede lo stile di `ACS_AUTOPLAY` impostato.  
  
-   Se si desidera visualizzare le parti del clip o per riprodurlo frame dal frame, utilizzare la funzione membro di `Seek`.  Per arrestare un clip multimediale che viene riprodotto, utilizzare la funzione membro di `Stop`.  
  
-   Se non si desidera eliminare in modo permanente il controllo immediatamente, rimuovere il clip dalla memoria chiamando la funzione membro di **Chiudi**.  
  
-   Se il controllo animazione si trova in una finestra di dialogo, e l'oggetto di `CAnimateCtrl` si distruggeranno automaticamente.  In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto di `CAnimateCtrl` correttamente vengono eliminati.  Eliminare il controllo chiude automaticamente il clip AVI.  
  
## Vedere anche  
 [Utilizzo di CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controlli](../mfc/controls-mfc.md)