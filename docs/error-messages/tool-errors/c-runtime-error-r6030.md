---
title: C Runtime Errore R6030 del linguaggio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: R6030
dev_langs: C++
helpviewer_keywords: R6030
ms.assetid: 0238a6c3-a033-4046-8adc-f8f99d961153
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 328f4dac5ec772ec7229c7a4b4a21ed408d3ad73
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="c-runtime-error-r6030"></a>C Runtime Errore R6030 del linguaggio
CRT non inizializzato  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema interno. Questo problema è spesso causato da alcuni programmi software di protezione o raramente, da un bug nel programma.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Il software di protezione potrebbe essere istruzioni specifiche per limitare questo problema. Controllare la sicurezza Web del produttore per ulteriori informazioni. In alternativa, verificare la presenza di versioni aggiornate del software di sicurezza o software di protezione diversi.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo errore si verifica se si utilizza il Runtime C (CRT), ma non è stato eseguito il codice di avvio CRT. È possibile che venga visualizzato questo errore se il linker passa [/ENTRY](../../build/reference/entry-entry-point-symbol.md) viene utilizzato per sostituire l'impostazione predefinita l'indirizzo, iniziale, in genere **mainCRTStartup**, **wmainCRTStartup** per un console EXE, **WinMainCRTStartup** o **wWinMainCRTStartup** per un eseguibile di Windows, o **DllMainCRTStartup** per una DLL. A meno che una delle funzioni precedente viene chiamata all'avvio, il Runtime di C non verrà inizializzato. Le funzioni di avvio vengono in genere chiamate per impostazione predefinita quando si collega alla libreria di runtime C e utilizza la normale **principale**, **wmain**, **WinMain**, o  **DllMain** punti di ingresso.  
  
 È inoltre possibile visualizzare questo errore quando un altro programma utilizza tecniche di inserimento di codice per la registrazione di determinate chiamate di libreria DLL. Alcuni programmi di sicurezza intrusivo utilizzano questa tecnica. Nelle versioni di Visual C++ prima di Visual Studio 2015, è possibile utilizzare una libreria CRT collegata staticamente per risolvere il problema, ma questa operazione è sconsigliata per motivi di sicurezza e applicazione degli aggiornamenti. Risoluzione del problema potrebbero richiedere un intervento dell'utente finale.