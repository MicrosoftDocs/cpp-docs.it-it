---
title: "Inizializzazione di tipi scalari | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "classe di archiviazione automatica"
  - "classe di archiviazione automatica, inizializzazione di tipi scalari"
  - "inizializzazione, tipi scalari"
  - "inizializzazione di tipi scalari"
  - "inizializzazione di variabili, tipi scalari"
  - "variabili registro"
  - "tipi scalari"
  - "variabili statiche, inizializzazione"
  - "tipi [C], inizializzazione"
ms.assetid: 73c516f5-c3ad-4d56-ab3b-f2a82b621104
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inizializzazione di tipi scalari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante l'inizializzazione dei tipi scalari, il valore di *assignment\-expression* viene assegnato alla variabile.  Vengono applicate le regole di conversione per l'assegnazione. Per informazioni sulle regole di conversione, vedere [Conversioni di tipi](../c-language/type-conversions-c.md).  
  
## Sintassi  
 `declaration`:  
 *declaration\-specifiers init\-declarator\-list*  opt               **;**  
  
 *declaration\-specifiers*:  
 *storage\-class\-specifier declaration\-specifiers*  opt  
  
 *type\-specifier declaration\-specifiers*  opt  
  
 *type\-qualifier declaration\-specifiers*  opt  
  
 *init\-declarator\-list*:  
 *init\-declarator*  
  
 *init\-declarator\-list*  **,**  *init\-declarator*  
  
 *init\-declarator*:  
 *declarator*  
  
 *declarator*  **\=**  *initializer* \/\* Per l'inizializzazione scalare \*\/  
  
 *initializer*:  
 *assignment\-expression*  
  
 È possibile inizializzare variabili di qualsiasi tipo, a condizione che vengano applicate le regole seguenti:  
  
-   Le variabili dichiarate a livello di ambito file possono essere inizializzate.  Se non si inizializza una variabile in modo esplicito a livello esterno, viene inizializzata su 0 per impostazione predefinita.  
  
-   Un'espressione costante può essere utilizzata per inizializzare qualsiasi variabile globale dichiarata con *storage\-class\-specifier* **static**.  Le variabili dichiarate come **static** vengono inizializzate quando inizia l'esecuzione del programma.  Se non si inizializza in modo esplicito una variabile globale **static**, viene inizializzata per impostazione predefinita su 0 e a ogni membro con un tipo puntatore viene assegnato un puntatore null.  
  
-   Le variabili dichiarate con l'identificatore della classe di archiviazione **auto** o **register** vengono inizializzate ogni volta in cui il controllo dell'esecuzione passa al blocco in cui vengono dichiarate.  Se si omette un inizializzatore dalla dichiarazione di una variabile **auto** o **register**, il valore iniziale della variabile non è definito.  Per i valori automatic e register, l'inizializzatore non è necessariamente costituito da una costante; può essere qualsiasi espressione che includa i valori definiti in precedenza, anche le chiamate di funzione.  
  
-   I valori iniziali per le dichiarazioni delle variabili esterne e per tutte le variabili **statiche**, sia esterne che interne, devono essere espressioni costanti. Per ulteriori informazioni, vedere [Espressioni costanti](../c-language/c-constant-expressions.md). Poiché l'indirizzo di qualsiasi variabile dichiarata esternamente o statica è costante, può essere utilizzato per inizializzare una variabile puntatore **statica** dichiarata internamente.  Tuttavia, l'indirizzo di una variabile **auto** non può essere utilizzato come inizializzatore statico poiché può essere diverso per ogni esecuzione del blocco.  È possibile utilizzare i valori delle costanti o delle variabili per inizializzare le variabili **auto** e **register**.  
  
-   Se la dichiarazione di un identificatore presenta un ambito di blocco e l'identificatore presenta un collegamento esterno, la dichiarazione non può avere un'inizializzazione.  
  
## Esempi  
 Negli esempi riportati di seguito vengono illustrate le inizializzazioni:  
  
```  
int x = 10;   
```  
  
 La variabile Integer `x` viene inizializzata nell'espressione costante `10`.  
  
```  
register int *px = 0;  
```  
  
 Il puntatore `px` viene inizializzato su 0, generando un puntatore "null".  
  
```  
const int c = (3 * 1024);  
```  
  
 In questo esempio viene utilizzata un'espressione costante `(3 * 1024)` per inizializzare `c` in un valore costante che non può essere modificato a causa della parola chiave **const**.  
  
```  
int *b = &x;  
```  
  
 Questa istruzione consente di inizializzare il puntatore `b` con l'indirizzo di un'altra variabile, `x`.  
  
```  
int *const a = &z;  
```  
  
 Il puntatore `a` viene inizializzato con l'indirizzo di una variabile denominata `z`.  Tuttavia, poiché viene specificata come **const**, la variabile `a` può essere solo inizializzata e mai modificata.  Punta sempre allo stesso percorso.  
  
```  
int GLOBAL ;  
  
int function( void )  
{  
    int LOCAL ;  
    static int *lp = &LOCAL;   /* Illegal initialization */  
    static int *gp = &GLOBAL;  /* Legal initialization   */  
    register int *rp = &LOCAL; /* Legal initialization   */  
}  
```  
  
 La variabile globale `GLOBAL` viene dichiarata a livello esterno, quindi ha una durata globale.  La variabile locale `LOCAL` dispone di una classe di archiviazione **auto** e ha un indirizzo solo durante l'esecuzione della funzione in cui viene dichiarata.  Di conseguenza, qualsiasi tentativo di inizializzare la variabile puntatore **statica** `lp` con l'indirizzo di `LOCAL` non è consentito.  La variabile puntatore **statica** `gp` può essere inizializzata nell'indirizzo di `GLOBAL` perché tale indirizzo è sempre lo stesso.  Analogamente, `*rp` può essere inizializzato in quanto `rp` è una variabile locale e può disporre di un inizializzatore non costante.  Ogni volta che viene attivato il blocco, `LOCAL` presenta un nuovo indirizzo, che viene quindi assegnato a `rp`.  
  
## Vedere anche  
 [Inizializzazione](../c-language/initialization.md)