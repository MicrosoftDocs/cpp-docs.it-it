---
title: Errore ML non irreversibile A2133
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A2133
helpviewer_keywords:
- A2133
ms.assetid: 5ba50911-22c8-43b7-90e2-946fc612e05f
ms.openlocfilehash: 1ffdf5fb6577dbd4e24312b3c57a4186173ddcf6
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75312638"
---
# <a name="ml-nonfatal-error-a2133"></a>Errore ML non irreversibile A2133

**valore di registro sovrascritto da INVOKE**

Un registro è stato passato come argomento a una routine, ma il codice generato da [Invoke](invoke.md) per passare altri argomenti ha eliminato il contenuto del registro.

I registri AX, AL, AH, EAX, DX, DL, DH e EDX possono essere usati dall'assembler per eseguire la conversione dei dati.

Utilizzare un registro diverso.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
