---
title: Machine Learning errore non irreversibile A2085 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2085
dev_langs:
- C++
helpviewer_keywords:
- A2085
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd5ec9f36a4f956b8eeb097b6a8f8eaed89ba2b2
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43681436"
---
# <a name="ml-nonfatal-error-a2085"></a>Errore ML non irreversibile A2085

**istruzione o registrazione non accettato in modalità della CPU corrente**

È stato effettuato il tentativo di utilizzare un'istruzione, registrare o parola chiave che non è valido per la modalità del processore corrente.

Ad esempio, a 32 registri richiedono [.386](../../assembler/masm/dot-386.md) o versione successiva. Registri di controllo, ad esempio CR0 richiedono la modalità con privilegi [386p](../../assembler/masm/dot-386p.md) o versione successiva. Verrà generato questo errore anche per il **NEAR32**, **FAR32**, e **FLAT** parole chiave, che richiedono. **386** o versione successiva.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>