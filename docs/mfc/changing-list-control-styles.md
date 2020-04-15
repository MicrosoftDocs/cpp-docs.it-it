---
title: Modifica degli stili del controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- styles [MFC], CListCtrl
- CListCtrl class [MFC], styles
- CListCtrl class [MFC], changing styles
ms.assetid: be74a005-0795-417c-9056-f6342aa74b26
ms.openlocfilehash: 5f45e0549c3fc0f5747f8dd12a6310fafd7dd7bb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370807"
---
# <a name="changing-list-control-styles"></a>Modifica degli stili del controllo List

È possibile modificare lo stile della finestra di un controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) in qualsiasi momento dopo averlo creato. Modificando lo stile della finestra, si modifica il tipo di visualizzazione utilizzata dal controllo. Ad esempio, per emulare Esplora risorse, è possibile fornire voci di menu o pulsanti della barra degli strumenti per passare il controllo tra diverse visualizzazioni: visualizzazione icone, visualizzazione elenco e così via.

Ad esempio, quando l'utente seleziona la voce di menu, è possibile effettuare una chiamata a [GetWindowLong](/windows/win32/api/winuser/nf-winuser-getwindowlongw) per recuperare lo stile corrente del controllo e quindi chiamare [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) per reimpostare lo stile. Per ulteriori informazioni, vedere [Utilizzo dei controlli visualizzazione elenco](/windows/win32/Controls/using-list-view-controls) in Windows SDK.

Gli stili disponibili sono elencati in [Crea](../mfc/reference/clistctrl-class.md#create). Gli stili **LVS_ICON**, **LVS_SMALLICON**, **LVS_LIST**e **LVS_REPORT** designare le quattro visualizzazioni di controllo elenco.

## <a name="extended-styles"></a>Stili estesi

Oltre agli stili standard per un controllo elenco, è disponibile un altro insieme, denominato stili estesi. Questi stili, illustrati in Stili di [visualizzazione elenco estesi](/windows/win32/Controls/extended-list-view-styles) in Windows SDK, forniscono una varietà di funzionalità utili che consentono di personalizzare il comportamento del controllo elenco. Per implementare il comportamento di un determinato stile, ad esempio la selezione al passaggio del mouse, effettuare una chiamata a [CListCtrl::SetExtendedStyle](../mfc/reference/clistctrl-class.md#setextendedstyle), passando lo stile necessario. Nell'esempio seguente viene illustrata la chiamata di funzione:The following example demonstrates the function call:

[!code-cpp[NVC_MFCControlLadenDialog#22](../mfc/codesnippet/cpp/changing-list-control-styles_1.cpp)]

> [!NOTE]
> Affinché la selezione al passaggio del mouse funzioni, è necessario che sia attivato anche **LVS_EX_ONECLICKACTIVATE** o **LVS_EX_TWOCLICKACTIVATE.**

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
