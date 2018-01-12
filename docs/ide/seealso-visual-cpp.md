---
title: '&lt;seealso&gt; (Visual C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <seealso>
- seealso
dev_langs: C++
helpviewer_keywords:
- seealso C++ XML tag
- <seealso> C++ XML tag
ms.assetid: cb33d100-9c50-4485-8d0c-573429eff155
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2e1d50162989e5148cd0755afb48f4413ce51269
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltseealsogt-visual-c"></a>&lt;seealso&gt; (Visual C++)
Il tag \<seealso> consente di specificare il testo da visualizzare in una sezione Vedere anche. Usare [\<see>](../ide/see-visual-cpp.md) per specificare un collegamento nel testo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<seealso cref="member"/>  
```  
  
#### <a name="parameters"></a>Parametri  
 `member`  
 Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente.  Racchiudere il nome tra virgolette singole o doppie.  
  
 Il compilatore controlla che l'elemento di codice specificata esista e che risolve `member` al nome dell'elemento XML di output.  Il compilatore genera un avviso se non trova `member`.  
  
 Per informazioni su come creare un riferimento cref a un tipo generico, vedere [\<see>](../ide/see-visual-cpp.md).  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
 Per un esempio d'uso di \<seealso>, vedere [\<summary>](../ide/summary-visual-cpp.md).  
  
 Il compilatore di Visual C++ tenta di risolvere i riferimenti cref in un passaggio tramite i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, un cref fa riferimento un simbolo non risolto. Il commento XML per cref per B::Test sarà `<seealso cref="!:B::Test" />`, mentre il riferimento a A::Test è ben formato `<seealso cref="M:A.Test" />`.  
  
```  
// xml_seealso_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_seealso_tag.dll  
  
/// Text for class A.  
public ref struct A {  
   /// <summary><seealso cref="A::Test"/>  
   /// <seealso cref="B::Test"/>  
   /// </summary>  
   void MyMethod(int Int1) {}  
  
   /// text  
   void Test() {}  
};  
  
/// Text for class B.  
public ref struct B {  
   void Test() {}  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)