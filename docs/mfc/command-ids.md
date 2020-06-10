---
title: ID comandi
ms.date: 11/04/2016
helpviewer_keywords:
- command IDs, MFC
- command IDs
ms.assetid: e0171a2b-45b9-41fa-945d-ec2f7602ded0
ms.openlocfilehash: f7d675891904301b16aafe3acb2c294eede6d8d8
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619045"
---
# <a name="command-ids"></a>ID comandi

Un comando viene descritto completamente dal proprio ID di comando (codificato nel messaggio **WM_COMMAND** ). Questo ID viene assegnato all'oggetto interfaccia utente che genera il comando. In genere, gli ID vengono denominati per la funzionalità dell'oggetto dell'interfaccia utente a cui sono assegnati.

Ad esempio, a un elemento Clear All nel menu Edit potrebbe essere assegnato un ID, ad esempio **ID_EDIT_CLEAR_ALL**. La libreria di classi predefinisce alcuni ID, in particolare per i comandi gestiti dal Framework, ad esempio **ID_EDIT_CLEAR_ALL** o **ID_FILE_OPEN**. Si creeranno altri ID comando manualmente.

Quando si creano menu personalizzati nell'editor di menu Visual C++, è consigliabile seguire la convenzione di denominazione della libreria di classi, come illustrato da **ID_FILE_OPEN**. I [comandi standard](standard-commands.md) illustrano i comandi standard definiti dalla libreria di classi.

## <a name="see-also"></a>Vedere anche

[Oggetti dell'interfaccia utente e ID comando](user-interface-objects-and-command-ids.md)
