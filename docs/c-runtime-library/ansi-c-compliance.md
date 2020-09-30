---
title: Conformità ANSI C
description: Panoramica delle convenzioni di denominazione del runtime di Microsoft C per la conformità ANSI C.
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- Ansi
helpviewer_keywords:
- underscores, leading
- compatibility [C++], ANSI C
- compliance with ANSI C
- conventions [C++], Microsoft extensions
- underscores
- naming conventions [C++], Microsoft library
- ANSI [C++], C standard
- Microsoft extensions naming conventions
ms.assetid: 6be271bf-eecf-491a-a928-0ee2dd60e3b9
ms.openlocfilehash: 39a3f9299be7dbef4783faa8e6d08fe6ad8461f5
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91590303"
---
# <a name="ansi-c-compliance"></a>Conformità ANSI C

La convenzione di denominazione per tutti gli identificatori specifici Microsoft nel sistema di runtime (ad esempio funzioni, macro, costanti, variabili e definizioni di tipo) è conforme a ANSI. In questa documentazione, qualsiasi funzione di runtime che segue gli standard ANSI/ISO C viene indicata come compatibile con ANSI. Le applicazioni conformi allo standard ANSI devono utilizzare solo queste funzioni compatibili con ANSI.

I nomi delle funzioni specifiche Microsoft e delle variabili globali iniziano con un carattere di sottolineatura. Questi nomi possono essere sottoposti a override solo localmente, all'interno dell'ambito del codice. Ad esempio, quando si includono i file di intestazione di runtime Microsoft, è ancora possibile eseguire localmente l'override della funzione specifica Microsoft denominata `_open` dichiarando una variabile locale con lo stesso nome. Tuttavia, non è possibile utilizzare questo nome per una funzione globale o una variabile globale.

I nomi delle macro specifiche Microsoft e delle costanti manifesto iniziano con due caratteri di sottolineatura o con un singolo carattere di sottolineatura iniziale immediatamente seguito da una lettera maiuscola. L'ambito di questi identificatori è assoluto. Ad esempio, non è possibile usare l'identificatore specifico Microsoft **_UPPER** per questo motivo.

## <a name="see-also"></a>Vedi anche

[Compatibilità](../c-runtime-library/compatibility.md)
