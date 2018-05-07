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
ms.openlocfilehash: be1d7d90b4c13a23e2e3456e7371abbae61be4e9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="run-member-function"></a>Funzione membro Run
Un'applicazione framework passa la maggior parte del tempo nel [eseguire](../mfc/reference/cwinapp-class.md#run) funzione membro di classe [CWinApp](../mfc/reference/cwinapp-class.md). Dopo l'inizializzazione, `WinMain` chiamate **eseguire** per elaborare il ciclo di messaggi.  
  
 **Eseguire** scorre un ciclo di messaggi, controllando nella coda di messaggi quelli disponibili. Se un messaggio è disponibile, **eseguire** Invia a un'azione. Se è disponibile alcun messaggio, che spesso è true, **eseguire** chiamate `OnIdle` per eseguire qualsiasi elaborazione tempo di inattività che potrebbe necessitare di utente o al framework eseguita. Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di una qualsiasi azione. Al termine dell'esecuzione dell'applicazione, **eseguire** chiamate `ExitInstance`. Nella figura [funzione membro OnIdle](../mfc/onidle-member-function.md) Mostra la sequenza di azioni nel ciclo di messaggi.  
  
 L'invio del messaggio dipende dal tipo di messaggio. Per ulteriori informazioni, vedere [messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
