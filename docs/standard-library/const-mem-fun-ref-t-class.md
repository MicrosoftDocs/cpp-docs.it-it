---
title: Classe const_mem_fun_ref_t | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- const_mem_fun_ref_t
- xfunctional/std::const_mem_fun_ref_t
dev_langs:
- C++
helpviewer_keywords:
- const_mem_fun_ref_t class
ms.assetid: 316ddbaa-9f46-4931-8eba-ea4ca66360ef
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
ms.openlocfilehash: f156aeb90b3569aa1fd65f06b520f294f0869541
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="constmemfunreft-class"></a>Classe const_mem_fun_ref_t
Classe di adattatori che consente a una funzione membro **const** che non accetta argomenti di essere chiamata come oggetto funzione unaria, una volta inizializzata con un argomento di riferimento.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Result, class Type>
class const_mem_fun_ref_t
 : public unary_function<Type, Result>  
{
    explicit const_mem_fun_t(Result (Type::* Pm)() const);
    Result operator()(const Type& left) const;
 };
```  
  
#### <a name="parameters"></a>Parametri  
 `Pm`  
 Puntatore alla funzione membro della classe **Type** da convertire in un oggetto funzione.  
  
 `left`  
 Oggetto su cui viene chiamata la funzione membro `Pm`.  
  
## <a name="return-value"></a>Valore restituito  
 Funzione unaria adattabile.  
  
## <a name="remarks"></a>Note  
 La classe modello archivia una copia di `Pm`, che deve essere un puntatore a una funzione membro della classe **Type**, in un oggetto membro privato. Definisce la relativa funzione membro `operator()` che restituisce ( **left**.\* `Pm`)() **const**.  
  
## <a name="example"></a>Esempio  
 Il costruttore di `const_mem_fun_ref_t` non viene usato in genere direttamente. Per adattare le funzioni membro, viene usata la funzione helper `mem_fun_ref`. Per un esempio di come usare gli adattatori di funzione membro, vedere [mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<functional>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




