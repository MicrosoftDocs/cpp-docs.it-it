---
title: "Classe moneypunct_byname | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.moneypunct_byname"
  - "std::moneypunct_byname"
  - "xlocmon/std::moneypunct_byname"
  - "moneypunct_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "moneypunct_byname (classe)"
ms.assetid: e8a544d2-6aee-420d-b513-deb385c9b416
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe moneypunct_byname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe derivata modello che descrive un oggetto che può fungere da facet di `moneypunct` delle impostazioni locali specificate, attivando il campo di input monetario di formattazione o campi di output monetari.  
  
## Sintassi  
  
```  
template<class CharType, bool Intl = false>  
class moneypunct_byname : public moneypunct<CharType, Intl>  
{  
public:  
    explicit moneypunct_byname(  
        const char *_Locname,  
        size_t _Refs = 0  
    );  
    explicit moneypunct_byname(  
        const string& _Locname,  
        size_t _Refs = 0  
    );   
protected:  
    virtual ~moneypunct_byname();  
};  
```  
  
## Note  
 Il comportamento è determinato dalle impostazioni locali denominate `_Locname`.  Ogni costruttore inizializza l'oggetto base con [moneypunct](../Topic/moneypunct::moneypunct.md)\<CharType, in internazionale\>\(`_Refs`\).  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)