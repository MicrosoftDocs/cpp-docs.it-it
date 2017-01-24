---
title: "Errore del compilatore C3373 | Microsoft Docs"
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
  - "C3373"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3373"
ms.assetid: 6e7586c3-1a15-4773-ad20-f90090a400dc
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3373
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'attributo 'attribute' non accetta argomenti tranne che su una coclasse  
  
 Alcuni attributi possono essere applicati a più costrutti C\+\+, ma è possibile che gli argomenti dell'attributo siano consentiti solo su alcuni costrutti.  
  
 L'esempio seguente genera l'errore C3373:  
  
```  
// C3373.cpp #include <windows.h> [module(name="MyModule")]; [ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ] __interface IMyIface { // arguments to source and restricted are not allowed when // these attributes are applied to an interface [source(IMyIface)] HRESULT f1(); [restricted(IMyIface)] HRESULT f2(); // C3373 }; [ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f) ] class CMyClass : public IMyIface { }; int main() { }  
```