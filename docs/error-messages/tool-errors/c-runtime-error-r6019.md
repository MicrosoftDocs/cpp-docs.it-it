---
title: R6019 errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: R6019
dev_langs: C++
helpviewer_keywords: R6019
ms.assetid: 8129923e-7db2-40ee-9602-def9365f8d28
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9c0e027907476eeacf10515556544160e402cd0e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-runtime-error-r6019"></a>R6019 errore di Runtime C
Impossibile aprire il dispositivo di console  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è tentato di accedere alla console, ma non dispone di autorizzazioni sufficienti. Possibili cause di questo errore, ma è in genere perché è necessario eseguire il programma come amministratore oppure è presente un bug nel programma.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Eseguire il programma come amministratore.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo errore si verifica perché l'applicazione ha chiamato una funzione di console, ma il sistema operativo non consente l'accesso alla console. Eccetto in modalità di debug, funzioni di console in genere non sono consentite nelle applicazioni Windows Store. Se l'app richiede privilegi di amministratore per l'esecuzione, assicurarsi che l'impostazione predefinita viene installato per l'esecuzione come amministratore.