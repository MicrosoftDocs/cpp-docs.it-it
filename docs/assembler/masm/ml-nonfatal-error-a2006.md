---
title: Machine Learning errore non irreversibile A2006 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2006
dev_langs:
- C++
helpviewer_keywords:
- A2006
ms.assetid: b8a8f096-95df-42b5-85ed-d2530560a84c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f287c6ab46c6af71ba6dc0032f332ce3cc489454
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43677405"
---
# <a name="ml-nonfatal-error-a2006"></a>Errore ML non irreversibile A2006

**simbolo non definito: identificatore**

È stato effettuato il tentativo di utilizzare un simbolo che non è stato definito.

Potrebbe essersi verificato uno dei seguenti:

- Non è stato definito un simbolo.

- Un campo non è un membro della struttura specificata.

- È stato definito un simbolo in un file di inclusione che non è stato fornito.

- Un simbolo esterno è stato utilizzato senza un' [EXTERN](../../assembler/masm/extern-masm.md) oppure [EXTERNDEF](../../assembler/masm/externdef.md) direttiva.

- Un nome di simbolo è stato digitato correttamente.

- Un'etichetta del codice locale viene fatto riferimento all'esterno del relativo ambito.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>