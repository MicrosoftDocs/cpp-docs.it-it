---
title: Etichette degli elementi del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], item labels
- labels, CTreeCtrl items
- CTreeCtrl class [MFC], item labels
- item labels, tree controls
- item labels
ms.assetid: fe834107-1a25-4280-aced-774c11565805
ms.openlocfilehash: 16bb2bbe63eaf8ea4ce30040589d4a8a4cf4dfd3
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70741456"
---
# <a name="tree-control-item-labels"></a>Etichette degli elementi del controllo Tree

In genere si specifica il testo dell'etichetta di un elemento quando si aggiunge l'elemento al controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)). La `InsertItem` funzione membro può passare una struttura [TVITEM](/windows/win32/api/commctrl/ns-commctrl-tvitemw) che definisce le proprietà dell'elemento, inclusa una stringa contenente il testo dell'etichetta. `InsertItem`dispone di diversi overload che possono essere chiamati con diverse combinazioni di parametri.

Un controllo struttura ad albero alloca memoria per archiviare ogni elemento. il testo delle etichette degli elementi occupa una parte significativa della memoria. Se l'applicazione gestisce una copia delle stringhe nel controllo struttura ad albero, è possibile ridurre i requisiti di memoria del controllo specificando il valore **LPSTR_TEXTCALLBACK** nel membro *pszText* di `TV_ITEM` o *lpszItem* anziché passare le stringhe effettive al controllo albero. L'utilizzo di **LPSTR_TEXTCALLBACK** fa sì che il controllo albero recuperi il testo dell'etichetta di un elemento dall'applicazione ogni volta che l'elemento deve essere ridisegnato. Per recuperare il testo, il controllo struttura ad albero invia un messaggio di notifica [TVN_GETDISPINFO](/windows/win32/Controls/tvn-getdispinfo) , che include l'indirizzo di una struttura [struttura NMTVDISPINFO](/windows/win32/api/commctrl/ns-commctrl-nmtvdispinfow) . Per rispondere, è necessario impostare i membri appropriati della struttura inclusa.

Un controllo struttura ad albero utilizza la memoria allocata dall'heap del processo che crea il controllo albero. Il numero massimo di elementi in un controllo struttura ad albero è basato sulla quantità di memoria disponibile nell'heap. Ogni elemento richiede 64 byte.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
