---
title: "Funzioni membro controllo Slider | Microsoft Docs"
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
  - "CSliderCtrl (classe), metodi"
  - "scorrimento (controlli), funzioni membro"
ms.assetid: dbde49ee-7306-4d14-a6ce-d09aa198178f
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni membro controllo Slider
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'applicazione può chiamare le funzioni membro del dispositivo di scorrimento per recuperare le informazioni sul dispositivo di scorrimento \([CSliderCtrl](../mfc/reference/csliderctrl-class.md)\) e modificare le relative caratteristiche.  
  
 Per recuperare il percorso di un dispositivo di scorrimento \(ovvero il valore che l'utente ha scelto\), utilizzare la funzione membro di [GetPos](../Topic/CSliderCtrl::GetPos.md).  Per impostare la posizione del dispositivo di scorrimento, utilizzare la funzione membro di [SetPos](../Topic/CSliderCtrl::SetPos.md).  In qualsiasi momento è possibile utilizzare la funzione membro di `VerifyPos` per assicurarsi che il dispositivo di scorrimento sia compreso tra i valori minimo e massimo.  
  
 L'intervallo di un dispositivo di scorrimento è l'insieme di valori contigui che il controllo slider può rappresentare.  La maggior parte delle applicazioni utilizza la funzione membro di [SetRange](../Topic/CSliderCtrl::SetRange.md) per impostare l'intervallo di un dispositivo di scorrimento mentre ne viene creato.  Le applicazioni possono modificare dinamicamente l'intervallo il dispositivo di scorrimento è stata creata tramite le funzioni membro di [SetRangeMin](../Topic/CSliderCtrl::SetRangeMin.md) e di [SetRangeMax](../Topic/CSliderCtrl::SetRangeMax.md).  Un'applicazione che consente all'intervallo da modificare dinamicamente tipico recupera le impostazioni finali dell'intervallo quando l'utente ha completato utilizzare il dispositivo di scorrimento.  Per recuperare le impostazioni, utilizzare [GetRange](../Topic/CSliderCtrl::GetRange.md), [GetRangeMax](../Topic/CSliderCtrl::GetRangeMax.md) e le funzioni membro di [GetRangeMin](../Topic/CSliderCtrl::GetRangeMin.md).  
  
 Un'applicazione può utilizzare lo stile di `TBS_AUTOTICKS` per contenere segni di graduazione di un dispositivo di scorrimento viene visualizzato automaticamente.  Se un'applicazione deve controllare la posizione o frequenza dei segni di graduazione, tuttavia, alcune funzioni membro possono essere utilizzate.  
  
 Per impostare la posizione di un segno di graduazione, un'applicazione può utilizzare la funzione membro di [SetTic](../Topic/CSliderCtrl::SetTic.md).  La funzione membro di [SetTicFreq](../Topic/CSliderCtrl::SetTicFreq.md) consente a un'applicazione di impostare i segni di graduazione visualizzati a intervalli regolari nell'intervallo del dispositivo di scorrimento.  Ad esempio, l'applicazione può utilizzare la funzione membro per visualizzare solo 10 segni di graduazione in un intervallo da 1 a 100.  
  
 Per recuperare l'indice nell'intervallo che corrisponde a un segno di graduazione, utilizzare la funzione membro di [GetTic](../Topic/CSliderCtrl::GetTic.md).  La funzione membro di [GetTicArray](../Topic/CSliderCtrl::GetTicArray.md) recupera una matrice di questi valori.  Per recuperare la posizione di un segno di graduazione, nelle coordinate del client, utilizzare la funzione membro di [GetTicPos](../Topic/CSliderCtrl::GetTicPos.md).  Un'applicazione può recuperare il numero di segni di graduazione utilizzando la funzione membro di [GetNumTics](../Topic/CSliderCtrl::GetNumTics.md).  
  
 La funzione membro di [ClearTics](../Topic/CSliderCtrl::ClearTics.md) rimuove tutti i segni di graduazione di un dispositivo di scorrimento.  
  
 La dimensione della riga del controllo slider determina la distanza con cui i movimenti del controllo slider quando un'applicazione viene ricevuto un messaggio di notifica di **TB\_LINEUP** o di **TB\_LINEDOWN**.  Analogamente, le dimensioni della pagina determinano la risposta ai messaggi di notifica di **TB\_PAGEUP** e di **TB\_PAGEDOWN**.  Le applicazioni possono recuperare e impostare i valori delle dimensioni della pagina e della riga tramite [GetLineSize](../Topic/CSliderCtrl::GetLineSize.md), [SetLineSize](../Topic/CSliderCtrl::SetLineSize.md), [GetPageSize](../Topic/CSliderCtrl::GetPageSize.md) e le funzioni membro di [SetPageSize](../Topic/CSliderCtrl::SetPageSize.md).  
  
 Un'applicazione può utilizzare le funzioni membro per recuperare le dimensioni di un dispositivo di scorrimento.  La funzione membro di [GetThumbRect](../Topic/CSliderCtrl::GetThumbRect.md) recupera il rettangolo di delimitazione del dispositivo di scorrimento.  La funzione membro di [GetChannelRect](../Topic/CSliderCtrl::GetChannelRect.md) recupera il rettangolo di delimitazione del canale del dispositivo di scorrimento. \(Il canale è l'area in cui il dispositivo di scorrimento viene spostato e quali contiene l'evidenziazione quando un intervallo selezionato.\)  
  
 Se un dispositivo di scorrimento ha lo stile di `TBS_ENABLESELRANGE`, l'utente può selezionare un intervallo di valori contigui da.  Alcune funzioni membro consentono all'intervallo di selezione da regolate dinamicamente.  La funzione membro di [SetSelection](../Topic/CSliderCtrl::SetSelection.md) impostare le posizioni iniziale e finale di una selezione.  Quando l'utente ha completato impostare un intervallo di selezione, un'applicazione può recuperare le impostazioni mediante la funzione membro di [GetSelection](../Topic/CSliderCtrl::GetSelection.md).  Per annullare la selezione di un utente, utilizzare la funzione membro di [ClearSel](../Topic/CSliderCtrl::ClearSel.md).  
  
## Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)