---
title: "&lt;complex&gt; | Microsoft Docs"
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
  - "<complex>"
  - "std.<complex>"
  - "std::<complex>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "intestazione complessa"
ms.assetid: 5e728995-3059-496a-9ce9-61d1bfbe4f2b
caps.latest.revision: 21
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;complex&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la classe modello del contenitore e i relativi modelli di supporto.  
  
## Sintassi  
  
```  
  
#include <complex>  
  
```  
  
## Note  
 Un numero complesso è una coppia ordinata di numeri reali.  In termini puramente geometrici, il piano complesso è il piano bidimensionale reale.  Le qualità speciali del piano complesso che lo distinguono dal piano reale dipendono dal fatto che ha una struttura algebrica aggiuntiva.  Questa struttura algebrica include due operazioni fondamentali:  
  
-   Addizione, definita come \(*a, b*\) \+ \(*c, d*\) \= \(*a \+ c, b \+ d\)*  
  
-   Moltiplicazione, definita come \(*a, b*\) \* \(*c, d*\) \= \(*ac \- bd, ad \+ bc*\)  
  
 L'insieme di numeri complessi con operazioni di addizione complessa e moltiplicazione complessa corrisponde a un campo nel senso algebrico standard:  
  
-   Le operazioni di addizione e moltiplicazione sono commutative e associative e la moltiplicazione è distributiva rispetto all'addizione, esattamente come rispetto alla vera addizione e moltiplicazione nel campo dei numeri reali.  
  
-   Il numero complesso \(*0, 0*\) corrisponde all'identità additiva e \(*1, 0*\) è l'identità moltiplicativa.  
  
