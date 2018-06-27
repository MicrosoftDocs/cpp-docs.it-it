---
title: Etichette degli elementi del controllo albero | Documenti Microsoft
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
ms.openlocfilehash: 3fc207dcff5002262c345b106be99a775ed626b9
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953724"
---
# <a name="tree-control-item-labels"></a>Etichette degli elementi del controllo Tree
È in genere specificare il testo dell'etichetta di un elemento quando si aggiunge l'elemento al controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Il `InsertItem` funzione membro è possibile passare un [struttura TVITEM](http://msdn.microsoft.com/library/windows/desktop/bb773456) struttura che definisce le proprietà dell'elemento, inclusa una stringa contenente il testo dell'etichetta. `InsertItem` dispone di diversi overload che può essere chiamato con diverse combinazioni di parametri.  
  
 Un controllo albero alloca memoria per l'archiviazione di ogni elemento. il testo delle etichette degli elementi occupa una parte significativa della memoria. Se l'applicazione mantiene una copia di stringhe nel controllo struttura ad albero, è possibile ridurre i requisiti di memoria del controllo specificando il **LPSTR_TEXTCALLBACK** valore il *pszText* appartenente `TV_ITEM` o il *lpszItem* parametro anziché passare stringhe effettive al controllo albero. Utilizzo **LPSTR_TEXTCALLBACK** fa sì che il controllo struttura ad albero recuperare il testo dell'etichetta di un elemento dall'applicazione ogni volta che l'elemento deve essere ridisegnato. Per recuperare il testo, il controllo struttura invia un [TVN_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773518) messaggio di notifica, che include l'indirizzo di un [struttura NMTVDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773418) struttura. È necessario rispondere tramite l'impostazione dei membri appropriati della struttura inclusa.  
  
 Un controllo albero Usa la memoria allocata dall'heap del processo che crea il controllo struttura ad albero. Il numero massimo di elementi in un controllo struttura ad albero si basa sulla quantità di memoria nell'heap. Ogni elemento richiede 64 byte.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

