---
title: Personalizzazione dell'aspetto dell'elemento&#39;di intestazione
ms.date: 11/04/2016
helpviewer_keywords:
- header controls [MFC], customization of items
- CHeaderCtrl class [MFC], customizing the items
- HDS_ styles
ms.assetid: b1e1e326-ec7d-4dbd-a46f-96a3e2055618
ms.openlocfilehash: 6ce676695d717fcc5d418fe4ed5df91b4f9bca95
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508714"
---
# <a name="customizing-the-header-item39s-appearance"></a>Personalizzazione dell'aspetto dell'elemento&#39;di intestazione

Impostando il parametro *dwStyle* quando si crea per la prima volta un controllo Header ([CHeaderCtrl:: create](../mfc/reference/cheaderctrl-class.md#create)), è possibile definire l'aspetto e il comportamento degli elementi di intestazione o del controllo intestazione stesso.

Ecco un campionamento degli stili che è possibile impostare e il loro scopo:

- Per creare un elemento di intestazione simile a un pulsante, usare lo stile **HDS_BUTTONS** .

   Utilizzare questo stile se si desidera eseguire azioni in risposta ai clic del mouse su un elemento di intestazione, ad esempio l'ordinamento di dati in base a una determinata colonna, come avviene in Microsoft Outlook.

- Per assegnare agli elementi dell'intestazione un aspetto di "rilevamento a caldo" al passaggio del cursore del mouse, utilizzare lo stile **HDS_HOTTRACK** .

   Il rilevamento a caldo Visualizza un contorno 3D quando il puntatore passa su un elemento in una barra altrimenti piatta.

- Per indicare che il controllo intestazione deve essere nascosto, utilizzare lo stile **HDS_HIDDEN** .

   Lo stile **HDS_HIDDEN** indica che il controllo intestazione deve essere utilizzato come contenitore di dati e non come controllo visivo. Questo stile non nasconde automaticamente il controllo, ma influiscono sul comportamento di `CHeaderCtrl::Layout`. Il valore restituito nel membro *CY* della `WINDOWPOS` struttura sarà zero che indica che il controllo non deve essere visibile all'utente.

Per ulteriori informazioni su queste proprietà, vedere [Items](/windows/win32/Controls/header-controls) in the Windows SDK. Per informazioni sull'aggiunta di elementi a un controllo Header, vedere [aggiunta di elementi al controllo intestazione](../mfc/adding-items-to-the-header-control.md).

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
