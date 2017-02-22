---
title: "&lt;string&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<string>"
  - "string/std::<string>"
  - "std.<string>"
  - "<string>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "intestazione di stringa"
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# &lt;string&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la classe modello `basic_string` del contenitore e diversi modelli di supporto.  
  
 Per altre informazioni su `basic_string`, vedere [Classe basic\_string](../standard-library/basic-string-class.md)  
  
## Sintassi  
  
```  
#include <string>  
```  
  
## Note  
 Il linguaggio C\+\+ e la libreria standard C\+\+ supportano due tipi di stringhe:  
  
-   Matrici di caratteri con terminazione Null spesso definite stringhe C.  
  
-   Oggetti della classe modello, di tipo `basic_string`, che gestiscono tutti gli argomenti di modello di tipo `char`.  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[string](../Topic/string%20\(C++%20STL%20%3Cstring%3E\).md)|Tipo che descrive una specializzazione della classe modello `basic_string` con elementi di tipo `char` come `string`.|  
|[wstring](../Topic/wstring.md)|Tipo che descrive una specializzazione della classe modello `basic_string` con elementi di tipo `wchar_t` come `wstring`.|  
|[u16string](../Topic/u16string.md)|Tipo che descrive una specializzazione della classe modello `basic_string` basata su elementi di tipo `char16_t`.|  
|[u32string](../Topic/u32string.md)|Tipo che descrive una specializzazione della classe modello `basic_string` basata su elementi di tipo `char32_t`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \+](../Topic/operator+%20\(%3Cstring%3E\).md)|Concatena due oggetti stringa.|  
|[operator\!\=](../Topic/operator!=%20\(%3Cstring%3E\).md)|Verifica se l'oggetto stringa a sinistra dell'operatore non è uguale all'oggetto stringa a destra.|  
|[operator\=\=](../Topic/operator==%20\(%3Cstring%3E\).md)|Verifica se l'oggetto stringa a sinistra dell'operatore è uguale all'oggetto stringa a destra.|  
|[operatore \<](../Topic/operator%3C%20\(%3Cstring%3E\).md)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore dell'oggetto stringa a destra.|  
|[operatore \<\=](../Topic/operator%3C=%20\(in%20%3Cstring%3E\).md)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore o uguale all'oggetto stringa a destra.|  
|[operatore \<\<](../Topic/operator%3C%3C%20\(%3Cstring%3E\).md)|Funzione di modello che inserisce una stringa nel flusso di output.|  
|[operatore \>](../Topic/operator%3E%20\(%3Cstring%3E\).md)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore dell'oggetto stringa a destra.|  
|[operatore \>\=](../Topic/operator%3E=%20\(%3Cstring%3E\).md)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore o uguale all'oggetto stringa a destra.|  
|[operatore \>\>](../Topic/operator%3E%3E%20\(%3Cstring%3E\).md)|Funzione di modello che estrae una stringa dal flusso di input.|  
  
### Funzioni di modello specializzate  
  
|||  
|-|-|  
|[swap](../Topic/swap%20\(C++%20STL%20%3Cstring%3E\).md)|Scambia le matrici di caratteri di due stringhe.|  
|[stod](../Topic/stod.md)|Converte una sequenza di caratteri in `double.`.|  
|[stof](../Topic/stof.md)|Converte una sequenza di caratteri in un tipo `float`.|  
|[stoi](../Topic/stoi.md)|Converte una sequenza di caratteri in un Integer.|  
|[stold](../Topic/stold.md)|Converte una sequenza di caratteri in `long double`.|  
|[stoll](../Topic/stoll.md)|Converte una sequenza di caratteri in `long long`.|  
|[stoul](../Topic/stoul.md)|Converte una sequenza di caratteri in un tipo `unsigned long`.|  
|[stoull](../Topic/stoull.md)|Converte una sequenza di caratteri in `unsigned long long`.|  
|[to\_string](../Topic/to_string.md)|Converte un valore in un valore `string`.|  
|[to\_wstring](../Topic/to_wstring.md)|Converte un valore in un valore `string` di tipo wide.|  
  
### Funzioni  
  
|||  
|-|-|  
|[getline](../Topic/getline%20Template%20Function.md)|Estrarre stringhe dal flusso di input riga per riga.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe basic\_string](../standard-library/basic-string-class.md)|Classe modello che descrive gli oggetti che possono archiviare una sequenza di oggetti arbitrari di tipo carattere.|  
|[Struct char\_traits](../standard-library/char-traits-struct.md)|Classe modello che descrive gli attributi associati a un carattere di tipo CharType.|  
  
### Specializzazioni  
  
|||  
|-|-|  
|[Struct char\_traits\<char\>](../standard-library/char-traits-char-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType\> in un elemento di tipo `char`.|  
|[Struct char\_traits\<wchar\_t\>](../standard-library/char-traits-wchar-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType\> in un elemento di tipo `wchar_t`.|  
|[Struct char\_traits\<char16\_t\>](../standard-library/char-traits-char16-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType\> in un elemento di tipo `char16_t`.|  
|[Struct char\_traits\<char32\_t\>](../standard-library/char-traits-char32-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType\> in un elemento di tipo `char32_t`.|  
  
## Requisiti  
  
-   **Intestazione:** \<string\>  
  
-   **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)