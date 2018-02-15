---
title: Installazione automazione remota | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Remote Automation [MFC], installation
- installing Remote Automation [MFC]
ms.assetid: 9a02c9f6-dfc6-4489-b240-a1afe25fa0c5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: acd8ee55261dfa03c68aef506dc90188d8d27d37
ms.sourcegitcommit: fa7a6dccddce3747389c91277a53e296f905305c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="remote-automation-installation"></a>Installazione automazione remota
Automazione remota è un numero relativamente basso di componenti:  
  
-   Il proxy client di automazione remota, AUTPRX32. DLL.  
  
-   Il componente dell'automazione remota sul lato server, il gestore di automazione, AUTMGR32. FILE EXE.  
  
-   La gestione RAC RACMGR32. EXE, con la corrispondente RACREG32. DLL.  
  
 Di questi, RAC Manager è scritto in Visual Basic e pertanto deve supportare il run-time di Visual Basic. Questi e altri file di automazione remota vengono installati dal programma di installazione quando si installa Visual C++ Enterprise Edition.  
  
 Se si copiano i componenti di automazione remota a un computer nel quale versione di Visual C++ Enterprise Edition non è installato, assicurarsi che REGSRV32. File EXE nel percorso del computer e registrare RACREG32. DLL tramite riga di comando seguente:  
  
 REGSRVR32 RACREG32. DLL  
  
> [!NOTE]
>  Versioni di RAC Manager prima di Visual C++ 5.0 richiedevano GUAGE32. OCX e TABCTL32. OCX. Nessuna di queste è necessaria per la versione di RAC Manager fornito con Visual C++ Enterprise Edition, versione 5.0 o versione successiva.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Gestione automazione](../mfc/automation-manager-mfc.md)  
  
 [La gestione connessione di automazione remota](../mfc/remote-automation-connection-manager.md)  
  
 [Componenti utente di automazione remota](../mfc/remote-automation-user-components.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Automazione remota](../mfc/remote-automation.md)

