---
title: "Errore del compilatore C3340 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3340"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3340"
ms.assetid: 23b12298-b92a-4717-8380-f165c998cb8a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3340
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interface': l'interfaccia non può essere sia 'restricted' che 'default' nella coclasse 'class'  
  
 Gli attributi [restricted](../../windows/restricted.md) e [default](../../windows/default-cpp.md) si escludono reciprocamente.  
  
 L'esempio seguente genera l'errore C3340:  
  
```  
// C3340.cpp #include <windows.h> [module(name="MyModule")]; [ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ] __interface IMyIface { HRESULT f1(); }; [ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f), default(IMyIface), source(IMyIface),restricted(IMyIface) ] class CmyClass // C3340 { }; int main() { }  
```