---
title: R6017 errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: R6017
dev_langs: C++
helpviewer_keywords: R6017
ms.assetid: df3ec5f5-6771-4648-ba06-0e26c6a1cc6a
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6a4e4b1be6bb6323702b72d99be88824d456243b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="c-runtime-error-r6017"></a>R6017 errore di Runtime C
Errore di blocco multithread imprevisto.  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema interno. Possibili cause di questo errore, ma spesso è dovuto a un difetto del codice dell'app.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Il processo ha ricevuto un errore imprevisto durante il tentativo di accedere a un blocco multithread di runtime C in una risorsa di sistema. In genere questo errore si verifica quando il processo di modifica inavvertitamente i dati dell'heap di runtime. Tuttavia, può anche essere causato da un errore interno nella libreria di runtime o codice di sistema operativo.  
  
 Per risolvere questo problema, verificare la presenza di errori di danneggiamento dell'heap nel codice. Per ulteriori informazioni ed esempi, vedere [dettagli Heap di Debug CRT](/visualstudio/debugger/crt-debug-heap-details). Successivamente, verificare che si utilizza i file ridistribuibili di più recenti per la distribuzione di app. Per informazioni, vedere [distribuzione in Visual C++](../../ide/deployment-in-visual-cpp.md).