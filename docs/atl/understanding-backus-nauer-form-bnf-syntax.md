---
title: "Understanding Backus Nauer Form (BNF) Syntax | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Backus Nauer Form (BNF) syntax"
  - "BNF notation"
ms.assetid: 994bbef0-9077-4aa8-bdfe-b7e830af9acc
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Understanding Backus Nauer Form (BNF) Syntax
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli script utilizzati da ATL Registrar sono descritti in questo argomento tramite sintassi BNF, che utilizza la notazione visualizzata nella tabella seguente.  
  
|Convenzione\/simbolo|Significato|  
|--------------------------|-----------------|  
|`::=`|Equivalente|  
|`&#124;`|OR|  
|`X+`|Uno o più Oggetti. `X`.|  
|`[X]`|`X` è facoltativo.  i delimitatori facoltativi sono indicati da `[]`.|  
|Il testo **bold**|Un valore letterale stringa.|  
|Qualsiasi testo *formattato in corsivo*|Come costruire il valore letterale stringa.|  
  
 Come indicato nella tabella precedente, gli script di registrazione utilizzano stringhe letterali.  Questi valori sono il testo che deve essere visualizzato nello script.  Nella tabella seguente vengono descritti i valori letterali stringa utilizzati in uno script ATL Registrar.  
  
|Stringa letterale|Azione|  
|-----------------------|------------|  
|**ForceRemove**|Rimuovere completamente la chiave seguente \(se presente\) e viene ricreata.|  
|**NoRemove**|Non rimuove la chiave seguente durante annullano la registrazione.|  
|**val**|Specifica che `<Key Name>` è in realtà un valore denominato.|  
|**Delete**|Elimina la seguente chiave del registro.|  
|**s**|Specifica che il valore seguente è una stringa \(**REG\_SZ**\).|  
|**d**|Specifica che il valore seguente viene **DWORD** \(**REG\_DWORD**\).|  
|**m**|Specifica che il valore seguente è una multistringa \(**REG\_MULTI\_SZ**\).|  
|**b**|Specifica che il valore successivo è un valore binario \(**REG\_BINARY**\).|  
  
## Esempi di sintassi BNF  
 Di seguito sono riportati alcuni esempi di sintassi per comprendere come la notazione e il lavoro di stringhe letterali in uno script ATL Registrar.  
  
### Esempio di sintassi 1  
  
```  
<registry expression> ::= <Add Key>  
```  
  
 specifica che `registry expression` equivale a `Add Key`.  
  
### Esempio di sintassi 2  
  
```  
<registry expression> ::= <Add Key> | <Delete Key>  
```  
  
 specifica che `registry expression` equivale a `Add Key` o a `Delete Key`.  
  
### Esempio di sintassi 3  
  
```  
<Key Name> ::= '<AlphaNumeric>+'  
```  
  
 specifica che `Key Name` equivale a uno o più `AlphaNumerics`.  
  
### Esempio di sintassi 4  
  
```  
<Add Key> ::= [ForceRemove | NoRemove | val]<Key Name>  
```  
  
 specifica che `Add Key` equivale a `Key Name`e che i valori letterali stringa, `ForceRemove`, `NoRemove`e `val`, sono facoltativi.  
  
### Esempio di sintassi 5  
  
```  
<AlphaNumeric> ::= any character not NULL, that is, ASCII 0  
```  
  
 specifica che `AlphaNumeric` equivale a qualsiasi carattere diverso da Null.  
  
### Esempio di sintassi 6  
  
```  
val 'testmulti' = m 'String 1\0String 2\0'  
```  
  
 specifica che il nome della chiave `testmulti` è un valore di multistringa costituito da `String 1` e `String 2`.  
  
### Esempio di sintassi 7  
  
```  
val 'testhex' = d '&H55'  
```  
  
 specifica che il nome della chiave `testhex` è un set di valori **DWORD** esadecimale 55 \(decimale 85\).  Annotare questo formato soddisfa la notazione **&H** come constatato nella specifica di Visual Basic.  
  
## Vedere anche  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)