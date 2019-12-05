---
title: Errore ML irreversibile A1007
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A1007
helpviewer_keywords:
- A1007
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
ms.openlocfilehash: 01633b4fa084b7d5e14af5a5c6e51e3dca684d2a
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856917"
---
# <a name="ml-fatal-error-a1007"></a>Errore ML irreversibile A1007

**livello di annidamento troppo profondo**

L'assembler ha raggiunto il limite di annidamento. Il limite è di 20 livelli, tranne nei casi in cui diversamente specificato.

Uno degli elementi seguenti è troppo profondamente annidato:

- Una direttiva di alto livello, ad esempio [. SE](../../assembler/masm/dot-if.md), [. Ripetere](../../assembler/masm/dot-repeat.md)o [. MENTRE](../../assembler/masm/dot-while.md).

- Definizione della struttura.

- Una direttiva di assembly condizionale.

- Definizione di una routine.

- Una direttiva [PushContext](../../assembler/masm/pushcontext.md) (il limite è 10).

- Definizione di segmento.

- Un file di inclusione.

- Una macro.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>