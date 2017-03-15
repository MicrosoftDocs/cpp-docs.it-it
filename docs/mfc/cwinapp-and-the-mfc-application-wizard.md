---
title: "CWinApp e la Creazione guidata applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWinApp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate applicazione [C++], e CWinApp"
  - "CWinApp (classe), e Creazione guidata applicazione MFC"
  - "MFC [C++], procedure guidate"
ms.assetid: f8ac0491-3302-4e46-981d-0790624eb8a2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# CWinApp e la Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea una struttura di applicazione, la Creazione guidata applicazione MFC dichiarata una classe di applicazioni derivata da [CWinApp](../mfc/reference/cwinapp-class.md).  La Creazione guidata applicazione MFC consente inoltre di generare un file di implementazione che contiene i seguenti elementi:  
  
-   Una mappa messaggi per la classe dell'applicazione.  
  
-   Un costruttore di classe vuota.  
  
-   Una variabile che dichiara tale l'unico oggetto classe.  
  
-   Un'implementazione standard della funzione membro di `InitInstance`.  
  
 La classe app viene inserita nei file di origine dell'intestazione e di main di progetto.  I nomi delle classi e dei file creati sono basati sul nome del progetto immesse nella Creazione guidata applicazione MFC.  Il modo più semplice per visualizzare il codice per queste classi è con [Visualizzazione classi](http://msdn.microsoft.com/it-it/8d7430a9-3e33-454c-a9e1-a85e3d2db925).  
  
 Le implementazioni e la mappa messaggi standard fornite sono adatte per molti casi, ma è possibile modificarli in base alle necessità.  Il più interessante di queste implementazioni è la funzione membro di `InitInstance`.  In genere, si aggiungerà il codice all'implementazione scheletrica di `InitInstance`.  
  
## Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)   
 [Funzioni membro CWinApp sottoponibili a override](../mfc/overridable-cwinapp-member-functions.md)   
 [Servizi CWinApp speciali](../mfc/special-cwinapp-services.md)