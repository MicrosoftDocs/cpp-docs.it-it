---
title: Albero delle etichette degli elementi di controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tree controls [MFC], item labels
- labels, CTreeCtrl items
- CTreeCtrl class [MFC], item labels
- item labels, tree controls
- item labels
ms.assetid: fe834107-1a25-4280-aced-774c11565805
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3f07032a203761e78bd44f40456093eae9a84d07
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399886"
---
# <a name="tree-control-item-labels"></a>Etichette degli elementi del controllo Tree

È in genere specificare il testo dell'etichetta di un elemento quando si aggiunge l'elemento al controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Il `InsertItem` funzione membro può passare un [struttura TVITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtvitema) struttura che definisca le proprietà dell'elemento, inclusa una stringa contenente il testo dell'etichetta. `InsertItem` dispone di diversi overload che può essere chiamato con diverse combinazioni di parametri.

Un controllo albero alloca memoria per l'archiviazione di ogni elemento. il testo delle etichette degli elementi occupa una parte significativa della memoria. Se l'applicazione mantiene una copia di stringhe nel controllo albero, è possibile ridurre i requisiti di memoria del controllo specificando il **LPSTR_TEXTCALLBACK** valore nel *pszText* appartenente `TV_ITEM` o il *lpszItem* parametro anziché passare stringhe effettive al controllo albero. Usando **LPSTR_TEXTCALLBACK** fa sì che il controllo albero recuperare il testo dell'etichetta di un elemento dall'applicazione ogni volta che l'elemento deve essere ridisegnato. Per recuperare il testo, il controllo albero invia un [TVN_GETDISPINFO](/windows/desktop/Controls/tvn-getdispinfo) messaggio di notifica, che include l'indirizzo di un [struttura NMTVDISPINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtvdispinfoa) struttura. È necessario rispondere impostando i membri appropriati della struttura incluso.

Un controllo albero Usa la memoria allocata dall'heap del processo che crea il controllo struttura ad albero. Il numero massimo di elementi in un controllo struttura ad albero si basa sulla quantità di memoria disponibile nell'heap. Ogni elemento richiede 64 byte.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

