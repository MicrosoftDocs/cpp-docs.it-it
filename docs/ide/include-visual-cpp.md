---
title: '&lt;includere&gt; (Visual C++) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- include
- <include>
dev_langs:
- C++
helpviewer_keywords:
- include C++ XML tag
- <include> C++ XML tag
ms.assetid: 392a3e61-0371-4617-8362-446650876ce3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b4c1a75acb89d9510dd7f489e5d0d582611da8de
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ltincludegt-visual-c"></a>&lt;includere&gt; (Visual C++)
Il tag \<include> consente di fare riferimento ai commenti di un altro file per la descrizione dei tipi e dei membri del codice sorgente, eliminando la necessità di inserire i commenti relativi alla documentazione direttamente nel file del codice sorgente.  Ad esempio, è possibile utilizzare \<includono > può inserire commenti "standard" standard che vengono utilizzati in tutto il team o la società.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<include file='filename' path='tagpath' />  
```  
  
#### <a name="parameters"></a>Parametri  
 `filename`  
 Il nome del file contenente la documentazione. È possibile qualificare il nome del file con un percorso.  Racchiudere il nome tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `filename`.  
  
 `tagpath`  
 Un'espressione XPath valida che consente di selezionare il set di nodi desiderato contenuto nel file.  
  
 `name`  
 Identificatore del nome contenuto nel tag che precede i commenti. `name` ha sempre un `id`.  
  
 `id`  
 ID del tag che precede i commenti.  Racchiudere il nome tra virgolette singole o doppie.  
  
## <a name="remarks"></a>Note  
 Il tag \<include> usa la sintassi XML XPath. Fare riferimento alla documentazione di XPath per individuare i modi personalizzare mediante \<includono >.  
  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
## <a name="example"></a>Esempio  
 In questo esempio vengono presi in considerazione più file. Il primo file, che utilizza \<includono >, contiene i commenti della documentazione seguente:  
  
```  
// xml_include_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_include_tag.dll  
  
/// <include file='xml_include_tag.doc' path='MyDocs/MyMembers[@name="test"]/*' />  
public ref class Test {  
   void TestMethod() {  
   }  
};  
  
/// <include file='xml_include_tag.doc' path='MyDocs/MyMembers[@name="test2"]/*' />  
public ref class Test2 {  
   void Test() {  
   }  
};  
```  
  
 Il secondo file, xml_include_tag.doc, contiene i commenti alla documentazione seguenti:  
  
```  
<MyDocs>  
  
<MyMembers name="test">  
<summary>  
The summary for this type.  
</summary>  
</MyMembers>  
  
<MyMembers name="test2">  
<summary>  
The summary for this other type.  
</summary>  
</MyMembers>  
  
</MyDocs>  
```  
  
## <a name="program-output"></a>Output di programma  
  
```  
<?xml version="1.0"?>  
<doc>  
    <assembly>  
        <name>t2</name>  
    </assembly>  
    <members>  
        <member name="T:Test">  
            <summary>  
The summary for this type.  
</summary>  
        </member>  
        <member name="T:Test2">  
            <summary>  
The summary for this other type.  
</summary>  
        </member>  
    </members>  
</doc>  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)