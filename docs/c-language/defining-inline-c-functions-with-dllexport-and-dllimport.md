---
title: "Definizione di funzioni inline C con dllexport e dllimport | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "dllexport (attributo) [C++]"
  - "dllexport (attributo) [C++], funzioni inline"
  - "attributo dllimport [C++], funzioni inline"
  - "funzioni inline [C++], dllexport e dllimport"
ms.assetid: 41418f7c-1c11-470b-bb2e-1f8269a239f0
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Definizione di funzioni inline C con dllexport e dllimport
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 È possibile definire come inline una funzione con l'attributo `dllexport`.  In questo caso, sempre creata ed esportata un'istanza della funzione, indipendentemente dal fatto che il modulo nel programma faccia riferimento alla funzione.  Si presuppone che la funzione venga importata da un altro programma.  
  
 È inoltre possibile definire come inline una funzione dichiarata con l'attributo **dllimport**.  In questo caso, è possibile espandere la funzione \(conformemente alle specifiche di opzione del compilatore \/Ob inline\), ma non può essere mai creata un'istanza.  In particolare, se viene preso in considerazione l'indirizzo di una funzione inline importata, viene restituito l'indirizzo della funzione contenuta nella DLL.  Questo comportamento corrisponde a recuperare l'indirizzo di una funzione importata non inline.  
  
 I dati e le stringhe locali statici nelle funzioni inline mantengono le stesse identità tra DLL e il client come in un programma singolo \(ovvero, un file eseguibile senza un'interfaccia DLL\).  
  
 Fare attenzione quando si forniscono funzioni inline importate.  Ad esempio, se si aggiorna la DLL, non presupporre che il client utilizzerà la versione modificata della DLL.  Per assicurarsi che si stia caricando la versione corretta della DLL, ricompilare anche il client della DLL.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Funzioni di importazione ed esportazione DLL](../c-language/dll-import-and-export-functions.md)