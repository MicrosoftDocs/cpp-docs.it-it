---
title: "Errore del compilatore C3381 | Microsoft Docs"
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
  - "C3381"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3381"
ms.assetid: d276c89f-8377-4cb6-a8d4-7770885f06c4
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3381
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'assembly': gli identificatori di accesso assembly sono disponibili solo nel codice compilato con un'opzione \/clr  
  
 Sebbene i tipi nativi siano visibili al di fuori dell'assembly, è possibile identificare l'accesso assembly per tali tipi solo in una compilazione **\/clr**.  
  
 Per ulteriori informazioni, vedere [Visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3381:  
  
```  
// C3381.cpp  
// compile with: /c  
public class A {};   // C3381  
```