---
title: "Errore del compilatore C2599 | Microsoft Docs"
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
  - "C2599"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2599"
ms.assetid: 88515f36-7589-47e2-862e-0de8b18d6668
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2599
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'enum': per i tipi enum non sono consentite le dichiarazioni con prototipo  
  
 La dichiarazione con prototipo di un'enumerazione gestita non è più supportata.  
  
 La dichiarazione con prototipo di un tipo enum non è consentita in [\/Za](../../build/reference/za-ze-disable-language-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C2599:  
  
```  
// C2599.cpp  
// compile with: /clr /c  
enum class Status;   // C2599  
  
enum class Status2 { stop2, hold2, go2};   
  
ref struct MyStruct {  
   // Delete the following line to resolve.  
   Status m_status;  
  
   Status2 m_status2;   // OK  
};  
  
enum class Status { stop, hold, go };  
```