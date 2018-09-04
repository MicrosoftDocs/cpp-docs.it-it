---
title: Machine Learning errore non irreversibile A2206 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2206
dev_langs:
- C++
helpviewer_keywords:
- A2206
ms.assetid: 711846d0-5a09-4353-8857-60588c25526a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 10edbe68ca7f0093cdeb6a9ca5a02cde07f556e6
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43676348"
---
# <a name="ml-nonfatal-error-a2206"></a>Errore ML non irreversibile A2206

**operatore mancante nell'espressione**

Un'espressione non può essere valutata perché non contiene un operatore. Questo messaggio di errore potrebbe essere anche un effetto collaterale di un precedente errore del programma.

La riga seguente genera l'errore:

```asm
value1 = ( 1 + 2 ) 3
```

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>