---
description: 'Altre informazioni su: ID comando'
title: ID comandi
ms.date: 11/04/2016
helpviewer_keywords:
- command IDs, MFC
- command IDs
ms.assetid: e0171a2b-45b9-41fa-945d-ec2f7602ded0
ms.openlocfilehash: bba3b8b342b4d2e0c9492f9d0f3100a5d8f9e7d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159986"
---
# <a name="command-ids"></a>ID comandi

Un comando viene descritto completamente dal proprio ID di comando (codificato nel messaggio **WM_COMMAND** ). Questo ID viene assegnato all'oggetto interfaccia utente che genera il comando. In genere, gli ID vengono denominati per la funzionalità dell'oggetto dell'interfaccia utente a cui sono assegnati.

Ad esempio, a un elemento Clear All nel menu Edit potrebbe essere assegnato un ID, ad esempio **ID_EDIT_CLEAR_ALL**. La libreria di classi predefinisce alcuni ID, in particolare per i comandi gestiti dal Framework, ad esempio **ID_EDIT_CLEAR_ALL** o **ID_FILE_OPEN**. Si creeranno altri ID comando manualmente.

Quando si creano menu personalizzati nell'editor di menu Visual C++, è consigliabile seguire la convenzione di denominazione della libreria di classi, come illustrato da **ID_FILE_OPEN**. I [comandi standard](standard-commands.md) illustrano i comandi standard definiti dalla libreria di classi.

## <a name="see-also"></a>Vedi anche

[Oggetti dell'interfaccia utente e ID comando](user-interface-objects-and-command-ids.md)
