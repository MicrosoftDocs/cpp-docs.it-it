---
title: "Procedura: aggiungere DLL native alla Global Assembly Cache | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], nativi"
  - "GAC (Global Assembly Cache), caricamento di DLL native"
  - "DLL native [C++]"
ms.assetid: 25e8d78a-b197-4269-b4e9-237a544ab3c8
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: aggiungere DLL native alla Global Assembly Cache
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile inserire una DLL nativa \(non COM\) nella Global Assembly Cache.  
  
## Esempio  
 **\/ASSEMBLYLINKRESOURCE** consente di incorporare una DLL nativa in un assembly.  
  
 Per ulteriori informazioni, vedere [\/ASSEMBLYLINKRESOURCE \(Collegamento a risorse .NET Framework\)](../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md).  
  
```  
/ASSEMBLYLINKRESOURCE:MyComponent.dll  
```  
  
## Vedere anche  
 [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md)