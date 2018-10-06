---
title: Errore irreversibile C1060 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1060
dev_langs:
- C++
helpviewer_keywords:
- C1060
ms.assetid: feaf305c-c84c-4160-b974-50e283412849
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1961784efc61c3c31f87c76cd2bdfe00fe954c5d
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48820704"
---
# <a name="fatal-error-c1060"></a>Errore irreversibile C1060

spazio del compilatore per l'heap esaurito

Una richiesta di memoria non è stata soddisfatta dal sistema operativo o dalla libreria di runtime.

### <a name="to-fix-this-error-try-the-following-possible-solutions"></a>Per correggere questo errore, provare le possibili soluzioni descritte di seguito

1. Se il compilatore genera anche errori [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) e [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md), usare il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione del compilatore per ridurre il limite di allocazione di memoria. Se si riduce l'allocazione della memoria rimanente, lo spazio dell'heap disponibile per l'applicazione aumenta.

     Se il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione è già impostata, provare a rimuoverla. Lo spazio dell'heap potrebbe essere esaurito in quanto il limite di allocazione della memoria specificato nell'opzione è troppo elevato. Il compilatore Usa un limite predefinito se si rimuove il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione.

1. Se si compila su una piattaforma a 64 bit, usare il set di strumenti del compilatore a 64 bit. Per informazioni, vedere [procedura: abilitare una a 64 bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).

1. In Windows a 32 bit, provare a usare il [3 GB](https://support.microsoft.com/help/833721/available-switch-options-for-the-windows-xp-and-the-windows-server-200) opzione Boot. ini.

1. Aumentare la dimensione del file di scambio di Windows.

1. Chiudere altri programmi in esecuzione.

1. Eliminare i file di inclusione non necessari.

1. Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.

1. Eliminare le dichiarazioni inutilizzate.

9. Suddividere il file corrente in file più piccoli.