---
title: R6008 errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6008
dev_langs:
- C++
helpviewer_keywords:
- R6008
ms.assetid: f0f304fc-709a-4843-bc7e-bad1ae0d1649
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2d32734850c58b64694e96c3a27b759131e6c5ff
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299877"
---
# <a name="c-runtime-error-r6008"></a>R6008 errore di Runtime C
spazio insufficiente per gli argomenti  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema di memoria interna. Possibili cause di questo errore, ma spesso è provocato da una condizione di memoria molto bassa, troppa memoria utilizzata da variabili di ambiente o un bug nel programma.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Chiudere le altre applicazioni in esecuzione o riavviare il computer per liberare memoria.  
> -   Ridurre il numero e dimensione degli argomenti della riga di comando per l'app.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Si è verificato di memoria insufficiente per caricare il programma, ma non è sufficiente memoria per creare il **argv** matrice. Può essere causato da condizioni di memoria estremamente bassa o insolitamente elevato di righe di comando o l'uso di variabili di ambiente. Prendere in considerazione una delle seguenti soluzioni:  
  
-   Aumentare la quantità di memoria disponibile per il programma.  
  
-   Ridurre il numero e la dimensione degli argomenti della riga di comando.  
  
-   Ridurre la dimensione di ambiente rimuovendo le variabili non necessarie.