---
title: "Trascinamento di file in una finestra cornice | Microsoft Docs"
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
  - "trascinamento della selezione [C++], File Manager"
  - "trascinamento della selezione [C++], file"
  - "trascinamento della selezione [C++], Esplora risorse"
  - "supporto del trascinamento della selezione in File Manager"
  - "file [C++], trascinamento della selezione"
  - "finestre cornice [C++], trascinamento di file in"
  - "Esplora risorse [C++]"
ms.assetid: 85560fe9-121b-4105-bd7b-216b966e19fa
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Trascinamento di file in una finestra cornice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La finestra cornice gestisce una relazione con Esplora file o il File Manager.  
  
 Aggiunta di alcune chiamate initialize nell'override della funzione membro `InitInstance`di `CWinApp`, come descritto in [CWinApp: La classe application](../mfc/cwinapp-the-application-class.md), è possibile visualizzare i file aperti della finestra cornice indirettamente trascinare da Esplora file o dal File Manager e essere rilasciati nella finestra cornice.  Vedere [Trascinamento della selezione del File Manager](../mfc/special-cwinapp-services.md).  
  
## Vedere anche  
 [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)