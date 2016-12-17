---
title: "Classe messages | Microsoft Docs"
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
  - "messages"
  - "xlocmes/std::messages"
  - "std.messages"
  - "std::messages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messages (classe)"
ms.assetid: c4c71f40-4f24-48ab-9f7c-daccd8d5bd83
caps.latest.revision: 18
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe messages
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per recuperare i messaggi localizzati da un catalogo di messaggi internazionalizzati per le impostazioni locali specificate.  
  
 Attualmente, mentre viene implementata la classe dei messaggi, non esiste alcun messaggio.  
  
## Sintassi  
  
```  
template <class CharType>  
   class messages : public messages_base;  
```  
  
#### Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.  
  
## Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato archivia un valore positivo univoco in **ID**  
  
 Questo facet apre fondamentalmente un catalogo di messaggi definiti in messages\_base della classe base, recupera le informazioni richieste e chiude il catalogo.  
  
### Costruttori  
  
|||  
|-|-|  
|[messaggi](../Topic/messages::messages.md)|Funzione del costruttore del facet dei messaggi.|  
  
### Typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/messages::char_type.md)|Tipo di carattere utilizzato per visualizzare i messaggi.|  
|[string\_type](../Topic/messages::string_type.md)|Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo `CharType`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[chiudi](../Topic/messages::close.md)|Chiude il catalogo dei messaggi.|  
|[do\_close](../Topic/messages::do_close.md)|Funzione virtuale chiamata perché avvenga la perdita del catalogo dei messaggi.|  
|[do\_get](../Topic/messages::do_get.md)|Funzione virtuale chiamata per recuperare il catalogo dei messaggi.|  
|[do\_open](../Topic/messages::do_open.md)|Funzione virtuale chiamata per aprire il catalogo dei messaggi.|  
|[get](../Topic/messages::get.md)|Recupera il catalogo dei messaggi.|  
|[apri](../Topic/messages::open.md)|Apre il catalogo dei messaggi.|  
  
## Requisiti  
 **Intestazione:** \<locale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<locale\>](../standard-library/locale.md)   
 [Classe messages\_base](../standard-library/messages-base-class.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)