---
title: Istruzioni di iterazione (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- iteration statements
- loop structures, iteration statements
ms.assetid: bf6d75f7-ead2-426a-9c47-33847f59b8c7
ms.openlocfilehash: b4176e8265759ae569275bdae5304b0b10c29fc1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227387"
---
# <a name="iteration-statements-c"></a>Istruzioni di iterazione (C++)

Le istruzioni di iterazione determinano l'esecuzione di istruzioni (o istruzioni composte) nessuna o più volte, soggette ad alcuni criteri di ciclo-chiusura. Quando queste istruzioni sono costituite da istruzioni composte, vengono eseguite in ordine, tranne quando viene rilevata l'istruzione [break](../cpp/break-statement-cpp.md) o [continue](../cpp/continue-statement-cpp.md) .

In C++ sono disponibili quattro istruzioni di iterazione, [while](../cpp/while-statement-cpp.md), [do](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md)e [basate su intervallo per](../cpp/range-based-for-statement-cpp.md). Ognuno di questi esegue l'iterazione fino a quando l'espressione di terminazione restituisce zero (false) o fino a quando non viene forzata la terminazione del ciclo con un' **`break`** istruzione. Nella tabella seguente vengono riepilogate le istruzioni e le relative azioni; ognuna viene illustrata in dettaglio nelle sezioni che seguono.

### <a name="iteration-statements"></a>Istruzioni di iterazione

|.|Valutato|Inizializzazione|Incremento valore Identity|
|---------------|------------------|--------------------|---------------|
|**`while`**|All'inizio del ciclo|No|No|
|**`do`**|Alla fine del ciclo|No|No|
|**`for`**|All'inizio del ciclo|Sì|Sì|
|**for basato su intervallo**|All'inizio del ciclo|Sì|Sì|

La parte di istruzione di un'istruzione di iterazione non può essere una dichiarazione. Tuttavia, può essere un'istruzione composta che contiene una dichiarazione.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle istruzioni C++](../cpp/overview-of-cpp-statements.md)
