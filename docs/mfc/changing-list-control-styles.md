---
description: 'Altre informazioni su: modifica degli stili del controllo elenco'
title: Modifica degli stili del controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- styles [MFC], CListCtrl
- CListCtrl class [MFC], styles
- CListCtrl class [MFC], changing styles
ms.assetid: be74a005-0795-417c-9056-f6342aa74b26
ms.openlocfilehash: a6712baf5ea1e161ec1fd73e25ea01fedd650670
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339735"
---
# <a name="changing-list-control-styles"></a>Modifica degli stili del controllo List

È possibile modificare lo stile della finestra di un controllo elenco ([CListCtrl](reference/clistctrl-class.md)) in qualsiasi momento dopo averlo creato. Modificando lo stile della finestra, viene modificato il tipo di visualizzazione utilizzato dal controllo. Ad esempio, per emulare Esplora risorse, è possibile specificare le voci di menu o i pulsanti della barra degli strumenti per cambiare il controllo tra diverse visualizzazioni: visualizzazione icone, visualizzazione elenco e così via.

Ad esempio, quando l'utente seleziona la voce di menu, è possibile effettuare una chiamata a [GetWindowLong](/windows/win32/api/winuser/nf-winuser-getwindowlongw) per recuperare lo stile corrente del controllo e quindi chiamare [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) per reimpostare lo stile. Per ulteriori informazioni, vedere [utilizzo di controlli visualizzazione elenco](/windows/win32/Controls/using-list-view-controls) nel Windows SDK.

Gli stili disponibili sono elencati in [Crea](reference/clistctrl-class.md#create). Gli stili **LVS_ICON**, **LVS_SMALLICON**, **LVS_LIST** e **LVS_REPORT** designano le quattro visualizzazioni di controllo elenco.

## <a name="extended-styles"></a>Stili estesi

Oltre agli stili standard per un controllo elenco, esiste un altro set, denominato stili estesi. Questi stili, descritti in [stili di visualizzazione elenco estesi](/windows/win32/Controls/extended-list-view-styles) nel Windows SDK, offrono un'ampia gamma di funzionalità utili che personalizzano il comportamento del controllo elenco. Per implementare il comportamento di un determinato stile, ad esempio la selezione del passaggio del mouse, effettuare una chiamata a [CListCtrl:: SetExtendedStyle](reference/clistctrl-class.md#setextendedstyle)passando lo stile necessario. Nell'esempio seguente viene illustrata la chiamata di funzione:

[!code-cpp[NVC_MFCControlLadenDialog#22](codesnippet/cpp/changing-list-control-styles_1.cpp)]

> [!NOTE]
> Per il corretto funzionamento della selezione del passaggio del mouse, è necessario anche **LVS_EX_ONECLICKACTIVATE** o **LVS_EX_TWOCLICKACTIVATE** attivato.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
