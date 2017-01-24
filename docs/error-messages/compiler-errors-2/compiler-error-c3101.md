---
title: "Errore del compilatore C3101 | Microsoft Docs"
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
  - "C3101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3101"
ms.assetid: 4f673766-d4f7-4632-94a5-d36a83f7f4b5
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3101
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

espressione non valida per l'argomento dell'attributo denominato 'campo'  
  
 Durante l'inizializzazione dell'argomento di un attributo denominato, il valore deve essere una costante della fase di compilazione.  
  
 Per ulteriori informazioni sugli attributi, vedere [User\-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3101:  
  
```  
// C3101.cpp  
// compile with: /clr /c  
ref class AAttribute : System::Attribute {  
public:  
   int Field;  
};  
  
extern int i;  
  
[assembly:A(Field = i)];   // C3101  
[assembly:A(Field = 0)];   // OK  
```