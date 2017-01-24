---
title: "Funzioni ricorsive | Microsoft Docs"
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
  - "chiamate di funzione, ricorsive"
  - "funzioni [C], chiamata in modalità ricorsiva"
  - "funzioni [C], ricorsive"
  - "ricorsive (chiamata di funzioni)"
ms.assetid: 59739040-3081-4006-abbc-9d8423992bce
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni ricorsive
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Qualsiasi funzione in un programma C può essere chiamata in modo ricorsivo, vale a dire che può chiamare se stessa.  Il numero di chiamate ricorsive è limitato alla dimensione dello stack.  Per informazioni sulle opzioni del linker che impostano la dimensione dello stack, vedere l'opzione del linker [\/STACK \(Allocazioni stack\)](../build/reference/stack-stack-allocations.md) \(\/STACK\).  Ogni volta che la funzione viene chiamata, viene allocata nuova archiviazione per i parametri e per le variabili **auto** e **register**, in modo da non sovrascrivere i valori nelle chiamate precedenti, non completate.  I parametri sono solo accessibili direttamente all'istanza della funzione in cui vengono creati.  I parametri precedenti non sono accessibili direttamente a istanze che seguono la funzione.  
  
 Tenere presente che le variabili dichiarate con archiviazione **statica** non richiedono la nuova archiviazione a ogni chiamata ricorsiva.  La relativa archiviazione disponibile esiste per la durata del programma.  Ogni riferimento a tale variabile accede alla stessa area di archiviazione.  
  
## Esempio  
 In questo esempio sono illustrate le chiamate ricorsive:  
  
```  
int factorial( int num );      /* Function prototype */  
  
int main()  
{  
    int result, number;  
    .  
    .  
    .  
    result = factorial( number );  
}  
  
int factorial( int num )      /* Function definition */  
{  
    .  
    .  
    .  
    if ( ( num > 0 ) || ( num <= 10 ) )  
        return( num * factorial( num - 1 ) );  
}  
  
```  
  
## Vedere anche  
 [Chiamate di funzione](../c-language/function-calls.md)