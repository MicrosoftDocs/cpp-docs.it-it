---
title: Errore ML non irreversibile A2219
ms.date: 08/30/2018
ms.topic: error-reference
f1_keywords:
- A2219
helpviewer_keywords:
- A2219
ms.assetid: 5ebc2f40-e47e-4f8e-b7b9-960b9cfc9f6d
ms.openlocfilehash: 61fa6bc6d630f1e8a8ac84492b60690c9545fb3e
ms.sourcegitcommit: 79e985d3c6e8ccaf94f6e641972887cae8c6eeb0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/24/2019
ms.locfileid: "66197672"
---
# <a name="ml-nonfatal-error-a2219"></a>Errore ML non irreversibile A2219

> Allineamento non valido per la differenza nel codice di rimozione

## <a name="remarks"></a>Note

L'operando per [ &period;ALLOCSTACK](../../assembler/masm/dot-allocstack.md) e [ &period;SAVEREG](../../assembler/masm/dot-savereg.md) deve essere un multiplo di 8.  L'operando per [ &period;SAVEXMM128](../../assembler/masm/dot-savexmm128.md) e [ &period;SETFRAME](../../assembler/masm/dot-setframe.md) deve essere un multiplo di 16.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)
