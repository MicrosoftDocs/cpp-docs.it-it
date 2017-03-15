---
title: "Barra di finestra di dialogo | Microsoft Docs"
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
  - "CDialogBar (classe), barra della finestra"
  - "barre di controllo, barra della finestra"
  - "barra della finestra"
  - "barra della finestra, informazioni sulla barra della finestra"
  - "MFC, barre di controllo"
ms.assetid: 485c8055-6bb0-4051-8417-dd2971499321
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Barra di finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una barra della finestra di dialogo è una barra degli strumenti, un tipo di [barra di controllo](../mfc/control-bars.md) che possono contenere qualsiasi tipo di controllo.  Poiché ha le caratteristiche di una finestra di dialogo non modale, un oggetto [CDialogBar](../mfc/reference/cdialogbar-class.md) fornisce una barra degli strumenti più efficace.  
  
 Esistono numerose differenze principali tra una barra degli strumenti e un oggetto di `CDialogBar`.  Un oggetto di `CDialogBar` viene creato da una risorsa di dialogo\- modello, che è possibile creare con l'editor finestre di Visual C\+\+ e che possono contenere qualsiasi tipo di controllo Windows.  L'utente può spostarsi da un controllo all'altro.  Ed è possibile specificare uno stile di allineamento per allineare la barra della finestra di dialogo con un punto qualsiasi della finestra cornice padre o anche per lasciarla sul posto se l'elemento padre viene ridimensionato.  Nella figura riportata una barra della finestra di dialogo con vari controlli.  
  
 ![Barra della finestra di dialogo VC](../mfc/media/vc378t1.png "vc378T1")  
Una barra della finestra di dialogo  
  
 In altri aspetti, utilizzare un oggetto di `CDialogBar` viene illustrato come utilizzare una finestra di dialogo non modale.  Utilizzare l'editor finestre di progettazione e creare la risorsa finestra di dialogo.  
  
 Una delle virtù di finestra di dialogo è che possono comportare controlli diversi dai pulsanti.  
  
 Mentre è normale derivare il proprio la finestra di dialogo classi da `CDialog`, è in genere non deriva una classe per una barra della finestra di dialogo.  Le barre della finestra di dialogo vengono estensioni a una finestra principale e tutti i messaggi di notifica del controllo della barra, come **BN\_CLICKED** o **EN\_CHANGE**, verranno inviati al padre della barra, la finestra principale.  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Esempio](../top/visual-cpp-samples.md)