---
title: R6016 errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- R6016
dev_langs:
- C++
helpviewer_keywords:
- R6016
ms.assetid: 7bd3f274-d9c4-4bc4-8252-80bf168c4c3a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 451ff01b201b110ac5f05140e3b8581f1a8c2e28
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-runtime-error-r6016"></a>R6016 errore di Runtime C
Spazio per i dati di thread insufficiente.  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema di memoria interna. Esistono molti motivi possibili per questo errore, ma spesso è provocato da una condizione di memoria molto bassa, un bug nell'app o da un bug in un componente aggiuntivo o l'estensione usato dall'app.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare l'app.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per rimuovere, ripristinare o reinstallare i componenti aggiuntivi o estensioni utilizzate dall'app.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo errore si verifica perché il programma non ha ricevuto memoria insufficiente dal sistema operativo per completare un [beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md) o `_beginthreadex` chiamata o archiviazione locale non è stato inizializzato dal thread `_beginthread` o `_beginthreadex`.  
  
 Quando viene avviato un nuovo thread, la libreria deve creare un database interno per tale thread. Se il database non può essere espanso con la memoria fornita dal sistema operativo, il thread non viene avviato e il processo di chiamata viene arrestato. Questa situazione può verificarsi quando il processo ha creato troppi thread o se lo spazio di archiviazione thread-local si è esaurito.  
  
 È consigliabile che deve utilizzare un file eseguibile che chiama la libreria di runtime C (CRT) `_beginthreadex` per la creazione del thread anziché l'API Windows `CreateThread`. `_beginthreadex` inizializza l'archiviazione statica interna utilizzata da molte funzioni CRT nello spazio di archiviazione locale del thread. Se si usa `CreateThread` per creare un thread, la libreria CRT può terminare il processo con R6016 quando viene effettuata una chiamata a una funzione CRT che richiede un'archiviazione statica interna inizializzata.