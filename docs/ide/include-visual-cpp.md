---
title: "&lt;include&gt; (Visual C++) | Microsoft Docs"
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
  - "include"
  - "<include>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<include> C++ (tag XML)"
  - "include C++ (tag XML)"
ms.assetid: 392a3e61-0371-4617-8362-446650876ce3
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;include&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<include\> consente di fare riferimento ai commenti in un altro file che descrivono i tipi e i membri del codice sorgente,  eliminando la necessità di inserire i commenti relativi alla documentazione direttamente nel file del codice sorgente.  Ad esempio, è possibile utilizzare \<include\> per includere commenti standard “boilerplate„ utilizzate in tutto il team o azienda.  
  
## Sintassi  
  
```  
<include file='filename' path='tagpath' />  
```  
  
#### Parametri  
 `filename`  
 Nome del file che contiene la documentazione.  È possibile qualificare il nome del file tramite un percorso.  Racchiuderlo tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `filename`.  
  
 `tagpath`  
 Un'espressione XPath valida che seleziona desiderato nodo\- impostato contenuto nel file.  
  
 `name`  
 Identificatore del nome contenuto nel tag che precede i commenti. `name` ha sempre un `id`.  
  
 `id`  
 ID del tag che precede i commenti.  Racchiuderlo tra virgolette singole o doppie.  
  
## Note  
 Il tag \<include\> utilizza la sintassi XML XPath.  Consultare la documentazione di XPath per le modalità di utilizzo di \<include\>.  
  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
## Esempio  
 In questo esempio vengono presi in considerazione più file.  Il primo file, che utilizza \<include\>, contiene i commenti della documentazione:  
  
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
  
 Nel secondo file, xml\_include\_tag.doc, sono contenuti i seguenti commenti relativi alla documentazione:  
  
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
  
## Output di programma  
  
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
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)