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
ms.openlocfilehash: 0dc27e39f6e2753b7b468e39c283d58c3e585d6d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33341472"
---
# <a name="command-ids"></a>ID comandi
Un comando è descritto per il solo ID di comando (con codifica nel **WM_COMMAND** messaggio). Questo ID viene assegnato all'oggetto dell'interfaccia utente che genera il comando. In genere, gli ID sono denominati per la funzionalità dell'oggetto dell'interfaccia utente che sono assegnati.  
  
 Ad esempio, un elemento del menu Modifica Cancella tutto potrebbe essere assegnato un ID, ad esempio **ID_EDIT_CLEAR_ALL**. La libreria di classi sono disponibili alcuni ID, in particolare per i comandi che il framework gestisce se stesso, ad esempio **ID_EDIT_CLEAR_ALL** o `ID_FILE_OPEN`. Creare altri ID di comando manualmente.  
  
 Quando si creano il propria menu editor dei menu in Visual C++, è consigliabile seguire la libreria di classi della convenzione di denominazione come illustrato `ID_FILE_OPEN`. [Comandi standard](../mfc/standard-commands.md) illustra i comandi standard definiti dalla libreria di classi.  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)

