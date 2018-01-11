---
title: '&lt;eccezione&gt; (Visual C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- exception
- <exception>
dev_langs: C++
helpviewer_keywords:
- <exception> C++ XML tag
- exception C++ XML tag
ms.assetid: 24451e79-9b89-4b77-98fb-702c6516b818
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c07dde806938b38dd55a3258b3724b0937d5601d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltexceptiongt-visual-c"></a>&lt;eccezione&gt; (Visual C++)
Il tag \<exception> consente di specificare le eccezioni che possono essere generate. Questo tag viene applicato a una definizione di metodo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<exception cref="member">description</exception>  
```  
  
#### <a name="parameters"></a>Parametri  
 `member`  
 Riferimento ad un'eccezione disponibile dall'ambiente di compilazione corrente. Utilizzando le regole di ricerca di nome, il compilatore controlla che l'eccezione specificata esista e converte `member` nome canonico dell'elemento XML di output.  Il compilatore genera un avviso se non trova `member`.  
  
 Racchiudere il nome tra virgolette singole o doppie.  
  
 Per informazioni su come creare un riferimento cref a un tipo generico, vedere [\<see>](../ide/see-visual-cpp.md).  
  
 `description`  
 Una descrizione.  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
 Il compilatore di Visual C++ tenta di risolvere i riferimenti cref in un passaggio tramite i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. Vedere [ \<seealso >](../ide/seealso-visual-cpp.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
  
```  
// xml_exception_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_exception_tag.dll  
using namespace System;  
  
/// Text for class EClass.  
public ref class EClass : public Exception {  
   // class definition ...  
};  
  
/// <exception cref="System.Exception">Thrown when... .</exception>  
public ref class TestClass {  
   void Test() {  
      try {  
      }  
      catch(EClass^) {  
      }  
   }  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)