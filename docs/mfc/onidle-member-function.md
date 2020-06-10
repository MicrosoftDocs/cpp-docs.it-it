---
title: Funzione membro OnIdle
ms.date: 11/19/2018
f1_keywords:
- OnIdle
helpviewer_keywords:
- processing messages [MFC]
- OnIdle method [MFC]
- idle loop processing [MFC]
- CWinApp class [MFC], OnIdle method [MFC]
- message handling [MFC], OnIdle method [MFC]
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
ms.openlocfilehash: 17595713f942c7fe7784fa2a12adbcc583cad418
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619839"
---
# <a name="onidle-member-function"></a>Funzione membro OnIdle

Quando non vengono elaborati messaggi di Windows, il Framework chiama la funzione membro [CWinApp](reference/cwinapp-class.md) [OnIdle](reference/cwinapp-class.md#onidle) , descritta in riferimenti alla libreria MFC.

Eseguire l'override `OnIdle` di per eseguire attività in background. Con la versione predefinita viene aggiornato lo stato degli oggetti dell'interfaccia utente, ad esempio i pulsanti della barra degli strumenti, e viene eseguita la pulizia degli oggetti temporanei creati dal Framework nel corso delle relative operazioni. Nella figura seguente viene illustrato il modo in cui il ciclo di messaggi viene chiamato `OnIdle` quando non sono presenti messaggi nella coda.

![Processo del ciclo di messaggi](../mfc/media/vc387c1.gif "Processo del ciclo di messaggi") <br/>
Ciclo del messaggio

Per ulteriori informazioni sulle operazioni che è possibile eseguire nel ciclo inattivo, vedere [elaborazione del ciclo inattivo](idle-loop-processing.md).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](cwinapp-the-application-class.md)
