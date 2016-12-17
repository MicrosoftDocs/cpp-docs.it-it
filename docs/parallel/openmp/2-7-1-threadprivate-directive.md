---
title: "2.7.1 threadprivate Directive | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 08e0b70f-5359-4607-b0ca-38c2d570d7b3
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.1 threadprivate Directive
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`threadprivate` la direttiva in ambito file denominato, l'spazio di nomi\-ambito, o le variabili statiche di ambito blocco specificate in variabile\-elenco privato a un thread.  *variabile\-elenco* è un elenco delimitato da virgole di variabili che non dispongono di un tipo incompleto.  La sintassi di `threadprivate` la direttiva è la seguente:  
  
```  
#pragma omp threadprivate(variable-list) new-line  
```  
  
 Ciascuna copia di un oggetto `threadprivate` la variabile viene inizializzata una volta, in un punto non specificato nel programma prima del primo riferimento a tale copia e nel modo consueto \(ovvero, come la copia master verrà inizializzata in un'esecuzione seriale del programma\).  Si noti che se un oggetto viene fatto riferimento in un inizializzatore esplicito di un oggetto `threadprivate` la variabile e il valore dell'oggetto viene modificato prima del primo riferimento a una copia della variabile, il comportamento sarà non specificato.  
  
 Come a una variabile privata, un thread non deve fare riferimento alla copia di un altro thread di un oggetto `threadprivate` oggetto.  Durante le aree seriali e le aree master del programma, i riferimenti saranno la copia master del thread dell'oggetto.  
  
 Dopo la prima area parallela esegue, i dati in `threadprivate` gli oggetti è garantito mantenere solo se il meccanismo dinamico dei thread è stato disabilitato e se il numero di thread rimane invariato per tutte le aree parallele.  
  
 Le restrizioni a `threadprivate` la direttiva è la seguente:  
  
-   In `threadprivate` la direttiva per le variabili dello spazio dei nomi\-ambito o di ambito file deve trovarsi all'esterno di qualsiasi definizione o dichiarazione e deve precedere da tutti i riferimenti alle variabili del relativo elenco.  
  
-   ogni variabile in variabile\-elenco la proprietà di un oggetto `threadprivate` la direttiva all'ambito dello spazio dei nomi o del file deve fare riferimento a una dichiarazione di variabile in l o dello spazio dei nomi del file che precede lessicale la direttiva.  
  
-   In `threadprivate` la direttiva per le variabili statiche di ambito blocco deve essere inserito nella variabile e non in un ambito annidato.  La direttiva deve precedere da tutti i riferimenti alle variabili del relativo elenco.  
  
-   ogni variabile in variabile\-elenco la proprietà di un oggetto `threadprivate` la direttiva in blocco deve fare riferimento a una dichiarazione di variabile nello stesso ambito che precede lessicale la direttiva.  La dichiarazione di variabile necessario utilizzare l'identificatore statico della classe di archiviazione.  
  
-   Se una variabile specificata in un oggetto `threadprivate` direttiva in un'unica unità di conversione, deve essere specificata in un oggetto  `threadprivate` direttiva in ogni unità di conversione in cui è dichiarata.  
  
-   In `threadprivate` la variabile non sia inclusa in una clausola tranne  `copyin`,  `copyprivate`,  `schedule`,  `num_threads`, o  **se** clausola.  
  
-   L'indirizzo di un oggetto `threadprivate` la variabile non è una costante address.  
  
-   In `threadprivate` la variabile non deve avere un tipo incompleto o un tipo di riferimento.  
  
-   In `threadprivate` la variabile con il tipo di classe non POD deve disporre di un costruttore di copia accessibile e ambiguità se viene dichiarata con un inizializzatore esplicito.  
  
 Nell'esempio seguente viene illustrato come modificare una variabile visualizzato in un inizializzatore può causare un comportamento non specificato e anche come evitare questo problema utilizzando un oggetto ausiliario e un costruttore di copia.  
  
```  
int x = 1;  
T a(x);  
const T b_aux(x); /* Capture value of x = 1 */  
T b(b_aux);  
#pragma omp threadprivate(a, b)  
  
void f(int n) {  
   x++;  
   #pragma omp parallel for  
   /* In each thread:  
   * Object a is constructed from x (with value 1 or 2?)  
   * Object b is copy-constructed from b_aux  
   */  
   for (int i=0; i<n; i++) {  
      g(a, b); /* Value of a is unspecified. */  
   }  
}  
```  
  
## riferimenti incrociati:  
  
-   I thread dinamici, vedere [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   `OMP_DYNAMIC` la variabile di ambiente, vedere  [parte 4,3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.