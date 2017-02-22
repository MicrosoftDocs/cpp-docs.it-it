---
title: "Errore del compilatore C3121 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3121"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3121"
ms.assetid: 1d3c7be4-d42d-4def-8d53-182c0c5cc237
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3121
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile cambiare il GUID della classe 'nome\_classe'  
  
 Si è tentato di modificare l'ID della classe con [\_\_declspec\(uuid\)](../../cpp/uuid-cpp.md).  
  
 Nel codice seguente, ad esempio, viene generato l'avviso C3121:  
  
```  
// C3121.cpp  
[emitidl];  
[module(name="MyLibrary")];  
  
[coclass, uuid="00000000-0000-0000-0000-111111111111"]  
class __declspec(uuid("00000000-0000-0000-0000-111111111112")) A   // C3121  
{  
};  
int main()  
{  
}  
```