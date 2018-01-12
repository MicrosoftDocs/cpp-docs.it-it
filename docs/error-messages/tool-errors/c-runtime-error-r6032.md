---
title: R6032 errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: R6032
dev_langs: C++
helpviewer_keywords: R6032
ms.assetid: 52092a63-cc51-444a-bfc3-fad965a3558e
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b2b49341d9dc821b54a7bf4a07a2692504cc6e95
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-runtime-error-r6032"></a>R6032 errore di Runtime C
Spazio insufficiente per informazioni sulle impostazioni locali  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema di memoria interna. Possibili cause di questo errore, ma spesso è provocato da una condizione di memoria estremamente bassa o da un bug nel programma.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Il runtime gestisce le informazioni sulle impostazioni locali in ogni thread in modo che sia possibile elaborare le chiamate alle funzioni dipendente dalle impostazioni locali. Se l'allocazione della memoria per ottenere questa informazione non riesce, il runtime è Impossibile continuare perché un numero eccessivo di funzionalità di base dipende da esso.