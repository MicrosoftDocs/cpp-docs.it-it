---
title: "Errore del compilatore C3463 | Microsoft Docs"
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
  - "C3463"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3463"
ms.assetid: 153efcc0-085c-4615-84ea-d22942618bdf
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3463
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': tipo non consentito nell'attributo 'implements'  
  
 Un tipo non valido è stato passato all'attributo [implements](../../windows/implements-cpp.md). Ad esempio, è possibile passare un'interfaccia a `implements`, ma non è possibile passare un puntatore a un'interfaccia.  
  
## Esempio  
 L'esempio seguente genera l'errore C3463.  
  
```  
// C3463.cpp // compile with: /c #include <windows.h> [object, uuid("00000000-0000-0000-0000-000000000001")] __interface X {}; typedef X* PX; [ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=PX) ]   // C3463 // try the following line instead // [ coclass, uuid("00000000-0000-0000-0000-000000000002"), implements(interfaces=X) ] class CMyClass : public X {};  
```