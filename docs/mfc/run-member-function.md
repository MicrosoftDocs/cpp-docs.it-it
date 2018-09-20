---
title: Funzione membro Run | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- WinMain method [MFC]
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 446b1b6fc2a5265e2c4eb8a608ff8b4f0028c57d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408232"
---
# <a name="run-member-function"></a>Funzione membro Run

Un'applicazione framework trascorre la maggior parte del tempo nella [eseguiti](../mfc/reference/cwinapp-class.md#run) la funzione membro della classe [CWinApp](../mfc/reference/cwinapp-class.md). Dopo l'inizializzazione `WinMain` chiamate `Run` per elaborare il ciclo di messaggi.

`Run` scorre un ciclo di messaggi, controllando nella coda di messaggi quelli disponibili. Se è disponibile, un messaggio `Run` lo invia a un'azione. Se è disponibile alcun messaggio, che spesso è true, `Run` chiamate `OnIdle` eseguire qualsiasi elaborazione tempo di inattività potrebbe essere necessario o al framework eseguita. Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di una qualsiasi azione. Quando termina, l'applicazione `Run` chiamate `ExitInstance`. La figura nel [funzione membro OnIdle](../mfc/onidle-member-function.md) Mostra la sequenza di azioni nel ciclo di messaggi.

L'invio del messaggio dipende dal tipo di messaggio. Per altre informazioni, vedere [i messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
