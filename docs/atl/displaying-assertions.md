---
title: Visualizzazione delle asserzioni | Documenti Microsoft
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
- debugging [ATL], displaying assertions
- assertions, displaying
- debugging assertions
- assertions, debugging
ms.assetid: fa353fe8-4656-4384-a5d2-8866bc977f06
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bff1ab29841ff2dd9973d538bb763d1fc1126a8f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="displaying-assertions"></a>Visualizzazione delle asserzioni
Se il client connesso al servizio smette di rispondere, il servizio può avere dichiarato e visualizzata una finestra di messaggio che non si riesce a vedere. È possibile verificarlo utilizzando il debugger di Visual C++ per eseguire il debug del codice (vedere [tramite Gestione attività](../atl/using-task-manager.md) più indietro in questa sezione).  
  
 Se si determina che il servizio viene visualizzata una finestra di messaggio che non è possibile visualizzare, si desidera impostare il **Consenti al servizio di interagire col Desktop** opzione prima di utilizzare nuovamente il servizio. Questa opzione è un parametro di avvio che consenta le finestre di messaggio visualizzate dal servizio per cui vengono visualizzati sul desktop. Per impostare questa opzione, aprire l'applicazione servizi del Pannello di controllo, selezionare il servizio, fare clic su **avvio**, quindi selezionare il **Consenti al servizio di interagire col Desktop** opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sul debug](../atl/debugging-tips.md)

