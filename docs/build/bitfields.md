---
title: Campi di bit | Microsoft Docs
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
ms.openlocfilehash: a7451ea6afee81cc296fb091705bde48041ef5d1
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45722488"
---
# <a name="bitfields"></a>Campi di bit

I campi di bit di struttura sono limitati a 64 bit e possono essere di tipo signed int, int senza segno, int64 o unsigned int64. I campi di bit che superano il limite di tipo ignorerà bits per allineare il campo di bit per l'allineamento di tipo next. Ad esempio, i campi di bit integer non possono superare un limite a 32 bit.

## <a name="see-also"></a>Vedere anche

[Tipi e archiviazione](../build/types-and-storage.md)