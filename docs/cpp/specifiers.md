---
title: "Identificatori | Microsoft Docs"
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
  - "identificatori di dichiarazioni"
  - "dichiarazioni, identificatori"
  - "identificatori, dichiarazioni"
ms.assetid: 8b14e844-9880-4571-8779-28c8efe44633
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Identificatori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo argomento illustra il componente *decl\-specifiers* \(identificatori di dichiarazione\) di una [dichiarazione](../misc/declarations.md).  
  
 I seguenti segnaposto e le seguenti e parole chiave del linguaggio sono identificatori di dichiarazione:  
  
 *storage\-class\-specifier*  
  
 *type\-specifier*  
  
 *function\-specifier*  
  
 [friend](../cpp/friend-cpp.md)  
  
 [typedef](http://msdn.microsoft.com/it-it/cc96cf26-ba93-4179-951e-695d1f5fdcf1)  
  
 [\_\_declspec](../cpp/declspec.md) `(` *extended\-decl\-modifier\-seq* `)`  
  
## Note  
 La parte *decl\-specifiers* di una dichiarazione è la sequenza più lunga di *decl\-specifiers* che può essere usata per indicare un nome di tipo, esclusi i modificatori di puntatore o riferimento.  Il resto della dichiarazione è il *dichiaratore*, che include il nome introdotto.  
  
 La tabella seguente elenca quattro dichiarazioni e quindi illustra separatamente il componente *decl\-specifers* e *declarator* di ogni dichiarazione.  
  
|Dichiarazione|*decl\-specifiers*|`declarator`|  
|-------------------|------------------------|------------------|  
|`char *lpszAppName;`|`char`|`*lpszAppName`|  
|`typedef char * LPSTR;`|`char`|`*LPSTR`|  
|`const int func1();`|`const int`|`func1`|  
|`volatile void *pvvObj;`|`volatile void`|`*pvvObj`|  
  
 Poiché `signed`, `unsigned`, `long` e `short` implicano tutti `int`, un mome `typedef` che segue una di queste parole chiave viene considerato un membro di *declarator\-list,*, non di *decl\-specifiers*.  
  
> [!NOTE]
>  Poiché un nome può essere ridichiarato, la relativa interpretazione è soggetta alla dichiarazione più recente nell'ambito corrente.  La ridichiarazione può influire sull'interpretazione dei nomi da parte del compilatore, soprattutto sui nomi `typedef`.  
  
## Vedere anche  
 [Dichiarazioni](../misc/declarations.md)