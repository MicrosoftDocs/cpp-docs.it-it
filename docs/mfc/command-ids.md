---
title: ID di comando | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- command IDs, MFC
- command IDs
ms.assetid: e0171a2b-45b9-41fa-945d-ec2f7602ded0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e1e03f10199c1b582a1a8603a6ea6c93e1d55473
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931232"
---
# <a name="command-ids"></a>ID comandi
Un comando è illustrato interamente dal relativo ID di comando da solo (con codifica nel **WM_COMMAND** messaggio). Questo ID viene assegnato all'oggetto dell'interfaccia utente che genera il comando. In genere, gli ID sono denominati per la funzionalità dell'oggetto dell'interfaccia utente a che sono assegnati.  
  
 Ad esempio, un elemento Cancella tutto dal menu Modifica potrebbe essere assegnato un ID, ad esempio **ID_EDIT_CLEAR_ALL**. La libreria di classi sono disponibili alcuni ID, in particolare per i comandi che il framework gestisce se stesso, ad esempio **ID_EDIT_CLEAR_ALL** oppure **ID_FILE_OPEN**. Si creeranno altri ID di comando manualmente.  
  
 Quando si creano il propria menu editor dei menu in Visual C++, è consigliabile seguire la libreria di classi della convenzione di denominazione, come illustrato **ID_FILE_OPEN**. [Comandi standard](../mfc/standard-commands.md) illustra i comandi standard definiti dalla libreria di classi.  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)

