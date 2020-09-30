---
title: Flag di direzione
description: Descrive l'effetto del flag di direzione della CPU sulle funzioni di runtime di Microsoft C.
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- direction flag
ms.assetid: 0836b4af-dbbb-4ab8-a4b2-156f2e2099e2
ms.openlocfilehash: a8f06b3b8caf08e1d3db2159bfc730e25229733b
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589991"
---
# <a name="direction-flag"></a>Flag di direzione

Il flag di direzione è un flag di CPU specifico per tutte le CPU compatibili Intel x86. Viene applicato a tutte le istruzioni in linguaggio assembly che usano il prefisso REP (ripeti), ad esempio MOVS, MOVSD, MOVSW e altre. Gli indirizzi specificati alle istruzioni a cui è possibile applicarli vengono incrementati se il flag di direzione non è impostato.

Nelle routine di runtime del linguaggio C si presuppone che il flag di direzione non sia impostato. Se si usano altre funzioni insieme alle funzioni di runtime del linguaggio C, è necessario verificare che le altre funzioni non influiscano sul flag di direzione o lo ripristinino alle sue condizioni originali. Prevedendo la rimozione del flag di direzione al momento dell'accesso il codice di runtime viene reso più veloce ed efficiente.

Le funzioni della libreria di runtime del linguaggio C, come le routine per la gestione delle stringhe e quelle per la gestione del buffer, prevedono che il flag di direzione non sia impostato.

## <a name="see-also"></a>Vedi anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
