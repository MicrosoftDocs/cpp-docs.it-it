---
description: 'Altre informazioni su: funzioni membro del controllo Slider'
title: Funzioni membro controllo Slider
ms.date: 11/04/2016
helpviewer_keywords:
- CSliderCtrl class [MFC], methods
- slider controls [MFC], member functions
ms.assetid: dbde49ee-7306-4d14-a6ce-d09aa198178f
ms.openlocfilehash: 57108872a779bc4876be89afd5b81008f69a0837
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216899"
---
# <a name="slider-control-member-functions"></a>Funzioni membro controllo Slider

Un'applicazione può chiamare le funzioni membro del controllo Slider per recuperare informazioni sul controllo Slider ([CSliderCtrl](../mfc/reference/csliderctrl-class.md)) e per modificarne le caratteristiche.

Per recuperare la posizione del dispositivo di scorrimento (ovvero il valore scelto dall'utente), usare la funzione membro [GetPos](../mfc/reference/csliderctrl-class.md#getpos) . Per impostare la posizione del dispositivo di scorrimento, utilizzare la funzione membro [SetPos](../mfc/reference/csliderctrl-class.md#setpos) . In qualsiasi momento è possibile utilizzare la `VerifyPos` funzione membro per verificare che il dispositivo di scorrimento sia compreso tra i valori minimo e massimo.

L'intervallo di un controllo dispositivo di scorrimento è il set di valori contigui che possono essere rappresentati dal controllo dispositivo di scorrimento. La maggior parte delle applicazioni utilizza la funzione membro [SetRange](../mfc/reference/csliderctrl-class.md#setrange) per impostare l'intervallo di un controllo dispositivo di scorrimento quando viene creato per la prima volta. Le applicazioni possono modificare dinamicamente l'intervallo dopo la creazione del controllo dispositivo di scorrimento usando le funzioni membro [SetRangeMax](../mfc/reference/csliderctrl-class.md#setrangemax) e [SetRangeMin](../mfc/reference/csliderctrl-class.md#setrangemin) . Un'applicazione che consente di modificare dinamicamente l'intervallo recupera in genere le impostazioni di intervallo finale quando l'utente ha terminato di usare il controllo dispositivo di scorrimento. Per recuperare queste impostazioni, usare le funzioni membro [GetRange](../mfc/reference/csliderctrl-class.md#getrange), [GetRangeMax](../mfc/reference/csliderctrl-class.md#getrangemax)e [GetRangeMin](../mfc/reference/csliderctrl-class.md#getrangemin) .

Un'applicazione può utilizzare lo stile TBS_AUTOTICKS per visualizzare automaticamente i segni di graduazione di un controllo dispositivo di scorrimento. Tuttavia, se un'applicazione deve controllare la posizione o la frequenza dei segni di graduazione, è possibile utilizzare un numero di funzioni membro.

Per impostare la posizione di un segno di graduazione, un'applicazione può utilizzare la funzione membro [SetTic](../mfc/reference/csliderctrl-class.md#settic) . La funzione membro [SetTicFreq](../mfc/reference/csliderctrl-class.md#setticfreq) consente a un'applicazione di impostare segni di graduazione che compaiono a intervalli regolari nell'intervallo del controllo Slider. Ad esempio, l'applicazione può usare questa funzione membro per visualizzare solo 10 segni di graduazione in un intervallo compreso tra 1 e 100.

Per recuperare l'indice nell'intervallo corrispondente a un segno di graduazione, utilizzare la funzione membro [Get](../mfc/reference/csliderctrl-class.md#gettic) . La funzione membro [GetTicArray](../mfc/reference/csliderctrl-class.md#getticarray) recupera una matrice di questi indici. Per recuperare la posizione di un segno di graduazione, in coordinate client usare la funzione membro [GetTicPos](../mfc/reference/csliderctrl-class.md#getticpos) . Un'applicazione può recuperare il numero di segni di graduazione utilizzando la funzione membro [GetNumTics](../mfc/reference/csliderctrl-class.md#getnumtics) .

La funzione membro [ClearTics](../mfc/reference/csliderctrl-class.md#cleartics) rimuove tutti i segni di graduazione di un controllo dispositivo di scorrimento.

Le dimensioni di riga di un controllo dispositivo di scorrimento determinano la distanza di spostamento del dispositivo di scorrimento quando un'applicazione riceve un TB_LINEDOWN o TB_LINEUP messaggio di notifica. Analogamente, le dimensioni della pagina determinano la risposta alla TB_PAGEDOWN e TB_PAGEUP i messaggi di notifica. Le applicazioni possono recuperare e impostare i valori delle dimensioni di riga e pagina utilizzando le funzioni membro [GetLineSize](../mfc/reference/csliderctrl-class.md#getlinesize), [SetLineSize](../mfc/reference/csliderctrl-class.md#setlinesize), [GetPageSize](../mfc/reference/csliderctrl-class.md#getpagesize)e [sepagesize](../mfc/reference/csliderctrl-class.md#setpagesize) .

Un'applicazione può utilizzare le funzioni membro per recuperare le dimensioni di un controllo dispositivo di scorrimento. La funzione membro [GetThumbRect](../mfc/reference/csliderctrl-class.md#getthumbrect) Recupera il rettangolo di delimitazione per il dispositivo di scorrimento. La funzione membro [GetChannelRect](../mfc/reference/csliderctrl-class.md#getchannelrect) Recupera il rettangolo di delimitazione per il canale del controllo dispositivo di scorrimento. (Il canale è l'area in cui viene spostato il dispositivo di scorrimento e che contiene l'evidenziazione quando viene selezionato un intervallo).

Se un controllo dispositivo di scorrimento ha lo stile TBS_ENABLESELRANGE, l'utente può selezionare un intervallo di valori contigui. Un numero di funzioni membro consente la regolazione dinamica dell'intervallo di selezione. La funzione membro [Seselectation](../mfc/reference/csliderctrl-class.md#setselection) imposta le posizioni iniziale e finale di una selezione. Quando l'utente ha terminato di impostare un intervallo di selezione, un'applicazione può recuperare le impostazioni utilizzando la funzione membro [GetSelection](../mfc/reference/csliderctrl-class.md#getselection) . Per cancellare la selezione di un utente, usare la funzione membro [ClearSel](../mfc/reference/csliderctrl-class.md#clearsel) .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
