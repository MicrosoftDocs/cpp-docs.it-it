---
title: Errore ML non irreversibile A2096
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2096
helpviewer_keywords:
- A2096
ms.assetid: bab0b5ee-b39f-4e44-a41a-3f949fab4297
ms.openlocfilehash: 425e99c1dc6675e8b970433948e0cc09b8d54485
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75312664"
---
# <a name="ml-nonfatal-error-a2096"></a>Errore ML non irreversibile A2096

**è previsto il registro segmento, gruppo o segmento**

Un segmento o un gruppo era previsto ma non è stato trovato.

Si è verificata una delle condizioni seguenti:

- L'operando di sinistra specificato con l'operatore di override del segmento ( **:** ) non è un registro di segmento (CS, DS, SS, es, FS o GS), il nome del gruppo, il nome del segmento o l'espressione di segmento.

- Alla direttiva [presume](assume.md) è stato assegnato un registro di segmento senza un indirizzo di segmento valido, un registro di segmento, un gruppo o il gruppo **Flat** speciale.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
