---
title: '&lt;autorizzazione&gt; (Visual C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- permission
- <permission>
dev_langs: C++
helpviewer_keywords:
- <permission> C++ XML tag
- permission C++ XML tag
ms.assetid: 537ee2bc-95bd-48e4-9ce6-3420c3da87f4
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 02a379b9856d2e8c7a764b3c8be49652a3f3d678
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ltpermissiongt-visual-c"></a>&lt;autorizzazione&gt; (Visual C++)
Il tag \<permission> consente di documentare l'accesso a un membro. <xref:System.Security.PermissionSet>Consente di specificare l'accesso a un membro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<permission cref="member">description</permission>  
```  
  
#### <a name="parameters"></a>Parametri  
 `member`  
 Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente. Il compilatore verifica l'esistenza dell'elemento di codice specificato e converte `member` nel nome canonico dell'elemento nel file XML di output.  Racchiudere il nome tra virgolette singole o doppie.  
  
 Il compilatore genera un avviso se non trova `member`.  
  
 Per informazioni su come creare un riferimento cref a un tipo generico, vedere [\<see>](../ide/see-visual-cpp.md).  
  
 `description`  
 Descrizione dell'accesso al membro.  
  
## <a name="remarks"></a>Note  
 Compilare con [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare i commenti relativi alla documentazione in un file.  
  
 Il compilatore di Visual C++ tenta di risolvere i riferimenti cref in un passaggio tramite i commenti della documentazione.  Pertanto, se si utilizzano le regole di ricerca di C++, un simbolo non viene trovato dal compilatore e il riferimento verrà contrassegnato come non risolto. Vedere [ \<seealso >](../ide/seealso-visual-cpp.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
  
```  
// xml_permission_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_permission_tag.dll  
using namespace System;  
/// Text for class TestClass.  
public ref class TestClass {  
   /// <permission cref="System::Security::PermissionSet">Everyone can access this method.</permission>  
   void Test() {}  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)