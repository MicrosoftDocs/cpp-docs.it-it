---
title: "marshal_context::marshal_context | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "msclr::interop::marshal_context::marshal_context"
  - "marshal_context::marshal_context"
  - "msclr.interop.marshal_context.marshal_context"
  - "marshal_context.marshal_context"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshal_context (classe) [C++], operazioni"
ms.assetid: 5f08c895-60b0-4f72-97ff-7ae37c68e853
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# marshal_context::marshal_context
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto di `marshal_context` da utilizzare per la conversione di dati tra tipi di dati gestite e native.  
  
## Sintassi  
  
```  
marshal_context();  
```  
  
## Note  
 Alcune conversioni di dati richiedono un contesto del marshalling.  Vedere [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md) per ulteriori informazioni sulle conversioni richiedono un contesto e in cui il file di marshalling deve essere incluso nell'applicazione.  
  
## Esempio  
 Vedere l'esempio per [marshal\_context::marshal\_as](../dotnet/marshal-context-marshal-as.md).  
  
## Requisiti  
 **File di intestazione:** \<msclr\\marshal.h\>, \<msclr\\marshal\_windows.h\>, \<msclr\\marshal\_cppstd.h\>, o \<msclr\\marshal\_atl.h\>  
  
 **Spazio dei nomi:** msclr::interop  
  
## Vedere anche  
 [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal\_as](../dotnet/marshal-as.md)   
 [Classe marshal\_context](../dotnet/marshal-context-class.md)