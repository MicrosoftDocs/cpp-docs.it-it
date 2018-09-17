---
title: Caratteri speciali nelle macro | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- special characters, in NMAKE macros
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 55a94001e2f912049518120911c25ae64afa24da
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45721428"
---
# <a name="special-characters-in-macros"></a>Caratteri speciali nelle macro

Un simbolo cancelletto (#) dopo la definizione specifica un commento. Per specificare un simbolo di cancelletto letterale in una macro, utilizzare un accento circonflesso (^), come in ^ &.

Un segno di dollaro ($) specifica una chiamata di macro. Per specificare un valore letterale $, usare $$.

Per estendere una definizione in una nuova riga, terminare la riga con una barra rovesciata (\\). Quando viene richiamata la macro, il carattere barra rovesciata e nuova riga viene sostituito con uno spazio. Per specificare una barra rovesciata alla fine della riga, anteporvi un accento circonflesso (^) oppure continuare quindi con un identificatore di commento (#).

Per specificare un valore letterale carattere, terminare la riga con un accento circonflesso (^), come in:

```
CMDS = cls^
dir
```

## <a name="see-also"></a>Vedere anche

[Definizione di una macro di NMAKE](../build/defining-an-nmake-macro.md)