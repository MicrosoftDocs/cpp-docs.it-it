---
title: "Errore del compilatore C2011 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2011"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2011"
ms.assetid: 992c9d51-e850-4d53-b86b-02e73b38249c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2011
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': ridefinizione tipo 'type'  
  
 L'identificatore è già stato definito come `type`.  Cercare le ridefinizioni dell'identificatore.  
  
 L'errore C2011 può verificarsi anche se si importa un file di intestazione o una libreria dei tipi più di una volta nello stesso file.  Per evitare più inclusioni dei tipi definiti in un file di intestazione, usare guard include o una direttiva `#pragma` [once](../../preprocessor/once.md) nel file di intestazione.  
  
 Se è necessario trovare la dichiarazione iniziale del tipo ridefinito, è possibile usare il flag del compilatore [\/P](../../build/reference/p-preprocess-to-a-file.md) per generare l'output pre\-elaborato passato al compilatore.  È possibile usare strumenti di ricerca testo per trovare le istanze dell'identificatore ridefinito nel file di output.  
  
 L'esempio seguente genera l'errore C2011 e mostra un modo per risolverlo:  
  
```  
// C2011.cpp  
// compile with: /c  
struct S;  
union S;   // C2011  
union S2;   // OK  
```