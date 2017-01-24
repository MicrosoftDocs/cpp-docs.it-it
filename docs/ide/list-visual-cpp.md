---
title: "&lt;list&gt; (Visual C++) | Microsoft Docs"
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
  - "list"
  - "<list>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<list> C++ (tag XML)"
  - "list C++ (tag XML)"
ms.assetid: c792a10b-0451-422c-9aa0-604116e69d64
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;list&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il blocco \<listheader\> viene utilizzato per definire la riga di intestazione di una tabella o di un elenco di definizioni.  Per definire una tabella, è sufficiente specificare una voce per il termine nell'intestazione.  
  
## Sintassi  
  
```  
<list type="bullet" | "number" | "table">  
   <listheader>  
      <term>term</term>  
      <description>description</description>  
   </listheader>  
   <item>  
      <term>term</term>  
      <description>description</description>  
   </item>  
</list>  
```  
  
#### Parametri  
 `term`  
 Termine da definire, che verrà definito in `description`.  
  
 `description`  
 Elemento di un elenco puntato o numerato oppure la definizione di un `term`.  
  
## Note  
 Ciascun elemento dell'elenco viene specificato tramite un blocco \<item\>.  Quando si crea un elenco di definizioni, è necessario specificare sia `term` che `description`.  Per le tabelle e gli elenchi puntati o numerati, tuttavia, è sufficiente fornire una voce per `description`.  
  
 Gli elenchi e le tabelle possono contenere un numero qualsiasi di blocchi \<item\>.  
  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
## Esempio  
  
```  
// xml_list_tag.cpp  
// compile with: /doc /LD  
// post-build command: xdcmake xml_list_tag.dll  
/// <remarks>Here is an example of a bulleted list:  
/// <list type="bullet">  
/// <item>  
/// <description>Item 1.</description>  
/// </item>  
/// <item>  
/// <description>Item 2.</description>  
/// </item>  
/// </list>  
/// </remarks>  
class MyClass {};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)