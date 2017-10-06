---
title: Tipo int | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- int data type
- type int
- portability [C++], type int
- signed integers
ms.assetid: 0067ce9a-281e-491a-ae63-632952981e13
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 921cd8a91ecc1fe3cc746c23a79928fef9142ecc
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="type-int"></a>Tipo int
La dimensione di un elemento `int` signed o unsigned è la dimensione standard di un Integer in un computer specifico. Ad esempio, in sistemi operativi a 16 bit, il tipo `int` è rappresentato in genere con 16 bit o con 2 byte. Nei sistemi operativi a 32 bit il tipo `int` è rappresentato in genere con 32 bit oppure con 4 byte. Di conseguenza, il tipo `int` equivale a `short int` o al tipo **long int**, mentre il tipo `unsigned int` equivale a **unsigned short** o al tipo `unsigned long`, a seconda dell'ambiente di destinazione. Se non specificato diversamente, i tipi `int` rappresentano tutti i valori signed.  
  
 Gli identificatori di tipo `int` e `unsigned int` (o semplicemente `unsigned`) definiscono determinate funzionalità del linguaggio C, ad esempio il tipo `enum`. In questi casi, le definizioni di `int` e unsigned int per un'implementazione effettiva determinano l'archiviazione effettiva.  
  
 **Sezione specifica Microsoft**  
  
 I valori Signed Integer sono rappresentati in complemento a due. Il bit più significativo rappresenta il segno, ovvero 1 per il segno negativo, 0 per il segno positivo e zero. L'intervallo di valori è definito in [Limiti per i tipi Integer in C++](../c-language/cpp-integer-limits.md) ed è ricavato dal file di intestazione LIMITS.H.  
  
 **Fine sezione specifica Microsoft**  
  
> [!NOTE]
>  Gli identificatori di tipo int e unsigned int sono diffusi nei programmi C perché consentono la gestione più efficiente possibile di Integer in un computer specifico. Tuttavia, poiché le dimensioni dei tipi int e unsigned int variano, i programmi che dipendono da una dimensione specifica di int potrebbero non essere eseguiti in altri computer. Per rendere più portabili i programmi, è possibile usare espressioni con l'operatore sizeof (come illustrato in [Operatore sizeof](../c-language/sizeof-operator-c.md)) anziché dimensioni di dati hardcoded.  
  
## <a name="see-also"></a>Vedere anche  
 [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)
