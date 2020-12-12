---
description: 'Altre informazioni su: schede e attributi del controllo scheda'
title: Schede e attributi del controllo Tab
ms.date: 11/04/2016
helpviewer_keywords:
- attributes [MFC], reference topics
- tab controls [MFC], attributes
- tabs [MFC]
- tabs [MFC], attributes
- CTabCtrl class [MFC], tab control attributes
ms.assetid: ecf190cb-f323-4751-bfdb-766dbe6bb553
ms.openlocfilehash: 9b79e2ae6558d812fa96d0b62c07eb1c41176ee5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216353"
---
# <a name="tabs-and-tab-control-attributes"></a>Schede e attributi del controllo Tab

È possibile controllare in modo significativo l'aspetto e il comportamento delle schede che costituiscono un controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)). Ogni scheda può avere un'etichetta, un'icona, uno stato dell'elemento e un valore a 32 bit definito dall'applicazione ad esso associato. Per ogni scheda è possibile visualizzare l'icona, l'etichetta o entrambi.

Ogni elemento della scheda può inoltre avere tre stati possibili: premuto, non premuto o evidenziato. Questo stato può essere impostato solo modificando un elemento di scheda esistente. Per modificare una voce di scheda esistente, recuperarla con una chiamata a [GetItem](../mfc/reference/ctabctrl-class.md#getitem), modificare la `TCITEM` struttura (in particolare i membri dati *dwState* e *dwStateMask* ), quindi restituire la `TCITEM` struttura modificata con una chiamata a [SetItem](../mfc/reference/ctabctrl-class.md#setitem). Se è necessario cancellare gli Stati degli elementi di tutte le voci di scheda in un `CTabCtrl` oggetto, effettuare una chiamata a [DeselectAll](../mfc/reference/ctabctrl-class.md#deselectall). Questa funzione Reimposta lo stato di tutti gli elementi della scheda o di tutti gli elementi eccetto quello attualmente selezionato.

Il codice seguente cancella lo stato di tutti gli elementi della scheda e quindi modifica lo stato del terzo elemento:

[!code-cpp[NVC_MFCControlLadenDialog#32](../mfc/codesnippet/cpp/tabs-and-tab-control-attributes_1.cpp)]

Per ulteriori informazioni sugli attributi di tabulazione, vedere [schede e attributi di tabulazione](/windows/win32/Controls/tab-controls) nella Windows SDK. Per ulteriori informazioni sull'aggiunta di schede a un controllo struttura a schede, vedere [aggiunta di schede a un controllo](../mfc/adding-tabs-to-a-tab-control.md) struttura a schede più avanti in questo argomento.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
