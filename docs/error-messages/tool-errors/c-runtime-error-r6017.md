---
title: R6017 errore di Runtime C | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- R6017
dev_langs:
- C++
helpviewer_keywords:
- R6017
ms.assetid: df3ec5f5-6771-4648-ba06-0e26c6a1cc6a
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 6cad5222fb0d97594d5b13b5cf8903eb2934ee88
ms.openlocfilehash: 903d440dbedbe704ae28be643337619ca1e09c69
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="c-runtime-error-r6017"></a>R6017 errore di Runtime C
Errore di blocco multithread imprevisto.  
  
> [!NOTE]
>  Se viene visualizzato questo messaggio di errore durante l'esecuzione di un'applicazione, l'app è stato chiuso poiché si è verificato un problema interno. Esistono vari motivi possibili per questo errore, ma spesso è dovuto a un difetto nel codice dell'applicazione.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **le applicazioni e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cercare una versione aggiornata dell'applicazione. Se il problema persiste, contattare il fornitore dell'applicazione.  
  
 **Informazioni per i programmatori**  
  
 Il processo ha ricevuto un errore imprevisto durante il tentativo di accedere a un blocco multithread di runtime C per una risorsa di sistema. In genere questo errore si verifica quando il processo di modifica inavvertitamente i dati dell'heap di runtime. Tuttavia, può anche essere causato da un errore interno nella libreria di runtime o codice di sistema operativo.  
  
 Per risolvere questo problema, verificare la presenza di errori di danneggiamento dell'heap nel codice. Per ulteriori informazioni ed esempi, vedere [dettagli dell'Heap di Debug CRT](/visualstudio/debugger/crt-debug-heap-details). Successivamente, controllare che si siano utilizzando i componenti ridistribuibili più recenti per la distribuzione di app. Per informazioni, vedere [distribuzione in Visual C++](../../ide/deployment-in-visual-cpp.md).
