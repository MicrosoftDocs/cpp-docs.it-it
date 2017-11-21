---
title: R6033 di errore di Runtime C | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: R6033
dev_langs: C++
helpviewer_keywords: R6033
ms.assetid: f9cffdc9-81bd-4a64-a698-02762cbd82c9
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3ae5eddbce2e590e53e51b132ebbbd9589b385eb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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