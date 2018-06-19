---
title: Progetto PRJ0009 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0009
dev_langs:
- C++
helpviewer_keywords:
- PRJ0009
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e5692ec643f5e3fe1adebf68048a6c435ab05d6f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33318454"
---
# <a name="project-build-error-prj0009"></a>Errore di compilazione progetto PRJ0009
Compilazione non è stato aprire i log per la scrittura.  
  
 **Assicurarsi che il file non è aperto da un altro processo e non è protetto da scrittura.**  
  
 Dopo aver impostato la **log di compilazione** proprietà **Sì** e si esegue una compilazione o ricompilazione, Visual C++ non è riuscito ad aprire il log di compilazione in modalità esclusiva.  
  
 Controllare il **log di compilazione** impostazione aprendo il **opzioni** la finestra di dialogo (nel **strumenti** menu, fare clic su **opzioni** comando) e quindi selezione **VC + + compilazione** nel **progetti** cartella. Il file di compilazione è denominato BuildLog e viene scritto nella directory intermedia $(IntDir).  
  
 Possibili cause di questo errore:  
  
-   Si sono in esecuzione due processi di Visual C++ e si cerca di creare la stessa configurazione dello stesso progetto in entrambi contemporaneamente.  
  
-   Il file di log di compilazione viene aperto in un processo che blocca il file.  
  
-   L'utente non dispone dell'autorizzazione per creare un file.  
  
-   L'utente corrente non dispone dell'accesso in scrittura al file BuildLog.