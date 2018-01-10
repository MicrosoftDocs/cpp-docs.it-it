---
title: Errore di Runtime di C da R6002 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: R6002
dev_langs: C++
helpviewer_keywords: R6002
ms.assetid: 8fbbe65a-9c43-459e-8342-e1f6d1cef7d0
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6652435425cdb04084d183987ea25be7c11114ff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-runtime-error-r6002"></a>Errore di Runtime di C da R6002
supporto a virgola mobile non caricato.  
  
 La libreria a virgola mobile necessaria non è stata collegata.  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema interno. Possibili cause di questo errore, ma spesso è dovuto a un difetto del codice dell'app o dal tentativo di eseguire un'app che non è stata creata per il processore del computer specifico.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo errore può verificarsi nell'app quando la libreria a virgola mobile non è stata collegata. Verificare la presenza di una di queste cause:  
  
-   Una stringa di formato per un `printf_s` o `scanf_s` funzione contiene una specifica di formato a virgola mobile e il programma non contiene alcun valore a virgola mobile o variabile. Per risolvere questo problema, utilizzare un argomento a virgola mobile in modo che corrisponda alla specifica di formato a virgola mobile oppure eseguire un'assegnazione a virgola mobile altrove nel programma. In questo modo il supporto a virgola mobile da caricare.  
  
-   Il compilatore riduce le dimensioni di un programma caricando solo quando è necessario il supporto a virgola mobile. Il compilatore non può rilevare operazioni a virgola mobile o specifiche di formato a virgola mobile in stringhe di formato, non è possibile caricare le routine a virgola mobile necessarie. Per risolvere questo problema, utilizzare una specifica di formato a virgola mobile e fornire un argomento a virgola mobile oppure eseguire un'assegnazione a virgola mobile altrove nel programma. In questo modo il supporto a virgola mobile da caricare.  
  
-   In un programma con linguaggio misto, una libreria di C è stata specificata prima di una libreria FORTRAN quando il programma è stato collegato. Ricollega e specificare la libreria C ultima.