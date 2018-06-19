---
title: Campi di bit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- bitfields
ms.assetid: e9a1010d-1e1b-487f-9943-3c574e08f544
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 85db49f138cc733326e47a3008e79bae5ab4b7cb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360780"
---
# <a name="bitfields"></a>Campi di bit
I campi di bit di struttura sono limitati a 64 bit e possono essere di tipo signed int, int senza segno, int64 o unsigned int64. I campi di bit che superano il limite di tipo salterà bits per allineare il campo di bit per l'allineamento del tipo successivo. Ad esempio, i campi di bit integer non possono superare un limite a 32 bit.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)