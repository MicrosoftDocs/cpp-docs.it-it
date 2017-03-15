---
title: "STUB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "STUB"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STUB (istruzione del file con estensione def)"
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# STUB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando è utilizzata in un file di definizione moduli per la compilazione di un driver di periferica virtuale \(VxD\), consente di specificare un nome file contenente una struttura IMAGE\_DOS\_HEADER \(definita in WINNT.H\) da utilizzare nel VxD anziché l'intestazione predefinita.  
  
```  
STUB:filename  
```  
  
## Note  
 Un metodo equivalente per specificare *nomefile* è rappresentato dall'uso dell'opzione del linker [\/STUB](../../build/reference/stub-ms-dos-stub-file-name.md).  
  
 STUB è utilizzabile in un file di definizione moduli solo quando si compila un VxD.  
  
## Vedere anche  
 [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)