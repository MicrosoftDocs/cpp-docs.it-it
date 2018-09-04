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
ms.openlocfilehash: 01b3b25499f46b476d0480ec87b609b36ba8dfd9
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43677704"
---
# <a name="fatal-error-c1060"></a>Errore irreversibile C1060
spazio del compilatore per l'heap esaurito  
  
 Una richiesta di memoria non è stata soddisfatta dal sistema operativo o dalla libreria di runtime.  
  
### <a name="to-fix-this-error-try-the-following-possible-solutions"></a>Per correggere questo errore, provare le possibili soluzioni descritte di seguito  
  
1.  Se il compilatore genera anche errori [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) e [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md), usare il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione del compilatore per ridurre il limite di allocazione di memoria. Se si riduce l'allocazione della memoria rimanente, lo spazio dell'heap disponibile per l'applicazione aumenta.  
  
     Se il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione è già impostata, provare a rimuoverla. Lo spazio dell'heap potrebbe essere esaurito in quanto il limite di allocazione della memoria specificato nell'opzione è troppo elevato. Il compilatore Usa un limite predefinito se si rimuove il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione.  
  
2.  Se si compila su una piattaforma a 64 bit, usare il set di strumenti del compilatore a 64 bit. Per informazioni, vedere [procedura: abilitare una a 64 bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).  
  
3.  In Windows a 32 bit, provare a usare il [3 GB](https://support.microsoft.com/en-us/help/833721/available-switch-options-for-the-windows-xp-and-the-windows-server-200) opzione Boot. ini.  
  
4.  Aumentare la dimensione del file di scambio di Windows.  
  
5.  Chiudere altri programmi in esecuzione.  
  
6.  Eliminare i file di inclusione non necessari.  
  
7.  Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.  
  
8.  Eliminare le dichiarazioni inutilizzate.  
  
9. Suddividere il file corrente in file più piccoli.