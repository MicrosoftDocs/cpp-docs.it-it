---
title: Errore ML non irreversibile A2096
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2096
helpviewer_keywords:
- A2096
ms.assetid: bab0b5ee-b39f-4e44-a41a-3f949fab4297
ms.openlocfilehash: e6b31afeff801e7128b5a76576e9eaa3398f68e5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62202493"
---
# <a name="ml-nonfatal-error-a2096"></a>Errore ML non irreversibile A2096

**segmento, gruppo o Registro di segmento previsto**

Un segmento o un gruppo è previsto ma non è stato trovato.

Si è verificata una delle operazioni seguenti:

- L'operando di sinistra specificato con il segmento di eseguire l'override di operatore (**:**) non è un segmento register (CS, DS, SS, ES, FS o GS), nome del gruppo, il nome del segmento o espressione di segmento.

- Il [PRESUPPONI](../../assembler/masm/assume.md) direttiva è stata specificata un registro del segmento senza un indirizzo valido segmento, Registro di segmento, gruppo o speciale **FLAT** gruppo.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>