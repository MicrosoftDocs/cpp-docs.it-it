---
title: "&lt;chrono&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "chrono/std::chrono::nanoseconds"
  - "chrono/std::chrono::minutes"
  - "chrono/std::chrono::seconds"
  - "<chrono>"
  - "chrono/std::chrono::hours"
  - "chrono/std::chrono::milliseconds"
  - "chrono/std::chrono::microseconds"
dev_langs: 
  - "C++"
ms.assetid: 844de749-f306-482e-89bc-6f53c99c8324
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# &lt;chrono&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Includere l'intestazione standard \<chrono\> per definire le classi e funzioni che rappresentano e modificano durate e istanti temporali.  
  
 **\(Visual Studio 2015:\)** L'implementazione di `steady_clock` è stata modificata per soddisfare i requisiti standard C\+\+ per tenuta e monotonicità.  `steady_clock` ora è basato su QueryPerformanceCounter\(\) e `high_resolution_clock` è ora un typedef per `steady_clock`.  Di conseguenza in Visual C\+\+ `steady_clock::time_point` è ora un typedef per `chrono::time_point<steady_clock>`; tuttavia, ciò non vale necessariamente per altre implementazioni.  
  
## Sintassi  
  
```cpp  
#include <chrono>  
```  
  
### Valori letterali  
 I valori letterali nell’intestazione \<chrono\> sono i membri dei valori letterali nello spazio dei nomi incorporato literals::chrono\_literals.  Per ulteriori informazioni, vedere [valori letterali di chrono](../standard-library/chrono-literals.md).  
  
|||  
|-|-|  
|operator "" h\(unsigned long long Val\) operator "" h\(long double Val\)|Specifica che il valore rappresenta le ore.|  
|operator "" min\(unsigned long long Val\)  operator "" min\(long double Val\)|Specifica che il valore rappresenta i minuti.|  
|operator "" s\(unsigned long long Val\)operator "" s\(long double Val\)|Specifica che il valore rappresenta i secondi.|  
|operator "" ms\(unsigned long long Val\)operator "" ms\(long double Val\)|Specifica che il valore rappresenta i millisecondi.|  
|operator "" us\(unsigned long long Val\)operator "" us\(long double Val\)|Specifica che il valore rappresenta i microsecondi.|  
|operator "" ns\(unsigned long long Val\)operator "" ns\(long double Val\)|Specifica che il valore rappresenta i nanosecondi.|  
  
### Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe duration](../standard-library/duration-class.md)|Descrive un tipo che contiene un intervallo di tempo.|  
|[Classe time\_point](../standard-library/time-point-class.md)|Descrive un tipo che rappresenta un punto nel tempo.|  
  
### Struct  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Struttura common\_type](../standard-library/common-type-structure.md)|Descrive le specializzazioni della classe modello [common\_type](../standard-library/common-type-class.md) per la creazione di istanze di `duration` e `time_point`.|  
|[Struttura duration\_values](../standard-library/duration-values-structure.md)|Fornisce valori specifici per il parametro di modello `duration` `Rep`.|  
|[Struct steady\_clock](../standard-library/steady-clock-struct.md)|Rappresenta un clock `steady`.|  
|[Struttura system\_clock](../standard-library/system-clock-structure.md)|Rappresenta un *tipo di clock* basato sull'orologio in tempo reale del sistema.|  
|[Struttura treat\_as\_floating\_point](../standard-library/treat-as-floating-point-structure.md)|Specifica se un tipo può essere considerato un tipo a virgola mobile.|  
  
### Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione duration\_cast](../Topic/duration_cast%20Function.md)|Esegue il cast di un oggetto `duration` in un tipo specificato.|  
|[Funzione time\_point\_cast](../Topic/time_point_cast%20Function.md)|Esegue il cast di un oggetto `time_point` in un tipo specificato.|  
  
