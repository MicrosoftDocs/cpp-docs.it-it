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
ms.openlocfilehash: 7b3f2fbeac6ae356003abf12b5df4c54c8bb327a
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175133"
---
# <a name="onidle-member-function"></a>Funzione membro OnIdle

Quando non vengono elaborati messaggi di Windows, il framework chiama il [CWinApp](../mfc/reference/cwinapp-class.md) funzione membro [OnIdle](../mfc/reference/cwinapp-class.md#onidle) (descritto nel riferimento alla libreria MFC).

Eseguire l'override `OnIdle` per eseguire le attività in background. La versione predefinita di aggiornare lo stato di oggetti dell'interfaccia utente, ad esempio i pulsanti della barra degli strumenti ed esegue la pulizia degli oggetti temporanei creati dal framework durante lo svolgimento delle operazioni. La figura seguente illustra come il ciclo di messaggi chiama `OnIdle` quando non sono presenti messaggi nella coda.

![Processo del ciclo di messaggi](../mfc/media/vc387c1.gif "processo del ciclo di messaggi") <br/>
Ciclo del messaggio

Per altre informazioni sulle operazioni eseguibili nel ciclo inattivo, vedere [elaborazione di cicli di inattività](../mfc/idle-loop-processing.md).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
