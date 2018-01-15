---
title: Posizione degli elementi del controllo albero | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CTreeCtrl class [MFC], item position
- item position in tree controls
- tree controls [MFC], item position
- position, CTreeCtrl items
ms.assetid: cd264344-2cf9-4d90-9ea8-c6900b6f60e7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: db47e27ad0b556e08f51685bf84b6bd998722239
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tree-control-item-position"></a>Posizione degli elementi del controllo Tree
Posizione iniziale di un elemento viene impostato quando l'elemento viene aggiunto al controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) utilizzando il `InsertItem` funzione membro. La chiamata di funzione membro specifica l'handle dell'elemento padre e l'handle dell'elemento dopo il quale è necessario inserire il nuovo elemento. Il secondo handle deve identificare un elemento figlio dell'elemento padre specificato o uno di questi valori: `TVI_FIRST`, `TVI_LAST`, o `TVI_SORT`.  
  
 Quando `TVI_FIRST` o `TVI_LAST` viene specificato, il controllo struttura ad albero inserito il nuovo elemento all'inizio o alla fine dell'elenco dell'elemento padre specificato di elementi figlio. Quando `TVI_SORT` viene specificato, il controllo struttura ad albero inserisce il nuovo elemento nell'elenco di elementi figlio in ordine alfabetico in base al testo delle etichette degli elementi.  
  
 È possibile inserire un elemento padre dell'elenco degli elementi figlio in ordine alfabetico chiamando il [funzione membro SortChildren](../mfc/reference/ctreectrl-class.md#sortchildren) funzione membro. Questa funzione include un parametro che specifica se tutti i livelli di elementi figlio contenuti nell'elemento padre specificato vengono anche ordinati in ordine alfabetico.  
  
 Il [SortChildrenCB](../mfc/reference/ctreectrl-class.md#sortchildrencb) membro funzione consente di ordinare gli elementi figlio in base ai criteri definiti. Quando si chiama questa funzione, si specifica una funzione di callback definita dall'applicazione in grado di chiamare il controllo struttura ad albero ogni volta che deve essere deciso l'ordine relativo di due elementi figlio. La funzione di callback riceve due valori 32 bit definito dall'applicazione per gli elementi confrontati e un terzo valore a 32 bit specificato quando si chiama `SortChildrenCB`.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

