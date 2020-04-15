---
title: Errore irreversibile C1060
ms.date: 11/04/2016
f1_keywords:
- C1060
helpviewer_keywords:
- C1060
ms.assetid: feaf305c-c84c-4160-b974-50e283412849
ms.openlocfilehash: 83135b77ceb75b4c2b05211260d1aed8fac6777f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320285"
---
# <a name="fatal-error-c1060"></a>Errore irreversibile C1060

spazio del compilatore per l'heap esaurito

Una richiesta di memoria non è stata soddisfatta dal sistema operativo o dalla libreria di runtime.

### <a name="to-fix-this-error-try-the-following-possible-solutions"></a>Per correggere questo errore, provare le possibili soluzioni descritte di seguito

1. Se il compilatore genera anche errori [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) e [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md), utilizzare l'opzione del compilatore [//m](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) per ridurre il limite di allocazione della memoria. Se si riduce l'allocazione della memoria rimanente, lo spazio dell'heap disponibile per l'applicazione aumenta.

   Se l'opzione [//m](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) è già impostata, provare a rimuoverla. Lo spazio dell'heap potrebbe essere esaurito in quanto il limite di allocazione della memoria specificato nell'opzione è troppo elevato. Se si rimuove l'opzione [/om,](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) il compilatore utilizza un limite predefinito.

1. Se si compila su una piattaforma a 64 bit, usare il set di strumenti del compilatore a 64 bit. Per informazioni, vedere Procedura: abilitare un set di strumenti di Visual C, a [64 bit, nella riga](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md)di comando .

1. In Windows a 32 bit, provare a utilizzare l'opzione [/3GB](https://support.microsoft.com/help/833721/available-switch-options-for-the-windows-xp-and-the-windows-server-200) boot.ini.

1. Aumentare la dimensione del file di scambio di Windows.

1. Chiudere altri programmi in esecuzione.

1. Eliminare i file di inclusione non necessari.

1. Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.

1. Eliminare le dichiarazioni inutilizzate.

1. Suddividere il file corrente in file più piccoli.
