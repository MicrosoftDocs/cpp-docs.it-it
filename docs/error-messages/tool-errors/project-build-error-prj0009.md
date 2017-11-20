---
title: Progetto PRJ0009 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: PRJ0009
dev_langs: C++
helpviewer_keywords: PRJ0009
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4793a4541c133372e7833853caad174303f2a9dc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="project-build-error-prj0009"></a>Errore di compilazione progetto PRJ0009
Compilazione non è stato aprire i log per la scrittura.  
  
 **Assicurarsi che il file non sia aperto da un altro processo e non è protetto da scrittura.**  
  
 Dopo aver impostato la **log di compilazione** proprietà **Sì** e si esegue una compilazione o ricompilazione, Visual C++ non è riuscito ad aprire il log di compilazione in modalità esclusiva.  
  
 Controllare il **log di compilazione** impostazione aprendo il **opzioni** la finestra di dialogo (nel **strumenti** menu, fare clic su **opzioni** comando) e quindi selezione **VC + + compilazione** nel **progetti** cartella. Il file di compilazione è denominato BuildLog e viene scritto nella directory intermedia $(IntDir).  
  
 Possibili cause di questo errore:  
  
-   Si sono in esecuzione due processi di Visual C++ e si cerca di creare la stessa configurazione dello stesso progetto in entrambi contemporaneamente.  
  
-   Il file di log di compilazione viene aperto in un processo che blocca il file.  
  
-   L'utente non dispone dell'autorizzazione per creare un file.  
  
-   L'utente corrente non dispone dell'accesso in scrittura al file BuildLog.