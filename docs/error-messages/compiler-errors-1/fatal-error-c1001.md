---
title: Errore irreversibile C1001 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1001
dev_langs:
- C++
helpviewer_keywords:
- C1001
ms.assetid: 5736cdb3-22c8-4fad-aa85-d5e0d2b232f4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f605dd7e4892c4a8b57e544ed857257be72f020d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33199028"
---
# <a name="fatal-error-c1001"></a>Errore irreversibile C1001

> INTERNO del compilatore ERROR(compiler file *file*, line *number*)  
  
Il compilatore non è possibile generare il codice corretto per un costrutto, spesso a causa di combinazione di una particolare espressione e di un'opzione di ottimizzazione o di un problema durante l'analisi. Se il file del compilatore elencato dispone di un'ora utc o segmento di percorso C2, è probabilmente un errore di ottimizzazione. Se il file contiene un segmento di percorso cxxfe o c1xx o è msc1.cpp, è probabilmente un errore del parser. Se il file denominato cl.exe, non è disponibile alcuna informazione.  

Spesso, è possibile risolvere un problema di ottimizzazione tramite la rimozione di uno o più opzioni di ottimizzazione. Per determinare quale opzione è in errore, rimuovere le opzioni una alla volta e ricompilazione fino a quando il messaggio di errore scompare. Le opzioni più comunemente sono [/Og (ottimizzazioni globali)](../../build/reference/og-global-optimizations.md) e [/Oi (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md). Dopo aver determinato quale opzione di ottimizzazione è responsabile, è possibile disabilitarla per la funzione in cui l'errore si verifica con la [ottimizzare](../../preprocessor/optimize.md) pragma e continuare a usare l'opzione per il resto del modulo. Per ulteriori informazioni sulle opzioni di ottimizzazione, vedere [suggerimenti per l'ottimizzazione](../../build/reference/optimization-best-practices.md).

Se le ottimizzazioni non sono responsabile per l'errore, provare a riscrivere la riga in cui l'errore viene segnalato o più righe di codice circostanti tale riga. Per visualizzare il codice nello stesso modo il compilatore visualizzati dopo la pre-elaborazione, è possibile utilizzare il [/P (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md) opzione.

Per ulteriori informazioni su come isolare l'origine dell'errore e come segnalare un errore interno del compilatore a Microsoft, vedere [come segnalare un problema con il set di strumenti Visual C++](../../how-to-report-a-problem-with-the-visual-cpp-toolset.md).