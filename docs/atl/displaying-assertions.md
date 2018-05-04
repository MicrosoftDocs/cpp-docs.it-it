---
title: Visualizzazione delle asserzioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- debugging [ATL], displaying assertions
- assertions, displaying
- debugging assertions
- assertions, debugging
ms.assetid: fa353fe8-4656-4384-a5d2-8866bc977f06
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f9133d2fadfa4158eef9755fff7e0d2a62478966
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="displaying-assertions"></a>Visualizzazione delle asserzioni
Se il client connesso al servizio smette di rispondere, il servizio può avere dichiarato e visualizzata una finestra di messaggio che non si riesce a vedere. È possibile verificarlo utilizzando il debugger di Visual C++ per eseguire il debug del codice (vedere [tramite Gestione attività](../atl/using-task-manager.md) più indietro in questa sezione).  
  
 Se si determina che il servizio viene visualizzata una finestra di messaggio che non è possibile visualizzare, si desidera impostare il **Consenti al servizio di interagire col Desktop** opzione prima di utilizzare nuovamente il servizio. Questa opzione è un parametro di avvio che consenta le finestre di messaggio visualizzate dal servizio per cui vengono visualizzati sul desktop. Per impostare questa opzione, aprire l'applicazione servizi del Pannello di controllo, selezionare il servizio, fare clic su **avvio**, quindi selezionare il **Consenti al servizio di interagire col Desktop** opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sul debug](../atl/debugging-tips.md)

