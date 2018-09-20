---
title: ID di comando | Microsoft Docs
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
ms.openlocfilehash: 5087c271151793169cbf7350f78750044ccead0b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46446972"
---
# <a name="command-ids"></a>ID comandi

Un comando è descritto dal relativo ID di comando da solo (con codifica nel **WM_COMMAND** messaggio). Questo ID viene assegnato all'oggetto di interfaccia utente che genera il comando. In genere, gli ID sono denominati per le funzionalità dell'oggetto dell'interfaccia utente a che sono assegnati.

Ad esempio, un elemento Cancella tutto del menu Modifica potrebbe essere assegnato un ID, ad esempio **ID_EDIT_CLEAR_ALL**. La libreria di classi sono disponibili alcuni ID, in particolare per i comandi che il framework gestisce se stesso, ad esempio **ID_EDIT_CLEAR_ALL** oppure **ID_FILE_OPEN**. Si creeranno altri ID di comando manualmente.

Quando si creano i proprio menu editor di menu in Visual C++, è consigliabile seguire la libreria di classi di convenzione di denominazione come illustrato **ID_FILE_OPEN**. [Comandi standard](../mfc/standard-commands.md) illustra i comandi standard definiti dalla libreria di classi.

## <a name="see-also"></a>Vedere anche

[Oggetti dell'interfaccia utente e ID comando](../mfc/user-interface-objects-and-command-ids.md)

