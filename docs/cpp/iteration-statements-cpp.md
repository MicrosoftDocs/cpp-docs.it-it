---
title: Istruzioni di iterazione (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- iteration statements
- loop structures, iteration statements
ms.assetid: bf6d75f7-ead2-426a-9c47-33847f59b8c7
ms.openlocfilehash: 72f81e2fc58a31db0c4cd3f77ba182bd8b8152a4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644938"
---
# <a name="iteration-statements-c"></a>Istruzioni di iterazione (C++)

Le istruzioni di iterazione determinano l'esecuzione di istruzioni (o istruzioni composte) nessuna o più volte, soggette ad alcuni criteri di ciclo-chiusura. Quando queste istruzioni sono istruzioni composte, vengono eseguite in ordine, tranne quando entrambi i [break](../cpp/break-statement-cpp.md) istruzione o il [continuare](../cpp/continue-statement-cpp.md) viene rilevata l'istruzione.

C++ fornisce quattro istruzioni di iterazione, ovvero [mentre](../cpp/while-statement-cpp.md), [scopo](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md), e [basato su intervallo per](../cpp/range-based-for-statement-cpp.md). Ognuna di queste scorre fino a quando la relativa espressione di terminazione restituisce zero (false) o fino a quando non viene forzata la chiusura ciclo con un **interruzione** istruzione. Nella tabella seguente vengono riepilogate le istruzioni e le relative azioni; ognuna viene illustrata in dettaglio nelle sezioni che seguono.

### <a name="iteration-statements"></a>Istruzioni di iterazione

|Istruzione|Valutato|Inizializzazione|Operatore di incremento|
|---------------|------------------|--------------------|---------------|
|**while**|All'inizio del ciclo|No|No|
|**do**|Alla fine del ciclo|No|No|
|**for**|All'inizio del ciclo|Yes|Yes|
|**basato su intervallo per**|All'inizio del ciclo|Yes|Yes|

La parte di istruzione di un'istruzione di iterazione non può essere una dichiarazione. Tuttavia, può essere un'istruzione composta che contiene una dichiarazione.

## <a name="see-also"></a>Vedere anche

[Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)