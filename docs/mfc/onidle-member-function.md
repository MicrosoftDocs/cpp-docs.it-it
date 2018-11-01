---
title: Funzione membro OnIdle
ms.date: 11/04/2016
f1_keywords:
- OnIdle
helpviewer_keywords:
- processing messages [MFC]
- OnIdle method [MFC]
- idle loop processing [MFC]
- CWinApp class [MFC], OnIdle method [MFC]
- message handling [MFC], OnIdle method [MFC]
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
ms.openlocfilehash: 3d457c1675d5f5f3f88c67b1aac2d03509c21564
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662150"
---
# <a name="onidle-member-function"></a>Funzione membro OnIdle

Quando non vengono elaborati messaggi di Windows, il framework chiama il [CWinApp](../mfc/reference/cwinapp-class.md) funzione membro [OnIdle](../mfc/reference/cwinapp-class.md#onidle) (descritto nel riferimento alla libreria MFC).

Eseguire l'override `OnIdle` per eseguire le attività in background. La versione predefinita di aggiornare lo stato di oggetti dell'interfaccia utente, ad esempio i pulsanti della barra degli strumenti ed esegue la pulizia degli oggetti temporanei creati dal framework durante lo svolgimento delle operazioni. La figura seguente illustra come il ciclo di messaggi chiama `OnIdle` quando non sono presenti messaggi nella coda.

![Processo del ciclo di messaggi](../mfc/media/vc387c1.gif "vc387c1") il ciclo di messaggi

Per altre informazioni sulle operazioni eseguibili nel ciclo inattivo, vedere [elaborazione di cicli di inattività](../mfc/idle-loop-processing.md).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
