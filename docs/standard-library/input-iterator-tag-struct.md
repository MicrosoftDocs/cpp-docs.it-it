---
title: Struct input_iterator_tag | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xutility/std::input_iterator_tag
dev_langs: C++
helpviewer_keywords:
- input_iterator_tag class
- input_iterator_tag struct
ms.assetid: ad68a4c6-f315-4ce1-8b74-c1fc71bd1577
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 267e4109f5a1b0447dd1c7b2b61796a2346694f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="inputiteratortag-struct"></a>Struct input_iterator_tag
Classe che fornisce un tipo restituito per la funzione **iterator_category** che rappresenta un iteratore di input.  
  
## <a name="syntax"></a>Sintassi  
  
struct input_iterator_tag {};  
  
## <a name="remarks"></a>Note  
 Le classi di tag di categoria vengono usate come tag di compilazione per la selezione dell'algoritmo. La funzione modello deve trovare la categoria più specifica dell'argomento iteratore in modo da usare l'algoritmo più efficiente in fase di compilazione. Per ciascun iteratore di tipo `Iterator`, `iterator_traits`< `Iterator`> **::iterator_category** deve essere definito come il tag di categoria più specifico che descrive il comportamento dell'iteratore.  
  
 Il tipo è uguale a **iterator**\< **Iter**> **::iterator_category** quando **Iter** descrive un oggetto che può essere usato come iteratore di input.  
  
## <a name="example"></a>Esempio  
 Vedere [iterator_traits](../standard-library/iterator-traits-struct.md) o [random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md) per indicazioni su come usare i tag **iterator_tag**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<iterator>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)



