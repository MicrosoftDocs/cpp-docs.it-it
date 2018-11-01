---
title: Campi di bit
ms.date: 11/04/2016
helpviewer_keywords:
- bitfields
ms.assetid: e9a1010d-1e1b-487f-9943-3c574e08f544
ms.openlocfilehash: 3ff0092bbd31b8b1cd98fa56fb802c7ce28cb472
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50652829"
---
# <a name="bitfields"></a>Campi di bit

I campi di bit di struttura sono limitati a 64 bit e possono essere di tipo signed int, int senza segno, int64 o unsigned int64. I campi di bit che superano il limite di tipo ignorerà bits per allineare il campo di bit per l'allineamento di tipo next. Ad esempio, i campi di bit integer non possono superare un limite a 32 bit.

## <a name="see-also"></a>Vedere anche

[Tipi e archiviazione](../build/types-and-storage.md)