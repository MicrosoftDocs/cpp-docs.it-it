---
title: "Tag consigliati per i commenti relativi alla documentazione (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tag consigliati per i commenti relativi alla documentazione (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore di Visual C\+\+ elabora i commenti della documentazione nel codice e crea un file xdc per ogni modulo e xdcmake.exe elabora i file xdc a un file xml.  Elaborare il file xml per creare la documentazione è un dettaglio che deve essere distribuita al sito.  
  
 I tag vengono elaborati i costrutti come tipi e membri di tipo.  
  
 I tag devono trovarsi immediatamente prima i tipi o membri.  
  
> [!NOTE]
>  I commenti della documentazione non possono essere applicati a uno spazio dei nomi o sulla definizione della riga per le proprietà e gli eventi; i commenti della documentazione devono nelle dichiarazioni di classe in.  
  
 Il compilatore elabora tutti i tag validi per XML.  I seguenti tag forniscono la funzionalità più comuni nella documentazione per l'utente:  
  
||||  
|-|-|-|  
|[\<c\>](../ide/c-visual-cpp.md)|[\<code\>](../ide/code-visual-cpp.md)|[\<example\>](../ide/example-visual-cpp.md)|  
|[\<exception\>](../ide/exception-visual-cpp.md)1|[\<include\>](../ide/include-visual-cpp.md)1|[\<list\>](../ide/list-visual-cpp.md)|  
|[\<para\>](../ide/para-visual-cpp.md)|[\<param\>](../ide/param-visual-cpp.md)1|[\<paramref\>](../ide/paramref-visual-cpp.md)1|  
|[\<permission\>](../ide/permission-visual-cpp.md)1|[\<remarks\>](../ide/remarks-visual-cpp.md)|[\<returns\>](../ide/returns-visual-cpp.md)|  
|[\<see\>](../ide/see-visual-cpp.md)1|[\<seealso\>](../ide/seealso-visual-cpp.md)1|[\<summary\>](../ide/summary-visual-cpp.md)|  
|[\<value\>](../ide/value-visual-cpp.md)|||  
  
 1.  Il compilatore verifica la sintassi.  
  
 Nella versione corrente, il compilatore di Visual C\+\+ non supporta `<paramref>`, un tag supportato da altri compilatori di Visual Studio.  Visual C\+\+ può supportare `<paramref>` in una versione futura.  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)