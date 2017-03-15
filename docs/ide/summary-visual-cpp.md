---
title: "&lt;summary&gt; (Visual C++) | Microsoft Docs"
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
  - "<summary>"
  - "summary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<summary> C++ (tag XML)"
  - "summary C++ (tag XML)"
ms.assetid: cdeeefbb-1339-45d6-9002-10042a9a2726
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;summary&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<summary\> deve essere utilizzato per descrivere un tipo o un membro del tipo.  Utilizzare [\<remarks\>](../ide/remarks-visual-cpp.md) per aggiungere informazioni supplementari alla descrizione di un tipo.  
  
## Sintassi  
  
```  
<summary>description</summary>  
```  
  
#### Parametri  
 `description`  
 Riepilogo relativo all'oggetto.  
  
## Note  
 Il testo per il tag di \<summary\> è l'unica fonte di informazioni sul tipo in IntelliSense e visualizza in [Visualizzatore oggetti](http://msdn.microsoft.com/it-it/f89acfc5-1152-413d-9f56-3dc16e3f0470) e nel report Web sui commenti del codice.  
  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
## Esempio  
  
```  
// xml_summary_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_summary_tag.dll  
  
/// Text for class MyClass.  
public ref class MyClass {  
public:  
   /// <summary>MyMethod is a method in the MyClass class.  
   /// <para>Here's how you could make a second paragraph in a description. <see cref="System::Console::WriteLine"/> for information about output statements.</para>  
   /// <seealso cref="MyClass::MyMethod2"/>  
   /// </summary>  
   void MyMethod(int Int1) {}  
  
   /// text  
   void MyMethod2() {}  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)