---
title: Implementazione di aree di lavoro nei controlli elenco | Documenti Microsoft
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
- list controls [MFC], working areas
- working areas in list control [MFC]
ms.assetid: fbbb356b-3359-4348-8603-f1cb114cadde
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cefb8007fd9b73dda4c0e8a99e9ae9daa1bfcc34
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implementing-working-areas-in-list-controls"></a>Implementazione di aree di lavoro nei controlli List
Per impostazione predefinita, un controllo elenco dispone di tutti gli elementi nella griglia standard. Tuttavia, un altro metodo è supportato, aree di lavoro, che dispone gli elementi dell'elenco in gruppi rettangolari. Per un'immagine di un controllo elenco che implementa aree di lavoro, vedere Utilizzo di controlli di visualizzazione elenco in Windows SDK.  
  
> [!NOTE]
>  Aree di lavoro sono visibili solo quando il controllo elenco è in modalità di icona di piccole dimensioni o icona. Vengono tuttavia mantenute tutte le aree di lavoro corrente se la visualizzazione viene passata alla modalità report o un elenco.  
  
 Aree di lavoro consente di visualizzare un bordo vuoto (nel, superiore e sinistro destra degli elementi), o causare da visualizzare quando sono in genere non sarebbe una barra di scorrimento orizzontale. Un altro utilizzo comune consiste nel creare più aree di lavoro a cui gli elementi possono essere spostati o eliminati. Con questo metodo, è possibile creare aree in una singola visualizzazione che hanno un significato diverso. L'utente può quindi classificare gli elementi, inserirli in un'area diversa. Un esempio sarebbe una visualizzazione di un file system che dispone di un'area per i file di lettura/scrittura e un'altra area per i file di sola lettura. Se un file viene spostato nell'area di sola lettura, diventa automaticamente in sola lettura. Spostamento di un file dall'area di sola lettura nell'area di lettura/scrittura renderebbe il file di lettura/scrittura.  
  
 `CListCtrl`fornisce diverse funzioni membro per la creazione e gestione di aree di lavoro nel controllo elenco. [GetWorkAreas](../mfc/reference/clistctrl-class.md#getworkareas) e [SetWorkAreas](../mfc/reference/clistctrl-class.md#setworkareas) recuperare e impostare una matrice di `CRect` oggetti (o `RECT` strutture), che archivia le aree di lavoro attualmente implementata per il controllo elenco. Inoltre, [GetNumberOfWorkAreas](../mfc/reference/clistctrl-class.md#getnumberofworkareas) recupera il numero corrente di aree di lavoro per il controllo elenco (per impostazione predefinita, zero).  
  
## <a name="items-and-working-areas"></a>Gli elementi e aree di lavoro  
 Quando viene creata un'area di lavoro, gli elementi che si trovano all'interno dell'area di lavoro diventano membri della stessa. Analogamente, se un elemento viene spostato in un'area di lavoro, diventa un membro dell'area di lavoro a cui è stato spostato. Se un elemento non è compreso tra qualsiasi area di lavoro, diventa un membro dell'area di lavoro prima di (indice 0). Se si desidera creare un elemento e inserirlo all'interno di un'area di lavoro specifico, è necessario creare l'elemento e quindi spostarlo nell'area di lavoro con una chiamata a [SetItemPosition](../mfc/reference/clistctrl-class.md#setitemposition). Nel secondo esempio riportato di seguito viene illustrata questa tecnica.  
  
 Nell'esempio seguente viene implementa quattro aree di lavoro (`rcWorkAreas`), di uguale dimensione con un bordo di larghezza 10 pixel ogni area di lavoro, in un controllo elenco (`m_WorkAreaListCtrl`).  
  
 [!code-cpp[NVC_MFCControlLadenDialog#20](../mfc/codesnippet/cpp/implementing-working-areas-in-list-controls_1.cpp)]  
  
 La chiamata a [ApproximateViewRect](../mfc/reference/clistctrl-class.md#approximateviewrect) è stata eseguita per ottenere una stima dell'area totale necessario per visualizzare tutti gli elementi in un'unica area. Questa stima è quindi suddivisa in quattro regioni e riempita con un bordo di larghezza di 5 pixel.  
  
 Nell'esempio seguente assegna gli elementi dell'elenco esistente a ogni gruppo (`rcWorkAreas`) e aggiorna la visualizzazione del controllo (`m_WorkAreaListCtrl`) per completare l'effetto.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#21](../mfc/codesnippet/cpp/implementing-working-areas-in-list-controls_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

