---
title: "Recommendations for Choosing Between ATL and MFC | Microsoft Docs"
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
  - "ATL, e MFC"
  - "MFC, ATL support"
ms.assetid: 269325bb-11a8-4330-ad2b-a14a2458679e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Recommendations for Choosing Between ATL and MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si sviluppano applicazioni e componenti, è possibile scegliere tra due approcci — ATL e MFC \(la libreria Microsoft Foundation Class\).  
  
## Utilizzo di ATL  
 ATL è un rapido, il modo più semplice per creare un componente COM in C\+\+ che gestisce una piccola volume.  Utilizzare ATL per creare un controllo se non è necessaria alcuna funzionalità incorporata che MFC verificare automaticamente.  
  
## Utilizzo di MFC  
 MFC consente di creare applicazioni complete, i controlli ActiveX e documenti attivi.  Se è già stato creato un controllo con MFC, è possibile continuare a sviluppare in MFC.  In creare un nuovo controllo, considerare l'utilizzo di ATL se non è necessaria una funzionalità incorporata di MFC.  
  
## Utilizzando ATL in un progetto MFC  
 È possibile aggiungere il supporto per l'utilizzo di ATL in un progetto MFC esistente eseguendo una procedura guidata.  Per informazioni dettagliate, vedere [Aggiunta del supporto ATL al progetto MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
## Vedere anche  
 [Introduzione a ATL](../atl/introduction-to-atl.md)