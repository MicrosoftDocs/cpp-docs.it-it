---
title: Istruzioni di iterazione (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- iteration statements
- loop structures, iteration statements
ms.assetid: bf6d75f7-ead2-426a-9c47-33847f59b8c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 604534a30d9d6dfbc9cc38825413f98af5435cf6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040648"
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