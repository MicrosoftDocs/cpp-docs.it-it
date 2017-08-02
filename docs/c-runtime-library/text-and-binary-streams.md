---
title: Flussi di testo e binari | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- binary streams
- text streams
ms.assetid: 57035e4a-955d-4e04-a560-fcf67ce68b4e
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: b3f0a7603c2d3732c693c509e310a5a00a99300f
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="text-and-binary-streams"></a>Flussi di testo e binari
Un flusso di testo è costituito da uno o più righe di testo che possono essere scritte in una visualizzazione orientata al testo in modo da poter essere lette. Durante la lettura da un flusso di testo, il programma legge un `NL` (nuova riga) alla fine di ogni riga. Quando si scrive in un flusso di testo, il programma scrive un `NL` per segnalare la fine di una riga. Per soddisfare le convenzioni diverse tra ambiente di destinazione per la rappresentazione di testo nei file, le funzioni di libreria possono alterare il numero e le rappresentazioni di caratteri trasmessi tra il programma e un flusso di testo.  
  
 Pertanto, il posizionamento all'interno di un flusso di testo è limitato. È possibile ottenere l'indicatore di posizione corrente chiamando [fgetpos](../c-runtime-library/reference/fgetpos.md) o [ftell](../c-runtime-library/reference/ftell-ftelli64.md). È possibile inserire un flusso di testo in una posizione ottenuta in questo modo o all'inizio o alla fine del flusso, chiamando [fsetpos](../c-runtime-library/reference/fsetpos.md) o [fseek](../c-runtime-library/reference/fseek-fseeki64.md). Qualsiasi altra modifica della posizione potrebbe non essere supportata correttamente.  
  
 Per la massima portabilità, il programma non deve scrivere:  
  
-   File vuoti.  
  
-   Spazi alla fine di una riga.  
  
-   Righe parziali (omettendo il `NL` alla fine di un file).  
  
-   caratteri diversi dai caratteri stampabili, NL e `HT` (tabulazione orizzontale).  
  
 Seguendo queste regole, la sequenza dei caratteri letti da un flusso di testo (ad esempio byte o caratteri multibyte) corrisponderà alla sequenza di caratteri scritta nel flusso di testo quando si è creato il file. In caso contrario, le funzioni di libreria possono rimuovere il file creato se il file è vuoto quando lo si chiude. Oppure possono modificare o eliminare i caratteri che si scrivono nel file.  
  
 Un flusso binario è costituito da uno o più byte di informazioni arbitrarie. È possibile scrivere il valore memorizzato in un oggetto arbitrario in un flusso binario (orientato ai byte) e leggere esattamente ciò che è stato memorizzato nell'oggetto quando è stato scritto. Le funzioni di libreria non modificano i byte che si trasmettono tra il programma e un flusso binario. Tuttavia, possono aggiungere un numero arbitrario di byte null al file che si scrive con un flusso binario. Il programma deve gestire questi byte null aggiuntivi alla fine di ogni flusso binario.  
  
 Pertanto, il posizionamento in un flusso binario è ben definito, eccetto per il posizionamento relativo alla fine del flusso. È possibile ottenere e modificare l'indicatore di posizione corrente del file allo stesso modo di un flusso di testo. Inoltre, gli offset usati da [ftell](../c-runtime-library/reference/ftell-ftelli64.md) e da [fseek](../c-runtime-library/reference/fseek-fseeki64.md) contano i byte dall'inizio del flusso (ovvero dal byte zero), pertanto l'aritmetica basata su interi in questi offset restituisce risultati prevedibili.  
  
 Un flusso di byte considera un file come una sequenza di byte. Nel programma, il flusso è simile alla sequenza di byte stessa, ad eccezione delle possibili modifiche descritte in precedenza.  
  
## <a name="see-also"></a>Vedere anche  
 [File e flussi](../c-runtime-library/files-and-streams.md)
