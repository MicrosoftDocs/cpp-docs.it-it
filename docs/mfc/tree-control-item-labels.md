---
description: 'Altre informazioni su: etichette degli elementi del controllo Tree'
title: Etichette degli elementi del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], item labels
- labels, CTreeCtrl items
- CTreeCtrl class [MFC], item labels
- item labels, tree controls
- item labels
ms.assetid: fe834107-1a25-4280-aced-774c11565805
ms.openlocfilehash: 62113a7534bf234ac8dde1154d5732bc29df8387
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264069"
---
# <a name="tree-control-item-labels"></a>Etichette degli elementi del controllo Tree

In genere si specifica il testo dell'etichetta di un elemento quando si aggiunge l'elemento al controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)). La `InsertItem` funzione membro può passare una struttura [TVITEM](/windows/win32/api/commctrl/ns-commctrl-tvitemw) che definisce le proprietà dell'elemento, inclusa una stringa contenente il testo dell'etichetta. `InsertItem` dispone di diversi overload che possono essere chiamati con diverse combinazioni di parametri.

Un controllo struttura ad albero alloca memoria per archiviare ogni elemento. il testo delle etichette degli elementi occupa una parte significativa della memoria. Se l'applicazione mantiene una copia delle stringhe nel controllo struttura ad albero, è possibile ridurre i requisiti di memoria del controllo specificando il valore **LPSTR_TEXTCALLBACK** nel membro *pszText* di `TV_ITEM` o il parametro *lpszItem* anziché passare le stringhe effettive al controllo albero. Se si utilizza **LPSTR_TEXTCALLBACK** , il controllo struttura ad albero Recupera il testo dell'etichetta di un elemento dall'applicazione ogni volta che l'elemento deve essere ridisegnato. Per recuperare il testo, il controllo struttura ad albero invia un messaggio di notifica [TVN_GETDISPINFO](/windows/win32/Controls/tvn-getdispinfo) , che include l'indirizzo di una struttura [struttura NMTVDISPINFO](/windows/win32/api/commctrl/ns-commctrl-nmtvdispinfow) . Per rispondere, è necessario impostare i membri appropriati della struttura inclusa.

Un controllo struttura ad albero utilizza la memoria allocata dall'heap del processo che crea il controllo albero. Il numero massimo di elementi in un controllo struttura ad albero è basato sulla quantità di memoria disponibile nell'heap. Ogni elemento richiede 64 byte.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
