---
title: "Classe Platform::FailureException | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::FailureException::FailureException"
  - "Platform/Platform::FailureException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::FailureException"
ms.assetid: 1729cd07-bfc2-448e-9db5-185d5cbf5b81
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 3
---
# Classe Platform::FailureException
Generata quando l'operazione non viene completata correttamente. È l'equivalente di HRESULT E\_FAIL.  
  
## Sintassi  
  
```cpp  
public ref class FailureException : COMException,    IException,    IPrintable,    IEquatable  
```  
  
## Note  
 Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Platform::COMException \(classe\)](../cppcx/platform-comexception-class.md)