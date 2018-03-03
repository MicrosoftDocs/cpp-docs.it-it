---
title: Funzioni membro controllo Slider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CSliderCtrl class [MFC], methods
- slider controls [MFC], member functions
ms.assetid: dbde49ee-7306-4d14-a6ce-d09aa198178f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1bd6c1d05ce7b137e6153ad2ea3fc5df99565a52
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="slider-control-member-functions"></a>Funzioni membro controllo Slider
Un'applicazione può chiamare il dispositivo di scorrimento funzioni membro del controllo per recuperare informazioni sul controllo dispositivo di scorrimento ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) e per modificare le relative caratteristiche.  
  
 Per recuperare la posizione del dispositivo di scorrimento (ovvero, il valore selezionato dall'utente), utilizzare il [GetPos](../mfc/reference/csliderctrl-class.md#getpos) funzione membro. Per impostare la posizione del dispositivo di scorrimento, utilizzare il [funzione membro SetPos](../mfc/reference/csliderctrl-class.md#setpos) funzione membro. In qualsiasi momento è possibile utilizzare il `VerifyPos` funzione membro per assicurarsi che il dispositivo di scorrimento è tra i valori minimi e massimo.  
  
 L'intervallo di un controllo dispositivo di scorrimento è il set di valori contigui che può rappresentare il controllo dispositivo di scorrimento. Utilizzano la maggior parte delle applicazioni di [SetRange](../mfc/reference/csliderctrl-class.md#setrange) funzione membro per impostare l'intervallo di un controllo dispositivo di scorrimento quando viene creato inizialmente. Applicazioni in modo dinamico modificare l'intervallo dopo il controllo dispositivo di scorrimento è stato creato utilizzando il [funzioni membro SetRangeMax](../mfc/reference/csliderctrl-class.md#setrangemax) e [SetRangeMin](../mfc/reference/csliderctrl-class.md#setrangemin) funzioni membro. Un'applicazione che consente l'intervallo da modificare in modo dinamico in genere recupera le impostazioni di intervallo finale quando l'utente ha terminato di utilizzare con il controllo dispositivo di scorrimento. Per recuperare queste impostazioni, utilizzare il [GetRange](../mfc/reference/csliderctrl-class.md#getrange), [GetRangeMax](../mfc/reference/csliderctrl-class.md#getrangemax), e [GetRangeMin](../mfc/reference/csliderctrl-class.md#getrangemin) funzioni membro.  
  
 Un'applicazione può utilizzare il `TBS_AUTOTICKS` stile disporre automaticamente visualizzati i segni di graduazione di un controllo dispositivo di scorrimento. Se un'applicazione deve controllare la posizione o la frequenza dei segni di graduazione, tuttavia, un numero di funzioni membro è utilizzabile.  
  
 Per impostare la posizione del segno di graduazione, un'applicazione può utilizzare il [SetTic](../mfc/reference/csliderctrl-class.md#settic) funzione membro. Il [funzione membro SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq) funzione membro consente a un'applicazione impostare i segni di graduazione indicatori visualizzati a intervalli regolari nell'intervallo del controllo dispositivo di scorrimento. Ad esempio, l'applicazione può utilizzare questa funzione membro per visualizzare solo 10 segni di graduazione in un intervallo di 1 e 100.  
  
 Per recuperare l'indice dell'intervallo corrispondente a un segno di graduazione, utilizzare il [funzione membro GetTic](../mfc/reference/csliderctrl-class.md#gettic) funzione membro. Il [funzione membro GetTicArray](../mfc/reference/csliderctrl-class.md#getticarray) funzione membro restituisce una matrice di indici. Per recuperare la posizione del segno di graduazione, nelle coordinate client, utilizzare il [funzione membro GetTicPos](../mfc/reference/csliderctrl-class.md#getticpos) funzione membro. Un'applicazione può recuperare il numero di segni di graduazione utilizzando il [funzione membro GetNumTics](../mfc/reference/csliderctrl-class.md#getnumtics) funzione membro.  
  
 Il [funzione membro ClearTics](../mfc/reference/csliderctrl-class.md#cleartics) funzione membro rimuove tutti i segni di graduazione di un controllo dispositivo di scorrimento.  
  
 Le dimensioni della linea di un controllo dispositivo di scorrimento determinano la distanza in cui si sposta il dispositivo di scorrimento quando un'applicazione riceve un **TB_LINEDOWN** o **TB_LINEUP** messaggio di notifica. Analogamente, le dimensioni della pagina determinano la risposta di **TB_PAGEDOWN** e **TB_PAGEUP** messaggi di notifica. Applicazioni di recuperare e impostare i valori di dimensioni di riga e pagina utilizzando la [funzioni membro GetLineSize](../mfc/reference/csliderctrl-class.md#getlinesize), [SetLineSize](../mfc/reference/csliderctrl-class.md#setlinesize), [GetPageSize](../mfc/reference/csliderctrl-class.md#getpagesize), e [SetPageSize](../mfc/reference/csliderctrl-class.md#setpagesize) funzioni membro.  
  
 Un'applicazione può utilizzare le funzioni membro per recuperare le dimensioni di un controllo dispositivo di scorrimento. Il [funzione membro GetThumbRect](../mfc/reference/csliderctrl-class.md#getthumbrect) funzione membro recupera il rettangolo di delimitazione per il dispositivo di scorrimento. Il [funzione membro GetChannelRect](../mfc/reference/csliderctrl-class.md#getchannelrect) funzione membro recupera il rettangolo di delimitazione per il canale del controllo dispositivo di scorrimento. (Il canale è l'area che consente di spostare il dispositivo di scorrimento e che contiene l'evidenziazione quando si seleziona un intervallo).  
  
 Se un controllo dispositivo di scorrimento ha il `TBS_ENABLESELRANGE` stile, l'utente può selezionare un intervallo di valori contigui da esso. Un numero di funzioni membro consente di modificare dinamicamente l'intervallo di selezione. Il [SetSelection](../mfc/reference/csliderctrl-class.md#setselection) funzione membro imposta iniziali e finali posizioni di una selezione. Quando l'utente ha terminato l'impostazione di un intervallo di selezione, un'applicazione può recuperare le impostazioni utilizzando il [funzione membro GetSelection](../mfc/reference/csliderctrl-class.md#getselection) funzione membro. Per cancellare la selezione di un utente, utilizzare il [funzione membro ClearSel](../mfc/reference/csliderctrl-class.md#clearsel) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

