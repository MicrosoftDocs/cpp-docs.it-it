---
title: '&lt;riepilogo&gt; (Visual C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <summary>
- summary
dev_langs:
- C++
helpviewer_keywords:
- <summary> C++ XML tag
- summary C++ XML tag
ms.assetid: cdeeefbb-1339-45d6-9002-10042a9a2726
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 48e4401967719313d9af7924d12cf68b870f4543
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltsummarygt-visual-c"></a>&lt;riepilogo&gt; (Visual C++)
Il tag \<summary> deve essere usato per descrivere un tipo o un membro del tipo. Utilizzare [ \<osservazioni >](../ide/remarks-visual-cpp.md) per aggiungere informazioni supplementari alla descrizione di un tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<summary>description</summary>  
```  
  
#### <a name="parameters"></a>Parametri  
 `description`  
 Un riepilogo dell'oggetto.  
  
## <a name="remarks"></a>Note  
 Il testo per il \<riepilogo > tag è l'unica fonte di informazioni sul tipo in IntelliSense e viene visualizzato anche nella [Visualizzatore oggetti](http://msdn.microsoft.com/en-us/f89acfc5-1152-413d-9f56-3dc16e3f0470) e nel Report Web commenti del codice.  
  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)