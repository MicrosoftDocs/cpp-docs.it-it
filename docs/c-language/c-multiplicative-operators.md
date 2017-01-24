---
title: "Operatori di moltiplicazione C | Microsoft Docs"
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
  - "% (operatore)"
  - "/ (operatore)"
  - "/ (operatore), operatori di moltiplicazione"
  - "operatori aritmetici [C++], operatori di moltiplicazione"
  - "moltiplicazione (operatore) [C++], operatori di moltiplicazione"
  - "operatori [C], moltiplicazione"
  - "resto (operatore) (%)"
  - "operatore barra (/)"
ms.assetid: 495471c9-319b-4eb4-bd97-039a025fd3a9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori di moltiplicazione C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori di moltiplicazione eseguono operazioni di moltiplicazione \(**\***\), divisione \(**\/**\) e resto \(`%`\).  
  
 **Sintassi**  
  
 *multiplicative\-expression*:  
 *cast\-expression*  
  
 *multiplicative\-expression*  **\***  *cast\-expression*  
  
 *multiplicative\-expression*  **\/**  *cast\-expression*  
  
 *multiplicative\-expression*  **%**  *cast\-expression*  
  
 Gli operandi dell'operatore di resto \(`%`\) devono essere integrali.  Gli operatori di moltiplicazione \(**\***\) e di divisione \(**\/**\) possono accettare operandi di tipo integrale o mobile; i tipi degli operandi possono essere diversi.  
  
 Gli operatori di moltiplicazione eseguono le tipiche conversioni aritmetiche sugli operandi.  Il tipo del risultato è il tipo degli operandi in seguito alla conversione.  
  
> [!NOTE]
>  Poiché le conversioni eseguite dagli operatori di moltiplicazione non consentono condizioni di overflow o di underflow, le informazioni potrebbero essere perse se il risultato di un'operazione di moltiplicazione non può essere rappresentato nel tipo degli operandi in seguito alla conversione.  
  
 Gli operatori di moltiplicazione di C sono vengono descritti di seguito:  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|**\***|L'operatore di moltiplicazione consente ai suoi due operandi di essere moltiplicati.|  
|**\/**|L’operatore di divisione consente al primo operando di essere diviso per il secondo.  Se due operandi del numero intero vengono divisi e il risultato non è un numero intero, questo viene troncato in base alle regole seguenti:|  
||-   Il risultato della divisione per 0 non è definito in base allo standard ANSI C.  Il compilatore C Microsoft genera un errore in fase di compilazione o di esecuzione.|  
||-   Se entrambi gli operandi sono positivi o senza segno, il risultato viene troncato verso 0.|  
||-   Se uno degli operandi è negativo, se il risultato dell'operazione è il numero intero più grande inferiore o uguale al quoziente algebrico o se è il numero intero più piccolo maggiore o uguale al quoziente algebrico è definito dall'implementazione. \(Vedere la sezione Microsoft specifica di seguito riportata\).|  
|`%`|Il risultato dell'operatore di resto è il resto quando il primo operando viene diviso per il secondo.  Quando la divisione non è esatta, il risultato è determinato dalle seguenti regole:|  
||-   Se l'operatore destro è zero, il risultato sarà non definito.|  
||-   Se entrambi gli operandi sono positivi o senza segno, il risultato sarà positivo.|  
||-   Se uno degli operandi è negativo e il risultato non è corretto, il risultato è definito dall'implementazione. \(Vedere la sezione Microsoft specifica di seguito riportata\).|  
  
 **Sezione specifica Microsoft**  
  
 Nella divisione in cui uno degli operandi è negativo, la direzione del troncamento è verso 0.  
  
 Se qualsiasi operazione è negativa nella divisione con l'operatore di resto, il risultato avrà lo stesso segno del dividendo \(il primo operando nell'espressione\).  
  
 **Fine sezione specifica Microsoft**  
  
## Esempi  
 Le dichiarazioni illustrate vengono utilizzate per gli esempi seguenti:  
  
```  
int i = 10, j = 3, n;  
double x = 2.0, y;  
```  
  
 Questa istruzione utilizza l'operatore di moltiplicazione:  
  
```  
y = x * i;  
```  
  
 In questo caso, `x` viene moltiplicato per `i` per dare il valore 20.0.  Il risultato ha il tipo **double**.  
  
```  
n = i / j;  
```  
  
 In questo esempio 10 è diviso per 3.  Il risultato viene troncato verso 0, restituendo il valore intero 3.  
  
```  
n = i % j;  
```  
  
 Questa istruzione assegna `n` il resto del numero intero, 1 quando 10 viene diviso per 3.  
  
 **Sezione specifica Microsoft**  
  
 Il segno del resto è uguale al segno del dividendo.  Di seguito è riportato un esempio.  
  
```  
50 % -6 = 2  
-50 % 6 = -2  
```  
  
 In ogni caso, `50` e `2` hanno lo stesso segno.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Operatori di moltiplicazione e operatori modulo](../cpp/multiplicative-operators-and-the-modulus-operator.md)