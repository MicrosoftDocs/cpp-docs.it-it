---
title: "Creazione di un&#39;applicazione contenitore di documenti attivi | Microsoft Docs"
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
  - "contenitori documenti attivi [C++], creazione"
  - "documenti attivi [C++], contenitori"
  - "applicazioni [MFC], contenitore documenti attivi"
  - "contenitori [C++], documento attivo"
  - "MFC COM [C++], contenimento dei documenti attivi"
ms.assetid: 14e2d022-a6c5-4249-8712-706b0f4433f7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creazione di un&#39;applicazione contenitore di documenti attivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il modo più semplice e consigliato per creare un'applicazione contenitore di documenti attivi consiste nel creare un'applicazione contenitore MFC EXE mediante la Creazione guidata applicazione MFC, quindi modificare l'applicazione per supportare il contenimento del documento attivo.  
  
#### Creazione di un'applicazione contenitore di documenti attivi  
  
1.  Dal menu **File**, fare clic su **Progetto** dal sottomenu **Nuovo**.  
  
2.  Dal riquadro sinistro, fare click sul tipo di progetto **Visual C\+\+**.  
  
3.  Selezionare **Applicazione MFC** nel riquadro di destra.  
  
4.  Denominare il progetto `MyProj`, scegliere **OK**.  
  
5.  Selezionare la pagina **Supporto documenti compositi**.  
  
6.  Selezionare l'opzione **Contenitore\/Server completo** o **Contenitore**.  
  
7.  Selezionare la casella di controllo **Contenitore documento attivo**.  
  
8.  Scegliere **Fine**.  
  
9. Quando la Creazione guidata applicazione MFC finisce la generazione dell'applicazione, aprire i file seguenti in Esplora soluzioni:  
  
    -   MyProjview.cpp  
  
10. In MyProjview.cpp, apportare le seguenti modifiche:  
  
    -   Sostituire il contenuto della funzione nella sezione `CMyProjView::OnPreparePrinting` con il codice seguente:  
  
         [!code-cpp[NVC_MFCDocView#56](../mfc/codesnippet/CPP/creating-an-active-document-container-application_1.cpp)]  
  
     `OnPreparePrinting` fornisce il supporto di stampa.  Questo codice sostituisce `DoPreparePrinting`, ovvero la preparazione predefinita di stampa.  
  
     Il contenimento del documento attivo fornisce uno schema migliore di stampa:  
  
    -   È possibile chiamare prima il documento attivo tramite la relativa interfaccia `IPrint`e dire ad esso di stamparsi.  È diverso dal contenimento OLE precedente, in cui il contenitore doveva eseguire il rendering di un'immagine dell'elemento contenuto nell'oggetto `CDC`della stampante.  
  
    -   Se questo fallisce, dire all'elemento contenuto di stamparsi tramite la relativa interfaccia `IOleCommandTarget`  
  
    -   Se fallisce, eseguire il rendering dell'elemento.  
  
     Le funzioni membro statiche `COleDocObjectItem::OnPrint` e `COleDocObjectItem::OnPreparePrinting`, come implementato nel codice precedente, gestiscono questo schema di stampa migliore.  
  
11. Aggiungere qualsiasi implementazione personalizzata e compilare l'applicazione.  
  
## Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)