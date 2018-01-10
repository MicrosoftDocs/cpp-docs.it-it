---
title: Supporto delle librerie per assembly misti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- msvcm90[d].dll
- mixed assemblies [C++], library support
- msvcmrt[d].lib
- libraries [C++], mixed assemblies
ms.assetid: 1229595c-9e9d-414d-b018-b4e4c727576d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9b3bc50416eceac64c134a31a4d7384e33db69b4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="library-support-for-mixed-assemblies"></a>Supporto delle librerie per assembly misti
Visual C++ supporta l'utilizzo della libreria Standard C++, la libreria di RunTime comuni (CRT), ATL e MFC per applicazioni compilate con [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md). In questo modo le applicazioni esistenti che utilizzano queste librerie possono per usare anche le funzionalità di .NET Framework.  
  
 Questo supporto include le librerie DLL e Importa nuovo seguenti:  
  
-   Se esegue la compilazione con /clr LIB di msvcmrt [d]. Assembly misti collegamenti di questa libreria di importazione.  
  
-   Msvcm90 [d]. dll e Msvcurt [d]. lib se esegue la compilazione con /clr: pure. La DLL è un assembly misto gestito supporto per la fase di esecuzione C (CRT) e fa parte di un assembly gestito installato nella global assembly cache (GAC). Assembly puri collegamento alla libreria di importazione e vengono associati a msvcm90.  
  
 Questo supporto offre che numerosi vantaggi:  
  
-   CRT e della libreria Standard C++ sono disponibili per il codice sia misto e puro. CRT e della libreria Standard C++ fornite non sono verificabili. Infine, le chiamate vengono ancora instradate nella stessa libreria Standard C++ e CRT che si utilizzi dal codice nativo.  
  
-   Correggere la gestione delle eccezioni unificata nelle immagini pure e miste.  
  
-   Inizializzazione statica delle variabili C++ in immagini pure e miste.  
  
-   Supporto per le variabili per dominio di applicazione e per ogni processo nel codice gestito.  
  
-   Consente di risolvere i problemi di blocco del caricatore applicata alla DLL miste compilate in Visual Studio 2003 e versioni precedenti.  
  
 Inoltre, questo supporto presenta le limitazioni seguenti:  
  
-   È supportato solo il modello DLL CRT (sia per il codice compilato con /clr o /clr: pure).  
  
-   Se gli oggetti utilizzano le librerie di Visual C++ (perché tutti gli oggetti devono essere puri in un'immagine pure) non è possibile combinare misti e puri oggetti in una singola immagine. In questo caso, si ricevono errori in fase di collegamento.  
  
 Poiché non è garantito che funzionano con le versioni precedenti, è necessario aggiornare common language runtime (CLR) alla versione corrente. Codice compilato con queste modifiche non verrà eseguito in CLR versione 1. x.  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)