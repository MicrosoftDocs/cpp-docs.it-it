---
title: Suggerimenti per evitare problemi relativi ai programmi Multithread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- multithreading [C++], troubleshooting
- errors [C++], multithreaded programs
- threading [C++], troubleshooting
- troubleshooting [C++], multithreading
ms.assetid: 06cc231d-bb5a-409d-8bd3-676c9e2a8c5b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 546f5b5daa88578fc7dd062018257f0929bc0cff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="avoiding-problem-areas-with-multithread-programs"></a>Suggerimenti per evitare problemi relativi ai programmi multithread
Esistono diversi problemi che possono verificarsi nella creazione, il collegamento o l'esecuzione di un programma multithread C. Nella tabella seguente vengono descritte alcune delle più comuni. (Per informazioni analoghe dal punto di vista MFC, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md).)  
  
|Problema|Causa probabile|  
|-------------|--------------------|  
|Viene visualizzata una finestra di messaggio che mostra che si è verificata una violazione della protezione.|Molti errori di programmazione Win32 provocano violazioni della protezione. Una causa comune di violazioni della protezione è l'assegnazione indiretta dei dati a puntatori null. Perché in questo modo, il programma tenta di accedere alla memoria che non appartiene ad esso, una violazione della protezione.<br /><br /> Un modo semplice per rilevare la causa di una violazione della protezione consiste nella compilazione del programma con le informazioni di debug e quindi eseguirlo tramite il debugger nell'ambiente di Visual C++. Quando si verifica l'errore di protezione, Windows trasferisce il controllo al debugger e il cursore viene posizionato sulla riga che ha causato il problema.|  
|Il programma genera numerosi errori di compilazione e collegamento.|È possibile eliminare molti problemi impostando il livello di avviso del compilatore su uno dei valori massimi, prestando attenzione a eventuali messaggi di avviso. Utilizzando le opzioni di livello avviso di livello 4 o il livello 3, è possibile rilevare le conversioni di dati indesiderate, prototipi di funzione mancante e uso delle funzionalità non ANSI.|  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)