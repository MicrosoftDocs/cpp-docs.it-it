---
title: Istruzioni di iterazione (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- iteration statements
- loop structures, iteration statements
ms.assetid: bf6d75f7-ead2-426a-9c47-33847f59b8c7
ms.openlocfilehash: e8f064fd19e69de2819673f48a7f14e26d60b87e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178257"
---
# <a name="iteration-statements-c"></a>Istruzioni di iterazione (C++)

Le istruzioni di iterazione determinano l'esecuzione di istruzioni (o istruzioni composte) nessuna o più volte, soggette ad alcuni criteri di ciclo-chiusura. Quando queste istruzioni sono costituite da istruzioni composte, vengono eseguite in ordine, tranne quando viene rilevata l'istruzione [break](../cpp/break-statement-cpp.md) o [continue](../cpp/continue-statement-cpp.md) .

C++in sono disponibili quattro istruzioni di iterazione, [while](../cpp/while-statement-cpp.md), [do](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md)e [basate su intervallo per](../cpp/range-based-for-statement-cpp.md). Ognuno di questi esegue l'iterazione fino a quando l'espressione di terminazione restituisce zero (false) o finché la terminazione del ciclo non viene forzata con un'istruzione **break** . Nella tabella seguente vengono riepilogate le istruzioni e le relative azioni; ognuna viene illustrata in dettaglio nelle sezioni che seguono.

### <a name="iteration-statements"></a>Istruzioni di iterazione

|.|Valutato|Inizializzazione|Incremento valore Identity|
|---------------|------------------|--------------------|---------------|
|**while**|All'inizio del ciclo|No|No|
|**do**|Alla fine del ciclo|No|No|
|**for**|All'inizio del ciclo|Sì|Sì|
|**basato sull'intervallo per**|All'inizio del ciclo|Sì|Sì|

La parte di istruzione di un'istruzione di iterazione non può essere una dichiarazione. Tuttavia, può essere un'istruzione composta che contiene una dichiarazione.

## <a name="see-also"></a>Vedere anche

[Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)
