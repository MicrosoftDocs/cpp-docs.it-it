---
title: "Avviso del compilatore (livello 4) C4681 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4681"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4681"
ms.assetid: a4e6d85f-3e21-4b45-a551-c23d3c554d3f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4681
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class': la coclasse non specifica un'interfaccia predefinita che sia origine di eventi  
  
 Un'interfaccia [di origine](../../windows/source-cpp.md) non è stata specificata per una classe.  
  
 L'esempio seguente genera l'errore C4681:  
  
```  
// C4681.cpp // compile with: /W4 /c #define _ATL_ATTRIBUTES 1 #include <atlbase.h> #include <atlcom.h> [module(name="test")]; [dual, uuid("00000000-0000-0000-0000-000000000000")] __interface IEvent { [id(3)] HRESULT myEvent(); }; [object, uuid("00000000-0000-0000-0000-000000000001")] __interface ISource { HRESULT Fire(); }; [ coclass, source(IEvent), default(ISource), // Uncomment the following line to resolve. // default(IEvent), uuid("00000000-0000-0000-0000-000000000002") ] struct CSource : ISource {   // C4681 HRESULT Fire() { return 0; } };  
```