---
title: Classe pointer_to_binary_function | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std::pointer_to_binary_function
- xfunctional/std::pointer_to_binary_function
- pointer_to_binary_function
- std.pointer_to_binary_function
dev_langs:
- C++
helpviewer_keywords:
- pointer_to_binary_function function
- pointer_to_binary_function class
ms.assetid: fb50599f-bcb3-4076-a669-6dcc3eb189a5
caps.latest.revision: 21
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
translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 9a806934810286e22fdea70c2af982de10f48ee5
ms.lasthandoff: 02/24/2017

---
# <a name="pointertobinaryfunction-class"></a>Classe pointer_to_binary_function
Converte un puntatore a funzione binaria in una funzione binaria adattabile.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Arg1, class Arg2, class Result>
class pointer_to_binary_function
    : public binary_function <Arg1, Arg2, Result>
{
public:
    explicit pointer_to_binary_function(
        Result(*pfunc)(Arg1, Arg2));
    Result operator()(Arg1 left, Arg2 right) const;
};
```  
  
#### <a name="parameters"></a>Parametri  
 `pfunc`  
 Funzione binaria da convertire.  
  
 `left`  
 Oggetto sinistro su cui viene chiamata la funzione *\*pfunc*.  
  
 `right`  
 Oggetto destro su cui viene chiamata la funzione *\*pfunc*.  
  
## <a name="return-value"></a>Valore restituito  
 La classe modello archivia una copia di **pfunc**. Definisce la relativa funzione membro `operator()` che restituisce (\* **pfunc**)(_ *Left*, \_ *Right*).  
  
## <a name="remarks"></a>Note  
 Un puntatore a funzione binaria è un oggetto funzione e può essere passato a qualsiasi algoritmo della libreria standard C++ che prevede una funzione binaria come parametro, ma non è adattabile. Per usarlo con un adattatore, ad esempio in associazione a un valore o con un negator, deve essere fornito con i tipi annidati **first_argument_type**, **second_argument_type** e **result_type** che rendono possibile tale adattamento. La conversione da `pointer_to_binary_function` consente il funzionamento degli adattatori di funzione con i puntatori a funzione binaria.  
  
## <a name="example"></a>Esempio  
 Il costruttore di `pointer_to_binary_function` viene usato di rado in modo diretto. Vedere la funzione helper [ptr_fun](../standard-library/functional-functions.md#ptr_fun_function) per indicazioni su come dichiarare e usare il predicato dell'adattatore `pointer_to_binary_function`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<functional>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




