---
title: "Errore irreversibile C1060 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1060"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1060"
ms.assetid: feaf305c-c84c-4160-b974-50e283412849
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1060
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Spazio del compilatore per l'heap esaurito  
  
 Una richiesta di memoria non è stata soddisfatta dal sistema operativo o dalla libreria di runtime.  
  
### Per correggere questo errore, provare le possibili soluzioni descritte di seguito  
  
1.  Se il compilatore genera anche errori [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) e [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md), usare l'opzione del compilatore [\/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) per ridurre il limite di allocazione della memoria.  Se si riduce l'allocazione della memoria rimanente, lo spazio dell'heap disponibile per l'applicazione aumenta.  
  
     Se l'opzione [\/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) è già impostata, provare a rimuoverla.  Lo spazio dell'heap potrebbe essere esaurito in quanto il limite di allocazione della memoria specificato nell'opzione è troppo elevato.  Il compilatore usa un limite predefinito se si rimuove l'opzione [\/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).  
  
2.  Se si compila su una piattaforma a 64 bit, usare il set di strumenti del compilatore a 64 bit.  Per informazioni, vedere [Procedura: abilitare un set di strumenti Visual C\+\+ a 64 bit dalla riga di comando](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).  
  
3.  In Windows a 32 bit, provare a usare l'opzione di boot.ini [\/3GB](http://go.microsoft.com/fwlink/?LinkId=177831).  
  
4.  Aumentare la dimensione del file di scambio di Windows.  
  
5.  Chiudere altri programmi in esecuzione.  
  
6.  Eliminare i file di inclusione non necessari.  
  
7.  Eliminare le variabili globali non necessarie, ad esempio allocando memoria in modo dinamico anziché dichiarare una matrice di grandi dimensioni.  
  
8.  Eliminare le dichiarazioni inutilizzate.  
  
9. Suddividere il file corrente in file più piccoli.