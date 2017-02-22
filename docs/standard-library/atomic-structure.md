---
title: "Struttura atomic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "atomic/std::atomic"
dev_langs: 
  - "C++"
ms.assetid: 261628ed-7049-41ac-99b9-cfe49f696b44
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Struttura atomic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto un oggetto che esegue le operazioni atomiche su un valore archiviato di tipo `Ty`.  
  
## Sintassi  
  
```  
template <class Ty>  
struct atomic;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore atomic::atomic](../Topic/atomic::atomic%20Constructor.md)|Costruisce un oggetto atomico.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore atomic::operator Ty](../Topic/atomic::operator%20Ty%20Operator.md)|Legge e restituisce il valore memorizzato. \([Metodo atomic::load](../Topic/atomic::load%20Method.md)\)|  
|[Operatore atomic::operator\=](../Topic/atomic::operator=%20Operator.md)|Utilizza un valore specificato per sostituire il valore memorizzato. \([Metodo atomic::store](../Topic/atomic::store%20Method.md)\)|  
|||  
|[Operatore atomic::operator\+\+](../Topic/atomic::operator++%20Operator.md)|Incrementa il valore memorizzato.  Utilizzato solo dalle specializzazioni di puntatore e integrale.|  
|[Operatore atomic::operator\+\=](../Topic/atomic::operator+=%20Operator.md)|Aggiunge un valore specificato al valore archiviato.  Utilizzato solo dalle specializzazioni di puntatore e integrale.|  
|[Operatore atomic::operator\-\-](../Topic/atomic::operator--%20Operator.md)|Decrementa il valore memorizzato.  Utilizzato solo dalle specializzazioni di puntatore e integrale.|  
|[Operatore atomic::operator\-\=](../Topic/atomic::operator-=%20Operator.md)|Sottrae un valore specificato dal valore archiviato.  Utilizzato solo dalle specializzazioni di puntatore e integrale.|  
|[Operatore atomic::operator&\=](../Topic/atomic::operator&=%20Operator.md)|Esegue una `and` bit a bit tra il valore specificato e il valore archiviato.  Utilizzato solo dalle specializzazioni integrali.|  
|[Operatore atomic::operator&#124;\=](../Topic/atomic::operator%7C=%20Operator.md)|Esegue una `or` bit a bit tra il valore specificato e il valore archiviato.  Utilizzato solo dalle specializzazioni integrali.|  
|[Operatore atomic::operator^\=](../Topic/atomic::operator%5E=%20Operator.md)|Esegue una `exclusive or` bit a bit tra il valore specificato e il valore archiviato.  Utilizzato solo dalle specializzazioni integrali.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo atomic::compare\_exchange\_strong](../Topic/atomic::compare_exchange_strong%20Method.md)|Esegue un'operazione `atomic_compare_and_exchange` su `this` e restituisce il risultato.|  
|[Metodo atomic::compare\_exchange\_weak](../Topic/atomic::compare_exchange_weak%20Method.md)|Esegue un'operazione `weak_atomic_compare_and_exchange` su `this` e restituisce il risultato.|  
|[Metodo atomic::fetch\_add](../Topic/atomic::fetch_add%20Method.md)|Aggiunge un valore specificato al valore archiviato.|  
|[Metodo atomic::fetch\_and](../Topic/atomic::fetch_and%20Method.md)|Esegue una `and` bit a bit tra il valore specificato e il valore archiviato.|  
|[Metodo atomic::fetch\_or](../Topic/atomic::fetch_or%20Method.md)|Esegue una `or` bit a bit tra il valore specificato e il valore archiviato.|  
|[Metodo atomic::fetch\_sub](../Topic/atomic::fetch_sub%20Method.md)|Sottrae un valore specificato dal valore archiviato.|  
|[Metodo atomic::fetch\_xor](../Topic/atomic::fetch_xor%20Method.md)|Esegue una `exclusive or` bit a bit tra il valore specificato e il valore archiviato.|  
|[Metodo atomic::is\_lock\_free](../Topic/atomic::is_lock_free%20Method.md)|Specifica se le operazioni atomiche su `this` sono *libere dal blocco*.  Un tipo atomico è *libero dal blocco* se nessuna operazione atomica su quel tipo utilizza i blocchi.|  
|[Metodo atomic::load](../Topic/atomic::load%20Method.md)|Legge e restituisce il valore memorizzato.|  
|[Metodo atomic::store](../Topic/atomic::store%20Method.md)|Utilizza un valore specificato per sostituire il valore memorizzato.|  
  
## Note  
 Il tipo `Ty` deve essere *copiabile in modo semplice*.  Ovvero, utilizzando [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) per copiare i suoi byte deve produrre un oggetto `Ty` valido che si confronta in modo identico all'oggetto originale.  Le funzioni membro `compare_exchange_strong` e `compare_exchange_weak` utilizzano [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md) per determinare se due valori `Ty` sono uguali.  Queste funzioni non utilizzeranno un `Ty`\-definito `operator==`.  Le funzioni membro `atomic` utilizzano `memcpy` per copiare i valori di tipo `Ty`.  
  
 Una specializzazione parziale, `atomic<Ty *>`, esiste per tutti i tipi di puntatore.  La specializzazione consente l'aggiunta di un offset al valore del puntatore gestito o la sottrazione di un offset da esso.  Le operazioni aritmetiche accettano un argomento di tipo `ptrdiff_t` e adattano l'argomento a seconda della dimensione di `Ty` per essere consistente con l'ordinaria aritmetica degli indirizzi.  
  
 Una specializzazione esiste per ogni tipo integrale tranne `bool`.  Ogni specializzazione fornisce un insieme completo dei metodi per aritmetica atomica e le operazioni logiche.  
  
||||  
|-|-|-|  
|`atomic<char>`|`atomic<signed char>`|`atomic<unsigned char>`|  
|`atomic<char16_t>`|`atomic<char32_t>`|`atomic<wchar_t>`|  
|`atomic<short>`|`atomic<unsigned short>`|`atomic<int>`|  
|`atomic<unsigned int>`|`atomic<long>`|`atomic<unsigned long>`|  
|`atomic<long long>`|`atomic<unsigned long long>`|  
  
 Le specializzazioni integrali sono derivate dai tipi corrispondenti `atomic_``integral`.  L'interfaccia `atomic<unsigned int>` deriva, ad esempio, dall'interfaccia `atomic_uint`.  
  
## Requisiti  
 **Intestazione:** atomico  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<atomic\>](../standard-library/atomic.md)   
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)