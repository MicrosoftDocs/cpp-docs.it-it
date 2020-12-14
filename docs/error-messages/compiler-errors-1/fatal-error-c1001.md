---
description: 'Altre informazioni su: errore irreversibile C1001'
title: Errore irreversibile C1001
ms.date: 11/04/2016
f1_keywords:
- C1001
helpviewer_keywords:
- C1001
ms.assetid: 5736cdb3-22c8-4fad-aa85-d5e0d2b232f4
ms.openlocfilehash: a00e8bc2fe79201f77f67eac6f0756e90eba462b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262828"
---
# <a name="fatal-error-c1001"></a>Errore irreversibile C1001

> ERRORE interno del compilatore ( *file* di file del compilatore, *numero* di riga)

Il compilatore non può generare codice corretto per un costrutto, spesso a causa della combinazione di una particolare espressione e di un'opzione di ottimizzazione, oppure di un problema di analisi. Se il file del compilatore elencato presenta un segmento di percorso UTC o C2, probabilmente si tratta di un errore di ottimizzazione. Se il file ha un segmento di percorso cxxfe o c1xx o è msc1. cpp, probabilmente si tratta di un errore del parser. Se il file denominato è cl.exe, non sono disponibili altre informazioni.

È spesso possibile risolvere un problema di ottimizzazione rimuovendo una o più opzioni di ottimizzazione. Per determinare quale opzione è in errore, rimuovere le opzioni una alla volta e ricompilare finché il messaggio di errore non viene rimosso. Le opzioni più comunemente responsabili sono [/og (ottimizzazioni globali)](../../build/reference/og-global-optimizations.md) e [/OI (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md). Una volta individuata l'opzione di ottimizzazione responsabile, è possibile disabilitarla per la funzione in cui si verifica l'errore usando il pragma [optimize](../../preprocessor/optimize.md) e continuare a usare l'opzione per il resto del modulo. Per ulteriori informazioni sulle opzioni di ottimizzazione, vedere [procedure consigliate di ottimizzazione](../../build/optimization-best-practices.md).

Se le ottimizzazioni non sono responsabili dell'errore, provare a riscrivere la riga in cui viene segnalato l'errore o a più righe di codice che racchiudono la riga. Per visualizzare il codice in modo che venga visualizzato dal compilatore dopo la pre-elaborazione, è possibile usare l'opzione [/p (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md) .

Per ulteriori informazioni su come isolare l'origine dell'errore e segnalare un errore interno del compilatore a Microsoft, vedere [come segnalare un problema con il set di strumenti Visual C++](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).
