---
title: 2.7.1 direttiva threadprivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 08e0b70f-5359-4607-b0ca-38c2d570d7b3
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 22bb7f477be397f01ee4bd82f472ff26a26ce811
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="271-threadprivate-directive"></a>2.7.1 Direttiva threadprivate
Il `threadprivate` direttiva rende l'ambito file denominato, ambito spazio dei nomi o variabili statiche con ambito blocco specificate nella *elenco variabili* privata di un thread. *elenco di variabili* è un elenco delimitato da virgole delle variabili che non dispone di un tipo incompleto. La sintassi del `threadprivate` direttiva è come segue:  
  
```  
#pragma omp threadprivate(variable-list) new-line  
```  
  
 Ogni copia di un `threadprivate` variabile viene inizializzata una sola volta, in un momento specificato nel programma prima del primo riferimento a tale copia e, nel modo consueto (ad esempio, come la copia master verrebbe inizializzata durante l'esecuzione del programma seriale). Si noti che se un oggetto viene fatto riferimento in un inizializzatore esplicito di un `threadprivate` variabile e il valore dell'oggetto viene modificato prima il primo riferimento a una copia della variabile, quindi non è specificato il comportamento.  
  
 Come con qualsiasi variabile privata, un thread non deve fare riferimento a copia di un altro thread di un `threadprivate` oggetto. Durante seriale e regioni principale del programma, i riferimenti saranno quello di copia del thread principale dell'oggetto.  
  
 Dopo aver eseguito la prima area parallela, i dati di `threadprivate` è garantito che gli oggetti vengono mantenute solo se il meccanismo di thread dinamico è stato disabilitato e se il numero di thread rimane invariato per tutte le aree parallele.  
  
 Le restrizioni per il `threadprivate` direttiva sono i seguenti:  
  
-   Oggetto `threadprivate` direttiva per le variabili di ambito file o di ambito dello spazio dei nomi deve trovarsi all'esterno di qualsiasi definizione o dichiarazione e deve precedere a livello lessicale tutti i riferimenti a una delle variabili nel relativo elenco.  
  
-   Ogni variabile di *elenco variabili* di un `threadprivate` direttiva in ambito file o spazio dei nomi deve fare riferimento a una dichiarazione di variabile nell'ambito dello spazio dei nomi o di file che deve precede la direttiva.  
  
-   Oggetto `threadprivate` la direttiva per le variabili statiche con ambito blocco deve trovarsi nell'ambito della variabile e non in un ambito annidato. La direttiva deve precedere a livello lessicale tutti i riferimenti a una delle variabili nel relativo elenco.  
  
-   Ogni variabile di *elenco variabili* di un `threadprivate` direttiva nell'ambito del blocco deve fare riferimento a una dichiarazione di variabile nello stesso ambito che deve precede la direttiva. La dichiarazione di variabile è necessario utilizzare l'identificatore di classe di archiviazione statica.  
  
-   Se si specifica una variabile un `threadprivate` direttiva in un'unità di conversione, deve essere specificato un `threadprivate` direttiva in ogni unità di conversione in cui viene dichiarato.  
  
-   A `threadprivate` variabile non deve trovarsi in qualsiasi clausola, ad eccezione di `copyin`, `copyprivate`, `schedule`, `num_threads`, o **se** clausola.  
  
-   L'indirizzo di un `threadprivate` la variabile non è una costante di indirizzo.  
  
-   Oggetto `threadprivate` variabile non deve avere un tipo incompleto o un tipo riferimento.  
  
-   Oggetto `threadprivate` variabile con tipo di classe non POD deve avere un costruttore di copia accessibile, non ambiguo, se è dichiarata con un inizializzatore esplicito.  
  
 Nell'esempio seguente viene illustrato come modificare una variabile che viene visualizzato in un inizializzatore di può causare un comportamento non specificato, nonché come evitare questo problema utilizzando un oggetto ausiliario e un costruttore di copia.  
  
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
  
## <a name="cross-references"></a>Riferimenti:  
  
-   Thread dinamico, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.  
  
-   `OMP_DYNAMIC`vedere variabile di ambiente [sezione 4.3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.