---
title: "Errore di compilazione progetto PRJ0009 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0009"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0009"
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0009
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile aprire il log di compilazione per la scrittura.  
  
 **Accertarsi che il file non sia aperto da un altro processo e che non sia protetto da scrittura.**  
  
 Dopo l'impostazione della proprietà **Log di generazione** su **Sì** e l'esecuzione di una compilazione o ricompilazione, non è stato possibile aprire il log di compilazione in modalità esclusiva.  
  
 Verificare l'impostazione **Log di compilazione** scegliendo **Opzioni** dal menu **Strumenti** per visualizzare la finestra di dialogo **Opzioni**, quindi selezionando **Compilazione di VC\+\+** nella cartella **Progetti**.  Il file compilato è denominato BuildLog.htm e viene scritto nella directory intermedia $\(IntDir\).  
  
 Di seguito sono indicate alcune delle possibili cause dell'errore:  
  
-   Sono in esecuzione due processi di Visual C\+\+ e si sta tentando di compilare la stessa configurazione dello stesso progetto contemporaneamente in entrambi.  
  
-   Il file log di compilazione è aperto in un processo che lo blocca.  
  
-   L'utente non è autorizzato a creare file.  
  
-   L'utente corrente non dispone di accesso in scrittura al file BuildLog.htm.