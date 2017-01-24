---
title: "com::ptr | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ptr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "com::ptr"
ms.assetid: ee302e3c-8fed-4875-a372-2e55003718d3
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# com::ptr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Wrapper per un oggetto COM che può essere utilizzata come membro di una classe CLR.  Il wrapper consente anche di automatizzare la gestione della durata dell'oggetto COM, vengono i riferimenti di proprietà nell'oggetto quando viene chiamato il distruttore.  Analogo a [CComPtr Class](../atl/reference/ccomptr-class.md).  
  
## Sintassi  
  
```  
#include <msclr\com\ptr.h>  
```  
  
## Note  
 [com::ptr Class](../dotnet/com-ptr-class.md) è definito nel file \<msclr\\com\\ptr.h\>.  
  
## Vedere anche  
 [Libreria di supporto per C\+\+](../dotnet/cpp-support-library.md)