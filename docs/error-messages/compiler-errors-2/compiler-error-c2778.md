---
title: "Errore del compilatore C2778 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2778"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2778"
ms.assetid: b24cb732-2914-42cc-8928-e2d87b393428
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2778
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

formato GUID non corretto in \_\_declspec\(uuid\(\)\)  
  
 Un GUID non corretto viene fornito all'attributo esteso [uuid](../../cpp/uuid-cpp.md).  
  
 Il GUID deve essere una stringa di numeri esadecimali con il seguente formato:  
  
```  
// C2778a.cpp  
// compile with: /c  
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};  
struct __declspec(uuid("{00000000-0000-0000-0000-000000000000}")) B{};  
```  
  
 L'attributo esteso `uuid` accetta le stringhe riconosciute da [CLSIDFromString](http://msdn.microsoft.com/library/windows/desktop/ms680589), con o senza i delimitatori dati da parentesi graffe.  
  
 Il seguente codice di esempio genera l'errore C2778:  
  
```  
// C2778b.cpp  
struct __declspec(uuid(" 00000000-0000-0000-0000-000000000000 ")) C { };   // C2778  
struct __declspec(uuid("00000000000000000000000000000000")) D { };   // C2778  
```