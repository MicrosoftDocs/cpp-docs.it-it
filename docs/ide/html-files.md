---
title: "File HTML | Microsoft Docs"
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
  - "creazioni guidate personalizzate, HTML (file)"
  - "creazioni guidate personalizzate, interfaccia utente"
  - "file [C++], creati tramite una creazione guidata personalizzata"
  - "HTML (pagine), interfaccia utente per procedure guidate personalizzate"
  - "interfaccia utente per procedure guidate"
  - "procedure guidate [C++], interfaccia utente per procedure guidate personalizzate"
ms.assetid: 3b6ed080-6560-418b-b908-d84d71bdf145
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File HTML
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una procedura guidata può contenere un'interfaccia utente, ovvero un'interfaccia HTML.  Oltre a Default.htm, una procedura guidata può contenere un numero indefinito di file HTM, che è possibile indicare nella casella **Numero di pagine** nella [Creazione guidata personalizzata](../ide/custom-wizard.md).  Ogni file HTM rappresenta una pagina HTML della procedura guidata e la pagina HTML è accessibile attraverso i pulsanti `Next` e **Indietro**, i tasti di tabulazione e qualsiasi altro formato specificato nella progettazione della proceduta guidata.  
  
 Il codice HTML contiene quanto segue:  
  
-   Il tag SYMBOL, che identifica l'impostazione predefinita per le opzioni definibili dall'utente.  I simboli vengono scritti nella tabella dei simboli quando l'utente fa clic su **Fine**, ad esempio:  
  
```  
<SYMBOL NAME='HEADER_FILE' VALUE='MyHeader.h' TYPE=text></SYMBOL>  
```  
  
 Nell'interfaccia utente della procedura guidata la casella di testo identificata nella tabella dei simboli come "HEADER\_FILE" contiene il testo predefinito "MyHeader.h".  È possibile modificare questo valore nell'interfaccia utente della procedura guidata e il valore ottenuto viene scritto nella tabella dei simboli del progetto quando si fa clic su **Fine**, ad esempio:  
  
```  
<SYMBOL NAME='CHECKBOX1' TYPE=checkbox VALUE=false></SYMBOL>  
```  
  
 Nell'interfaccia utente della procedura guidata, la casella di controllo identificata nella tabella dei simboli come "CHECKBOX1" è deselezionata per impostazione predefinita.  È possibile selezionare questa casella nell'interfaccia utente HTML e il valore ottenuto verrà scritto nella tabella dei simboli del progetto quando si sceglie **Fine**.  
  
 In ciascun file HTM vengono registrate le selezioni effettuate dell'utente nella tabella dei simboli.  
  
-   Un'inclusione per [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md), che contiene utili funzioni JScript di utilizzo frequente, e Default.js.  
  
-   Riferimenti alle immagini del progetto da visualizzare nel codice HTML.  
  
-   Testo e formattazione HTML che consentono di personalizzare l'aspetto dell'interfaccia utente della procedura guidata  
  
-   Funzioni Jscript che accedono al Modello a oggetti della procedura guidata di Visual C\+\+ per consentire un funzionamento personalizzato dall'interno della procedura guidata.  Queste funzioni sono specificate nella sezione della pagina HTML con l'intestazione \<SCRIPT LANGUAGE\='JSCRIPT'\>, come illustrato nell'esempio che segue.  
  
    > [!NOTE]
    >  Per accedere al modello procedura guidata e al modello a oggetti dell'ambiente da HTML, anteporre "window.external" all'elemento del modello a oggetti.  
  
    ```  
    function InitDocument(document)  
    {  
       setDirection();  
  
       if (window.external.FindSymbol('DOCUMENT_FIRST_LOAD'))  
       {  
          // This function sets the default symbols based   
          // on the values specified in the SYMBOL tags above  
          //  
          window.external.SetDefaults(document);  
       }  
  
       // Load the document and initialize the controls   
       // with the appropriate symbol values  
       //  
       window.external.Load(document);  
    }  
    ```  
  
 Di seguito è riportato un esempio di creazione guidata di applicazione console:  
  
```  
<SYMBOL NAME='WIZARD_DIALOG_TITLE' TYPE=text VALUE='Console Application Wizard'></SYMBOL>  
  
<SYMBOL NAME='EMPTY_PROJECT' TYPE=checkbox VALUE=false></SYMBOL>  
<SYMBOL NAME='SUPPORT_ATL' TYPE=checkbox VALUE=false></SYMBOL>  
<SYMBOL NAME='SUPPORT_MFC' TYPE=checkbox VALUE=false></SYMBOL>  
```  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)