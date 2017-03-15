---
title: "&lt;returns&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "returns"
  - "<returns>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<returns> C++ (tag XML)"
  - "returns C++ (tag XML)"
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;returns&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<returns\> viene utilizzato nel commento di una dichiarazione di metodo per descrivere il valore restituito.  
  
## Sintassi  
  
```  
<returns>description</returns>  
```  
  
#### Parametri  
 `description`  
 Descrizione del valore restituito.  
  
## Note  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
## Esempio  
  
```  
// xml_returns_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_returns_tag.dll  
  
/// Text for class MyClass.  
public ref class MyClass {  
public:  
   /// <returns>Returns zero.</returns>  
   int GetZero() { return 0; }  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)