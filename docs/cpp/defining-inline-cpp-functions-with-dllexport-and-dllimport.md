---
title: "Definizione di funzioni inline C++ con dllexport e dllimport | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dllexport (attributo) [C++], funzioni inline"
  - "attributo dllimport [C++], funzioni inline"
  - "funzioni [C++], definizione inline"
  - "funzioni inline [C++], definizione"
ms.assetid: 3b48678b-e7b8-4eda-bb46-b5d34dcf7817
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Definizione di funzioni inline C++ con dllexport e dllimport
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 È possibile definire come inline una funzione con l'attributo `dllexport`.  In questo caso, sempre creata ed esportata un'istanza della funzione, indipendentemente dal fatto che il modulo nel programma faccia riferimento alla funzione.  Si presuppone che la funzione venga importata da un altro programma.  
  
 È inoltre possibile definire come inline una funzione dichiarata con l'attributo **dllimport**.  In questo caso, la funzione può essere espansa \(conformemente alle specifiche \/Ob\), ma non può essere mai creata un'istanza.  In particolare, se viene preso in considerazione l'indirizzo di una funzione inline importata, viene restituito l'indirizzo della funzione contenuta nella DLL.  Questo comportamento corrisponde a recuperare l'indirizzo di una funzione importata non inline.  
  
 Queste regole vengono applicate alle funzioni inline le cui definizioni vengono visualizzate in una definizione di classe.  Inoltre, i dati e le stringhe locali statici nelle funzioni inline mantengono le stesse identità tra la DLL e il client come se fossero in un programma singolo \(ovvero, un file eseguibile senza un'interfaccia DLL\).  
  
 Fare attenzione quando si forniscono funzioni inline importate.  Ad esempio, se si aggiorna la DLL, non presupporre che il client utilizzerà la versione modificata della DLL.  Per assicurarsi che si stia caricando la versione corretta della DLL, ricompilare anche il client della DLL.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [dllexport, dllimport](../cpp/dllexport-dllimport.md)