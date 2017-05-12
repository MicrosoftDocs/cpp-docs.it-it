---
title: "Classe Platform::AccessDeniedException | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::AccessDeniedException"
  - "Platform/Platform::AccessDeniedException::AccessDeniedException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::AccessDeniedException"
ms.assetid: 6ae2155b-7b16-4587-8d2d-da05eab4c7e9
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe Platform::AccessDeniedException
Generata quando viene negato l'accesso a una risorsa o a una funzionalità.  
  
## Sintassi  
  
```cpp  
public ref class AccessDeniedException : COMException,    IException,    IPrintable,   IEquatable  
```  
  
## Note  
 Quando incontri questa eccezione, assicurati di aver richiesto la funzionalità appropriata e di aver inserito le necessarie dichiarazioni nel manifesto del pacchetto della tua app. Per ulteriori informazioni, vedi [Configurare un pacchetto di app Windows 8.1 utilizzando la finestra di progettazione del manifesto](http://msdn.microsoft.com/library/24c58b7f-9c6d-41c3-b385-c1e8497d5b2d) e la classe [COMException](../cppcx/platform-comexception-class.md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Platform::COMException \(classe\)](../cppcx/platform-comexception-class.md)