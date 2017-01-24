---
title: "Classe moneypunct | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "moneypunct"
  - "std.moneypunct"
  - "xlocmon/std::moneypunct"
  - "std::moneypunct"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "moneypunct (classe)"
ms.assetid: cf2650da-3e6f-491c-95d5-23e57f582ee6
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe moneypunct
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per descrivere le sequenze `CharType` utilizzate per rappresentare un campo di input o output monetario.  Se il parametro di modello `Intl` è `true`, vengono rispettate le convenzioni internazionali.  
  
## Sintassi  
  
```  
template<class CharType, bool Intl>   
   class moneypunct;  
```  
  
#### Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
 `Intl`  
 Flag che specifica se devono essere rispettate le convenzioni internazionali.  
  
## Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero.  Il primo tentativo di accedere al relativo valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
 L'oggetto statico const intl consente di archiviare il valore del parametro di modello **Intl**.  
  
### Costruttori  
  
|||  
|-|-|  
|[moneypunct](../Topic/moneypunct::moneypunct.md)|Costruttore di oggetti di tipo `moneypunct`.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/moneypunct::char_type.md)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[string\_type](../Topic/moneypunct::string_type.md)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[curr\_symbol](../Topic/moneypunct::curr_symbol.md)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.|  
|[decimal\_point](../Topic/moneypunct::decimal_point.md)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.|  
|[do\_curr\_symbol](../Topic/moneypunct::do_curr_symbol.md)|Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.|  
|[do\_decimal\_point](../Topic/moneypunct::do_decimal_point.md)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.|  
|[do\_frac\_digits](../Topic/moneypunct::do_frac_digits.md)|La funzione membro virtuale protetta restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.|  
|[do\_grouping](../Topic/moneypunct::do_grouping.md)|La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di un separatore decimale.|  
|[do\_neg\_format](../Topic/moneypunct::do_neg_format.md)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.|  
|[do\_negative\_sign](../Topic/moneypunct::do_negative_sign.md)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.|  
|[do\_pos\_format](../Topic/moneypunct::do_pos_format.md)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.|  
|[do\_positive\_sign](../Topic/moneypunct::do_positive_sign.md)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.|  
|[do\_thousands\_sep](../Topic/moneypunct::do_thousands_sep.md)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.|  
|[frac\_digits](../Topic/moneypunct::frac_digits.md)|Restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.|  
|[raggruppamento](../Topic/moneypunct::grouping.md)|Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.|  
|[neg\_format](../Topic/moneypunct::neg_format.md)|Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.|  
|[negative\_sign](../Topic/moneypunct::negative_sign.md)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.|  
|[pos\_format](../Topic/moneypunct::pos_format.md)|Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.|  
|[positive\_sign](../Topic/moneypunct::positive_sign.md)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.|  
|[thousands\_sep](../Topic/moneypunct::thousands_sep.md)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<locale\>](../standard-library/locale.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)