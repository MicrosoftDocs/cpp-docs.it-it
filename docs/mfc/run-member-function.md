---
title: Funzione membro Run | Documenti Microsoft
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
ms.openlocfilehash: a658af47723a9c19218b205a17cb46919d7abd59
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932286"
---
# <a name="run-member-function"></a>Funzione membro Run
Una framework applicazione per la maggior parte del tempo nel [eseguiti](../mfc/reference/cwinapp-class.md#run) funzioni membro delle classi [CWinApp](../mfc/reference/cwinapp-class.md). Dopo l'inizializzazione, `WinMain` chiamate `Run` per elaborare il ciclo di messaggi.  
  
 `Run` scorre un ciclo di messaggi, controllando nella coda di messaggi quelli disponibili. Se è disponibile, un messaggio `Run` Invia a un'azione. Se è disponibile alcun messaggio, che spesso è true, `Run` chiamate `OnIdle` per eseguire qualsiasi elaborazione tempo di inattività potrebbe essere necessario utente o al framework eseguita. Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di una qualsiasi azione. Quando termina, l'applicazione `Run` chiamate `ExitInstance`. Nella figura [funzione membro OnIdle](../mfc/onidle-member-function.md) Mostra la sequenza di azioni nel ciclo di messaggi.  
  
 L'invio del messaggio dipende dal tipo di messaggio. Per altre informazioni, vedere [i messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
