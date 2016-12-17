---
title: "SDI e MDI | Microsoft Docs"
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
  - "finestre cornice, MDI (applicazioni)"
  - "finestre cornice, SDI (applicazioni)"
  - "MDI, e SDI"
  - "MFC, finestre"
  - "Single Document Interface (SDI), applicazioni"
ms.assetid: bb7239d9-4759-4f63-bfff-44a04b48c067
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SDI e MDI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC semplifica l'utilizzo sia di applicazioni \(MDI\) di Single Document Interface \(SDI\) che con interfaccia a documenti multipli.  
  
 Le applicazioni SDI consentono solo una finestra cornice di documento aperto per volta.  Le applicazioni MDI consentono delle finestre del documento più siano aperte nella stessa istanza di un'applicazione.  Un'applicazione MDI con una finestra in cui le finestre figlio MDI più, ovvero le stesse finestre, possono essere aperte, ciascuno contenente un documento separato.  In alcune applicazioni, le finestre figlio possono essere di diversi tipi, ad esempio le finestre del grafico e finestre del foglio di lavoro.  In tal caso, la barra dei menu può cambiare mentre le finestre figlio MDI di tipi diversi sono attivate.  
  
> [!NOTE]
>  In Windows 95 e versioni successive, le applicazioni vengono comunemente SDI perché il sistema operativo ha adottato una visualizzazione "il allineata".  
  
 Per ulteriori informazioni, vedere [Documenti, visualizzazioni e Framework](../mfc/documents-views-and-the-framework.md).  
  
## Vedere anche  
 [Utilizzo delle classi per la creazione di applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)