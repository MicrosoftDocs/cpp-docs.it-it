---
title: "Scorrimento e ridimensionamento di visualizzazioni | Microsoft Docs"
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
  - "gestori messaggi"
  - "gestione dei messaggi, barre di scorrimento nella classe visualizzazione"
  - "ridimensionamento di visualizzazioni"
  - "barre di scorrimento, messaggi"
  - "scorrimento di visualizzazioni"
ms.assetid: f98a3421-c336-407e-97ee-dbb2ffd76fbd
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Scorrimento e ridimensionamento di visualizzazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visualizzazioni di MFC supporta lo scorrimento e visualizzazioni che vengono ridimensionate automaticamente alle dimensioni della finestra cornice che li visualizza.  La classe `CScrollView` supporta entrambi i tipi di visualizzazioni.  
  
 Per ulteriori informazioni sullo spostamento e la scala, vedere la classe [CScrollView](../mfc/reference/cscrollview-class.md) in *Riferimento MFC*.  Per un esempio di scorrimento, vedere [L'esempio scribble](../top/visual-cpp-samples.md).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   Scorrere una visualizzazione  
  
-   Ridimensionare una visualizzazione  
  
-   [\<caps:sentence id\="tgt8" sentenceid\="f321fcf7c88bc6e3f892ae0fc9b2f0d8" class\="tgtSentence"\>Coordinate di visualizzazione\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd145205)  
  
##  <a name="_core_scrolling_a_view"></a> Scorrere una visualizzazione  
 La dimensione di un documento in genere è superiore alla dimensione il punto di vista consente di visualizzare.  Questo errore può verificarsi perché i dati del documento aumentano o l'utente riduce la finestra che incornicia la visualizzazione.  In tali casi, la visualizzazione deve supportare lo scorrimento.  
  
 Qualsiasi visualizzazione può gestire i messaggi della barra di scorrimento nelle relative funzioni membro di `OnVScroll` e di `OnHScroll`.  È possibile implementare la gestione dei messaggi scrollbar in queste funzioni, che tutte le operazioni autonomamente, o la classe di `CScrollView` per gestire lo scorrimento automaticamente.  
  
 `CScrollView` esegue le operazioni seguenti:  
  
-   Gestisce la finestra e le dimensioni e la modalità di mapping del riquadro di visualizzazione  
  
-   Visualizza automaticamente in risposta ai messaggi della barra di scorrimento  
  
 È possibile specificare l'intervallo di scorrimento "per una pagina" \(quando l'utente fa clic su di cilindrica asta scrollbar\) e "una riga" \(quando l'utente fa clic su in una freccia di scorrimento.  Pianificare questi valori per indicare la natura della visualizzazione.  Ad esempio, potrebbe essere necessario scorrere in incrementi di 1 pixel per una visualizzazione grafica ma in incrementi basati sull'altezza riga nei documenti di testo.  
  
##  <a name="_core_scaling_a_view"></a> Ridimensionare una visualizzazione  
 Quando si visualizza automaticamente per adattarsi alle dimensioni della finestra cornice, è possibile utilizzare `CScrollView` per ridimensionare anziché lo scorrimento.  La visualizzazione logica viene allungata o ridotta per adattarsi all'area client della finestra esattamente.  Una visualizzazione ridimensionata non ha barre di scorrimento.  
  
## Vedere anche  
 [Utilizzo delle visualizzazioni](../mfc/using-views.md)