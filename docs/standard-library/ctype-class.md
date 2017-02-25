---
title: "Classe ctype | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ctype"
  - "std::ctype"
  - "std.ctype"
  - "CType"
  - "xlocale/std::ctype"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ctype (classe)"
ms.assetid: 3627154c-49d9-47b5-b28f-5bbedee38e3b
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe ctype
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe che fornisce un facet utilizzato per classificare i caratteri, eseguire la conversione dalle lettere maiuscole e minuscole, nonché per eseguire la conversione tra il set di caratteri nativi e il set utilizzato dalle impostazioni locali.  
  
## Sintassi  
  
```  
template <class CharType>  
   class ctype : public ctype_base;  
```  
  
#### Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
## Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero.  Il primo tentativo di accedere al relativo valore archiviato consente di archiviare un valore positivo univoco in **id.** I criteri di classificazione vengono forniti come tipo di maschera di bit annidata nella classe base ctype\_base.  
  
 Nella libreria C\+\+ standard vengono definite due specializzazioni esplicite di questa classe modello:  
  
-   [ctype](#vclrf_locale_ctype_class)\<`char`\>, una specializzazione esplicita le cui differenze vengono descritte separatamente.  
  
-   **ctype**\<`wchar_t`\>, che considera gli elementi come caratteri "wide".  
  
 Altre specializzazioni della classe modello **ctype**\<**CharType**\>:  
  
-   Converte un valore ***ch*** di tipo **CharType** in un valore di tipo `char` con l'espressione \(`char`\)**ch**.  
  
-   Converte un valore ***byte*** di tipo `char` in un valore di tipo **CharType** con l'espressione **CharType** \(**byte**\).  
  
 Tutte le altre operazioni vengono eseguite su valori `char` esattamente come per la specializzazione esplicita **ctype**\<`char`\>.  
  
### Costruttori  
  
|||  
|-|-|  
|[ctype](../Topic/ctype::ctype.md)|Costruttore per gli oggetti della classe `ctype` utilizzati come facet delle impostazioni locali per i caratteri.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/ctype::char_type.md)|Tipo che descrive un carattere utilizzato dalle impostazioni locali.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[do\_is](../Topic/ctype::do_is.md)|Funzione virtuale chiamata per verificare se un singolo carattere presenta un attributo specifico oppure per classificare gli attributi di ogni carattere di un intervallo e archiviarli in una matrice.|  
|[do\_narrow](../Topic/ctype::do_narrow.md)|Funzione virtuale chiamata per convertire un carattere di tipo `CharType` utilizzato dalle impostazioni locali nel carattere corrispondente di tipo `char` del set di caratteri nativo.|  
|[do\_scan\_is](../Topic/ctype::do_scan_is.md)|Funzione virtuale chiamata per individuare il primo carattere di un intervallo che corrisponde a una maschera specificata.|  
|[do\_scan\_not](../Topic/ctype::do_scan_not.md)|Funzione virtuale chiamata per individuare il primo carattere di un intervallo che non corrisponde a una maschera specificata.|  
|[do\_tolower](../Topic/ctype::do_tolower.md)|Funzione virtuale chiamata per convertire un carattere o un intervallo di caratteri nelle rispettive lettere minuscole.|  
|[do\_toupper](../Topic/ctype::do_toupper.md)|Funzione virtuale chiamata per convertire un carattere o un intervallo di caratteri in lettere maiuscole.|  
|[do\_widen](../Topic/ctype::do_widen.md)|Funzione virtuale chiamata per convertire un carattere di tipo `char` del set di caratteri nativi nel carattere corrispondente di tipo `CharType` utilizzato dalle impostazioni locali.|  
|[is](../Topic/ctype::is.md)|Verifica se un singolo carattere presenta un attributo specifico oppure classifica gli attributi di ogni carattere di un intervallo e li archivia in una matrice.|  
|[narrow](../Topic/ctype::narrow.md)|Converte un carattere di tipo `CharType` utilizzato dalle impostazioni locali nel carattere corrispondente di tipo char del set di caratteri nativi.|  
|[scan\_is](../Topic/ctype::scan_is.md)|Individua il primo carattere di un intervallo che corrisponde a una maschera specificata.|  
|[scan\_not](../Topic/ctype::scan_not.md)|Individua il primo carattere di un intervallo che non corrisponde a una maschera specificata.|  
|[tolower](../Topic/ctype::tolower.md)|Converte un carattere o un intervallo di caratteri in lettere minuscole.|  
|[toupper](../Topic/ctype::toupper.md)|Converte un carattere o un intervallo di caratteri in lettere maiuscole.|  
|[widen](../Topic/ctype::widen.md)|Converte un carattere di tipo `char` del set di caratteri nativi nel carattere corrispondente di tipo `CharType` utilizzato dalle impostazioni locali.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<locale\>](../standard-library/locale.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)