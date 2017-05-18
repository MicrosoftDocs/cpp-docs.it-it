---
title: Classe const_mem_fun1_ref_t | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xfunctional/std::const_mem_fun1_ref_t
- const_mem_fun1_ref_t
dev_langs:
- C++
helpviewer_keywords:
- const_mem_fun1_ref_t class
ms.assetid: 8220d373-fa1c-44be-a21d-96d49b3ea6bb
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
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: d66879ccf3c8fdf572b3f636706b0128a489df5c
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="constmemfun1reft-class"></a>Classe const_mem_fun1_ref_t
Classe di adattatori che consente a una funzione membro **const** che accetta un singolo argomento di essere chiamata come oggetto funzione binaria, una volta inizializzata con un argomento di riferimento.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Result, class Type, class Arg>
class const_mem_fun1_ref_t
 : public binary_function<Type, Arg, Result> 
 {
    explicit const_mem_fun1_ref_t(Result (Type::* Pm)(Arg) const);
    Result operator()(const Type& left, Arg right) const;
 };
```  
  
#### <a name="parameters"></a>Parametri  
 `Pm`  
 Puntatore alla funzione membro di classe **Type** da convertire in un oggetto funzione.  
  
 `left`  
 Oggetto **const** su cui viene chiamata la funzione membro `Pm`.  
  
 `right`  
 Argomento assegnato a `Pm`.  
  
## <a name="return-value"></a>Valore restituito  
 Funzione binaria adattabile.  
  
## <a name="remarks"></a>Note  
 La classe modello archivia una copia di `Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( `left`.\* *Pm*)( `right`) **const**.  
  
## <a name="example"></a>Esempio  
 Il costruttore di `const_mem_fun1_ref_t` non viene usato in genere direttamente; per adattare le funzioni membro, viene usata la funzione di supporto `mem_fun_ref`. Per esempi di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<functional>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




