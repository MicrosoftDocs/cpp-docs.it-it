---
title: Caratteri speciali nelle macro
ms.date: 11/04/2016
helpviewer_keywords:
- special characters, in NMAKE macros
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
ms.openlocfilehash: d20c88b2223732177d79e676262a3c43eb8054a9
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57418731"
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
