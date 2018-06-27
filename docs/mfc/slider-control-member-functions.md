---
title: Funzioni membro controllo Slider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CSliderCtrl class [MFC], methods
- slider controls [MFC], member functions
ms.assetid: dbde49ee-7306-4d14-a6ce-d09aa198178f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 14e6df9a5d4dc6631b6891f90b55b63b73989b30
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953958"
---
# <a name="slider-control-member-functions"></a>Funzioni membro controllo Slider
Un'applicazione può chiamare il dispositivo di scorrimento di funzioni membro del controllo per recuperare informazioni sul controllo dispositivo di scorrimento ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) e per modificare le relative caratteristiche.  
  
 Per recuperare la posizione del dispositivo di scorrimento (vale a dire, il valore scelto dall'utente), usare il [GetPos](../mfc/reference/csliderctrl-class.md#getpos) funzione membro. Per impostare la posizione del dispositivo di scorrimento, utilizzare il [funzione membro SetPos](../mfc/reference/csliderctrl-class.md#setpos) funzione membro. In qualsiasi momento è possibile utilizzare il `VerifyPos` funzione membro per assicurarsi che il dispositivo di scorrimento è tra i valori minimi e massimo.  
  
 L'intervallo di un controllo dispositivo di scorrimento è il set di valori contigui che può rappresentare il controllo dispositivo di scorrimento. La maggior parte delle applicazioni utilizzano la [SetRange](../mfc/reference/csliderctrl-class.md#setrange) funzione membro per impostare l'intervallo di un controllo dispositivo di scorrimento quando viene creato inizialmente. Le applicazioni in modo dinamico possono modificare l'intervallo dopo il controllo dispositivo di scorrimento è stato creato utilizzando il [funzioni membro SetRangeMax](../mfc/reference/csliderctrl-class.md#setrangemax) e [SetRangeMin](../mfc/reference/csliderctrl-class.md#setrangemin) funzioni membro. Un'applicazione che consente l'intervallo da modificare in modo dinamico in genere recupera le impostazioni di intervallo finale quando l'utente ha completato l'utilizzo con il controllo dispositivo di scorrimento. Per recuperare queste impostazioni, utilizzare il [GetRange](../mfc/reference/csliderctrl-class.md#getrange), [GetRangeMax](../mfc/reference/csliderctrl-class.md#getrangemax), e [GetRangeMin](../mfc/reference/csliderctrl-class.md#getrangemin) funzioni membro.  
  
 Un'applicazione può utilizzare lo stile TBS_AUTOTICKS segni di graduazione di un controllo dispositivo di scorrimento visualizzati automaticamente. Se un'applicazione deve controllare la posizione o la frequenza dei segni di graduazione, tuttavia, un numero di funzioni membro è utilizzabile.  
  
 Per impostare la posizione del segno di graduazione, un'applicazione può utilizzare il [SetTic](../mfc/reference/csliderctrl-class.md#settic) funzione membro. Il [funzione membro SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq) funzione membro consente a un'applicazione impostare i contrassegni vengono visualizzati a intervalli regolari nell'intervallo del controllo dispositivo di scorrimento dei segni di graduazione. Ad esempio, l'applicazione può utilizzare questa funzione membro da visualizzare solo 10 segni di graduazione in un intervallo di 1 e 100.  
  
 Per recuperare l'indice dell'intervallo corrispondente a un segno di graduazione, usare il [funzione membro GetTic](../mfc/reference/csliderctrl-class.md#gettic) funzione membro. Il [funzione membro GetTicArray](../mfc/reference/csliderctrl-class.md#getticarray) funzione membro restituisce una matrice di indici. Per recuperare la posizione di un segno di graduazione, nelle coordinate client, usare il [funzione membro GetTicPos](../mfc/reference/csliderctrl-class.md#getticpos) funzione membro. Un'applicazione può recuperare il numero di segni di graduazione usando il [funzione membro GetNumTics](../mfc/reference/csliderctrl-class.md#getnumtics) funzione membro.  
  
 Il [funzione membro ClearTics](../mfc/reference/csliderctrl-class.md#cleartics) funzione membro rimuove tutti i segni di graduazione di un controllo dispositivo di scorrimento.  
  
 Le dimensioni della linea di un controllo dispositivo di scorrimento determinano la distanza viene spostato il dispositivo di scorrimento quando un'applicazione riceve un messaggio di notifica TB_LINEDOWN o TB_LINEUP. Analogamente, le dimensioni della pagina determinano la risposta ai messaggi di notifica TB_PAGEDOWN e TB_PAGEUP. Applicazioni di recuperare e impostare i valori di dimensioni di riga e pagina usando il [funzioni membro GetLineSize](../mfc/reference/csliderctrl-class.md#getlinesize), [SetLineSize](../mfc/reference/csliderctrl-class.md#setlinesize), [GetPageSize](../mfc/reference/csliderctrl-class.md#getpagesize), e [SetPageSize](../mfc/reference/csliderctrl-class.md#setpagesize) funzioni membro.  
  
 Un'applicazione può utilizzare le funzioni membro per recuperare le dimensioni di un controllo dispositivo di scorrimento. Il [funzione membro GetThumbRect](../mfc/reference/csliderctrl-class.md#getthumbrect) membro funzione recupera il rettangolo di delimitazione per il dispositivo di scorrimento. Il [funzione membro GetChannelRect](../mfc/reference/csliderctrl-class.md#getchannelrect) membro funzione recupera il rettangolo di delimitazione per il canale del controllo dispositivo di scorrimento. (Il canale è l'area su cui si sposta il dispositivo di scorrimento e che contiene l'evidenziazione quando viene selezionato un intervallo).  
  
 Se un controllo dispositivo di scorrimento è lo stile TBS_ENABLESELRANGE, l'utente può selezionare un intervallo di valori contigui da quest'ultimo. Un numero di funzioni membro consentono l'intervallo di selezione affinché venga regolato in modo dinamico. Il [SetSelection](../mfc/reference/csliderctrl-class.md#setselection) funzione membro imposta iniziali e finali posizioni di una selezione. Quando l'utente ha terminato l'impostazione di un intervallo di selezione, un'applicazione può recuperare le impostazioni utilizzando il [funzione membro GetSelection](../mfc/reference/csliderctrl-class.md#getselection) funzione membro. Deselezionare la selezione dell'utente, usare il [funzione membro ClearSel](../mfc/reference/csliderctrl-class.md#clearsel) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

