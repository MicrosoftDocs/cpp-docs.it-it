---
title: Funzione membro Run
ms.date: 11/04/2016
helpviewer_keywords:
- WinMain method [MFC]
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
ms.openlocfilehash: 8e6e74b8f0fd62f96d6d846bbba867f9189550ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50666856"
---
# <a name="run-member-function"></a>Funzione membro Run

Un'applicazione framework trascorre la maggior parte del tempo nella [eseguiti](../mfc/reference/cwinapp-class.md#run) la funzione membro della classe [CWinApp](../mfc/reference/cwinapp-class.md). Dopo l'inizializzazione `WinMain` chiamate `Run` per elaborare il ciclo di messaggi.

`Run` scorre un ciclo di messaggi, controllando nella coda di messaggi quelli disponibili. Se è disponibile, un messaggio `Run` lo invia a un'azione. Se è disponibile alcun messaggio, che spesso è true, `Run` chiamate `OnIdle` eseguire qualsiasi elaborazione tempo di inattività potrebbe essere necessario o al framework eseguita. Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di una qualsiasi azione. Quando termina, l'applicazione `Run` chiamate `ExitInstance`. La figura nel [funzione membro OnIdle](../mfc/onidle-member-function.md) Mostra la sequenza di azioni nel ciclo di messaggi.

L'invio del messaggio dipende dal tipo di messaggio. Per altre informazioni, vedere [i messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
