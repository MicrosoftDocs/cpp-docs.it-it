---
title: "Inserimento di un form in un progetto | Microsoft Docs"
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
  - "form, aggiunta ai progetti"
  - "Inserisci nuovo (finestra di dialogo)"
  - "inserimento di form"
ms.assetid: f3bd2998-3ce2-496d-ac5c-57ca70eec7cb
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inserimento di un form in un progetto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I form sono disponibili un contenitore appropriato per i controlli.  È possibile inserire un modulo basato su MFC dell'applicazione fino a quando l'applicazione supporta le librerie MFC.  
  
### Per inserire un form del progetto  
  
1.  In Visualizzazione classi, selezionare il progetto a cui si desidera aggiungere il form e fare clic sul pulsante destro del mouse.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi classe**.  
  
     Se il comando di **Nuovo modulo** non è disponibile, il progetto può essere basato su Active Template Library \(ATL\).  Per aggiungere un form a un progetto ATL, è necessario [specificare determinate impostazioni](../atl/reference/application-settings-atl-project-wizard.md) quando viene creata innanzitutto il progetto.  
  
3.  Dalla cartella di **MFC**, fare clic su **Classe MFC**.  
  
4.  Utilizzando la creazione guidata classe MFC, impostare la nuova classe derivare da [CFormView](../mfc/reference/cformview-class.md).  
  
 Visual C\+\+ aggiunge il form all'applicazione, aprendo lo l'editor finestre in modo da poter avviare automaticamente aggiunta di controlli e l'esecuzione della relativa progettazione globale.  
  
 È possibile eseguire i passaggi aggiuntivi seguenti \(non applicabili per le applicazioni a finestre\):  
  
1.  Eseguire l'override della funzione membro di `OnUpdate`.  
  
2.  Implementare una funzione membro per spostare i dati dalla visualizzazione del documento.  
  
3.  Creare una funzione membro di `OnPrint`.  
  
## Vedere anche  
 [Visualizzazioni Maschera](../mfc/form-views-mfc.md)