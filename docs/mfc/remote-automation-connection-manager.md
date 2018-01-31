---
title: Gestione connessione di automazione remota | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Automation clients [MFC], configuring for Remote Automation
- registry [MFC], remote Automation
- Automation servers [MFC], configuring for Remote Automation
- Remote Automation Connection Manager [MFC]
- Remote Automation [MFC], configuring client and server machines
- RAC Manager tool [MFC]
ms.assetid: 562eb7bc-f95c-46ad-ac97-f0dfa98362af
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cf316653b2f968fd5373c6265bb4f3f3ef3b0ba4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="remote-automation-connection-manager"></a>Gestione connessioni di automazione remota
Per configurare i computer client e server, è necessario apportare le modifiche del Registro di sistema. Anziché procedere manualmente, è molto più semplice utilizzare lo strumento di connessione di automazione remota (RAC) Manager. Questo strumento, RACMGR32. EXE, insieme a RACREG32. DLL, devono essere copiati in qualsiasi directory desiderato. Mediante l'inserimento nel percorso, può essere eseguito nella barra delle applicazioni tramite l'esecuzione. In alternativa, è possibile creare un collegamento o inserire un riferimento a esso nel menu Start.  
  
 RACMGR32 è scritto in Visual Basic e deve pertanto DLL di supporto di Visual Basic. Questi file vengono inseriti nella stessa directory di RACMGR32. File EXE sul CD-ROM. Le versioni di questi file vengono installati dal programma di installazione per Visual C++ Enterprise Edition sono equivalenti o versioni più recenti rispetto a quelle fornite con Visual Basic 5.0, Enterprise Edition. L'installazione di Visual C++ consente di copiare le nuove versioni dei file di Visual Basic nella directory di sistema. Per Windows 9x, questa directory è in genere C:\Windows\System. Per Windows NT e Windows 2000, è in genere C:\WINNT\system32. Il programma di installazione registra anche questi file con il sistema operativo. È possibile rimuoverli dall'installazione di Visual Basic.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione automazione (MFC)](../mfc/automation-manager-mfc.md)   
 [Componenti utente di automazione remota](../mfc/remote-automation-user-components.md)   
 [Installazione automazione remota](../mfc/remote-automation-installation.md)
