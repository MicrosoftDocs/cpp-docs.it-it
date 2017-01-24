---
title: "Classe exception | Microsoft Docs"
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
  - "std.exception"
  - "exception"
  - "std::exception"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception (classe)"
ms.assetid: 4f181f67-5888-4b50-89a6-745091ffb2fe
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe exception
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe funge da classe base per tutte le eccezioni generate da determinate espressioni e dalla libreria C\+\+ standard.  
  
## Sintassi  
  
```  
class exception {  
public:  
    exception();  
    exception(const char * const &message);  
    exception(const char * const &message, int);  
    exception(const exception &right);  
    exception& operator=(const exception &right);  
    virtual ~exception();  
    virtual const char *what() const;  
};  
```  
  
## Note  
 In particolare, questa classe base è la radice delle classi standard di eccezione definite in [\<stdexcept\>](../standard-library/stdexcept.md).  Il valore stringa C restituito da `what` viene lasciato non specificato dal costruttore predefinito, ma possono essere definiti dai costruttori per alcune classi derivate come stringa implementazione definita C.  Nessuna delle funzioni membro generano tutte le eccezioni.  
  
 Il parametro di `int` consente di specificare che non deve essere memoria allocata.  Il valore di `int` viene ignorato.  
  
> [!NOTE]
>  I costruttori `exception(const char * const &message)` e `exception(const char * const &message, int)` sono estensioni Microsoft alla libreria standard di C\+\+.  
  
## Esempio  
 Per esempi di utilizzo delle classi standard di eccezione che ereditano dalla classe di `exception`, vedere una delle classi definite in [\<stdexcept\>](../standard-library/stdexcept.md).  
  
## Requisiti  
 **Header:** \<exception\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)