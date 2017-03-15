---
title: "2.7.2.6 reduction | Microsoft Docs"
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
ms.assetid: e7630a15-2978-4dbe-a29b-3a46371a0151
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.6 reduction
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa clausola esegue una riduzione delle variabili scalari visualizzati in *variabile\-elenco*, con l'operatore op.  La sintassi di `reduction` la clausola è la seguente:  
  
```  
  
reduction(  
op  
:  
variable-list  
)  
  
```  
  
 Una riduzione in genere viene specificata per un'istruzione con uno dei formati seguenti:  
  
```  
  
        x     =  x     op     expr  
x     binop=  expr  
x     =  expr     op     x            (except for subtraction)  
x++  
++x  
x--  
--x  
```  
  
 Dove:  
  
 *x*  
 Una delle variabili di riduzione specificate in `list`.  
  
 *variabile\-elenco*  
 Un elenco delimitato da virgole di variabili scalari di riduzione.  
  
 *expr*  
 un'espressione con tipo scalare che non fa riferimento *x*.  
  
 `op`  
 Non un operatore di overload ma uno di \+, \-, \*, &, ^, &#124;, &&, o &#124;&#124;.  
  
 `binop`  
 Non un operatore di overload ma uno di \+, \-, \*, &, ^, o &#124;.  
  
 Di seguito viene riportato un esempio di `reduction` clausola:  
  
```  
#pragma omp parallel for reduction(+: a, y) reduction(||: am)  
for (i=0; i<n; i++) {  
   a += b[i];  
   y = sum(y, c[i]);  
   am = am || b[i] == c[i];  
}  
```  
  
 Come mostrato nell'esempio, un operatore può essere nascosto in una chiamata di funzione.  È necessario prestare attenzione affinché l'operatore ha specificato in `reduction` la clausola corrisponde l'operazione di riduzione.  
  
 Anche se l'operando di &#124;&#124; l'operatore non ha effetti collaterali in questo esempio, sono consentiti, ma devono essere utilizzati con attenzione.  In questo contesto, un effetto secondario che è garantito non verificarsi durante l'esecuzione sequenziale del ciclo può verificarsi durante l'esecuzione parallela.  Questa differenza può verificarsi perché l'ordine di esecuzione delle iterazioni è indeterminato.  
  
 L'operatore viene utilizzato per determinare il valore iniziale di tutte le variabili private utilizzate dal compilatore per la riduzione e per determinare l'operatore del completamento.  Specificare l'operatore in modo esplicito consente che l'istruzione di riduzione siaambito lessicale del costrutto.  qualsiasi numero `reduction` le clausole possono essere specificate nella direttiva, ma una variabile può apparire nel massimo una  `reduction` clausola per tale direttiva.  
  
 Una copia privata di ciascuna variabile in variabile\-elenco viene creato, uno per ogni thread, come se `private` la clausola è stata utilizzata.  La copia privata viene inizializzata all'operatore \(vedere la seguente tabella.  
  
 Alla fine dell'area per cui `reduction` la clausola è stata specificata, l'oggetto originale viene aggiornata per riflettere il risultato della combinazione del valore originale con il valore finale di tutte le copie private utilizzando l'operatore specificato.  Gli operatori sono tutti di riduzione associativi \(ad eccezione di sottrazione\) e il compilatore può riassociare liberamente il calcolo del valore finale.  \(I risultati parziali di una riduzione di sottrazione vengono aggiunti per formare il valore finale.\)  
  
 Il valore dell'oggetto originale indeterminato quando il primo thread raggiunge la clausola contenitore e mantiene tale finché il calcolo di riduzione non sia completo.  In genere, il calcolo verrà completo alla fine del costrutto; tuttavia, se `reduction` la clausola viene utilizzata in un costrutto a cui  `nowait` viene applicato, il valore dell'oggetto originale rimane indeterminato finché eseguire una sincronizzazione di barriera per garantire che tutti i thread abbiano completato  `reduction` clausola.  
  
 Nella tabella seguente sono elencati gli operatori che sono validi e i relativi valori canonici di inizializzazione.  Il valore effettivo di inizializzazione sarà coerente con il tipo di dati della variabile di riduzione.  
  
|Operatore|Inizializzazione|  
|---------------|----------------------|  
|\+|0|  
|\*|1|  
|\-|0|  
|&|~0|  
|&#124;|0|  
|^|0|  
|&&|1|  
|&#124;&#124;|0|  
  
 Le restrizioni a `reduction` la clausola è la seguente:  
  
-   Il tipo delle variabili in `reduction` la clausola deve essere valida per l'operatore di riduzione eccetto i tipi di puntatore e i tipi di riferimenti non sono mai consentiti.  
  
-   Una variabile specificata in `reduction` la clausola non deve essere  **const**\- qualificato.  
  
-   Variabili che sono private in un'area parallela o visualizzati in `reduction` clausola di un oggetto  **parallelo** la direttiva non può essere specificata in un oggetto  `reduction` clausola in una direttiva di suddivisione del lavoro associato al costrutto parallelo.  
  
    ```  
    #pragma omp parallel private(y)  
    { /* ERROR - private variable y cannot be specified  
                 in a reduction clause */  
       #pragma omp for reduction(+: y)  
       for (i=0; i<n; i++)  
          y += b[i];  
    }  
  
    /* ERROR - variable x cannot be specified in both  
               a shared and a reduction clause */  
    #pragma omp parallel for shared(x) reduction(+: x)  
    ```