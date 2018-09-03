---
title: R6017 errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6017
dev_langs:
- C++
helpviewer_keywords:
- R6017
ms.assetid: df3ec5f5-6771-4648-ba06-0e26c6a1cc6a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7f726f1e01acc20899085f8f1b84f74265843bbd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302724"
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