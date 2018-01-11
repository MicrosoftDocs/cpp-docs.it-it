---
title: Funzione membro Run | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: WinMain method [MFC]
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 90436e3b775cd547a67be49c120d1fb94b32a5dc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="run-member-function"></a>Funzione membro Run
Un'applicazione framework passa la maggior parte del tempo nel [eseguire](../mfc/reference/cwinapp-class.md#run) funzione membro di classe [CWinApp](../mfc/reference/cwinapp-class.md). Dopo l'inizializzazione, `WinMain` chiamate **eseguire** per elaborare il ciclo di messaggi.  
  
 **Eseguire** scorre un ciclo di messaggi, controllando nella coda di messaggi. Se un messaggio è disponibile, **eseguire** Invia a un'azione. Se è disponibile alcun messaggio, che spesso è true, **eseguire** chiamate `OnIdle` per eseguire qualsiasi elaborazione tempo di inattività che potrebbe necessitare di utente o al framework eseguita. Se non sono presenti messaggi o elaborazioni nel tempo di inattività, l'applicazione resta in attesa fino al verificarsi di una qualsiasi azione. Al termine dell'esecuzione dell'applicazione, **eseguire** chiamate `ExitInstance`. Nella figura [funzione membro OnIdle](../mfc/onidle-member-function.md) Mostra la sequenza di azioni nel ciclo di messaggi.  
  
 L'invio del messaggio dipende dal tipo di messaggio. Per ulteriori informazioni, vedere [messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
