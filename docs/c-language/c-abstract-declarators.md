---
title: "Dichiaratori astratti C | Microsoft Docs"
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
helpviewer_keywords: 
  - "dichiarazioni astratte"
  - "dichiaratori, abstract"
ms.assetid: 6a556ad7-0555-421a-aa02-294d77cda8b5
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Dichiaratori astratti C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un dichiaratore astratto è un dichiaratore senza un identificatore, composto da uno o più puntatori, matrici o modificatori di funzione.  Il modificatore del puntatore \(**\***\) precede sempre l'identificatore contenuto in un dichiaratore; i modificatori di matrice \(**\[ \]**\) e funzione \( **\( \)** \) invece seguono l'identificatore.  Partendo da questo presupposto, è possibile determinare se l'identificatore dovrà apparire in un dichiaratore astratto e interpretare il dichiaratore di conseguenza.  Per ulteriori informazioni ed esempi sui dichiaratori complessi, vedere [Interpretazione dei dichiaratori più complessi](../c-language/interpreting-more-complex-declarators.md).  `typedef` può essere in genere utilizzato per semplificare i dichiaratori.  Vedere [Dichiarazioni typedef](../c-language/typedef-declarations.md).  
  
 I dichiaratori astratti possono essere complessi.  Le parentesi in un dichiaratore astratto complesso specificano un'interpretazione speciale, così come fanno per i dichiaratori complessi all'interno delle dichiarazioni.  
  
 In questi esempi vengono illustrati i dichiaratori astratti:  
  
```  
int *         // The type name for a pointer to type int:  
  
int *[3]      // An array of three pointers to int  
  
int (*) [5]   // A pointer to an array of five int  
  
int *()       // A function with no parameter specification  
              // returning a pointer to int  
  
// A pointer to a function taking no arguments and   
// returning an int  
  
int (*) ( void )    
  
// An array of an unspecified number of constant pointers to   
// functions each with one parameter that has type unsigned int   
// and an unspecified number of other parameters returning an int   
  
int (*const []) ( unsigned int, ... )  
```  
  
> [!NOTE]
>  Il dichiaratore astratto composto da un set di parentesi vuote, **\( \)**, non è consentito perché è ambiguo.  È impossibile determinare se l'identificatore implicito appartiene all'interno delle parentesi \(in questo caso è un tipo non modificato\) oppure le precede \(in questo caso è un tipo di funzione\).  
  
## Vedere anche  
 [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)