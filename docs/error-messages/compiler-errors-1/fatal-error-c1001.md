---
title: Errore irreversibile C1001 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1001
dev_langs:
- C++
helpviewer_keywords:
- C1001
ms.assetid: 5736cdb3-22c8-4fad-aa85-d5e0d2b232f4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4a72a99e566474145857e265edde548ebf38e180
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1001"></a>Errore irreversibile C1001

> INTERNO del compilatore ERROR(compiler file *file*, line *number*)  
  
Il compilatore non è possibile generare il codice corretto per un costrutto, spesso a causa di combinazione di una particolare espressione e di un'opzione di ottimizzazione o di un problema durante l'analisi. Se il file del compilatore elencato dispone di un'ora utc o segmento di percorso C2, è probabilmente un errore di ottimizzazione. Se il file contiene un segmento di percorso cxxfe o c1xx o è msc1.cpp, è probabilmente un errore del parser. Se il file denominato cl.exe, non è disponibile alcuna informazione.  

Spesso, è possibile risolvere un problema di ottimizzazione tramite la rimozione di uno o più opzioni di ottimizzazione. Per determinare quale opzione è in errore, rimuovere le opzioni una alla volta e ricompilazione fino a quando il messaggio di errore scompare. Le opzioni più comunemente sono [/Og (ottimizzazioni globali)](../../build/reference/og-global-optimizations.md) e [/Oi (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md). Dopo aver determinato quale opzione di ottimizzazione è responsabile, è possibile disabilitarla per la funzione in cui l'errore si verifica con la [ottimizzare](../../preprocessor/optimize.md) pragma e continuare a usare l'opzione per il resto del modulo. Per ulteriori informazioni sulle opzioni di ottimizzazione, vedere [suggerimenti per l'ottimizzazione](../../build/reference/optimization-best-practices.md).

Se le ottimizzazioni non sono responsabile per l'errore, provare a riscrivere la riga in cui l'errore viene segnalato o più righe di codice circostanti tale riga. Per visualizzare il codice nello stesso modo il compilatore visualizzati dopo la pre-elaborazione, è possibile utilizzare il [/P (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md) opzione.

Per ulteriori informazioni su come isolare l'origine dell'errore e come segnalare un errore interno del compilatore a Microsoft, vedere [come segnalare un problema con il set di strumenti Visual C++](../../how-to-report-a-problem-with-the-visual-cpp-toolset.md).