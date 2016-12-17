---
title: "Tipi gestiti e funzione main (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "main (funzione), nelle applicazioni gestite"
  - "codice gestito, main() (funzione)"
ms.assetid: 9d0e9620-58c4-4dac-a0e1-ffeb95f80fa5
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi gestiti e funzione main (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si scrive un'applicazione utilizzando **\/clr**, gli argomenti della funzione **main\(\)** non possono essere di un tipo gestito.  
  
 Di seguito è riportato un esempio di firma corretta:  
  
```  
// managed_types_and_main.cpp  
// compile with: /clr  
int main(int, char*[], char*[]) {}  
```  
  
## Vedere anche  
 [Tipi gestiti](../dotnet/managed-types-cpp-cli.md)