---
title: Errore ML irreversibile A1007
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1007
helpviewer_keywords:
- A1007
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
ms.openlocfilehash: c9527769e0d9397de90f49cbce98b2cca42bed50
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317123"
---
# <a name="ml-fatal-error-a1007"></a>Errore ML irreversibile A1007

**livello di annidamento troppo profondo**

L'assembler ha raggiunto il limite di annidamento. Il limite è di 20 livelli, tranne nei casi in cui diversamente specificato.

Uno degli elementi seguenti è troppo profondamente annidato:

- Una direttiva di alto livello, ad esempio [. SE](dot-if.md), [. Ripetere](dot-repeat.md)o [. MENTRE](dot-while.md).

- Definizione della struttura.

- Una direttiva di assembly condizionale.

- Definizione di una routine.

- Una direttiva [PushContext](pushcontext.md) (il limite è 10).

- Definizione di segmento.

- Un file di inclusione.

- Una macro.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
