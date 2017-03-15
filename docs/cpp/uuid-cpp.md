---
title: "uuid (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "uuid"
  - "uuid_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], uuid"
  - "uuid __declspec (parola chiave)"
ms.assetid: 9d004621-09bc-4a8d-871b-648f5d5102d7
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# uuid (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Il compilatore associa un GUID a una classe o struttura dichiarata o definita \(solo per le definizioni complete dell'oggetto COM\) con l'attributo `uuid`.  
  
## Sintassi  
  
```  
  
__declspec( uuid("  
ComObjectGUID  
") ) declarator  
```  
  
## Note  
 L'attributo `uuid` accetta una stringa come proprio argomento.  Tale stringa assegna un nome a un GUID secondo il normale formato del Registro di sistema, con o senza i delimitatori **{ }**.  Ad esempio:  
  
```  
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) IUnknown;  
struct __declspec(uuid("{00020400-0000-0000-c000-000000000046}")) IDispatch;  
```  
  
 Tale attributo può essere applicato in una ridichiarazione.  Ciò consente alle intestazioni di sistema di fornire le definizioni di interfaccia come **IUnknown** e alla ridichiarazione in un'altra intestazione \(come COMDEF.H\) di fornire il GUID.  
  
 La parola chiave [\_\_uuidof](../cpp/uuidof-operator.md) può essere applicata per recuperare la costante GUID associata a un tipo definito dall'utente.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)