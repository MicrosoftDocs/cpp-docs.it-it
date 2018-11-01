---
title: Modifica degli stili del controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- styles [MFC], CListCtrl
- CListCtrl class [MFC], styles
- CListCtrl class [MFC], changing styles
ms.assetid: be74a005-0795-417c-9056-f6342aa74b26
ms.openlocfilehash: cfaae07d0bb96cbdf40de5afa701b73ae82485e8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50645146"
---
# <a name="changing-list-control-styles"></a>Modifica degli stili del controllo List

È possibile modificare lo stile della finestra di un controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) in qualsiasi momento dopo averlo creato. Modificando lo stile della finestra, si modifica il tipo di visualizzazione utilizzato dal controllo. Per emulare Esplora risorse, ad esempio, è possibile fornire le voci di menu o i pulsanti della barra degli strumenti per lo spostamento del controllo tra diverse visualizzazioni: visualizzazione icone, visualizzazione elenco e così via.

Ad esempio, quando l'utente seleziona la voce di menu, è Impossibile effettuare una chiamata a [GetWindowLong](/windows/desktop/api/winuser/nf-winuser-getwindowlonga) per recuperare lo stile corrente del controllo e quindi chiamare [SetWindowLong](/windows/desktop/api/winuser/nf-winuser-setwindowlonga) reimpostare lo stile. Per altre informazioni, vedere [usando i controlli di visualizzazione elenco](/windows/desktop/Controls/using-list-view-controls) nel SDK di Windows.

Stili disponibili sono elencati nella [Create](../mfc/reference/clistctrl-class.md#create). Gli stili **LVS_ICON**, **LVS_SMALLICON**, **LVS_LIST**, e **LVS_REPORT** designare le viste di controllo di elenco di quattro.

## <a name="extended-styles"></a>Stili estesi

Oltre gli stili di standard per un controllo elenco, è disponibile un altro set, detto stili estesi. Questi stili, descritti in [stili di visualizzazione elenco estesa](/windows/desktop/Controls/extended-list-view-styles) nel SDK di Windows, offrono un'ampia gamma di funzionalità utili che consentono di personalizzare il comportamento del controllo elenco. Per implementare il comportamento di un determinato stile (ad esempio, la selezione al passaggio del mouse), effettuare una chiamata a [CListCtrl:: SetExtendedStyle](../mfc/reference/clistctrl-class.md#setextendedstyle), passando lo stile richiesto. L'esempio seguente illustra la chiamata di funzione:

[!code-cpp[NVC_MFCControlLadenDialog#22](../mfc/codesnippet/cpp/changing-list-control-styles_1.cpp)]

> [!NOTE]
>  Per la selezione al passaggio del mouse lavorare, è anche necessario **lo stile LVS_EX_ONECLICKACTIVATE** oppure **LVS_EX_TWOCLICKACTIVATE** attivata.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

