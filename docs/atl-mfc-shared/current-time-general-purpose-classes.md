---
title: 'Ora corrente: Classi generiche | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- time, setting current
- current time, CTime object
- procedures, getting current time
- initializing objects, with the current time
- time, getting current
ms.assetid: c39e6775-6a92-4b27-95a7-5c86ed371d8a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a6c43ffd60d837bdd8f061057cf1c36340b6e6af
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="current-time-general-purpose-classes"></a>Ora corrente: Classi generiche
La procedura seguente viene illustrato come creare un `CTime` dell'oggetto e inizializzarlo con l'ora corrente.  
  
#### <a name="to-get-the-current-time"></a>Per ottenere l'ora corrente  
  
1.  Allocare un `CTime` dell'oggetto, come indicato di seguito:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#171](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_1.cpp)]  
  
    > [!NOTE]
    >  Non inizializzato `CTime` gli oggetti non vengono inizializzati per un'ora valida.  
  
2.  Chiamare il `CTime::GetCurrentTime` funzione per ottenere l'ora corrente del sistema operativo. Questa funzione restituisce un `CTime` oggetto che può essere utilizzato per impostare il valore di `CTime`, come segue:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#172](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_2.cpp)]  
  
     Poiché `GetCurrentTime` è una funzione membro statico di `CTime` (classe), è necessario qualificare il nome con il nome della classe e l'operatore di risoluzione ambito (`::`), `CTime::GetCurrentTime()`.  
  
 Naturalmente, i due passaggi descritti in precedenza possono essere combinati in una singola istruzione programma come indicato di seguito:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#173](../atl-mfc-shared/codesnippet/cpp/current-time-general-purpose-classes_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Data e ora: classi generiche](../atl-mfc-shared/date-and-time-general-purpose-classes.md)



