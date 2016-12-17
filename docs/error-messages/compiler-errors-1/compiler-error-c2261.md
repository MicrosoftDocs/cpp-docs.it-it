---
title: "Errore del compilatore C2261 | Microsoft Docs"
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
  - "C2261"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2261"
ms.assetid: 60969482-9e83-49b5-9631-a04bc844da12
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2261
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'stringa': il riferimento all'assembly non è valido e non può essere risolto  
  
 Un valore non è valido.  
  
 <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> viene utilizzato per specificare un assembly di tipo friend.  Affinché, ad esempio, a.dll specifichi b.dll come assembly Friend, in a.dll deve essere specificato InternalsVisibleTo\("b"\).  Common Language Runtime consentirà quindi a b.dll di accedere a tutti gli elementi di a.dll, ad eccezione dei tipi privati.  
  
 Per ulteriori informazioni sulla sintassi corretta da utilizzare quando si specificano assembly Friend, vedere [Assembly Friend \(C\+\+\)](../../dotnet/friend-assemblies-cpp.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2261:  
  
```  
// C2261.cpp  
// compile with: /clr /c  
using namespace System::Runtime::CompilerServices;  
[assembly: InternalsVisibleTo("a,a,a")];   // C2261  
[assembly: InternalsVisibleTo("a.a")];   // OK  
[assembly: InternalsVisibleTo("a")];   // OK  
```