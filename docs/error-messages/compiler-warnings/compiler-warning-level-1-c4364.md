---
title: "Avviso del compilatore (livello 1) C4364 | Microsoft Docs"
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
  - "C4364"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4364"
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4364
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\#using per l'assembly 'file' trovato in precedenza in percorso\(numero\_riga\) senza l'attributo as\_friend; as\_friend non applicato  
  
 È stata ripetuta una direttiva `#using` per un determinato file di metadati, ma nella prima occorrenza il qualificatore `as_friend` non è stato utilizzato. Pertanto, il secondo qualificatore `as_friend` verrà ignorato.  
  
 Per ulteriori informazioni, vedere [Assembly Friend \(C\+\+\)](../../dotnet/friend-assemblies-cpp.md).  
  
## Esempio  
 Nell'esempio riportato di seguito viene creato un componente.  
  
```  
// C4364.cpp  
// compile with: /clr /LD  
ref class A {};  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4364:  
  
```  
// C4364_b.cpp  
// compile with: /clr /W1 /c  
#using " C4364.dll"  
#using " C4364.dll" as_friend   // C4364  
```