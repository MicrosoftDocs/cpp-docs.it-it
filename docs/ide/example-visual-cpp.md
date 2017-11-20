---
title: '&lt;esempio&gt; (Visual C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <example>
- example
dev_langs: C++
helpviewer_keywords:
- <example> C++ XML tag
- example C++ XML tag
ms.assetid: c821aaa7-7ea7-4bee-9922-6705ad57f877
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 5977460725386c4cad6a334bffbde8bd3609ee29
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ltexamplegt-visual-c"></a>&lt;esempio&gt; (Visual C++)
Il tag \<example> consente di specificare un esempio di come usare un metodo o un altro membro della libreria. In genere, ciò comporta anche la ricorso il [ \<codice >](../ide/code-visual-cpp.md) tag.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<example>description</example>  
```  
  
#### <a name="parameters"></a>Parametri  
 `description`  
 Descrizione dell'esempio di codice.  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
## <a name="example"></a>Esempio  
  
```  
// xml_example_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_example_tag.dll  
  
/// Text for class MyClass.  
public ref class MyClass {  
public:  
   /// <summary>  
   /// GetZero method  
   /// </summary>  
   /// <example> This sample shows how to call the GetZero method.  
   /// <code>  
   /// int main()   
   /// {  
   ///    return GetZero();  
   /// }  
   /// </code>  
   /// </example>  
   static int GetZero() {  
      return 0;  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)