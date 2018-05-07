---
title: '&lt;vedere&gt; (Visual C++) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- <see>
- see
dev_langs:
- C++
helpviewer_keywords:
- <see> C++ XML tag
- see C++ XML tag
ms.assetid: 20ef66f4-b278-45cf-8613-63919edf5720
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a03dd56320b948d47c765f253bf3e6b706ed2b56
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ltseegt-visual-c"></a>&lt;vedere&gt; (Visual C++)
Con il tag \<see> è possibile specificare un collegamento nel testo. Utilizzare [ \<seealso >](../ide/seealso-visual-cpp.md) per indicare il testo che si desidera visualizzare in una sezione Vedere anche.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<see cref="member"/>  
```  
  
#### <a name="parameters"></a>Parametri  
 `member`  
 Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente.  Racchiudere il nome tra virgolette singole o doppie.  
  
 Il compilatore controlla che l'elemento di codice specificata esista e che risolve `member` al nome dell'elemento XML di output.  Il compilatore genera un avviso se non trova `member`.  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
 Vedere [ \<riepilogo >](../ide/summary-visual-cpp.md) per un esempio di utilizzo \<vedere >.  
  
 Il compilatore di Visual C++ tenta di risolvere i riferimenti cref in un passaggio tramite i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. Vedere [ \<seealso >](../ide/seealso-visual-cpp.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come visualizzare i riferimenti cref in un tipo generico, in modo che il compilatore risolverà il riferimento.  
  
```  
// xml_see_cref_example.cpp  
// compile with: /LD /clr /doc  
// the following cref shows how to specify the reference, such that,  
// the compiler will resolve the reference  
/// <see cref="C{T}">  
/// </see>  
ref class A {};  
  
// the following cref shows another way to specify the reference,   
// such that, the compiler will resolve the reference  
/// <see cref="C < T >"/>  
  
// the following cref shows how to hard-code the reference  
/// <see cref="T:C`1">  
/// </see>  
ref class B {};  
  
/// <see cref="A">  
/// </see>  
/// <typeparam name="T"></typeparam>  
generic<class T>  
ref class C {};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)