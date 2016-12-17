---
title: "Classe marshal_context | Microsoft Docs"
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
  - "marshal_context"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshal_context (classe) [C++]"
ms.assetid: 241b0cf6-4ca4-4812-aaee-d671c11dc034
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe marshal_context
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa classe converte i dati tra ambienti nativi e gestiti.  
  
## Sintassi  
  
```  
class marshal_context  
```  
  
## Note  
 Utilizzare la classe `marshal_context` per le conversioni di dati che richiedono un contesto.  Vedere [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md) per ulteriori informazioni sulle conversioni che richiedono un contesto e in cui il file di marshalling deve essere importato.  Il risultato di marshalling quando si utilizza un contesto è valido solamente fino a quando l'oggetto `marshal_context` viene distrutto.  Per mantenere il risultato, è necessario copiare i dati.  
  
 Lo stesso `marshal_context` può essere utilizzato per più conversioni di dati.  Riutilizzare il contesto in questo modo non ha effetto sui risultati delle chiamate precedenti di marshalling.  
  
## Requisiti  
 **File di intestazione:** \<msclr\\marshal.h\>, \<msclr\\marshal\_windows.h\>, \<msclr\\marshal\_cppstd.h\>, o \<msclr\\marshal\_atl.h\>  
  
 **Spazio dei nomi:** msclr::interop  
  
## Vedere anche  
 [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal\_as](../dotnet/marshal-as.md)