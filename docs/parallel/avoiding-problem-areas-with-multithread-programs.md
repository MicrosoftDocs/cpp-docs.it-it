---
title: Suggerimenti per evitare problemi relativi ai programmi Multithread | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- multithreading [C++], troubleshooting
- errors [C++], multithreaded programs
- threading [C++], troubleshooting
- troubleshooting [C++], multithreading
ms.assetid: 06cc231d-bb5a-409d-8bd3-676c9e2a8c5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5af4c1ca6a86b2cff457aee12e8337103ce7f42d
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686614"
---
# <a name="avoiding-problem-areas-with-multithread-programs"></a>Suggerimenti per evitare problemi relativi ai programmi multithread
Esistono diversi problemi che possono verificarsi nella creazione, il collegamento o l'esecuzione di un programma multithread C. Nella tabella seguente vengono descritte alcune delle più comuni. (Per informazioni analoghe dal punto di vista MFC, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md).)  
  
|Problema|Causa probabile|  
|-------------|--------------------|  
|Viene visualizzata una finestra di messaggio che mostra che si è verificata una violazione della protezione.|Molti errori di programmazione Win32 provocano violazioni della protezione. Una causa comune di violazioni della protezione è l'assegnazione indiretta dei dati a puntatori null. Perché in questo modo, il programma tenta di accedere alla memoria che non appartiene ad esso, una violazione della protezione.<br /><br /> Un modo semplice per rilevare la causa di una violazione della protezione consiste nella compilazione del programma con le informazioni di debug e quindi eseguirlo tramite il debugger nell'ambiente di Visual C++. Quando si verifica l'errore di protezione, Windows trasferisce il controllo al debugger e il cursore viene posizionato sulla riga che ha causato il problema.|  
|Il programma genera numerosi errori di compilazione e collegamento.|È possibile eliminare molti problemi impostando il livello di avviso del compilatore su uno dei valori massimi, prestando attenzione a eventuali messaggi di avviso. Utilizzando le opzioni di livello avviso di livello 4 o il livello 3, è possibile rilevare le conversioni di dati indesiderate, prototipi di funzione mancante e uso delle funzionalità non ANSI.|  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)