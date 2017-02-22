---
title: "Errore irreversibile U1095 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1095"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1095"
ms.assetid: a392582b-06db-4568-9c13-450293a4fbda
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile U1095 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

riga di comando espansa "rigadicomando" troppo lunga  
  
 Dopo l'espansione di una macro, la riga di comando specificata ha superato il limite di lunghezza supportato dal sistema operativo per le righe di comando.  
  
 In MS\-DOS nella riga di comando sono consentiti al massimo 128 caratteri.  
  
 Se il comando è diretto a un programma che accetta input di riga di comando da file, modificare il comando e fornire l'input da un file presente nel disco o da un file inline.  LINK e LIB, ad esempio, accettano input da file di risposta.