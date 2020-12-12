---
description: 'Altre informazioni su: errore irreversibile C1060'
title: Errore irreversibile C1060
ms.date: 11/04/2016
f1_keywords:
- C1060
helpviewer_keywords:
- C1060
ms.assetid: feaf305c-c84c-4160-b974-50e283412849
ms.openlocfilehash: 149fd4108aabf603e844c6906e072a9c64578d5c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330729"
---
# <a name="fatal-error-c1060"></a>Errore irreversibile C1060

spazio del compilatore per l'heap esaurito

Una richiesta di memoria non è stata soddisfatta dal sistema operativo o dalla libreria di runtime.

### <a name="to-fix-this-error-try-the-following-possible-solutions"></a>Per correggere questo errore, provare le possibili soluzioni descritte di seguito

1. Se il compilatore genera anche errori [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) e [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md), usare l'opzione del compilatore [/ZM](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) per abbassare il limite di allocazione della memoria. Se si riduce l'allocazione della memoria rimanente, lo spazio dell'heap disponibile per l'applicazione aumenta.

   Se l'opzione [/ZM](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) è già impostata, provare a rimuoverla. Lo spazio dell'heap potrebbe essere esaurito in quanto il limite di allocazione della memoria specificato nell'opzione è troppo elevato. Il compilatore usa un limite predefinito se si rimuove l'opzione [/ZM](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) .

1. Se si compila su una piattaforma a 64 bit, usare il set di strumenti del compilatore a 64 bit. Per informazioni, vedere [procedura: abilitare un set di strumenti per Visual C++ a 64 bit nella riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).

1. In Windows a 32 bit provare a usare l'opzione [/3GB](https://support.microsoft.com/help/833721/available-switch-options-for-the-windows-xp-and-the-windows-server-200) boot.ini.

1. Aumentare la dimensione del file di scambio di Windows.

1. Chiudere altri programmi in esecuzione.

1. Eliminare i file di inclusione non necessari.

1. Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.

1. Eliminare le dichiarazioni inutilizzate.

1. Suddividere il file corrente in file più piccoli.
