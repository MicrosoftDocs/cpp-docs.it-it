---
title: "/Fi (pre-elaborazione nome file di output) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Fi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Fi (opzione del compilatore) (C++)"
  - "Fi (opzione del compilatore) (C++)"
  - "-Fi (opzione del compilatore) (C++)"
  - "pre-elaborazione di file di output, nome file"
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# /Fi (pre-elaborazione nome file di output)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il nome del file di output sul quale l'opzione del compilatore [\/P \(Pre\-elabora in un file\)](../../build/reference/p-preprocess-to-a-file.md) scrive output pre\-elaborato.  
  
## Sintassi  
  
```  
/Fipathname  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`pathname`|Il nome e il percorso del file di output prodotto dall'opzione **\/P** del compilatore.|  
  
## Note  
 Utilizzare l'opzione del compilatore **\/Fi** in combinazione con il comando del compilatore **\/P**.  
  
 Se si specifica solo un percorso per il parametro `pathname`, il nome di base del file di origine viene utilizzato come nome di base del file di output pre\-elaborato.  Il parametro `pathname` non richiede una particolare estensione del nome file.  Tuttavia, un'estensione di "i" viene utilizzata se non si specifica un'estensione di nome file.  
  
## Esempio  
 Nella seguente riga di comando viene effettuata la pre\-elaborazione di PROGRAM.cpp, vengono conservati i commenti, aggiunte le direttive [\#line](../../preprocessor/hash-line-directive-c-cpp.md) e scritto il risultato nel file MYPROCESS.i  
  
```  
CL /P /FiMYPROCESS.I PROGRAM.CPP  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [\/P \(Pre\-elabora in un file\)](../../build/reference/p-preprocess-to-a-file.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)