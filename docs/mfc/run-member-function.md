---
title: Funzione membro Run
ms.date: 11/04/2016
helpviewer_keywords:
- WinMain method [MFC]
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
ms.openlocfilehash: 8271a10ad7439d2795dcc45d667b23b0932a0486
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62308550"
---
# <a name="run-member-function"></a>Funzione membro Run

Un'applicazione framework trascorre la maggior parte del tempo nella [eseguiti](../mfc/reference/cwinapp-class.md#run) la funzione membro della classe [CWinApp](../mfc/reference/cwinapp-class.md). Dopo l'inizializzazione `WinMain` chiamate `Run` per elaborare il ciclo di messaggi.

`Run` scorre un ciclo di messaggi, controllando nella coda di messaggi quelli disponibili. Se è disponibile, un messaggio `Run` lo invia a un'azione. Se è disponibile alcun messaggio, che spesso è true, `Run` chiamate `OnIdle` eseguire qualsiasi elaborazione tempo di inattività potrebbe essere necessario o al framework eseguita. Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di una qualsiasi azione. Quando termina, l'applicazione `Run` chiamate `ExitInstance`. La figura nel [funzione membro OnIdle](../mfc/onidle-member-function.md) Mostra la sequenza di azioni nel ciclo di messaggi.

L'invio del messaggio dipende dal tipo di messaggio. Per altre informazioni, vedere [i messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
