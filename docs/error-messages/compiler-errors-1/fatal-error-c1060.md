---
title: Errore irreversibile C1060 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: error-reference
f1_keywords:
- C1060
dev_langs:
- C++
helpviewer_keywords:
- C1060
ms.assetid: feaf305c-c84c-4160-b974-50e283412849
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c551ed3a6befbf646394929a6bcc6406ea93b19f
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="fatal-error-c1060"></a>Errore irreversibile C1060
spazio del compilatore per l'heap esaurito  
  
 Una richiesta di memoria non è stata soddisfatta dal sistema operativo o dalla libreria di runtime.  
  
### <a name="to-fix-this-error-try-the-following-possible-solutions"></a>Per correggere questo errore, provare le possibili soluzioni descritte di seguito  
  
1.  Se il compilatore genera anche errori [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) e [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md), utilizzare il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) l'opzione del compilatore per ridurre il limite di allocazione di memoria. Se si riduce l'allocazione della memoria rimanente, lo spazio dell'heap disponibile per l'applicazione aumenta.  
  
     Se il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione è già impostata, provare a rimuoverla. Lo spazio dell'heap potrebbe essere esaurito in quanto il limite di allocazione della memoria specificato nell'opzione è troppo elevato. Il compilatore utilizza un limite predefinito se si rimuove il [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) opzione.  
  
2.  Se si compila su una piattaforma a 64 bit, usare il set di strumenti del compilatore a 64 bit. Per informazioni, vedere [procedura: abilitare un 64-Bit Visual C++ set di strumenti della riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).  
  
3.  In Windows a 32 bit, provare a utilizzare il [3 GB](http://go.microsoft.com/fwlink/p/?linkid=177831) boot.ini commutatore.  
  
4.  Aumentare la dimensione del file di scambio di Windows.  
  
5.  Chiudere altri programmi in esecuzione.  
  
6.  Eliminare i file di inclusione non necessari.  
  
7.  Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.  
  
8.  Eliminare le dichiarazioni inutilizzate.  
  
9. Suddividere il file corrente in file più piccoli.