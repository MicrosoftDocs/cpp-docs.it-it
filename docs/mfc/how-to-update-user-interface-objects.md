---
title: 'Procedura: aggiornare oggetti dell''interfaccia utente | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- menus [MFC], updating as context changes
- user interface objects [MFC], updating
- user interface objects [MFC]
- update handlers [MFC]
- enabling UI elements [MFC]
- disabling menus [MFC]
- updating user-interface objects [MFC]
- disabling UI elements [MFC]
- commands [MFC], updating UI
- enabling menus [MFC]
ms.assetid: 82f09773-c978-427b-b321-05a6143b7369
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 91e6d13e840c29d3ea9600183fafd9260966a2f4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-update-user-interface-objects"></a>Procedura: aggiornare oggetti dell'interfaccia utente
In genere, le voci di menu e pulsanti della barra degli strumenti dispongono di più di uno stato. Ad esempio, una voce di menu è disponibile (grigio) se non è disponibile in questo contesto. Voci di menu possono inoltre essere selezionata o deselezionata. È anche possibile disabilitare un pulsante della barra degli strumenti se non è disponibile, o può essere eseguito.  
  
 Che aggiorna lo stato di questi elementi come programma modifica condizioni logicamente, se una voce di menu Genera un comando che viene gestito da, ad esempio, un documento, è consigliabile aggiornare la voce di menu per il documento. Probabilmente, il documento contiene le informazioni su cui è basato l'aggiornamento.  
  
 Se un comando contiene più oggetti dell'interfaccia utente (ad esempio una voce di menu e un pulsante della barra degli strumenti), entrambi vengono instradati alla stessa funzione del gestore. Questo incapsula il codice di aggiornamento dell'interfaccia utente per tutti gli oggetti dell'interfaccia utente equivalente in un'unica posizione.  
  
 Il framework fornisce una comoda interfaccia per l'aggiornamento automatico di oggetti dell'interfaccia utente. È possibile scegliere di eseguire l'aggiornamento in un altro modo, ma l'interfaccia fornita è efficiente e facile da utilizzare.  
  
 Gli argomenti seguenti illustrano l'utilizzo dei gestori di aggiornamento:  
  
-   [Quando vengono chiamati i gestori aggiornamento](../mfc/when-update-handlers-are-called.md)  
  
-   [La macro ON_UPDATE_COMMAND_UI](../mfc/on-update-command-ui-macro.md)  
  
-   [CCmdUI (classe)](../mfc/the-ccmdui-class.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Menu](../mfc/menus-mfc.md)

