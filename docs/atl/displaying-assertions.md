---
description: 'Altre informazioni su: visualizzazione delle asserzioni'
title: Visualizzazione delle asserzioni
ms.date: 05/05/2019
helpviewer_keywords:
- debugging [ATL], displaying assertions
- assertions, displaying
- debugging assertions
- assertions, debugging
ms.assetid: fa353fe8-4656-4384-a5d2-8866bc977f06
ms.openlocfilehash: 3f925d5f3a7d1ad0ac1171ea8983b57ead147bf4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153014"
---
# <a name="displaying-assertions"></a>Visualizzazione delle asserzioni

Se il client connesso al servizio sembra smettere di rispondere, il servizio potrebbe aver dichiarato e visualizzato una finestra di messaggio che non è possibile visualizzare. Per confermare questo problema, è possibile usare il debugger di Visual Studio per eseguire il debug del codice. vedere [uso di gestione attività](../atl/using-task-manager.md) in precedenza in questa sezione.

Se si determina che il servizio Visualizza una finestra di messaggio che non è possibile visualizzare, è consigliabile impostare l'opzione **Consenti al servizio di interagire con il desktop** prima di riutilizzare il servizio. Questa opzione è un parametro di avvio che consente di visualizzare nel desktop tutte le finestre di messaggio visualizzate dal servizio. Per impostare questa opzione, aprire l'applicazione del pannello di controllo servizi, selezionare il servizio, fare clic su **avvio**, quindi selezionare l'opzione **Consenti al servizio di interagire con il desktop** .

## <a name="see-also"></a>Vedi anche

[Suggerimenti per il debug](../atl/debugging-tips.md)
