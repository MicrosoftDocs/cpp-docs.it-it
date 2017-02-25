---
title: "Passaggio dei parametri | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: e838ee5f-c2fe-40b0-9a23-8023c949c820
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Passaggio dei parametri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I primi quattro argomenti Integer vengono passati nei registri.  I valori Integer vengono passati \(in ordine da sinistra verso destra\) in RCX, in RDX, in R8 e in R9.  Gli argomenti cinque e superiore vengono passati nello stack.  Tutti gli argomenti sono allineati a destra nei registri.  Di conseguenza, il chiamato può ignorare i bit più significativi del registro e accedere soltanto alla parte del registro necessaria.  
  
 Gli argomenti a virgola mobile e precisione doppia vengono passati in XMM0 – XMM3 \(fino a 4\) con lo slot integer \(RCX, RDX, R8, R9\) che in genere viene utilizzato per lo slot cardinale da ignorare \(vedere l'esempio\) e viceversa.  
  
 i tipi , matrici e le stringhe di[\_\_m128](../cpp/m128.md) non sono mai stati passati per valore immediato ma anziché un puntatore passato alla memoria allocata dal chiamante.  Strutture o unioni di \_\_m64 di dimensioni 8, 16, 32, o 64 bit e vengono passati come se fossero Integer della stessa dimensione.  Strutture o unioni diverso da queste dimensioni vengono passati come puntatore alla memoria allocata dal chiamante.  Per questi tipi aggregati passati come puntatore \(incluso \_\_m128\), per la memoria temporanea allocata dal chiamante verrà utilizzato un allineamento a 16 byte.  
  
 Le funzioni intrinseche che non allocano spazio dello stack né chiamano altre funzioni possono utilizzare altri registri volatili per passare argomenti di registro aggiuntivi, poiché non esiste alcuna relazione tra il compilatore e l'implementazione delle funzioni intrinseche.  Questo consente di migliorare ulteriormente le prestazioni.  
  
 Spetta al chiamato eseguire, se necessario, il dump dei parametri di registro nel relativo spazio di shadow.  
  
 Nella tabella riportata di seguito è indicato il modo in cui vengono passati i parametri:  
  
|Tipo di parametro|Modalità di passaggio|  
|-----------------------|---------------------------|  
|A virgola mobile|I primi 4 parametri vengono passati in XMM0\-XMM3.  Gli altri vengono passati nello stack.|  
|Integer|I primi 4 parametri vengono passati in RCX, RDX, R8, R9.  Gli altri vengono passati nello stack.|  
|Aggregati \(8, 16, 32 o 64 bit\) e \_\_m64|I primi 4 parametri vengono passati in RCX, RDX, R8, R9.  Gli altri vengono passati nello stack.|  
|Aggregati \(altro\)|Per puntatore.  I primi 4 parametri vengono passati come puntatori in RCX, RDX, R8 e R9.|  
|\_\_m128|Per puntatore.  I primi 4 parametri vengono passati come puntatori in RCX, RDX, R8 e R9.|  
  
## Esempio 1 di passaggio di argomenti \(tutti integer\)  
  
```  
func1(int a, int b, int c, int d, int e);    
// a in RCX, b in RDX, c in R8, d in R9, e pushed on stack  
```  
  
## Esempio 2 di passaggio di argomenti \(tutti a virgola mobile\)  
  
```  
func2(float a, double b, float c, double d, float e);    
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, e pushed on stack  
```  
  
## Esempio 3 di passaggio di argomenti \(sia integer che a virgola mobile\)  
  
```  
func3(int a, double b, int c, float d);    
// a in RCX, b in XMM1, c in R8, d in XMM3  
```  
  
## Esempio 4 di passaggio di argomenti \(\_\_m64, \_\_m128 e aggregati\)  
  
```  
func4(__m64 a, _m128 b, struct c, float d);  
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3  
```  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)