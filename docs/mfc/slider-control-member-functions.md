---
title: Funzioni membro controllo Slider | Microsoft Docs
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
ms.openlocfilehash: 6f3c7c9d2b1cfd863f2c76a6f0ce9de197912786
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46377513"
---
# <a name="slider-control-member-functions"></a>Funzioni membro controllo Slider

Un'applicazione può chiamare il dispositivo di scorrimento funzioni membro del controllo per recuperare informazioni sul controllo dispositivo di scorrimento ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) e per modificare le relative caratteristiche.

Per recuperare la posizione del dispositivo di scorrimento (vale a dire, il valore selezionato dall'utente), usare il [GetPos](../mfc/reference/csliderctrl-class.md#getpos) funzione membro. Per impostare la posizione del dispositivo di scorrimento, usare il [funzione membro SetPos](../mfc/reference/csliderctrl-class.md#setpos) funzione membro. In qualsiasi momento è possibile usare il `VerifyPos` funzione membro per assicurarsi che il dispositivo di scorrimento è tra i valori minimi e massimo.

L'intervallo di un controllo dispositivo di scorrimento è il set di valori contigui che può rappresentare il controllo dispositivo di scorrimento. La maggior parte delle applicazioni utilizzano le [SetRange](../mfc/reference/csliderctrl-class.md#setrange) funzione membro per impostare l'intervallo di un controllo dispositivo di scorrimento quando viene creato inizialmente. Le applicazioni in modo dinamico possono modificare l'intervallo dopo il controllo dispositivo di scorrimento è stato creato utilizzando il [funzioni membro SetRangeMax](../mfc/reference/csliderctrl-class.md#setrangemax) e [SetRangeMin](../mfc/reference/csliderctrl-class.md#setrangemin) funzioni membro. Un'applicazione che consente l'intervallo essere modificato in modo dinamico in genere recupera le impostazioni dell'intervallo finale quando l'utente ha terminato di usare con il controllo dispositivo di scorrimento. Per recuperare queste impostazioni, usare il [GetRange](../mfc/reference/csliderctrl-class.md#getrange), [GetRangeMax](../mfc/reference/csliderctrl-class.md#getrangemax), e [GetRangeMin](../mfc/reference/csliderctrl-class.md#getrangemin) funzioni membro.

Un'applicazione può utilizzare lo stile TBS_AUTOTICKS segni di graduazione di un controllo dispositivo di scorrimento visualizzati automaticamente. Se un'applicazione deve controllare la posizione o frequenza dei segni di graduazione, tuttavia, un numero di funzioni membro è utilizzabile.

Per impostare la posizione del segno di graduazione, un'applicazione può usare la [SetTic](../mfc/reference/csliderctrl-class.md#settic) funzione membro. Il [funzione membro SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq) funzione membro consente a un'applicazione impostare i contrassegni vengono visualizzati a intervalli regolari nell'intervallo del controllo dispositivo di scorrimento dei segni di graduazione. Ad esempio, l'applicazione può usare questa funzione membro per visualizzare solo 10 i segni di graduazione in un intervallo di 1 e 100.

Per recuperare l'indice dell'intervallo corrispondente a un segno di spunta, usare il [funzione membro GetTic](../mfc/reference/csliderctrl-class.md#gettic) funzione membro. Il [funzione membro GetTicArray](../mfc/reference/csliderctrl-class.md#getticarray) funzione membro recupera una matrice di tali indici. Per recuperare la posizione del segno di graduazione, nelle coordinate client, usare il [funzione membro GetTicPos](../mfc/reference/csliderctrl-class.md#getticpos) funzione membro. Un'applicazione può recuperare il numero di segni di graduazione usando il [funzione membro GetNumTics](../mfc/reference/csliderctrl-class.md#getnumtics) funzione membro.

Il [funzione membro ClearTics](../mfc/reference/csliderctrl-class.md#cleartics) funzione membro rimuove tutti i segni di graduazione di un controllo dispositivo di scorrimento.

Le dimensioni di riga di un controllo dispositivo di scorrimento determinano fino a quando il dispositivo di scorrimento viene spostato quando un'applicazione riceve un messaggio di notifica TB_LINEDOWN o TB_LINEUP. Analogamente, le dimensioni della pagina determinano la risposta per i messaggi di notifica TB_PAGEDOWN e TB_PAGEUP. Le applicazioni possono recuperare e impostare i valori di dimensioni di riga e pagina usando il [funzioni membro GetLineSize](../mfc/reference/csliderctrl-class.md#getlinesize), [SetLineSize](../mfc/reference/csliderctrl-class.md#setlinesize), [GetPageSize](../mfc/reference/csliderctrl-class.md#getpagesize), e [SetPageSize](../mfc/reference/csliderctrl-class.md#setpagesize) funzioni membro.

Un'applicazione può usare le funzioni membro per recuperare le dimensioni di un controllo dispositivo di scorrimento. Il [funzione membro GetThumbRect](../mfc/reference/csliderctrl-class.md#getthumbrect) membro funzione recupera il rettangolo di delimitazione per il dispositivo di scorrimento. Il [funzione membro GetChannelRect](../mfc/reference/csliderctrl-class.md#getchannelrect) membro funzione recupera il rettangolo di delimitazione per il canale del controllo dispositivo di scorrimento. (Il canale è l'area di failover che consente di spostare il dispositivo di scorrimento e che include l'evidenziazione quando viene selezionato un intervallo).

Se un controllo dispositivo di scorrimento ha definito lo stile TBS_ENABLESELRANGE, l'utente può selezionare un intervallo di valori contigui da quest'ultimo. Un numero di funzioni membro consentono l'intervallo di selezione affinché venga regolato dinamicamente. Il [SetSelection](../mfc/reference/csliderctrl-class.md#setselection) funzione membro imposta il valore iniziale e la posizione di una selezione finale. Quando l'utente ha terminato l'impostazione di un intervallo di selezione, un'applicazione può recuperare le impostazioni utilizzando il [funzione membro GetSelection](../mfc/reference/csliderctrl-class.md#getselection) funzione membro. Per cancellare la selezione dell'utente, usare il [funzione membro ClearSel](../mfc/reference/csliderctrl-class.md#clearsel) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

