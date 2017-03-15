---
title: "Errore del compilatore C3247 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3247"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3247"
ms.assetid: f9a2bbb5-3fce-40bf-9fd3-835a5f164dbb
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3247
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class1': una coclasse non può ereditare da un'altra coclasse 'class2'  
  
 Una classe contrassegnata con l'attributo [coclass](../../windows/coclass.md) non può derivare da un'altra classe contrassegnata con l'attributo `coclass`.  
  
 L'esempio seguente genera l'errore C3247:  
  
```  
// C3247.cpp [module(name="MyLib")]; [coclass] class a { }; [coclass] class b : public a {   // C3247 }; int main() { }  
```