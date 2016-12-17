---
title: "Errore a livello di progetto nell&#39;importazione &#39;&lt;nomeelementoqualificato&gt;&#39; in &#39;&lt;nomecontenitorequalificato&gt;&#39;: &lt;messaggioerrore&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BC30797"
  - "vbc30797"
helpviewer_keywords: 
  - "BC30797"
ms.assetid: 529f354f-f255-4adc-ab21-bd1796e58d69
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Errore a livello di progetto nell&#39;importazione &#39;&lt;nomeelementoqualificato&gt;&#39; in &#39;&lt;nomecontenitorequalificato&gt;&#39;: &lt;messaggioerrore&gt;
Un'istruzione accede a un elemento di programmazione definito in un altro assembly, ma non esiste alcun riferimento di progetto a quell'assembly.  
  
 Il codice potrebbe accedere, ad esempio, a un'enumerazione denominata `desiredEnumeration` usando la stringa di qualificazione `otherNamespace.otherClass.desiredEnumeration`. Se il compilatore non trova l'oggetto `otherNamespace.otherClass` tra i riferimenti di progetto, genera questo errore.  
  
 **ID errore:** BC30797  
  
### Per correggere l'errore  
  
1.  Verificare che ogni elemento della stringa di qualificazione dell'elemento di programmazione sia scritto correttamente.  
  
2.  Verificare che nel progetto siano presenti riferimenti all'assembly in cui è definito l'elemento di programmazione desiderato.  
  
3.  Consultare il messaggio di errore e intraprendere l'azione appropriata.  
  
## Vedere anche  
 [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [NIB Procedura: Modificare le proprietà e le impostazioni di configurazione dei progetti](http://msdn.microsoft.com/it-it/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)