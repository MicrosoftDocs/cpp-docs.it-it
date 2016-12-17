---
title: "marshal_context::~marshal_context | Microsoft Docs"
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
  - "marshal_context::~marshal_context"
  - "msclr.interop.marshal_context.~marshal_context"
  - "marshal_context.~marshal_context"
  - "msclr::interop::marshal_context::~marshal_context"
  - "~marshal_context"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "marshal_context (classe) [C++], operazioni"
ms.assetid: 34c41b38-4c33-4f61-b74e-831ac46b4ab5
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# marshal_context::~marshal_context
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Elimina un oggetto `marshal_context`.  
  
## Sintassi  
  
```  
~marshal_context();  
```  
  
## Note  
 Alcune conversioni di dati richiedono un contesto di marshalling.  Vedere [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md) per ulteriori informazioni su quali conversioni richiedono un contesto e quali file di marshalling debbano essere inclusi nell'applicazione.  
  
 Eliminare un oggetto `marshal_context` invaliderà i dati convertiti dal contesto.  Se si desidera mantenere i dati dopo che viene distrutto un oggetto `marshal_context`, è necessario copiare manualmente i dati in una variabile che rimarrà valida.  
  
## Requisiti  
 **File di intestazione:** \<msclr\\marshal.h\>, \<msclr\\marshal\_windows.h\>, \<msclr\\marshal\_cppstd.h\>, o \<msclr\\marshal\_atl.h\>  
  
 **Spazio dei nomi:** msclr::interop  
  
## Vedere anche  
 [Panoramica del marshaling in C\+\+](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal\_as](../dotnet/marshal-as.md)   
 [Classe marshal\_context](../dotnet/marshal-context-class.md)