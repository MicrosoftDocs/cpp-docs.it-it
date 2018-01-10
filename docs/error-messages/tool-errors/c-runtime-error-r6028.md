---
title: R6028 errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: R6028
dev_langs: C++
helpviewer_keywords: R6028
ms.assetid: 81e99079-4388-4244-a4f7-4641c508871c
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7d1d7260cd2416e9d157931b037cfd7fbe4c0081
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-runtime-error-r6028"></a>R6028 errore di Runtime C
Impossibile inizializzare "heap"  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema di memoria interna. Esistono molti motivi possibili per questo errore, ma spesso è dovuto a una condizione di memoria molto bassa, un bug nel programma, o i driver hardware difettoso.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Se l'app è stata utilizzata prima di un'installazione recente di un'altra app o i driver, utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per rimuovere il nuova app o il driver, quindi riprovare a eseguire l'app.  
> -   Controllo del sito Web del produttore dell'hardware o **Windows Update** nel **Pannello di controllo** per aggiornamenti software e dei driver.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo errore si verifica quando il sistema operativo non riesce a creare il pool di memoria per l'applicazione. In particolare, il Runtime C (CRT) ha chiamato la funzione Win32 `HeapCreate` che ha restituito NULL (errore).  
  
 Se questo errore si verifica durante l'avvio dell'applicazione, il sistema potrebbe non essere in grado di soddisfare le richieste dell'heap perché sono stati caricati driver difettosi. Verificare la disponibilità di driver aggiornati in Windows Update o sul sito Web del fornitore hardware.