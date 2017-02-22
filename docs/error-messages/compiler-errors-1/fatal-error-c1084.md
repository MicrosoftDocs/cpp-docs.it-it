---
title: "Errore irreversibile C1084 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1084"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1084"
ms.assetid: b2f273ef-3a14-4d5f-8ce0-7a11a0388fe6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore irreversibile C1084
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile leggere il file tipofile: 'file': messaggio  
  
 In genere questo errore è causato da un chiamata API del sistema interno non riuscita effettuata dal compilatore.  Il messaggio visualizzato quando si verifica questo errore è spesso generato da [\_wcserror\_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) o [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351.aspx).  
  
 Per tentare di risolvere l'errore C1084, eseguire i passaggi seguenti:  
  
-   Assicurarsi che il file specificato esista.  
  
-   Assicurarsi che siano impostate le autorizzazioni appropriate per accedere al file specificato.  
  
-   Assicurarsi che la sintassi della riga di comando sia conforme alle regole riportate in [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md).  
  
-   Assicurarsi che le variabili di ambiente **TMP** e **TEMP** siano impostate correttamente, così come le autorizzazioni appropriate per accedere alle directory a cui le variabili fanno riferimento.  Assicurarsi inoltre che le unità a cui fanno riferimento le variabili di ambiente **TMP** e **TEMP** dispongano di una sufficiente quantità di spazio disponibile.  
  
-   Se viene visualizzato il messaggio "Numero di file non valido", è possibile che il file specificato sia stato chiuso in primo piano durante la compilazione in background.  
  
 Dopo aver eseguito le operazioni di diagnostica riportate sopra, eseguire una compilazione pulita.