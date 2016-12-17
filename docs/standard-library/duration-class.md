---
title: "Classe duration | Microsoft Docs"
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
  - "chrono/std::chrono::duration"
dev_langs: 
  - "C++"
ms.assetid: 06b863b3-65be-4ded-a72e-6e1eb1531077
caps.latest.revision: 10
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe duration
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un tipo che mantiene un *intervallo di tempo*, un tempo trascorso tra due intervalli di tempo.  
  
## Sintassi  
  
```  
template<  
   class Rep,  
   class Period = ratio<1>  
>  
class duration;  
template<  
   class Rep,  
   class Period  
>  
class duration;  
template<  
   class Rep,  
   class Period1,  
   class Period2  
>  
class duration  
   <duration<Rep, Period1>, Period2>;  
```  
  
## Note  
 L'argomento di template `Rep` descrive il tipo utilizzato per contenere il numero di cicli macchina nell'intervallo.  L'argomento di template `Period` è un'istanza del [rapporto](../standard-library/ratio.md) che descrive la dimensione dell'intervallo che rappresenta ogni ciclo.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[duration::period Typedef](http://msdn.microsoft.com/it-it/ebf2a1b9-769f-475f-8c66-cf9ed12015f2)|Rappresenta un sinonimo per il parametro di modello `Period`.|  
|[duration::rep Typedef](http://msdn.microsoft.com/it-it/f47b8abb-ae2c-4dc8-858a-f44695156950)|Rappresenta un sinonimo per il parametro di modello `Rep`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore duration::duration](../Topic/duration::duration%20Constructor.md)|Costruisce un oggetto `duration`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo duration::count](../Topic/duration::count%20Method.md)|Restituisce il numero di cicli di clock nell'intervallo di tempo.|  
|[Metodo duration::max](../Topic/duration::max%20Method.md)|Statico.  Restituisce il valore massimo consentito del parametro di template `Ref`.|  
|[Metodo duration::min](../Topic/duration::min%20Method.md)|Statico.  Restituisce il valore minimo consentito del parametro di template `Ref`.|  
|[Metodo duration::zero](../Topic/duration::zero%20Method.md)|Statico.  In effetti, restituisce `Rep`\(0\).|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore duration::operator\-](../Topic/duration::operator-%20Operator.md)|Restituisce una copia dell'oggetto `duration` insieme a un conteggio negato dei cicli di clock.|  
|[Operatore duration::operator\-\-](../Topic/duration::operator--%20Operator.md)|Decrementa il conteggio archiviato dei cicli di clock.|  
|[Operatore duration::operator\=](../Topic/duration::operator=%20Operator.md)|Riduce il conteggio archiviato dei cicli di clock effettuando il modulo con un valore specificato.|  
|[Operatore duration::operator\*\=](../Topic/duration::operator*=%20Operator.md)|Moltiplica il conteggio archiviato dei cicli di clock per un valore specificato.|  
|[Operatore duration::operator\/\=](../Topic/duration::operator-=%20Operator1.md)|Divide il conteggio archiviato dei cicli di clock per il conteggio dei cicli di clock di un oggetto `duration` specificato.|  
|[Operatore duration::operator\+](../Topic/duration::operator+%20Operator.md)|Restituisca il valore `*this`.|  
|[Operatore duration::operator\+\+](../Topic/duration::operator++%20Operator.md)|Incrementa il conteggio archiviato dei cicli di clock.|  
|[Operatore duration::operator\+\=](../Topic/duration::operator+=%20Operator.md)|Somma il conteggio dei cicli di clock di un oggetto `duration` specificato al conteggio archiviato dei cicli di clock.|  
|[Operatore duration::operator\-\=](../Topic/duration::operator-=%20Operator2.md)|Sottrae il conteggio dei cicli di clock di un oggetto `duration` specificato dal conteggio archiviato dei cicli di clock.|  
  
## Requisiti  
 **Intestazione:** chrono  
  
 **Spazio dei nomi:** std::chrono  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<chrono\>](../standard-library/chrono.md)   
 [Struttura duration\_values](../standard-library/duration-values-structure.md)