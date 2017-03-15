---
title: "Errore irreversibile C1854 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1854"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1854"
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile C1854
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile sovrascrivere le informazioni generate durante la creazione dell'intestazione precompilata nel file oggetto: 'nomefile'  
  
 È stata specificata l'opzione **\/Yu** \(Usa intestazione precompilata\) dopo avere specificato l'opzione **\/Yc** \(Crea intestazione precompilata\) per lo stesso file.  Con alcune dichiarazioni, quali quelle che includono `__declspec` `dllexport`, questa impostazione non è valida.