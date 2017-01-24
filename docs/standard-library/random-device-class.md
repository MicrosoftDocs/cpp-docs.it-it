---
title: "Classe random_device | Microsoft Docs"
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
  - "random_device"
  - "random/std::tr1::random_device"
  - "tr1.random_device"
  - "std::tr1::random_device"
  - "std.tr1.random_device"
  - "tr1::random_device"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "random_device (classe)"
  - "random_device (classe) [TR1]"
ms.assetid: 4393d515-0cb6-4e0d-a2ba-c780f05dc1bf
caps.latest.revision: 27
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe random_device
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una sequenza casuale da un dispositivo esterno.  
  
## Sintassi  
  
```  
class random_device { public:     typedef unsigned int result_type;     // cosntructor     explicit random_device(const std::string& token = "");     // properties     static result_type min();     static result_type max();     double entropy() const;     // generate     result_type operator()();     // no-copy functions     random_device(const random_device&) = delete;     void operator=(const random_device&) = delete; };  
```  
  
## Membri  
  
|||  
|-|-|  
|[random\_device::random\_device](../Topic/random_device::random_device.md)|[random\_device::entropy](../Topic/random_device::entropy.md)|  
|[random\_device::operator\(\)](../Topic/random_device::operator\(\).md)||  
  
## Note  
 La classe descrive un'origine di numeri casuali e può, ma non deve, essere non deterministica o crittograficamente sicura in base allo standard C\+\+ ISO.  Nell'implementazione di Visual Studio i valori prodotti sono non deterministici e crittograficamente sicuri, ma l'esecuzione risulta più lenta rispetto ai generatori creati da motori e adattatori del motore, ad esempio [mersenne\_twister\_engine](../standard-library/mersenne-twister-engine-class.md), il motore veloce e di qualità elevata scelto per la maggior parte delle applicazioni.  
  
 I risultati di `random_device` sono distribuiti in modo uniforme nell'intervallo chiuso \[`0, 2`<sup>32</sup>\).  
  
 Non è garantito che `random_device` abbia come risultato una chiamata non di blocco.  
  
 In genere, `random_device` è usato per il seeding di altri generatori creati con motori o adattatori del motore.  Per altre informazioni, vedere [\<random\>](../standard-library/random.md).  
  
## Esempio  
 Il codice seguente illustra la funzionalità di base di questa classe e presenta esempi di risultati.  A causa della natura non deterministica di `random_device`, i valori casuali mostrati nella sezione **Output** non corrisponderanno ai risultati specifici dell'utente.  Questo comportamento è normale e previsto.  
  
```cpp  
// random_device_engine.cpp   
// cl.exe /W4 /nologo /EHsc /MTd   
#include <random>   
#include <iostream>   
using namespace std;  
  
int main()   
{   
    random_device gen;   
  
    cout << "entropy == " << gen.entropy() << endl;   
    cout << "min == " << gen.min() << endl;   
    cout << "max == " << gen.max() << endl;   
  
    cout << "a random value == " << gen() << endl;   
    cout << "a random value == " << gen() << endl;   
    cout << "a random value == " << gen() << endl;   
}  
```  
  
 **Output:**  
  
  **entropy \=\= 32**  
**min \=\= 0**  
**max \=\= 4294967295**  
**10 random values: 4183829181 1454391608 1176278697 2468830096 3959347222 1803123400 1339590545 1304896877 604088490 2293276253** Questo esempio è semplicistico e non rappresentativo dei casi d'utilizzo generali per questo generatore.  Per un esempio di codice più rappresentativo, vedere [\<random\>](../standard-library/random.md).  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)