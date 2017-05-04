---
title: "Propriet&#224; Type::FullName | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Type::get_FullName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Type::get_FullName (proprietà)"
ms.assetid: b5a12d8f-4404-4659-b4af-e7d23a1e44b7
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Propriet&#224; Type::FullName
Recupera il nome completo del tipo corrente nel formato "Namespace.Type".  
  
## Sintassi  
  
```cpp  
String^ FullName();  
```  
  
## Valore restituito  
 Nome del tipo.  
  
## Esempio  
  
```  
  
//  namespace is TestApp MainPage::MainPage() { InitializeComponent(); Type^ t = this->GetType(); auto s = t->FullName; // returns “TestApp.MainPage” auto s2 = t->ToString(); //also returns “TestApp.MainPage” }  
```  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Platform::ValueType \(classe\)](../cppcx/platform-valuetype-class.md)