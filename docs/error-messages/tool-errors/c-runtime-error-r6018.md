---
title: R6018 errore di Runtime C | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- R6018
dev_langs:
- C++
helpviewer_keywords:
- R6018
ms.assetid: f6dd40d1-a119-4d8b-b39e-97350ea23349
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
translationtype: Machine Translation
ms.sourcegitcommit: 6cad5222fb0d97594d5b13b5cf8903eb2934ee88
ms.openlocfilehash: 07aa2d06b990f0eed1f089b677e55c4d2e78a01e
ms.lasthandoff: 02/24/2017

---
# <a name="c-runtime-error-r6018"></a>R6018 errore di Runtime C
Errore imprevisto dell'heap  
  
> [!NOTE]
>  Se viene visualizzato questo messaggio di errore durante l'esecuzione di un'applicazione, l'app è stato chiuso poiché si è verificato un problema interno. Esistono vari motivi possibili per questo errore, ma spesso è dovuto a un difetto nel codice dell'applicazione.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **le applicazioni e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cercare una versione aggiornata dell'applicazione. Se il problema persiste, contattare il fornitore dell'applicazione.  
  
 **Informazioni per i programmatori**  
  
 Il programma ha rilevato un errore imprevisto durante l'esecuzione di un'operazione di gestione della memoria.  
  
 In genere questo errore si verifica quando il programma modifica inavvertitamente i dati dell'heap di runtime. Tuttavia, può anche essere causato da un errore interno nel runtime o nel codice del sistema operativo.  
  
 Per risolvere questo problema, verificare la presenza di errori di danneggiamento dell'heap nel codice. Per ulteriori informazioni ed esempi, vedere [dettagli dell'Heap di Debug CRT](/visualstudio/debugger/crt-debug-heap-details). Successivamente, controllare che si siano utilizzando i componenti ridistribuibili più recenti per la distribuzione di app. Per informazioni, vedere [distribuzione in Visual C++](../../ide/deployment-in-visual-cpp.md).
