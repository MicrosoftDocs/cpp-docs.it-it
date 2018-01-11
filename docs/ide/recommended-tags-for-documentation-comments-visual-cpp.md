---
title: Tag consigliati per i commenti relativi alla documentazione (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5c1b0e762ec2167a988e8e18f3dce932214716c9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="recommended-tags-for-documentation-comments-visual-c"></a>Tag consigliati per i commenti relativi alla documentazione (Visual C++)
Il compilatore Visual C++ per elaborare i commenti di documentazione nel codice e crea un file xdc per ciascun modulo e xdcmake.exe elaborerà i file xdc in un file XML. L'elaborazione del file con estensione XML per creare la documentazione è un dettaglio che deve essere implementata nel sito.  
  
 Tag vengono elaborati in costrutti, ad esempio tipi e membri dei tipi.  
  
 Tag devono precedere tipi o membri.  
  
> [!NOTE]
>  I commenti della documentazione non è possibile applicare uno spazio dei nomi o scegliere fuori definizione non inline per la proprietà ed eventi; i commenti della documentazione devono nelle dichiarazioni di classe.  
  
 Il compilatore elabora tutti i tag validi per XML. I seguenti tag forniscono funzionalità comunemente usate nella documentazione dell'utente:  
  
||||  
|-|-|-|  
|[\<c>](../ide/c-visual-cpp.md)|[\<code>](../ide/code-visual-cpp.md)|[\<example>](../ide/example-visual-cpp.md)|  
|[\<eccezione >](../ide/exception-visual-cpp.md)1|[\<includere >](../ide/include-visual-cpp.md)1|[\<list>](../ide/list-visual-cpp.md)|  
|[\<para>](../ide/para-visual-cpp.md)|[\<param >](../ide/param-visual-cpp.md)1|[\<paramref >](../ide/paramref-visual-cpp.md)1|  
|[\<autorizzazione >](../ide/permission-visual-cpp.md)1|[\<remarks>](../ide/remarks-visual-cpp.md)|[\<returns>](../ide/returns-visual-cpp.md)|  
|[\<vedere >](../ide/see-visual-cpp.md)1|[\<seealso >](../ide/seealso-visual-cpp.md)1|[\<summary>](../ide/summary-visual-cpp.md)|  
|[\<value>](../ide/value-visual-cpp.md)|||  
  
 1. Compilatore verifica la sintassi.  
  
 Nella versione corrente, il compilatore Visual C++ non supporta `<paramref>`, un tag che è supportato da altri compilatori di Visual Studio. Visual C++ supportino `<paramref>` in una versione futura.  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)