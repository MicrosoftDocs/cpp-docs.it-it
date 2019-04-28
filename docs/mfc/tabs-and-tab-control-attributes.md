---
title: Schede e attributi del controllo Tab
ms.date: 11/04/2016
helpviewer_keywords:
- attributes [MFC], reference topics
- tab controls [MFC], attributes
- tabs [MFC]
- tabs [MFC], attributes
- CTabCtrl class [MFC], tab control attributes
ms.assetid: ecf190cb-f323-4751-bfdb-766dbe6bb553
ms.openlocfilehash: ca9f89565770e60a59007d609d132fae15eacae6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62306457"
---
# <a name="tabs-and-tab-control-attributes"></a>Schede e attributi del controllo Tab

Disponibile un notevole controllo sull'aspetto e comportamento di schede che costituiscono un controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)). Ogni scheda può avere un'etichetta, un'icona, lo stato di un elemento e un valore a 32 bit definita dall'applicazione associata. Per ogni scheda, è possibile visualizzare l'icona, l'etichetta o entrambi.

Inoltre, ogni elemento di scheda può avere tre stati possibili: premuto, inattivo o evidenziati. Questo stato può essere impostato solo modificando un elemento di scheda esistente. Per modificare un elemento di scheda esistente, recuperare con una chiamata a [GetItem](../mfc/reference/ctabctrl-class.md#getitem), modificare il `TCITEM` struttura (in particolare il *dwState* e *dwStateMask* membri dati ) e quindi si torna modificato `TCITEM` struttura con una chiamata a [SetItem](../mfc/reference/ctabctrl-class.md#setitem). Se è necessario deselezionare gli stati di tutti gli elementi della scheda in un `CTabCtrl` dell'oggetto, effettuare una chiamata a [DeselectAll](../mfc/reference/ctabctrl-class.md#deselectall). Questa funzione consente di reimpostare lo stato di tutti gli elementi della scheda o tutti gli elementi ad eccezione di quello attualmente selezionato.

Il codice seguente consente di cancellare lo stato di tutti gli elementi della scheda e quindi modifica lo stato del terzo elemento:

[!code-cpp[NVC_MFCControlLadenDialog#32](../mfc/codesnippet/cpp/tabs-and-tab-control-attributes_1.cpp)]

Per altre informazioni sugli attributi della scheda, vedere [schede e attributi Tab](/windows/desktop/Controls/tab-controls) nel SDK di Windows. Per altre informazioni sull'aggiunta di schede a un controllo struttura a schede, vedere [aggiunta di schede a un controllo struttura a schede](../mfc/adding-tabs-to-a-tab-control.md) più avanti in questo argomento.

## <a name="see-also"></a>Vedere anche

[Uso di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
