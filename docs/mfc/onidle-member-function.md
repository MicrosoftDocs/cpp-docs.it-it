---
title: Funzione membro OnIdle | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- OnIdle
dev_langs:
- C++
helpviewer_keywords:
- processing messages [MFC]
- OnIdle method [MFC]
- idle loop processing [MFC]
- CWinApp class [MFC], OnIdle method [MFC]
- message handling [MFC], OnIdle method [MFC]
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4dfbc0a1f20cb6cc01143ed6f07a63e84b53be6b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="onidle-member-function"></a>Funzione membro OnIdle
Durante non l'elaborazione di messaggi Windows, il framework chiama la [CWinApp](../mfc/reference/cwinapp-class.md) funzione membro [OnIdle](../mfc/reference/cwinapp-class.md#onidle) (descritta in riferimenti alla libreria MFC).  
  
 Eseguire l'override `OnIdle` per eseguire attività in background. La versione predefinita aggiorna lo stato degli oggetti dell'interfaccia utente, ad esempio i pulsanti della barra degli strumenti e ne esegue la pulizia degli oggetti temporanei creati dal framework durante le operazioni. Nella figura seguente viene illustrato come il ciclo di messaggi chiama `OnIdle` quando non sono presenti messaggi nella coda.  
  
 ![Processo del ciclo di messaggi](../mfc/media/vc387c1.gif "vc387c1")  
Ciclo del messaggio  
  
 Per ulteriori informazioni sulle operazioni del ciclo inattivo, vedere [elaborazione di cicli di inattività](../mfc/idle-loop-processing.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
