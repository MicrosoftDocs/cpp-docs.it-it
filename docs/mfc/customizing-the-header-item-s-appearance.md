---
description: "Altre informazioni su: personalizzazione dell'aspetto dell'elemento di intestazione&#39;s"
title: Personalizzazione dell'aspetto dell'elemento di intestazione&#39;s
ms.date: 11/04/2016
helpviewer_keywords:
- header controls [MFC], customization of items
- CHeaderCtrl class [MFC], customizing the items
- HDS_ styles
ms.assetid: b1e1e326-ec7d-4dbd-a46f-96a3e2055618
ms.openlocfilehash: 9cddb0f30dc2b7183952bd114990d1a608782ec3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309368"
---
# <a name="customizing-the-header-item39s-appearance"></a>Personalizzazione dell'aspetto dell'elemento di intestazione&#39;s

Impostando il parametro *dwStyle* quando si crea per la prima volta un controllo Header ([CHeaderCtrl:: create](reference/cheaderctrl-class.md#create)), è possibile definire l'aspetto e il comportamento degli elementi di intestazione o del controllo intestazione stesso.

Ecco un campionamento degli stili che è possibile impostare e il loro scopo:

- Per fare in modo che un elemento di intestazione sia un pulsante, usare lo stile **HDS_BUTTONS** .

   Utilizzare questo stile se si desidera eseguire azioni in risposta ai clic del mouse su un elemento di intestazione, ad esempio l'ordinamento di dati in base a una determinata colonna, come avviene in Microsoft Outlook.

- Per assegnare agli elementi dell'intestazione un aspetto di "rilevamento a caldo" al passaggio del cursore del mouse, utilizzare lo stile **HDS_HOTTRACK** .

   Il rilevamento a caldo Visualizza un contorno 3D quando il puntatore passa su un elemento in una barra altrimenti piatta.

- Per indicare che il controllo intestazione deve essere nascosto, utilizzare lo stile **HDS_HIDDEN** .

   Lo stile **HDS_HIDDEN** indica che il controllo intestazione deve essere utilizzato come contenitore di dati e non come controllo visivo. Questo stile non nasconde automaticamente il controllo, ma influiscono sul comportamento di `CHeaderCtrl::Layout` . Il valore restituito nel membro *CY* della `WINDOWPOS` struttura sarà zero che indica che il controllo non deve essere visibile all'utente.

Per ulteriori informazioni su queste proprietà, vedere [Items](/windows/win32/Controls/header-controls) in the Windows SDK. Per informazioni sull'aggiunta di elementi a un controllo Header, vedere [aggiunta di elementi al controllo intestazione](adding-items-to-the-header-control.md).

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controlli](controls-mfc.md)
