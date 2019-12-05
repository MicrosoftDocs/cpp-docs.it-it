---
title: Errore ML non irreversibile A2219
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A2219
helpviewer_keywords:
- A2219
ms.assetid: 5ebc2f40-e47e-4f8e-b7b9-960b9cfc9f6d
ms.openlocfilehash: cf2be5db2aa9c21597c199a6840f4aaa50e0a681
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74854589"
---
# <a name="ml-nonfatal-error-a2219"></a>Errore ML non irreversibile A2219

> Allineamento non valido per l'offset nel codice di rimozione

## <a name="remarks"></a>Note

L'operando per [&period;ALLOCSTACK](../../assembler/masm/dot-allocstack.md) e [&period;savereg](../../assembler/masm/dot-savereg.md) deve essere un multiplo di 8.  L'operando per [&period;SAVEXMM128](../../assembler/masm/dot-savexmm128.md) e [&period;seframe](../../assembler/masm/dot-setframe.md) deve essere un multiplo di 16.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)
