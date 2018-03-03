---
title: Etichette degli elementi del controllo albero | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- tree controls [MFC], item labels
- labels, CTreeCtrl items
- CTreeCtrl class [MFC], item labels
- item labels, tree controls
- item labels
ms.assetid: fe834107-1a25-4280-aced-774c11565805
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0d9baece3986b00aa2fbcea2b4b64217618834a8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tree-control-item-labels"></a>Etichette degli elementi del controllo Tree
È in genere specificare il testo dell'etichetta di un elemento quando si aggiunge l'elemento per il controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)). Il `InsertItem` funzione membro è possibile passare un [struttura TVITEM](http://msdn.microsoft.com/library/windows/desktop/bb773456) struttura che definisce le proprietà dell'elemento, inclusa una stringa contenente il testo dell'etichetta. `InsertItem`dispone di diversi overload che può essere chiamato con diverse combinazioni di parametri.  
  
 Un controllo albero alloca memoria per l'archiviazione di ogni elemento. il testo delle etichette degli elementi richiede una parte significativa della memoria. Se l'applicazione mantiene una copia di stringhe nel controllo struttura ad albero, è possibile ridurre i requisiti di memoria del controllo specificando il **LPSTR_TEXTCALLBACK** valore il **pszText** membro di `TV_ITEM` o `lpszItem` parametro anziché passare stringhe effettive per il controllo struttura ad albero. Utilizzando **LPSTR_TEXTCALLBACK** , il controllo struttura ad albero recuperare il testo dell'etichetta di un elemento dall'applicazione ogni volta che l'elemento deve essere ridisegnato. Per recuperare il testo, il controllo struttura invia un [TVN_GETDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773518) messaggio di notifica, che include l'indirizzo di un [struttura NMTVDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773418) struttura. È necessario rispondere tramite l'impostazione dei membri appropriati della struttura inclusa.  
  
 Un controllo albero utilizza la memoria allocata dall'heap del processo che crea il controllo struttura ad albero. Il numero massimo di elementi in un controllo struttura ad albero si basa sulla quantità di memoria nell'heap. Ogni elemento richiede 64 byte.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

