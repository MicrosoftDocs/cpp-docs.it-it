---
title: "Platform::Delegate (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Delegate (classe)"
ms.assetid: 82b21271-768f-4193-9ca2-be68ddfd546e
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 5
---
# Platform::Delegate (classe)
Rappresenta un oggetto funzione.  
  
## Sintassi  
  
```cpp  
public delegate void delegate_name();  
```  
  
## Membri  
 La classe Delegate include metodi Equals\(\), GetHashCode\(\) e ToString\(\) derivati dalla [Classe Platform::Object](../cppcx/platform-object-class.md).  
  
## Note  
 Usare la parola chiave [delegate](../Topic/delegate%20%20\(C++%20Component%20Extensions\).md) per creare i delegati; non usare esplicitamente Platform::Delegate. Per altre informazioni, vedere [Delegati](../cppcx/delegates-c-cx.md). Per un esempio su come creare e utilizzare un delegato, vedere [Creazione di componenti Windows Runtime in C\+\+](../Topic/Creating%20Windows%20Runtime%20Components%20in%20C++.md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)