---
title: Machine Learning errore non irreversibile A2050 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2050
dev_langs:
- C++
helpviewer_keywords:
- A2050
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bd2e0e6c2fc818ef9286fd303c07a26bdd8b4e5a
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43680671"
---
# <a name="ml-nonfatal-error-a2050"></a>Errore ML non irreversibile A2050

**reale o un numero di BCD non consentito**

Un numero a virgola mobile (VERO) o binary coded decimal (BCD) costante utilizzato diverso da come un inizializzatore di dati.

Si è verificata una delle operazioni seguenti:

- Un numero reale o un archivio BCD è stato usato in un'espressione.

- Un numero reale è stato utilizzato per inizializzare diverso da una direttiva [DWORD](../../assembler/masm/dword.md), [QWORD](../../assembler/masm/qword.md), o [TBYTE](../../assembler/masm/tbyte.md).

- Un archivio BCD è stato utilizzato per inizializzare diverso da una direttiva `TBYTE`.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>