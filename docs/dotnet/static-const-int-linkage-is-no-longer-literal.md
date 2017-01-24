---
title: "L&#39;attributo di collegamento dei membri integrali di Static Const non &#232; pi&#249; Literal | Microsoft Docs"
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
  - "costanti, dichiarazione"
  - "espressioni costanti integrali"
  - "attributo effettivo [C++]"
ms.assetid: d2a5e3d2-ffb0-4b61-8114-bec5993a1195
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# L&#39;attributo di collegamento dei membri integrali di Static Const non &#232; pi&#249; Literal
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La dichiarazione di un membro costante di una classe è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Sebbene i membri integrali `static const` siano ancora supportati, il relativo attributo di collegamento è stato modificato.  L'attributo di collegamento precedente è stato incluso in un membro integrale di tipo literal.  Si consideri ad esempio la seguente classe di estensioni gestite:  
  
```  
public __gc class Constants {  
public:  
   static const int LOG_DEBUG = 4;  
};  
```  
  
 Tramite questo codice vengono generati i seguenti attributi sottostanti CIL per il campo \(si noti l'attributo literal\):  
  
```  
.field public static literal int32   
modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)  
```  
  
 Quando il codice viene compilato con la nuova sintassi:  
  
```  
public ref class Constants {  
public:  
   static const int LOG_DEBUG = 4;  
};  
```  
  
 l'attributo literal non viene più generato, pertanto non viene visualizzato come costante dal runtime CLR:  
  
```  
.field public static int32 modopt([Microsoft.VisualC]Microsoft.VisualC.IsConstModifier) STANDARD_CLIENT_PRX = int32(0x00000004)  
```  
  
 Per ottenere lo stesso attributo literal nei diversi linguaggi, la dichiarazione deve essere modificata nel nuovo membro dati `literal` supportato, come segue:  
  
```  
public ref class Constants {  
public:  
   literal int LOG_DEBUG = 4;  
};  
```  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [literal](../windows/literal-cpp-component-extensions.md)