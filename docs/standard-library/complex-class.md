---
title: "Classe complex | Microsoft Docs"
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
  - "complex"
  - "std::complex"
  - "std.complex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "complex (classe)"
  - "numeri complessi"
ms.assetid: d6492e1c-5eba-4bc5-835b-2a88001a5868
caps.latest.revision: 18
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe complex
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che contiene due oggetti di tipo **Tipo**, uno che rappresenta la parte reale di numero complesso e uno che rappresenta la parte immaginario.  
  
## Sintassi  
  
```  
  
   template<class   
   Type  
   >  
class complex  
```  
  
## Note  
 Un oggetto di classe **Tipo**:  
  
-   Dispone di un costruttore predefinito pubblico, un distruttore, un costruttore di copia e un operatore di assegnazione con comportamento convenzionale.  
  
-   È possibile assegnare integer o valori a virgola mobile, o un cast di tipo su tali valori con comportamento convenzionale.  
  
-   Definisce gli operatori aritmetici e funzioni matematiche, se necessario, definiti per i tipi a virgola mobile con comportamento convenzionale.  
  
 In particolare, non sottile differenza può esistere tra la costruzione di copia e la costruzione di impostazione predefinita seguite dall'assegnazione.  Nessuna delle operazioni sugli oggetti di classe **Tipo** possono generare eccezioni.  
  
 Le specializzazioni esplicite complesso della classe modello disponibili per i tre tipi a virgola mobile.  In questa implementazione, un valore di qualsiasi altro tipo **Tipo** è eseguire a **Double** per i calcoli, con il risultato di **Double** assegnato all'oggetto archiviato di tipo **Tipo**`.`  
  
### Costruttori  
  
|||  
|-|-|  
|[complesso](../Topic/complex::complex.md)|Crea un numero complesso con le parti reali e immaginarie o specificate come copia di un altro numero complesso.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[Tipo di valore](../Topic/complex::value_type.md)|Un tipo che rappresenta il tipo di dati utilizzato per rappresentare le parti reali e immaginarie di un numero complesso.|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[imag](../Topic/complex::imag.md)|Estrae la parte immaginaria di un numero complesso.|  
|[real](../Topic/complex::real.md)|Estrae la parte reale di un numero complesso.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\*\=](../Topic/complex::operator*=.md)|Moltiplica un numero complesso di destinazione per un fattore, che può essere complesso o è dello stesso tipo di sono le parti reali e immaginarie del numero complesso.|  
|[operatore\+\=](../Topic/complex::operator+=.md)|Aggiunge un numero a un numero complesso di destinazione, dove il numero aggiunto può essere complesso o dello stesso tipo di sono le parti reali e immaginarie il numero complesso a cui viene aggiunto.|  
|[operatore\-\=](../Topic/complex::operator-=1.md)|Sottrae un numero da un numero complesso di destinazione, dove il numero tratto può essere complesso o dello stesso tipo di sono le parti reali e immaginarie il numero complesso a cui viene aggiunto.|  
|[operator\/\=](../Topic/complex::operator-=2.md)|Divide un numero complesso di destinazione da un divisore, che può essere complesso o è dello stesso tipo di sono le parti reali e immaginarie del numero complesso.|  
|[operator\=](../Topic/complex::operator=.md)|Assegna un numero a un numero complesso di destinazione, dove il numero assegnato può essere complesso o dello stesso tipo di sono le parti reali e immaginarie del numero complesso a cui è assegnata.|  
  
## Requisiti  
 **Intestazione**: \<complesso\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [complex Members](http://msdn.microsoft.com/it-it/d5c4466c-43a0-4817-aca1-9a5d492dae28)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)