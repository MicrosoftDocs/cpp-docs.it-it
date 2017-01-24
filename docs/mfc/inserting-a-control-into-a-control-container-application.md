---
title: "Contenitori di controlli ActiveX: inserimento di un controllo in un&#39;applicazione contenitore di controlli | Microsoft Docs"
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
  - "contenitori dei controlli ActiveX [C++], inserimento di controlli"
  - "ActiveX (controlli) [C++], aggiunta ai progetti"
ms.assetid: bbb617ff-872f-43d8-b4d6-c49adb16b148
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori di controlli ActiveX: inserimento di un controllo in un&#39;applicazione contenitore di controlli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Prima di poter accedere a un controllo ActiveX da un'applicazione contenitore di controlli ActiveX, è necessario aggiungere il controllo ActiveX all'applicazione contenitore utilizzando la finestra di dialogo [Inserire il controllo ActiveX](../mfc/insert-activex-control-dialog-box.md).  
  
 Per aggiungere un controllo ActiveX al progetto del contenitore di controlli ActiveX, vedere [Controlli ActiveX add e di visualizzazione di una finestra di dialogo](../mfc/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
 Una volta aggiunte il controllo, è necessario aggiungere una variabile membro \(il tipo di controllo ActiveX alla classe della finestra di dialogo.  Per ulteriori informazioni su questa procedura, vedere [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md).  
  
 Dopo aver aggiunto una classe variabile membro, definita come classe wrapper, viene automaticamente creata e aggiunta al progetto.  La classe viene utilizzata come un'interfaccia tra il contenitore di controlli e il controllo incorporato.  
  
## Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)