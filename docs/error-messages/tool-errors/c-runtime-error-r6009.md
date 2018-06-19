---
title: R6009 errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6009
dev_langs:
- C++
helpviewer_keywords:
- R6009
ms.assetid: edfb1f8b-3807-48f4-a994-318923b747ae
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2c44c08ec3b52cc53e1b29a0ecf23606c3ec06a4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33296848"
---
# <a name="c-runtime-error-r6009"></a>R6009 errore di Runtime C
spazio insufficiente per l'ambiente  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema di memoria interna. Possibili cause di questo errore, ma spesso è provocato da una condizione di memoria molto bassa, troppa memoria utilizzata da variabili di ambiente o un bug nel programma.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Si è verificato di memoria insufficiente per caricare il programma, ma non è sufficiente memoria per creare il **envp** matrice.  Può essere causato da condizioni di memoria estremamente bassa o dall'utilizzo di variabili di ambiente insolitamente ampio. Prendere in considerazione una delle seguenti soluzioni:  
  
-   Aumentare la quantità di memoria disponibile per il programma.  
  
-   Ridurre il numero e la dimensione degli argomenti della riga di comando.  
  
-   Ridurre la dimensione di ambiente rimuovendo le variabili non necessarie.