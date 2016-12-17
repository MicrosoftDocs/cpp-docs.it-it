---
title: "Classe ctype_byname | Microsoft Docs"
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
  - "xlocale/std::ctype_byname"
  - "std::ctype_byname"
  - "ctype_byname"
  - "std.ctype_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ctype_byname (classe)"
ms.assetid: a5cec021-a1f8-425f-8757-08e6f064b604
caps.latest.revision: 22
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe ctype_byname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe derivata modello descrive un oggetto che può fungere da facet di ctype impostazioni locali specificate, consentendo la classificazione dei caratteri e conversione dei caratteri tra maiuscole e minuscole e nativo e set di caratteri specificati impostazioni locali.  
  
## Sintassi  
  
```  
template<class _Elem>  
class ctype_byname : public ctype<_Elem>  
{  
public:  
    explicit ctype_byname(  
        const char *_Locname,  
        size_t _Refs = 0  
    );  
    explicit ctype_byname(  
        const string& _Locname,  
        size_t _Refs = 0  
    );  
protected:  
    virtual __CLR_OR_THIS_CALL ~ctype_byname();  
};  
```  
  
## Note  
 Il comportamento è determinato dalle impostazioni locali denominate `_Locname`.  Ogni costruttore inizializza l'oggetto base con [ctype](../standard-library/ctype-class.md)\<CharType\>\(`_Refs`\) o l'equivalente di classe base `ctype<char>`.  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)