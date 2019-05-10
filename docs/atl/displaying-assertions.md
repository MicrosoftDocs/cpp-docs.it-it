---
title: Visualizzazione delle asserzioni
ms.date: 05/05/2019
helpviewer_keywords:
- debugging [ATL], displaying assertions
- assertions, displaying
- debugging assertions
- assertions, debugging
ms.assetid: fa353fe8-4656-4384-a5d2-8866bc977f06
ms.openlocfilehash: 962a33a7d5d922f7f1655e22b2c9d0acdcf8925c
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221260"
---
# <a name="displaying-assertions"></a>Visualizzazione delle asserzioni

Se il client connesso al servizio smette di rispondere, il servizio potrebbe avere dichiarato e visualizzata una finestra di messaggio che non si è in grado di visualizzare. È possibile verificarlo utilizzando il debugger di Visual Studio per eseguire il debug del codice (vedere [usando Gestione attività](../atl/using-task-manager.md) più indietro in questa sezione).

Se si determina che il servizio viene visualizzata una finestra di messaggio che non è possibile visualizzare, è consigliabile impostare il **Consenti al servizio di interagire con il Desktop** opzione prima di usare nuovamente il servizio. Questa opzione è un parametro di avvio che consenta le finestre di messaggio visualizzate dal servizio venga visualizzato sul desktop. Per impostare questa opzione, aprire l'applicazione servizi del Pannello di controllo, selezionare il servizio, fare clic su **avvio**, quindi selezionare la **Consenti al servizio di interagire con il Desktop** opzione.

## <a name="see-also"></a>Vedere anche

[Suggerimenti sul debug](../atl/debugging-tips.md)
