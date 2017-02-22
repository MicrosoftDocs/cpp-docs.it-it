---
title: "GetRuntimeErrorDesc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetRuntimeErrorDesc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ConversionError (metodo)"
  - "GetRuntimeErrorDesc (metodo)"
  - "RangeError (metodo)"
  - "ReferenceError (metodo)"
  - "RegExpError (metodo)"
  - "SyntaxError (metodo)"
  - "TypeError (metodo)"
  - "URIError (metodo)"
ms.assetid: d56fdd2e-6ad0-4c49-9e98-bcf0105e1b12
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# GetRuntimeErrorDesc
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di visualizzare una descrizione del tipo di eccezione.  
  
## Sintassi  
  
```  
  
      function GetRuntimeErrorDesc(   
   strRuntimeErrorName    
);  
```  
  
#### Parametri  
 *strRuntimeErrorName*  
 Nome del tipo di eccezione che si è verificato.  
  
## Valore restituito  
 Una descrizione del tipo di eccezione.  
  
## Note  
 Consente di visualizzare una descrizione del tipo di eccezione.  Può trattarsi di uno dei seguenti tipi:  
  
|Tipi di eccezione|Descrizione|  
|-----------------------|-----------------|  
|ConversionError|Si verifica ogni volta che si tenta di convertire un oggetto in un formato in cui non può essere convertito.|  
|RangeError|Si verifica quando una funzione viene fornita con un argomento che supera l'intervallo consentito.  L'errore si verifica ad esempio quando si tenta di costruire un oggetto `Array` la cui lunghezza non è espressa da un numero intero positivo valido.|  
|ReferenceError|Si verifica quando viene rilevato un riferimento non valido,  Si verifica, ad esempio, se un riferimento previsto è null.|  
|RegExpError|Si verifica nel caso di un errore di compilazione con un'espressione regolare.  Dopo la compilazione dell'espressione regolare, non è più possibile che l'errore si verifichi.  Si verifica ad esempio quando un'espressione regolare viene dichiarata con un criterio la cui sintassi non è corretta oppure contiene flag diversi da *i*, *g* o *m*, oppure contiene più volte lo stesso flag.|  
|SyntaxError|Si verifica quando durante l'analisi del testo di origine viene rilevato un errore di sintassi.  Si verifica, ad esempio, se la funzione `eval` viene richiamata con un argomento che non rappresenta un testo di programma valido.|  
|TypeError|Si verifica ogni volta che il tipo effettivo di un operando non corrisponde al tipo previsto.  L'errore si verifica ad esempio quando una chiamata di funzione viene effettuata su un elemento che non è un oggetto o non supporta la chiamata.|  
|URIError|Si verifica quando viene rilevato un URI \(Uniform Resource Indicator\) non valido.  Si verifica, ad esempio, quando un carattere non valido viene trovato in una stringa da codificare o decodificare.|  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)