---
description: 'Altre informazioni su: caratteri speciali nelle macro'
title: Caratteri speciali nelle macro
ms.date: 11/04/2016
helpviewer_keywords:
- special characters, in NMAKE macros
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
ms.openlocfilehash: 569aedbc474f660894b723f9356355e2360a4e61
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224660"
---
# <a name="special-characters-in-macros"></a>Caratteri speciali nelle macro

Un simbolo di cancelletto (#) dopo una definizione specifica un commento. Per specificare un segno di numero letterale in una macro, usare un accento circonflesso (^), come in ^ #.

Un segno di dollaro ($) specifica una chiamata di macro. Per specificare un valore letterale $, utilizzare $ $.

Per estendere una definizione a una nuova riga, terminare la riga con una barra rovesciata ( \\ ). Quando viene richiamata la macro, la barra rovesciata più il carattere di nuova riga viene sostituito con uno spazio. Per specificare una barra rovesciata letterale alla fine della riga, precederla con un accento circonflesso (^) o seguirla con un identificatore di commento (#).

Per specificare un carattere di nuova riga letterale, terminare la riga con un accento circonflesso (^), come in:

```
CMDS = cls^
dir
```

## <a name="see-also"></a>Vedi anche

[Definizione di una macro di NMAKE](defining-an-nmake-macro.md)
