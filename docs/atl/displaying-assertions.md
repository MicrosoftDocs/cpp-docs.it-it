---
title: Visualizzazione delle asserzioni | Microsoft Docs
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
ms.openlocfilehash: 8ff7b9b29808e310be2d5568add64a0294bc67e7
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43762382"
---
# <a name="displaying-assertions"></a>Visualizzazione delle asserzioni

Se il client connesso al servizio smette di rispondere, il servizio potrebbe avere dichiarato e visualizzata una finestra di messaggio che non si è in grado di visualizzare. È possibile verificarlo utilizzando il debugger di Visual C++ per il debug del codice (vedere [usando Gestione attività](../atl/using-task-manager.md) più indietro in questa sezione).

Se si determina che il servizio viene visualizzata una finestra di messaggio che non è possibile visualizzare, è consigliabile impostare il **Consenti al servizio di interagire con il Desktop** opzione prima di usare nuovamente il servizio. Questa opzione è un parametro di avvio che consenta le finestre di messaggio visualizzate dal servizio venga visualizzato sul desktop. Per impostare questa opzione, aprire l'applicazione servizi del Pannello di controllo, selezionare il servizio, fare clic su **avvio**, quindi selezionare la **Consenti al servizio di interagire con il Desktop** opzione.

## <a name="see-also"></a>Vedere anche

[Suggerimenti sul debug](../atl/debugging-tips.md)

