---
title: R6018 errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6018
dev_langs:
- C++
helpviewer_keywords:
- R6018
ms.assetid: f6dd40d1-a119-4d8b-b39e-97350ea23349
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4946e3a8341963ee1a1ca2c3ad65d64cfbad8080
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302828"
---
# <a name="c-runtime-error-r6018"></a>R6018 errore di Runtime C
Errore imprevisto di heap  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema interno. Possibili cause di questo errore, ma spesso è dovuto a un difetto del codice dell'app.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Il programma ha rilevato un errore imprevisto durante l'esecuzione di un'operazione di gestione della memoria.  
  
 In genere questo errore si verifica quando il programma modifica inavvertitamente i dati dell'heap di runtime. Tuttavia, può anche essere causato da un errore interno nel runtime o codice di sistema operativo.  
  
 Per risolvere questo problema, verificare la presenza di errori di danneggiamento dell'heap nel codice. Per ulteriori informazioni ed esempi, vedere [dettagli Heap di Debug CRT](/visualstudio/debugger/crt-debug-heap-details). Successivamente, verificare che si utilizza i file ridistribuibili di più recenti per la distribuzione di app. Per informazioni, vedere [distribuzione in Visual C++](../../ide/deployment-in-visual-cpp.md).