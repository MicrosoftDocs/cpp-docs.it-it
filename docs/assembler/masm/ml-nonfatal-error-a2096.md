---
title: Machine Learning errore non irreversibile A2096 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2096
dev_langs:
- C++
helpviewer_keywords:
- A2096
ms.assetid: bab0b5ee-b39f-4e44-a41a-3f949fab4297
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 82f4ef76dca10b1208a931bc3e1cc09d82a639d2
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43679598"
---
# <a name="ml-nonfatal-error-a2096"></a>Errore ML non irreversibile A2096

**segmento, gruppo o Registro di segmento previsto**

Un segmento o un gruppo è previsto ma non è stato trovato.

Si è verificata una delle operazioni seguenti:

- L'operando di sinistra specificato con il segmento di eseguire l'override di operatore (**:**) non è un segmento register (CS, DS, SS, ES, FS o GS), nome del gruppo, il nome del segmento o espressione di segmento.

- Il [PRESUPPONI](../../assembler/masm/assume.md) direttiva è stata specificata un registro del segmento senza un indirizzo valido segmento, Registro di segmento, gruppo o speciale **FLAT** gruppo.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>