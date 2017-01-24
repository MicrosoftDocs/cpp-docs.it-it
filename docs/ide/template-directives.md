---
title: "Direttive di modello | Microsoft Docs"
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
helpviewer_keywords: 
  - "[!else] (direttiva di template)"
  - "[!endif] (direttiva di template)"
  - "[!endloop] (direttiva di template)"
  - "[!if] (direttiva di template)"
  - "[!loop] (direttiva di template)"
  - "[!output] (direttiva di template)"
  - "creazioni guidate personalizzate, direttive dei template"
  - "direttive, direttive dei template"
  - "else (direttiva) [!else]"
  - "endif (direttiva) [!endif]"
  - "endloop (direttiva) [!endloop]"
  - "if (direttiva) [!if]"
  - "loop (direttiva) [!loop]"
  - "output (direttiva) [!output]"
  - "direttive dei template"
ms.assetid: b6204153-813a-423c-b044-e39c352cc5af
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Direttive di modello
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare le seguenti direttive di modello in un [file modello](../ide/template-files.md) e nel [file Templates.inf](../ide/templates-inf-file.md) per personalizzare la procedura guidata.  
  
|Direttiva|Descrizione|  
|---------------|-----------------|  
|\[\!  if \]|Inizia una struttura di controllo per verificare una condizione.|  
|\[\!  else \]|Parte della struttura di controllo \[\!  if \].  Verifica la presenza di un'altra condizione.|  
|\[\!  endif \]|Termina la definizione di una struttura di controllo \[\!  if \].|  
|\[\!  output \]|Utilizzabile nei due modi seguenti:<br /><br /> -   \[\!  output "string" \] fornisce la stringa.<br />-   \[\!  output SYMBOL\_STRING \] fornisce il valore del simbolo SYMBOL\_STRING.|  
|\[\!  loop \]|Utilizzabile nei due modi seguenti:<br /><br /> -   \[\!  loop \= 5 \]<br />-   \[\!  loop \= *NUMERO\_DI\_PAGINE* \] dove *NUMERO\_DI\_PAGINE* è un simbolo con un valore numerico.|  
|\[\!  endloop \]|Termina una struttura ciclica.|  
  
 Una parentesi quadra sinistra \(\[\) immediatamente seguita da un punto esclamativo \(\!\) indica l'inizio di una direttiva di modello.  La parentesi quadra di destra indica la fine di una direttiva di modello.  È richiesta la seguente sintassi:  
  
```  
[!directive params]  
```  
  
 È richiesto uno spazio o un carattere non identificatore solo tra *directive* e *params*.  
  
## Esempio  
  
```  
[!if SAMPLE_RADIO_OPTION1]  
You have checked the option 'Sample radio button option 1'  
[!else]  
You have checked the option 'Sample radio button option 2'  
[!endif]  
```  
  
 È possibile utilizzare i seguenti operatori con le direttive sopra riportate in un file modello.  
  
```  
+  
-     
=  
!=     
==     
||     
&&    
!  
```  
  
## Esempio  
  
```  
[!if SYMBOL_STRING != 0]  
```  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)