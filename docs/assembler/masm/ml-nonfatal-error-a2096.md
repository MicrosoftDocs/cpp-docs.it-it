---
title: Errore ML non irreversibile A2096
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2096
helpviewer_keywords:
- A2096
ms.assetid: bab0b5ee-b39f-4e44-a41a-3f949fab4297
ms.openlocfilehash: 14fb30214cf7badf51368672dc52635d50a067f1
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74855474"
---
# <a name="ml-nonfatal-error-a2096"></a>Errore ML non irreversibile A2096

**è previsto il registro segmento, gruppo o segmento**

Un segmento o un gruppo era previsto ma non è stato trovato.

Si è verificata una delle condizioni seguenti:

- L'operando di sinistra specificato con l'operatore di override del segmento ( **:** ) non è un registro di segmento (CS, DS, SS, es, FS o GS), il nome del gruppo, il nome del segmento o l'espressione di segmento.

- Alla direttiva [presume](../../assembler/masm/assume.md) è stato assegnato un registro di segmento senza un indirizzo di segmento valido, un registro di segmento, un gruppo o il gruppo **Flat** speciale.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>