### Operatori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore operator\- \(Libreria dei modelli standard\)](../Topic/operator-%20Operator%20\(STL\)1.md)|Operatore di sottrazione o negazione di oggetti `duration` e `time_point`.|  
|[Operatore operator\!\= \(Libreria dei modelli standard\)](../Topic/operator!=%20Operator%20\(STL\).md)|Operatore di disuguaglianza che viene usato con oggetti `duration` o `time_point`.|  
|[Operatore Modulo \(STL\)](../Topic/operator%20modulo%20\(STL\).md)|Operatore per le operazioni moduli sugli oggetti `duration`.|  
|[Operatore operator\* \(Libreria dei modelli standard\)](../Topic/operator*%20Operator%20\(STL\).md)|Operatore di moltiplicazione per gli oggetti `duration`.|  
|[Operatore operator\/ \(Libreria dei modelli standard\)](../Topic/operator-%20Operator%20\(STL\)2.md)|Operatore di divisione per oggetti `duration`.|  
|[Operatore operator\+ \(Libreria dei modelli standard\)](../Topic/operator+%20Operator%20\(STL\).md)|Addiziona gli oggetti `duration` e `time_point`.|  
|[Operatore operator\< \(Libreria dei modelli standard\)](../Topic/operator%3C%20Operator%20\(STL\).md)|Determina se un oggetto `duration` o `time_point` è minore di un altro oggetto `duration` o `time_point`.|  
|[Operatore operator\<\= \(Libreria dei modelli standard\)](../Topic/operator%3C=%20Operator%20\(STL\).md)|Determina se un oggetto `duration` o `time_point` è minore di o uguale a un altro oggetto `duration` o `time_point`.|  
|[Operatore operator\=\= \(Libreria dei modelli standard\)](../Topic/operator==%20Operator%20\(STL\).md)|Determina se due oggetti `duration` rappresentano gli intervalli di tempo che hanno la stessa lunghezza, o se due oggetti `time_point` rappresentano lo stesso punto nel tempo.|  
|[Operatore operator\> \(Libreria dei modelli standard\)](../Topic/operator%3E%20Operator%20\(STL\).md)|Determina se un oggetto `duration` o `time_point` è maggiore di un altro oggetto `duration` o `time_point`.|  
|[Operatore operator\>\= \(Libreria dei modelli standard\)](../Topic/operator%3E=%20Operator%20\(STL\).md)|Determina se un oggetto `duration` o `time_point` è maggiore o uguale a un altro oggetto `duration` o `time_point`.|  
  
### Tipi di durata predefiniti  
 Per altre informazioni sui tipi di rapporto usati nei seguenti typedef, vedere [\<ratio\>](../standard-library/ratio.md).  
  
|Typedef|Descrizione|  
|-------------|-----------------|  
|`typedef duration<long long, nano> nanoseconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un nanosecondo.|  
|`typedef duration<long long, micro> microseconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un microsecondo.|  
|`typedef duration<long long, milli> milliseconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un millisecondo.|  
|`typedef duration<long long> seconds;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un secondo.|  
|`typedef duration<int, ratio<60> > minutes;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un minuto.|  
|`typedef duration<int, ratio<3600> > hours;`|Sinonimo di un tipo `duration` con un periodo di cicli macchina di un'ora.|  
  
### Valori letterali  
 **\(C\+\+11\)**L'intestazione \<chrono\> definisce i seguenti [valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md) che è possibile usare per maggiore praticità, indipendenza dai tipi e gestibilità del codice.  Questi valori letterali sono definiti nello spazio dei nomi inline `literals::chrono_literals` e sono in ambito quando std::chrono è nell'ambito.  
  
|Valore letterale|Descrizione|  
|----------------------|-----------------|  
|chrono::hours operator "" h\(unsigned long long Val\)|Specifica le ore come valore integrale.|  
|chrono::duration\<double, ratio\<3600\> \> operator "" h\(long double Val\)|Specifica le ore come valore a virgola mobile.|  
|chrono::minutes \(operator "" min\)\(unsigned long long Val\)|Specifica i minuti come valore integrale.|  
|chrono::duration\<double, ratio\<60\> \> \(operator "" min\)\( long double Val\)|Specifica i minuti come valore a virgola mobile.|  
|chrono::seconds operator "" s\(unsigned long long Val\)|Specifica i minuti come valore integrale.|  
|chrono::duration\<double\> operator "" s\(long double Val\)|Specifica i secondi come valore a virgola mobile.|  
|chrono::milliseconds operator "" ms\(unsigned long long Val\)|Specifica i millisecondi come valore integrale.|  
|chrono::duration\<double, milli\> operator "" ms\(long double Val\)|Specifica i millisecondi come valore a virgola mobile.|  
|chrono::microseconds operator "" us\(unsigned long long Val\)|Specifica i microsecondi come valore integrale.|  
|chrono::duration\<double, micro\> operator "" us\(long double Val\)|Specifica i microsecondi come valore a virgola mobile.|  
|chrono::nanoseconds operator "" ns\(unsigned long long Val\)|Specifica i nanosecondi come valore integrale.|  
|chrono::duration\<double, nano\> operator "" ns\(long double Val\)|Specifica i nanosecondi come valore a virgola mobile.|  
|||  
  
## Note  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)