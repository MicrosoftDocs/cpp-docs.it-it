---
title: "Cannot copy multifile assembly &#39;assembly&#39; to directory &#39;directory&#39;. &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannotcopyscatterassembly"
ms.assetid: 939519c7-741d-4e05-8b63-71e39fb426ad
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Cannot copy multifile assembly &#39;assembly&#39; to directory &#39;directory&#39;. &lt;reason&gt;
Gli assembly su più file vengono copiati in una sottodirectory della directory del progetto da cui verranno eseguiti.  Ad esempio, se il percorso di output è c:\\project1\\bin ed esiste un assembly \(la cui proprietà `CopyLocal` è impostata su `true`\), denominato Test e contenente i file a.dll e b.dll, al termine del completamento della copia, sarà generata la seguente struttura di file:  
  
```  
c:\project1\bin\Test  
   c:\project1\bin\Test\Test.dll   (main assembly)  
   c:\project1\bin\Test\a.dll       (file a.dll)  
   c:\project1\bin\Test\b.dll       (file b.dll)  
```  
  
 Questo messaggio di errore viene visualizzato dal sistema del progetto nel caso in cui non sia stato possibile creare su disco la directory c:\\project1\\bin\\Test  
  
 e indica l'insufficienza dello spazio su disco o il raggiungimento del limite MAX\_PATH per la lunghezza dei percorsi.  
  
 **Per correggere l'errore**  
  
-   Controllare lo spazio disponibile su disco.  
  
-   Spostare il progetto in una cartella il cui percorso sia meno lungo di quello della cartella corrente del progetto.  
  
-   Modificare la directory di output in una cartella con una lunghezza di percorso assoluto minore \(applicabile solo ai progetti client\).  
  
## Vedere anche  
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)   
 [Procedura: aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/it-it/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)