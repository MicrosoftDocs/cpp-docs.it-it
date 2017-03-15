---
title: "Direttive #ifdef e #ifndef (C/C++) | Microsoft Docs"
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
  - "#ifndef"
  - "#ifdef"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#ifdef (direttiva)"
  - "#ifndef (direttiva)"
  - "ifdef (direttiva) (#ifdef)"
  - "ifndef (direttiva) (#ifndef)"
  - "preprocessore, direttive"
ms.assetid: 2b0be69d-9e72-45d8-8e24-e4130fb2455b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttive #ifdef e #ifndef (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le direttive **\#ifdef** e **\#ifndef** eseguono la stessa attività della direttiva `#if` quando utilizzata con **defined**\( *identifier* \).  
  
## Sintassi  
  
```  
#ifdef identifier  
#ifndef identifier  
  
// equivalent to  
#if defined identifier  
#if !defined identifier  
```  
  
## Note  
 È possibile utilizzare le direttive **\#ifdef** e **\#ifndef** ovunque sia possibile utilizzare `#if`.  L'istruzione **\#ifdef** *identifier* equivale a `#if 1` quando *identifier* è stato definito ed è equivalente a `#if 0` quando *identifier* non è stato definito o non è stato definito con la direttiva `#undef`.  Queste direttive controllano solo la presenza o l'assenza di identificatori definiti con `#define`, non di identificatori dichiarati nel codice sorgente in C o C\+\+.  
  
 Queste direttive sono fornite solo per compatibilità con le versioni precedenti del linguaggio.  L'espressione costante **defined\(** *identifier* **\)** utilizzata con la direttiva `#if` è la scelta preferita.  
  
 La direttiva **\#ifndef** controlla l'opposto della condizione controllata da **\#ifdef**.  Se l'identificatore non è stato definito \(o la relativa definizione è stata rimossa con `#undef`\), la condizione è true \(diverso da zero\).  In caso contrario, la condizione è false \(0\).  
  
 **Sezione specifica Microsoft**  
  
 L'*identifier* può essere passato dalla riga di comando utilizzando l'opzione \/D.  È possibile specificare fino a 30 macro utilizzando \/D.  
  
 Ciò è utile per controllare l'esistenza di una definizione poiché una definizione può essere passata dalla riga di comando.  Ad esempio:  
  
```  
// ifdef_ifndef.CPP  
// compile with: /Dtest /c  
#ifndef test  
#define final  
#endif  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)