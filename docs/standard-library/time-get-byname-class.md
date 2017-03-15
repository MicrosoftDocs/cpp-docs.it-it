---
title: "Classe time_get_byname | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.time_get_byname"
  - "time_get_byname"
  - "xloctime/std::time_get_byname"
  - "std::time_get_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time_get_byname (classe)"
ms.assetid: 6e54153e-da40-4bb9-a942-1a6ce57b30c9
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 25
---
# Classe time_get_byname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe derivata modello descrive un oggetto che può fungere da facet delle impostazioni locali di tipo `time_get`\<CharType, InputIterator\>.  
  
## Sintassi  
  
```  
template<class Elem, class InputIterator =   
   istreambuf_iterator<CharType, char_traits<CharType> > >  
   class time_get_byname : public time_get<CharType, InputIterator>  
{  
public:  
    explicit time_get_byname(  
        const char *_Locname,  
         size_t _Refs = 0  
    );  
    explicit time_get_byname(  
        const string& _Locname,  
        size_t _Refs = 0  
    );  
protected:  
    virtual ~time_get_byname()  
};  
```  
  
#### Parametri  
 `_Locname`  
 Le impostazioni locali denominate.  
  
 `_Refs`  
 Un conteggio dei riferimenti iniziale.  
  
## Requisiti  
 Il comportamento è determinato dalle impostazioni locali denominate `_Locname`.  Ogni costruttore inizializza l'oggetto base con [time\_get](../Topic/time_get::time_get.md)\<CharType, InputIterator\>\(`_Refs`\).  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)