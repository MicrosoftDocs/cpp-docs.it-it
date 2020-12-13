---
description: 'Altre informazioni su: ML errore irreversibile A1007'
title: Errore ML irreversibile A1007
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1007
helpviewer_keywords:
- A1007
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
ms.openlocfilehash: c26d5de1c1b44fb37d4a95f51b2cb9480d2ba664
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129545"
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

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