-   L'inverso additivo per un numero complesso \(*a, b*\) è \(*\-a, \-b*\) e l'inverso moltiplicativo per tutti questi numeri complessi ad eccezione di \(*0, 0*\) è  
  
     \(*a*\/\(*a*<sup>2</sup> \+ *b*<sup>2</sup>\), \-*b*\/\(*a*<sup>2</sup> \+ *b*<sup>2</sup>\)  
  
 Mediante la rappresentazione di un numero complesso *z \= \(a, b\)* nel formato *z \= a \+ bi*, dove *i*<sup>2</sup> *\=* \-1, le regole per il calcolo algebrico dell'insieme di numeri reali possono essere applicate all'insieme di numeri complessi e ai rispettivi componenti.  Ad esempio:  
  
 \(1 \+ 2*i*\) \* \(2 \+ 3*i*\)    \= 1\*\(2 \+ 3*i*\) \+ 2*i*\*\(2 \+ 3*i*\) \= \(2 \+ 3*i*\) \+ \(4*i* \+ 6*i*<sup>2</sup>\)  
  
 \= \(2 –6\) \+ \(3 \+ 4\)*i* \= \-4 \+ 7*i*  
  
 Il sistema di numeri complessi è un campo, ma non è un campo ordinato.  Non è previsto l'ordinamento dei numeri complessi, disponibile invece per il campo o per i numeri reali e i rispettivi sottoinsiemi. Non sarà quindi possibile applicare disuguaglianze ai numeri complessi in modo analogo all'applicazione ai numeri reali, che corrispondono a un campo ordinato.  
  
 Esistono tre forme comuni di rappresentazione di un numero complesso *z*:  
  
-   Cartesiana: *z \= a \+ bi*  
  
-   Polare: *z \= r* \(cos *\+ i*sin\)  
  
-   Esponenziale: *z \= r \** exp\(\)  
  
 I termini usati in queste rappresentazioni standard di un numero complesso vengono definiti come segue:  
  
-   Il vero componente cartesiano o la parte reale *a*.  
  
-   Il componente cartesiano immaginario o parte immaginaria *b*.  
  
-   Il modulo o valore assoluto di un numero complesso Ρ.  
  
-   L'argomento o l'angolo di fase.  
  
 Se non diversamente specificato, le funzioni che possono restituire valori multipli sono necessarie per restituire un valore principale per i rispettivi argomenti superiori a –pi greco e inferiori o uguali a \+pi greco, per mantenerli a valore singolo.  Tutti gli angoli devono essere espressi in radianti. In un cerchio sono presenti due 2 radianti pi greco \(360 gradi\).  
  
### Funzioni  
  
|||  
|-|-|  
|[abs](../Topic/abs.md)|Calcola il modulo di un numero complesso.|  
|[arg](../Topic/arg.md)|Estrae l'argomento da un numero complesso.|  
|[conj](../Topic/conj.md)|Restituisce il complesso coniugato di un numero complesso.|  
|[cos](../Topic/cos.md)|Restituisce il coseno di un numero complesso.|  
|[cosh](../Topic/cosh.md)|Restituisce il coseno iperbolico di un numero complesso.|  
|[exp](../Topic/exp.md)|Restituisce la funzione esponenziale di un numero complesso.|  
|[imag](../Topic/imag.md)|Estrae il componente immaginario di un numero complesso.|  
|[log](../Topic/log.md)|Restituisce il logaritmo naturale di un numero complesso.|  
|[log10](../Topic/log10.md)|Restituisce il logaritmo in base 10 di un numero complesso.|  
|[norm](../Topic/norm.md)|Estrae la norma di un numero complesso.|  
|[polar](../Topic/polar.md)|Restituisce il numero complesso, che corrisponde a un modulo e un argomento specificati, in formato cartesiano.|  
|[pow](../Topic/pow.md)|Valuta il numero complesso ottenuto mediante l'elevamento di una base corrispondente a un numero complesso alla potenza di un altro numero complesso.|  
|[real](../Topic/real.md)|Estrae il componente reale di un numero complesso.|  
|[sin](../Topic/sin.md)|Restituisce il seno di un numero complesso.|  
|[sinh](../Topic/sinh.md)|Restituisce il seno iperbolico di un numero complesso.|  
|[sqrt](../Topic/sqrt.md)|Restituisce la radice quadrata di un numero complesso.|  
|[tan](../Topic/Functions%20tan.md)|Restituisce la tangente di un numero complesso.|  
|[tanh](../Topic/tanh.md)|Restituisce la tangente iperbolica di un numero complesso.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/operator!=%20\(%3Ccomplex%3E\).md)|Verifica la disuguaglianza tra due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator\*](../Topic/operator*%20\(%3Ccomplex%3E\).md)|Moltiplica due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operatore \+](../Topic/operator+%20\(%3Ccomplex%3E\).md)|Aggiunge due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operator\-](../Topic/operator-%20\(%3Ccomplex%3E\)1.md)|Sottrae due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operatore \/](../Topic/operator-%20\(%3Ccomplex%3E\)2.md)|Divide due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operatore \<\<](../Topic/operator%3C%3C%20\(%3Ccomplex%3E\).md)|Funzione di modello che inserisce un numero complesso nel flusso di output.|  
|[operator\=\=](../Topic/operator==%20\(%3Ccomplex%3E\).md)|Verifica l'uguaglianza tra due numeri complessi, di cui uno o entrambi possono appartenere al sottoinsieme del tipo per le parti reali e immaginarie.|  
|[operatore \>\>](../Topic/operator%3E%3E%20\(%3Ccomplex%3E\).md)|Funzione di modello che estrae un valore complesso dal flusso di input.|  
  
### Classi  
  
|||  
|-|-|  
|[complex\<double\>](../standard-library/complex-double.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **double***,* il primo dei quali rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|  
|[complex\<float\>](../standard-library/complex-float.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **float***,* il primo dei quali rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|  
|[complex\<long double\>](../standard-library/complex-long-double.md)|La classe modello specializzata in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo `long double`*,* il primo dei quali rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.|  
|[complesso](../standard-library/complex-class.md)|La classe modello descrive un oggetto usato per rappresentare il sistema di numeri complessi e per eseguire operazioni aritmetiche complesse.|  
  
### Valori letterali  
 L'intestazione \<complex\> definisce i seguenti [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) che creano un numero complesso di cui la parte reale è zero e la parte immaginaria è il valore del parametro di input.  
  
|||  
|-|-|  
|`constexpr complex<long double> operator""il(long double d)il(long double d)`<br /><br /> `constexpr complex<long double> operator""il(unsigned long long d)`|Restituisce `complex<long double>{0.0L, static_cast<long double>(d)}`.|  
|`constexpr complex<double> operator""i(long double d)`<br /><br /> `constexpr complex<double> operator""i(unsigned long long d)`|Restituisce `complex<double>{0.0, static_cast<double>(d)}`.|  
|`constexpr complex<float> operator""if(long double d)`<br /><br /> `constexpr complex<float> operator""if(unsigned long long d)`|Restituisce `complex<float>{0.0f, static_cast<float>(d)}`.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)