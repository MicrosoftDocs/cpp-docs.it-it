---
title: '&lt;valore&gt; (Visual C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- value
- <value>
dev_langs:
- C++
helpviewer_keywords:
- value C++ XML tag
- <value> C++ XML tag
ms.assetid: 0ba0a0d5-bcd7-4862-a169-83f2721ad80e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3d1621a8251bddb1d4c7d1bf3f00c4ccf3ea5242
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltvaluegt-visual-c"></a>&lt;valore&gt; (Visual C++)
Il \<valore > tag consente di descrivere una proprietà e metodi della proprietà. Si noti che quando si aggiunge una proprietà con una procedura guidata codice nell'ambiente di sviluppo integrato di Visual Studio, verrà aggiunto un [ \<riepilogo >](../ide/summary-visual-cpp.md) tag per la nuova proprietà. È quindi necessario aggiungere manualmente un tag \<value> per descrivere il valore rappresentato dalla proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<value>property-description</value>  
```  
  
#### <a name="parameters"></a>Parametri  
 `property-description`  
 Descrizione della proprietà.  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
## <a name="example"></a>Esempio  
  
```  
// xml_value_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_value_tag.dll  
using namespace System;  
/// Text for class Employee.  
public ref class Employee {  
private:  
   String ^ name;  
   /// <value>Name accesses the value of the name data member</value>  
public:  
   property String ^ Name {  
      String ^ get() {  
         return name;   
      }  
      void set(String ^ i) {  
         name = i;  
      }  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)