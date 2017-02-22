---
title: "Classe wbuffer_convert | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext::cvt::wbuffer_convert"
  - "wbuffer_convert"
  - "stdext.cvt.wbuffer_convert"
  - "cvt.wbuffer_convert"
  - "cvt::wbuffer_convert"
  - "wbuffer/stdext::cvt::wbuffer_convert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "wbuffer_convert (classe)"
ms.assetid: 4a56f9bf-4138-4612-b516-525fea401358
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe wbuffer_convert
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un buffer del flusso che controlla la trasmissione di elementi da e verso un buffer del flusso di byte.  
  
## Sintassi  
  
```  
template<class Codecvt,  
    class Elem = wchar_t,  
    class Traits = std::char_traits<Elem>  
>  
    class wbuffer_convert  
        : public std::basic_streambuf<Elem, Traits>  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Codecvt`|Facet delle [impostazioni locali](../standard-library/locale-class.md) che rappresenta l'oggetto di conversione.|  
|`Elem`|Tipo di elemento a caratteri "wide".|  
|`Traits`|Tratti associati a *Elem*.|  
  
## Note  
 La classe modello descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `_Elem`, i cui tratti di carattere sono descritti dalla classe `Traits`, verso e da un buffer del flusso di byte di tipo `std::streambuf`.  
  
 La conversione tra una sequenza di valori `Elem` e sequenze multibyte viene eseguita da un oggetto della classe `Codecvt<Elem, char, std::mbstate_t>`, che soddisfa i requisiti del facet standard di conversione del codice `std::codecvt<Elem, char, std::mbstate_t>`.  
  
 Un oggetto di questa classe modello archivia:  
  
-   Un puntatore al buffer del flusso di byte sottostante  
  
-   Un puntatore all'oggetto di conversione allocato \(che viene liberato quando viene eliminato l'oggetto [wbuffer\_convert](../standard-library/wbuffer-convert-class.md)\)  
  
-   Un oggetto di stato conversione di tipo [state\_type](../Topic/wbuffer_convert::state_type.md).  
  
### Costruttori  
  
|||  
|-|-|  
|[wbuffer\_convert](../Topic/wbuffer_convert::wbuffer_convert.md)|Costruisce un oggetto di tipo `wbuffer_convert`.|  
  
### Typedef  
  
|||  
|-|-|  
|[state\_type](../Topic/wbuffer_convert::state_type.md)|Tipo che rappresenta lo stato della conversione.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[rdbuf](../Topic/wbuffer_convert::rdbuf.md)|Restituisce il buffer del flusso di byte.|  
|[stato](../Topic/wbuffer_convert::state.md)|Restituisce un oggetto che rappresenta lo stato della conversione.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std