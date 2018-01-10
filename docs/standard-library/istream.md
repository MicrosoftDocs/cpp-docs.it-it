---
title: '&lt;istream&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- istream/std::<istream>
- <istream>
- std::<istream>
dev_langs: C++
helpviewer_keywords: istream header
ms.assetid: efcf24e4-05d1-4719-ab0b-9e7ebe845d89
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 570a23dff65c6c4838d85083b25507bbf0f68e44
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltistreamgt"></a>&lt;istream&gt;
Definisce la classe modello basic_istream, che media le estrazioni per intestazioni iostream, e la classe modello basic_iostream, che media gli inserimenti e le estrazioni. L'intestazione definisce anche un manipolatore correlato. Questo file di intestazione viene in genere incluso automaticamente per l'utente da un'altra intestazione iostream. Raramente è necessario includerli direttamente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <istream>  
  
```  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[iostream](../standard-library/istream-typedefs.md#iostream)|Tipo `basic_iostream` specializzato in `char`.|  
|[istream](../standard-library/istream-typedefs.md#istream)|Tipo `basic_istream` specializzato in `char`.|  
|[wiostream](../standard-library/istream-typedefs.md#wiostream)|Tipo `basic_iostream` specializzato in **wchar**.|  
|[wistream](../standard-library/istream-typedefs.md#wistream)|Tipo `basic_istream` specializzato in **wchar**.|  
  
### <a name="manipulators"></a>Manipolatori  
  
|||  
|-|-|  
|[ws](../standard-library/istream-functions.md#ws)|Ignora gli spazi nel flusso.|  
|[swap](../standard-library/istream-functions.md#istream_swap)|Scambia due oggetti flusso.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator>> ](../standard-library/istream-operators.md#op_gt_gt)|Estrae caratteri e stringhe dal flusso.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[basic_iostream](../standard-library/basic-iostream-class.md)|Classe di flusso che può eseguire operazioni sia di input sia di output.|  
|[basic_istream](../standard-library/basic-istream-class.md)|La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso con elementi di tipo **Elem**, chiamato anche [char_type](../standard-library/basic-ios-class.md#char_type), i cui tratti di carattere sono determinati dalla classe **Tr**, chiamata anche [traits_type](../standard-library/basic-ios-class.md#traits_type).|  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)



