---
title: '#Direttive ifdef e #ifndef (C/C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- '#ifndef'
- '#ifdef'
dev_langs:
- C++
helpviewer_keywords:
- '#ifdef directive'
- preprocessor, directives
- ifdef directive (#ifdef)
- ifndef directive (#ifndef)
- '#ifndef directive'
ms.assetid: 2b0be69d-9e72-45d8-8e24-e4130fb2455b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a8f1a10e9d8437b71591efc9ce2915c9f485e0c4
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ifdef-and-ifndef-directives-cc"></a>Direttive #ifdef e #ifndef (C/C++)
Il **#ifdef** e **#ifndef** direttive eseguono la stessa attività come il `#if` direttiva quando viene utilizzata con **definito**( *identificatore* ).  
  
## <a name="syntax"></a>Sintassi  
  
```  
#ifdef identifier  
#ifndef identifier  
  
// equivalent to  
#if defined identifier  
#if !defined identifier  
```  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il **#ifdef** e **#ifndef** direttive ovunque `#if` può essere utilizzato. Il **#ifdef** *identificatore* equivale all'istruzione `#if 1` quando *identificatore* è stata definita, ed è equivalente a `#if 0` quando *identificatore* non è stato definito o è stato definito con il `#undef` direttiva. Queste direttive controllano solo la presenza o l'assenza di identificatori definiti con `#define`, non di identificatori dichiarati nel codice sorgente in C o C++.  
  
 Queste direttive sono fornite solo per compatibilità con le versioni precedenti del linguaggio. Il **definito (** *identificatore* **)** espressione costante usata con il `#if` direttiva è preferita.  
  
 Il **#ifndef** direttiva controlla l'opposto della condizione controllata da **#ifdef**. Se l'identificatore non è stato definito (o la relativa definizione è stata rimossa con `#undef`), la condizione è true (diverso da zero). In caso contrario, la condizione è false (0).  
  
 **Sezione specifica Microsoft**  
  
 Il *identificatore* può essere passato dalla riga di comando utilizzando l'opzione /D. È possibile specificare fino a 30 macro utilizzando /D.  
  
 Ciò è utile per controllare l'esistenza di una definizione poiché una definizione può essere passata dalla riga di comando. Ad esempio:  
  
```  
// ifdef_ifndef.CPP  
// compile with: /Dtest /c  
#ifndef test  
#define final  
#endif  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)