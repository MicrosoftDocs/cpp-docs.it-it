---
title: "Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro | Microsoft Docs"
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
  - "contenitori dei controlli ActiveX [C++], accesso a controlli ActiveX"
  - "contenitori dei controlli ActiveX [C++], controlli ActiveX come variabili membro"
  - "ActiveX (controlli) [C++], accesso"
  - "ActiveX (controlli) [C++], variabili membro di progetto"
  - "connessione di controlli ActiveX a variabili membro di contenitore"
  - "variabili membro [C++], controlli ActiveX in progetto"
ms.assetid: 7898a336-440d-4a60-be43-cb062b807aee
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il modo più semplice per accedere a un controllo ActiveX dall'interno della relativa applicazione contenitore di controlli è possibile associare il controllo ActiveX con una variabile membro della classe di finestre di dialogo che conterrà il controllo.  
  
> [!NOTE]
>  Ciò non rappresentano l'unico modo per accedere a un controllo incorporato dall'interno di una classe di contenitori, ma ai fini di questo articolo sono sufficienti.  
  
### Aggiungendo una variabile membro alla classe della finestra di dialogo  
  
1.  In Visualizzazione classi, fare clic con il pulsante destro del mouse sulla classe principale della finestra di dialogo per aprire il menu di scelta rapida.  Ad esempio `CContainerDlg`.  
  
2.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi **Aggiungi variabile**.  
  
3.  Nell'aggiunta guidata variabile membro, fare clic **Variabile controllo**.  
  
4.  Nella casella di riepilogo **ID controllo**, selezionare l'id del controllo ActiveX incorporato.  Ad esempio `IDC_CIRCCTRL1`.  
  
5.  Nella casella di **Nome variabile**, un nome.  
  
     Ad esempio `m_circctl`.  
  
6.  Scegliere **Fine** per confermare le scelte e uscire dalla procedura guidata variabile membro.  
  
## Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)