---
title: '&lt;example&gt; (Visual C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- <example>
- example
dev_langs:
- C++
helpviewer_keywords:
- <example> C++ XML tag
- example C++ XML tag
ms.assetid: c821aaa7-7ea7-4bee-9922-6705ad57f877
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cefd38a18447d0e8c9121d61c0ba963e9da39187
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33321431"
---
# <a name="ltexamplegt-visual-c"></a>&lt;example&gt; (Visual C++)
Il tag \<example> consente di specificare un esempio di come usare un metodo o un altro membro della libreria. Ciò comporta in genera anche il ricorso al tag [\<code>](../ide/code-visual-cpp.md).  
  
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