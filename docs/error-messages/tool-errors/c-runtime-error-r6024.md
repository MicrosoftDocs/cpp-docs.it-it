---
title: R6024 errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- R6024
dev_langs:
- C++
helpviewer_keywords:
- R6024
ms.assetid: 0fb11c0f-9b81-4cab-81bd-4785742946a5
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 98d52a7d143a1c65caee3fe68902e3a25b3a5f4c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-runtime-error-r6024"></a>R6024 errore di Runtime C
spazio insufficiente per la tabella onexit/atexit  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema di memoria interna. Questo errore viene in genere causato da una condizione di memoria estremamente bassa o raramente, da un bug nel programma o al danneggiamento delle librerie di Visual C++ che utilizza.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare tutte le copie di Microsoft Visual C++ Redistributable.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo errore si verifica perché non vi è memoria disponibile per il `_onexit` o `atexit` (funzione). Questo errore è causato da una condizione di memoria insufficiente. È possibile considerare pre-allocazione buffer all'avvio dell'app per consentire il salvataggio dei dati utente e l'esecuzione di un'app pulita uscire in condizioni di memoria insufficiente.