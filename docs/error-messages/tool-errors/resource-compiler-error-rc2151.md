---
title: "Errore del compilatore di risorse RC2151 | Microsoft Docs"
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
  - "RC2151"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2151"
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore di risorse RC2151
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile riutilizzare le costanti di stringa.  
  
 Lo stesso valore è utilizzato due volte all'interno di un'istruzione **STRINGTABLE**.  Verificare che non si stia creando una sovrapposizione di valori decimali e valori esadecimali.  
  
 È necessario che tutti gli ID inclusi in **STRINGTABLE** siano univoci.  Per ottenere i migliori risultati, utilizzare costanti contigue a partire da un multiplo di 16.