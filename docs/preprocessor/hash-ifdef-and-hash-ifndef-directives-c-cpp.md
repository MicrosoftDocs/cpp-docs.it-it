---
title: '#Direttive # ifdef e #ifndef (C/C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8c3453cd652401e9d1f4573bb1750773cbefe8d9
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42538635"
---
# <a name="ifdef-and-ifndef-directives-cc"></a>Direttive #ifdef e #ifndef (C/C++)
Il **#ifdef** e **#ifndef** direttive eseguono la stessa attività come il `#if` direttiva quando viene usato con **definito**( *identificatore* ).  
  
## <a name="syntax"></a>Sintassi  
  
```  
#ifdef identifier  
#ifndef identifier  
  
// equivalent to  
#if defined identifier  
#if !defined identifier  
```  
  
## <a name="remarks"></a>Note  
 
È possibile usare la **#ifdef** e **#ifndef** direttive ovunque `#if` può essere utilizzato. Il **#ifdef** *identifier* equivale all'istruzione `#if 1` quando *identificatore* è stata definita, ed è equivalente a `#if 0` quando *identifier* non è stato definito o è stato definito con la `#undef` direttiva. Queste direttive controllano solo la presenza o l'assenza di identificatori definiti con `#define`, non di identificatori dichiarati nel codice sorgente in C o C++.  
  
Queste direttive sono fornite solo per compatibilità con le versioni precedenti del linguaggio. Il **definito (** *identifier* **)** espressione costante usata con il `#if` direttiva è preferita.  
  
Il **#ifndef** direttiva controlla l'opposto della condizione controllata da **#ifdef**. Se l'identificatore non è stato definito (o la relativa definizione è stata rimossa con `#undef`), la condizione è true (diverso da zero). In caso contrario, la condizione è false (0).  
  
**Sezione specifica Microsoft**  
  
Il *identifier* può essere passato dalla riga di comando usando il `/D` opzione. È possibile specificare fino a 30 macro con `/D`.  
  
Ciò è utile per controllare l'esistenza di una definizione poiché una definizione può essere passata dalla riga di comando. Ad esempio:  
  
```cpp  
// ifdef_ifndef.CPP  
// compile with: /Dtest /c  
#ifndef test  
#define final  
#endif  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)