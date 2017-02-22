---
title: "Classe numpunct_byname | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.numpunct_byname"
  - "numpunct_byname"
  - "xlocnum/std::numpunct_byname"
  - "std::numpunct_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numpunct_byname (classe)"
ms.assetid: 18412924-e085-4771-b5e9-7a200cbdd7c0
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Classe numpunct_byname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe derivata modello descrive un oggetto che può fungere da facet di `numpunct` delle impostazioni locali specificate abilitando la punteggiatura di espressioni numeriche e boolean.  
  
## Sintassi  
  
```  
template<Class CharType>  
    class numpunct_byname : public numpunct<Elem> {  
public:  
    explicit numpunct_byname(  
        const char* _Locname,  
        size_t _Refs = 0  
    );  
    explicit numpunct_byname(  
        const string& _Locname,  
        size_t _Refs = 0  
    );  
protected:  
    virtual ~numpunct_byname( );  
   };  
```  
  
## Note  
 Il comportamento è determinato dalle impostazioni locali `_Locname`di [denominato](../Topic/locale::name.md).  Il costruttore inizializza l'oggetto base con [numpunct](../Topic/numpunct::numpunct.md)\<CharType\>\(`_Refs`\).  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)