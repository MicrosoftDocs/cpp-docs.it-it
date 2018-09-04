---
title: Machine Learning errore non irreversibile A2133 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A2133
dev_langs:
- C++
helpviewer_keywords:
- A2133
ms.assetid: 5ba50911-22c8-43b7-90e2-946fc612e05f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0df094f5e7135ffb3b9a5f09383e03e411755de3
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43678066"
---
# <a name="ml-nonfatal-error-a2133"></a>Errore ML non irreversibile A2133

**registrare il valore sovrascritto da INVOKE**

Un registro è stato passato come argomento a una routine, ma il codice generato dallo [INVOKE](../../assembler/masm/invoke.md) passare altri argomenti eliminato il contenuto del registro.

I registri AX, AL, AH, registri EAX, DX, lista di distribuzione, DH ed EDX potrebbero utilizzabile nell'assembler per eseguire la conversione dei dati.

Usare un registro diverso.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>