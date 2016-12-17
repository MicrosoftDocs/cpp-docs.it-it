---
title: "Classe codecvt_byname | Microsoft Docs"
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
  - "std.codecvt_byname"
  - "codecvt_byname"
  - "std::codecvt_byname"
  - "xlocale/std::codecvt_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_byname (classe)"
ms.assetid: b63b6c04-f60c-47b9-8e30-a933f24a8ffb
caps.latest.revision: 24
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe codecvt_byname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe derivata modello che descrive un oggetto che può fungere da facet di confronto delle impostazioni locali specificate, consentendo la ricerca di informazioni specifiche di un'area di lingua per le conversioni.  
  
## Sintassi  
  
```  
template<Class CharType, class Byte, class StateType>  
    class codecvt_byname: public codecvt<CharType, Byte, StateType> {  
public:  
    explicit codecvt_byname(  
        const char* _Locname,  
        size_t _Refs = 0  
    );  
```  
  
```  
explicit codecvt_byname(  
    const string& _Locname,  
    size_t _Refs = 0  
);  
```  
  
```  
protected:  
    virtual ~codecvt_byname( );  
};  
```  
  
#### Parametri  
 `_Locname`  
 Le impostazioni locali denominate.  
  
 `_Refs`  
 Un conteggio dei riferimenti iniziale.  
  
## Note  
 I facet di Byname vengono creati automaticamente quando le impostazioni locali denominate vengono costruite.  
  
 Il comportamento è determinato dalle impostazioni locali denominate `_Locname`.  Ogni costruttore inizializza l'oggetto base con [codecvt](../standard-library/codecvt-class.md)\<CharType, byte, StateType\>\(`_Refs`\).  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)