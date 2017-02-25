---
title: "Classe wstring_convert | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "cvt.wstring_convert"
  - "wstring_convert"
  - "stdext::cvt::wstring_convert"
  - "cvt::wstring_convert"
  - "wstring/stdext::cvt::wstring_convert"
  - "stdext.cvt.wstring_convert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "wstring_convert (classe)"
ms.assetid: e34f5b65-d572-4bdc-ac69-20778712e376
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 25
---
# Classe wstring_convert
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello `wstring_convert` esegue le conversioni tra una stringa di caratteri "wide" e una stringa di byte.  
  
## Sintassi  
  
```  
template<  
    class Codecvt,  
    class Elem = wchar_t  
>  
class wstring_convert  
```  
  
#### Parametri  
 Codecvt  
 Facet delle [impostazioni locali](../standard-library/locale-class.md) che rappresenta l'oggetto di conversione.  
  
 Elem  
 Tipo di elemento a caratteri "wide".  
  
## Note  
 La classe modello descrive un oggetto che controlla le conversioni tra gli oggetti stringa di caratteri estesi della classe `std::basic_string<Elem>` e gli oggetti stringa di byte della classe `std::basic_string<char>` \(nota anche come `std::string`\). La classe modello definisce i tipi `wide_string` e `byte_string` come sinonimi per questi due tipi. La conversione tra una sequenza di valori `Elem` \(archiviati in un oggetto `wide_string`\) e sequenze multibyte \(archiviate in un oggetto `byte_string`\) viene eseguita da un oggetto della classe `Codecvt<Elem, char, std::mbstate_t>`, che soddisfa i requisiti del facet standard di conversione del codice `std::codecvt<Elem, char, std::mbstate_t>`.  
  
 Un oggetto di questa classe modello archivia:  
  
-   Una stringa di byte da visualizzare in caso di errori  
  
-   Una stringa di caratteri "wide" da visualizzare in caso di errori  
  
-   Un puntatore all'oggetto di conversione allocato \(che viene liberato quando viene eliminato definitivamente l'oggetto wbuffer\_convert\)  
  
-   Un oggetto di stato conversione di tipo [state\_type](../Topic/wstring_convert::state_type.md)  
  
-   Un conteggio delle conversioni  
  
### Costruttori  
  
|||  
|-|-|  
|[wstring\_convert](../Topic/wstring_convert::wstring_convert.md)|Costruisce un oggetto di tipo `wstring_convert`.|  
  
### Typedef  
  
|||  
|-|-|  
|[byte\_string](../Topic/wstring_convert::byte_string.md)|Tipo che rappresenta una stringa di tipo byte.|  
|[wide\_string](../Topic/wstring_convert::wide_string.md)|Tipo che rappresenta una stringa di tipo wide.|  
|[state\_type](../Topic/wstring_convert::state_type.md)|Tipo che rappresenta lo stato della conversione.|  
|[int\_type](../Topic/wstring_convert::int_type.md)|Tipo che rappresenta un Integer.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[from\_bytes](../Topic/wstring_convert::from_bytes.md)|Converte una stringa di byte in una stringa di caratteri "wide".|  
|[to\_bytes](../Topic/wstring_convert::to_bytes.md)|Converte una stringa di caratteri "wide" in una stringa di byte.|  
|[converted](../Topic/wstring_convert::converted.md)|Restituisce il numero di conversioni riuscite.|  
|[stato](../Topic/wstring_convert::state.md)|Restituisce un oggetto che rappresenta lo stato della conversione.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std