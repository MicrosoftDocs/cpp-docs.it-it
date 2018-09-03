---
title: R6033 di errore di Runtime C | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- R6033
dev_langs:
- C++
helpviewer_keywords:
- R6033
ms.assetid: f9cffdc9-81bd-4a64-a698-02762cbd82c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ed66dec4f4eb17378c9901439be2ad1449597a93
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299994"
---
# <a name="c-runtime-error-r6033"></a>R6033 di errore di Runtime C
Tentativo di utilizzare il codice MSIL da questo assembly durante l'inizializzazione del codice nativo. Questo indica un bug nell'applicazione. È molto probabile che il risultato della chiamata a un MSIL compilato (o clr) funzione da un costruttore nativo o da DllMain.  
  
> [!NOTE]
>  Se questo messaggio di errore si verifica durante l'esecuzione di un'applicazione, l'app è stato arrestato perché si è verificato un problema interno. Questo errore può essere causato da un bug nell'app o da un bug in un componente aggiuntivo o un'estensione che usa.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Utilizzare il **App e funzionalità** o **programmi e funzionalità** nella pagina di **Pannello di controllo** per rimuovere, ripristinare o reinstallare le estensioni o componenti aggiuntivi.  
> -   Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.  
> -   Cerca una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.  
  
 **Informazioni per i programmatori**  
  
 Questo messaggio diagnostico indica che le istruzioni MSIL erano in esecuzione durante il blocco del caricatore. Ciò può verificarsi se è stato compilato C++ nativo con il flag /clr. Utilizzare solo il flag /clr in moduli che contengono codice gestito. Per ulteriori informazioni, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).