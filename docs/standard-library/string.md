---
title: '&lt;string&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- string/std::<string>
- <string>
dev_langs:
- C++
helpviewer_keywords:
- string header
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 20447d439f0db2d49fe0d9c168a01ee1ca613c79
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ltstringgt"></a>&lt;string&gt;
Definisce la classe modello `basic_string` del contenitore e diversi modelli di supporto.  
  
 Per altre informazioni su `basic_string`, vedere [Classe basic_string](../standard-library/basic-string-class.md)  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <string>  
```  
  
## <a name="remarks"></a>Note  
 Il linguaggio C++ e la libreria standard C++ supportano due tipi di stringhe:  
  
-   Matrici di caratteri con terminazione Null spesso definite stringhe C.  
  
-   Oggetti della classe modello, di tipo `basic_string`, che gestiscono tutti gli argomenti di modello di tipo `char`.  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[string](../standard-library/string-typedefs.md#string)|Tipo che descrive una specializzazione della classe modello `basic_string` con elementi di tipo `char` come `string`.|  
|[wstring](../standard-library/string-typedefs.md#wstring)|Tipo che descrive una specializzazione della classe modello `basic_string` con elementi di tipo `wchar_t` come `wstring`.|  
|[u16string](../standard-library/string-typedefs.md#u16string)|Tipo che descrive una specializzazione della classe modello `basic_string` basata su elementi di tipo `char16_t`.|  
|[u32string](../standard-library/string-typedefs.md#u32string)|Tipo che descrive una specializzazione della classe modello `basic_string` basata su elementi di tipo `char32_t`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator+](../standard-library/string-operators.md#op_add)|Concatena due oggetti stringa.|  
|[operator!=](../standard-library/string-operators.md#op_neq)|Verifica se l'oggetto stringa a sinistra dell'operatore non è uguale all'oggetto stringa a destra.|  
|[operator==](../standard-library/string-operators.md#op_eq_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è uguale all'oggetto stringa a destra.|  
|[operator<](../standard-library/string-operators.md#op_lt)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore dell'oggetto stringa a destra.|  
|[operator<=](../standard-library/string-operators.md#op_lt_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è minore o uguale all'oggetto stringa a destra.|  
|[operator<\<](../standard-library/string-operators.md#op_lt_lt)|Funzione di modello che inserisce una stringa nel flusso di output.|  
|[operator>](../standard-library/string-operators.md#op_gt)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore dell'oggetto stringa a destra.|  
|[operator>=](../standard-library/string-operators.md#op_gt_eq)|Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore o uguale all'oggetto stringa a destra.|  
|[operator>> ](../standard-library/string-operators.md#op_gt_gt)|Funzione di modello che estrae una stringa dal flusso di input.|  
  
### <a name="specialized-template-functions"></a>Funzioni di modello specializzate  
  
|||  
|-|-|  
|[swap](../standard-library/string-functions.md#swap)|Scambia le matrici di caratteri di due stringhe.|  
|[stod](../standard-library/string-functions.md#stod)|Converte una sequenza di caratteri in `double.`.|  
|[stof](../standard-library/string-functions.md#stof)|Converte una sequenza di caratteri in `float`.|  
|[stoi](../standard-library/string-functions.md#stoi)|Converte una sequenza di caratteri in un Integer.|  
|[stold](../standard-library/string-functions.md#stold)|Converte una sequenza di caratteri in `long double`.|  
|[stoll](../standard-library/string-functions.md#stoll)|Converte una sequenza di caratteri in `long long`.|  
|[stoul](../standard-library/string-functions.md#stoul)|Converte una sequenza di caratteri in un tipo `unsigned long`.|  
|[stoull](../standard-library/string-functions.md#stoull)|Converte una sequenza di caratteri in un tipo `unsigned long long`.|  
|[to_string](../standard-library/string-functions.md#to_string)|Converte un valore in un valore `string`.|  
|[to_wstring](../standard-library/string-functions.md#to_wstring)|Converte un valore in un valore `string` di tipo wide.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[Modello getLine](../standard-library/string-functions.md#getline)|Estrarre stringhe dal flusso di input riga per riga.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe basic_string](../standard-library/basic-string-class.md)|Classe modello che descrive gli oggetti che possono archiviare una sequenza di oggetti arbitrari di tipo carattere.|  
|[Struct char_traits](../standard-library/char-traits-struct.md)|Classe modello che descrive gli attributi associati a un carattere di tipo CharType.|  
  
### <a name="specializations"></a>Specializzazioni  
  
|||  
|-|-|  
|[Struct char_traits\<char>](../standard-library/char-traits-char-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `char`.|  
|[Struct char_traits<wchar_t>](../standard-library/char-traits-wchar-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `wchar_t`.|  
|[Struct char_traits<char16_t>](../standard-library/char-traits-char16-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `char16_t`.|  
|[Struct char_traits<char32_t>](../standard-library/char-traits-char32-t-struct.md)|Struct che rappresenta una specializzazione dello struct modello `char_traits`\<CharType> in un elemento di tipo `char32_t`.|  
  
## <a name="requirements"></a>Requisiti  
  
- **Intestazione:** \<string>  
  
- **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)



