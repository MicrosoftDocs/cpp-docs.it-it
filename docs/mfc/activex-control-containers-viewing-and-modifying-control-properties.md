---
title: "Contenitori di controlli ActiveX: visualizzazione e modifica delle propriet&#224; dei controlli | Microsoft Docs"
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
  - "contenitori dei controlli ActiveX [C++], visualizzazione e modifica delle proprietà"
  - "ActiveX (controlli) [C++], proprietà"
  - "controlli [MFC], proprietà"
  - "proprietà [MFC], visualizzazione e modifica"
  - "editor risorse, visualizzazione e modifica di controlli ActiveX"
ms.assetid: 14ce5152-742b-4e0d-a9ab-c7b456e32918
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Contenitori di controlli ActiveX: visualizzazione e modifica delle propriet&#224; dei controlli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si inserisce un controllo ActiveX in un progetto, è utile visualizzare e modificare le proprietà supportate dal controllo ActiveX.  In questo articolo viene illustrato come utilizzare l'editor di risorse di Visual C\+\+ per questo scopo.  
  
 Se l'applicazione contenitore di controlli ActiveX utilizza i controlli incorporati, è possibile visualizzare e modificare le proprietà del controllo nell'editor risorse.  È inoltre possibile utilizzare l'editor di risorse per impostare i valori di proprietà durante la fase di progettazione.  L'editor di risorse salva automaticamente questi valori nel file di risorse del progetto.  Ogni istanza del controllo avrà quindi le proprietà inizializzate a questi valori.  
  
 In questa procedura si presuppone che si inserisca un controllo nel progetto.  Per informazioni, vedere [Contenitori di controlli ActiveX: Inserimento di un controllo in un'applicazione contenitore di controlli](../mfc/inserting-a-control-into-a-control-container-application.md).  
  
 Il primo passaggio per visualizzare le proprietà del controllo è aggiungere un'istanza del controllo al modello di finestra di dialogo del progetto.  
  
### Per visualizzare le proprietà di un controllo  
  
1.  In Visualizzazione Risorse, aprire la cartella **Finestra di dialogo**.  
  
2.  Aprire il modello di finestra di dialogo principale.  
  
3.  Inserire un controllo ActiveX utilizzando la finestra di dialogo **Inserire il controllo ActiveX**.  Per ulteriori informazioni, vedere [Visualizzare e Aggiungere controlli ActiveX a una finestra di dialogo](../mfc/viewing-and-adding-activex-controls-to-a-dialog-box.md).  
  
4.  Selezionare il controllo ActiveX nella finestra di dialogo.  
  
5.  Nella finestra Proprietà fare clic sul pulsante **Proprietà**.  
  
 Utilizzare la finestra di dialogo **Proprietà** per modificare e verificare le nuove proprietà immediatamente.  
  
## Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)