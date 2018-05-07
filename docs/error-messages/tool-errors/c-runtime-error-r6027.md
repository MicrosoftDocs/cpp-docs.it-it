---
title: R6027 errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6027
dev_langs:
- C++
helpviewer_keywords:
- R6027
ms.assetid: c06a62b3-08d9-4bf5-bcad-8340ec552f69
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cc38d664a6c9e2e2be0c360709ed6b39b1014b05
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="c-runtime-error-r6027"></a>R6027 errore di Runtime C
spazio insufficiente per l'inizializzazione lowio  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema di memoria interna. Possibili cause di questo errore, ma in genere è provocato da una condizione di memoria estremamente bassa. Può essere causato anche da un bug nell'app, al danneggiamento delle librerie di Visual C++ che utilizza o da un driver.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Se l'app è stata utilizzata prima di un'installazione recente di un'altra app o i driver, utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per rimuovere il nuova app o il driver, quindi riprovare a eseguire l'app.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare tutte le copie di Microsoft Visual C++ Redistributable.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo errore si verifica quando non vi è memoria disponibile insufficiente disponibile per inizializzare il supporto dei / o di basso livello di runtime C. Questo errore si verifica in genere all'avvio dell'app. Verificare che l'app e i driver e le DLL in caso di caricamento non danneggino l'heap all'avvio.