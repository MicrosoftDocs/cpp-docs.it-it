---
title: Errore irreversibile C1001
ms.date: 11/04/2016
f1_keywords:
- C1001
helpviewer_keywords:
- C1001
ms.assetid: 5736cdb3-22c8-4fad-aa85-d5e0d2b232f4
ms.openlocfilehash: beb382b9c6ccf80d01f5a0262832e7fb7e1ea0a4
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58770928"
---
# <a name="fatal-error-c1001"></a>Errore irreversibile C1001

> INTERNI del compilatore ERROR(compiler file *file*, line *number*)

Il compilatore non è possibile generare il codice corretto per un costrutto, spesso dovuti alla combinazione di una particolare espressione e un'opzione di ottimizzazione o un problema durante l'analisi. Se il file del compilatore elencato dispone di un'ora utc o segmento di percorso C2, è probabilmente un errore di ottimizzazione. Se il file contiene un segmento di percorso cxxfe o c1xx, oppure è msc1.cpp, è probabilmente un errore del parser. Se il file denominato cl.exe, non sono disponibili altre informazioni.

È spesso possibile risolvere un problema di ottimizzazione tramite la rimozione di uno o più opzioni di ottimizzazione. Per determinare quale opzione causa l'errore, rimuovere le opzioni uno alla volta e recompile fino a quando non andrà a sparire il messaggio di errore. Sono le opzioni più comunemente [/Og (ottimizzazioni globali)](../../build/reference/og-global-optimizations.md) e [/Oi (genera funzioni intrinseche)](../../build/reference/oi-generate-intrinsic-functions.md). Dopo aver determinato quale opzione di ottimizzazione è responsabile, è possibile disabilitarlo per la funzione in cui si verifica l'errore utilizzando la [ottimizzare](../../preprocessor/optimize.md) pragma e continuare a usare l'opzione per il resto del modulo. Per altre informazioni sulle opzioni di ottimizzazione, vedere [consigliate di ottimizzazione](../../build/optimization-best-practices.md).

Se le ottimizzazioni non sono responsabile dell'errore, provare a riscrivere la riga in cui viene segnalato l'errore, o più righe di codice che circonda tale riga. Per visualizzare il codice nello stesso modo il compilatore visualizzati dopo la pre-elaborazione, è possibile usare la [/P (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md) opzione.

Per altre informazioni su come isolare l'origine dell'errore e come segnalare un errore del compilatore interno a Microsoft, vedere [come segnalare un problema con il set di strumenti Visual C++](../../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md).