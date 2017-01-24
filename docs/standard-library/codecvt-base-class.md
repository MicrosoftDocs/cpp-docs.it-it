---
title: "Classe codecvt_base | Microsoft Docs"
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
  - "codecvt_base"
  - "xlocale/std::codecvt_base"
  - "std.codecvt_base"
  - "std::codecvt_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_base (classe)"
ms.assetid: 7e95c083-91b4-4b3f-8918-0d4ea244a040
caps.latest.revision: 21
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe codecvt_base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe di base per la classe di codecvt utilizzata per definire un tipo di enumerazione definito **risultato**, utilizzata come tipo restituito per le funzioni membro facet per indicare il risultato di una conversione.  
  
## Sintassi  
  
```  
class codecvt_base : public locale::facet {  
public:  
    enum result {ok, partial, error, noconv};  
    codecvt_base(  
        size_t _Refs = 0  
);  
    bool always_noconv() const;  
    int max_length() const;  
    int encoding() const;  
    ~codecvt_base()  
protected:  
    virtual bool do_always_noconv() const;  
    virtual int do_max_length() const;  
    virtual int do_encoding() const;  
};  
```  
  
## Note  
 La classe viene descritto un insieme comune di enumerazione a tutte le specializzazioni di classe modello [codecvt](../standard-library/codecvt-class.md).  Il risultato di enumerazione descritti i valori possibili restituiti da [do\_in](../Topic/codecvt::do_in.md) o da [do\_out](../Topic/codecvt::do_out.md):  
  
-   **OK** se la conversione tra le codifiche dei caratteri interne e esterne ha esito positivo.  
  
-   **Parziale** se la destinazione non è sufficiente per la conversione ha esito positivo.  
  
-   **errore** se la sequenza di origine è corretto.  
  
-   **noconv** se la funzione non esegue conversione.  
  
## Requisiti  
 impostazioni locali \<di**Intestazione:** \>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)