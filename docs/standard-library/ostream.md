---
title: '&lt;ostream&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std.<ostream>
- <ostream>
- ostream/std::<ostream>
- std::<ostream>
dev_langs:
- C++
helpviewer_keywords:
- ostream header
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 4b8e9c4f86ac9bab261824c10a8e6d8c3506bc1a
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="ltostreamgt"></a>&lt;ostream&gt;
Definisce la classe modello [basic_ostream](../standard-library/basic-ostream-class.md), che funge da mediatore per gli inserimenti di iostream. L'intestazione definisce anche diversi manipolatori correlati. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente è necessario che sia inclusa direttamente dall'utente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <ostream>  
  
```  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[ostream](../standard-library/ostream-typedefs.md#ostream)|Crea un tipo da `basic_ostream` specializzato su `char` e `char_traits` specializzato su `char`.|  
|[wostream](../standard-library/ostream-typedefs.md#wostream)|Crea un tipo da `basic_ostream` specializzato su `wchar_t` e `char_traits` specializzato su `wchar_t`.|  
  
### <a name="manipulators"></a>Manipolatori  
  
|||  
|-|-|  
|[endl](../standard-library/ostream-functions.md#endl)|Termina una riga e scarica il buffer.|  
|[ends](../standard-library/ostream-functions.md#ends)|Termina una stringa.|  
|[flush](../standard-library/ostream-functions.md#flush)|Scarica il buffer.|  
|[swap](../standard-library/ostream-functions.md#swap)|Scambia il valori del parametro oggetto `basic_ostream` a sinistra con quelli del parametro oggetto `basic_ostream` a destra.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator<<](../standard-library/ostream-operators.md#op_lt_lt)|Scrive vari tipi nel flusso.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[basic_ostream](../standard-library/basic-ostream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)




