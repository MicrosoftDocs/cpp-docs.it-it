---
title: "Serializzazione (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "..NET Framework [C++], serializzazione"
  - "codice gestito [C++], serializzazione"
  - "NonSerializedAttribute (classe), applicazioni gestite"
  - "SerializableAttribute (classe), applicazioni gestite"
  - "serializzazione [C++]"
  - "serializzazione [C++], informazioni"
ms.assetid: 869010ca-74e1-4989-b409-4643cdb94084
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Serializzazione (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La serializzazione, ovvero il processo di memorizzazione dello stato di un oggetto o membro su un supporto permanente, delle classi gestite, inclusi singoli campi o proprietà, è supportata dalle classi <xref:System.SerializableAttribute> e <xref:System.NonSerializedAttribute>.  
  
## Osservazioni  
 Applicare l'attributo personalizzato **SerializableAttribute** a una classe gestita per serializzare l'intera classe o applicarlo a campi o proprietà specifiche per serializzare solo tali parti.  Utilizzare l'attributo personalizzato **NonSerializedAttribute** per evitare che alcuni campi o proprietà di una classe gestita vengano serializzati.  
  
## Esempio  
  
### Descrizione  
 Nell'esempio riportato di seguito la classe `MyClass` \(e la proprietà `m_nCount`\) è contrassegnata come serializzabile.  Tuttavia, la proprietà `m_nData` non viene serializzata come indicato dall'attributo personalizzato **NonSerialized**:  
  
### Codice  
  
```  
// serialization_and_mcpp.cpp  
// compile with: /LD /clr  
using namespace System;  
  
[ Serializable ]  
public ref class MyClass {  
public:  
   int m_nCount;  
private:  
   [ NonSerialized ]  
   int m_nData;  
};  
```  
  
### Commenti  
 Si noti che è possibile fare riferimento a entrambi gli attributi mediante il "nome breve" \(**Serializable** e **NonSerialized**\),  come spiegato più ampiamente in [Applicazione di attributi](../Topic/Applying%20Attributes.md).  
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)