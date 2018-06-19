---
title: R6019 errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6019
dev_langs:
- C++
helpviewer_keywords:
- R6019
ms.assetid: 8129923e-7db2-40ee-9602-def9365f8d28
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 95950254d4a0611d9690b8636eb50f2fc1f0f264
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33314229"
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
  
 Questo errore si verifica perché l'applicazione ha chiamato una funzione di console, ma il sistema operativo non consente l'accesso alla console. Ad eccezione di in modalità di debug, funzioni di console in genere non sono consentite nelle applicazioni Microsoft Store. Se l'app richiede privilegi di amministratore per l'esecuzione, assicurarsi che l'impostazione predefinita viene installato per l'esecuzione come amministratore.