---
title: "Supporto di COM+ 1.0 in progetti ATL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.appwiz.ATL.MTS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (progetti), supporto COM+ 1.0"
ms.assetid: 51fb08ac-d632-4657-a4e0-d3f989f0b6f8
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto di COM+ 1.0 in progetti ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare la [Creazione guidata progetto ATL](../../atl/reference/creating-an-atl-project.md) per creare un progetto dotato di supporto di base dei componenti COM\+ 1.0.  
  
 COM\+ 1.0 è progettato per lo sviluppo di applicazioni distribuite basate su componenti.  Fornisce inoltre un'infrastruttura di runtime per la distribuzione e la gestione di tali applicazioni.  
  
 Se si seleziona la casella di controllo **Supporto COM\+ 1.0**, lo script di compilazione viene modificato nella fase di collegamento.  In particolare, il progetto COM\+ 1.0 viene collegato alle seguenti librerie:  
  
-   comsvcs.lib  
  
-   Mtxguid.lib  
  
 Se si seleziona la casella di controllo **Supporto COM\+ 1.0**, è inoltre possibile selezionare **Supporto registrazione componenti**.  La funzionalità di registrazione dei componenti consente all'oggetto COM\+ 1.0 di ottenere un elenco dei componenti ed effettuarne o annullarne la registrazione, singolarmente o globalmente.  
  
## Vedere anche  
 [Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)   
 [Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Configurazioni predefinite di progetti ATL](../../atl/reference/default-atl-project-configurations.md)