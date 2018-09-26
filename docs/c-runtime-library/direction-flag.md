---
title: Flag di direzione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.flags
dev_langs:
- C++
helpviewer_keywords:
- direction flag
ms.assetid: 0836b4af-dbbb-4ab8-a4b2-156f2e2099e2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7db91b20b76ef06130cbb8357344352b820ed731
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46093202"
---
# <a name="direction-flag"></a>Flag di direzione

Il flag di direzione è un flag di CPU specifico dei processori Intel 80x86. Viene applicato a tutte le istruzioni in linguaggio assembly che usano il prefisso REP (ripeti), ad esempio MOVS, MOVSD, MOVSW e altre. Gli indirizzi specificati alle istruzioni a cui è possibile applicarli vengono incrementati se il flag di direzione non è impostato.

Nelle routine di runtime del linguaggio C si presuppone che il flag di direzione non sia impostato. Se si usano altre funzioni insieme alle funzioni di runtime del linguaggio C, è necessario verificare che le altre funzioni non influiscano sul flag di direzione o lo ripristinino alle sue condizioni originali. Prevedendo la rimozione del flag di direzione al momento dell'accesso il codice di runtime viene reso più veloce ed efficiente.

Le funzioni della libreria di runtime del linguaggio C, come le routine per la gestione delle stringhe e quelle per la gestione del buffer, prevedono che il flag di direzione non sia impostato.

## <a name="see-also"></a>Vedere anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)