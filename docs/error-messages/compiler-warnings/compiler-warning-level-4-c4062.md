---
title: "Avviso del compilatore (livello 4) C4062 | Microsoft Docs"
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
  - "C4062"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4062"
ms.assetid: 36d1c6ae-c917-4b08-bf30-2eb49ee94169
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4062
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'enumeratore 'identifier' nell'istruzione switch dell'enum 'enumeration' non viene gestito  
  
 All'enumerazione non è associato un gestore in un'istruzione `switch` e non esiste un'etichetta **predefinito**.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
 L'esempio seguente genera l'errore C4062.  
  
```  
// C4062.cpp // compile with: /W4 #pragma warning(default : 4062) enum E { a, b, c }; void func ( E e ) { switch(e) { case a: case b: break;   // no default label }   // C4062, enumerate 'c' not handled } int main() { }  
```