---
title: "Classe messages_byname | Microsoft Docs"
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
  - "messages_byname"
  - "std::messages_byname"
  - "std.messages_byname"
  - "xlocmes/std::messages_byname"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messages_byname (classe)"
ms.assetid: c6c64841-3e80-43c8-b54c-fed41833ad6b
caps.latest.revision: 22
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe messages_byname
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe derivata modello descrive un oggetto che può fungere da facet del messaggio delle impostazioni locali specificate, attivando il recupero dei messaggi localizzati.  
  
## Sintassi  
  
```  
template<class CharType>  
    class messages_byname : public messages<CharType> {  
public:  
    explicit messages_byname(  
        const char *_Locname,  
        size_t _Refs = 0  
    );  
    explicit messages_byname(  
        const string& _Locname,  
        size_t _Refs = 0  
    );   
protected:  
    virtual ~messages_byname();  
};  
```  
  
#### Parametri  
 `_Locname`  
 Le impostazioni locali denominate.  
  
 `_Refs`  
 Un conteggio dei riferimenti iniziale.  
  
## Note  
 Il comportamento è determinato dalle impostazioni locali denominate `_Locname`.  Ogni costruttore inizializza l'oggetto base con [messaggi](../Topic/messages::messages.md)\<CharType\>\(`_Refs`\).  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)