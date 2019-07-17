---
title: Classe pointer_to_binary_function
ms.date: 02/21/2019
f1_keywords:
- functional/std::pointer_to_binary
helpviewer_keywords:
- pointer_to_binary_function function
- pointer_to_binary_function class
ms.assetid: fb50599f-bcb3-4076-a669-6dcc3eb189a5
ms.openlocfilehash: fcc643d7569bd4f71b11249babdb49ef1362dc8b
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68240488"
---
# <a name="pointertobinaryfunction-class"></a>Classe pointer_to_binary_function

Converte un puntatore a funzione binaria in una funzione binaria adattabile. Deprecate in c++11, rimossi in c++17.

## <a name="syntax"></a>Sintassi

```cpp
template <class Arg1, class Arg2, class Result>
class pointer_to_binary_function
    : public binary_function <Arg1, Arg2, Result>
{
    explicit pointer_to_binary_function(
        Result(*pfunc)(Arg1, Arg2));
    Result operator()(Arg1 left, Arg2 right) const;
};
```

### <a name="parameters"></a>Parametri

*pfunc*\
Funzione binaria da convertire.

*A sinistra*\
Oggetto sinistro su cui viene chiamata la funzione *\*pfunc*.

*Ok*\
Oggetto destro su cui viene chiamata la funzione *\*pfunc*.

## <a name="return-value"></a>Valore restituito

La classe modello archivia una copia di `pfunc`. Definisce la relativa funzione membro `operator()` prevede la restituzione `(* pfunc)(Left, right)`.

## <a name="remarks"></a>Note

Un puntatore a funzione binaria è un oggetto funzione e può essere passato a qualsiasi algoritmo della libreria standard C++ che prevede una funzione binaria come parametro, ma non è adattabile. Per usarlo con un adattatore, ad esempio in associazione a un valore o con un negator, deve essere fornito con i tipi annidati `first_argument_type`, `second_argument_type`, e `result_type` che rendono possibile tale adattamento. La conversione da `pointer_to_binary_function` consente il funzionamento degli adattatori di funzione con i puntatori a funzione binaria.

## <a name="example"></a>Esempio

Il costruttore di `pointer_to_binary_function` viene usato di rado in modo diretto. Vedere la funzione helper [ptr_fun](../standard-library/functional-functions.md#ptr_fun) per indicazioni su come dichiarare e usare il predicato dell'adattatore `pointer_to_binary_function`.
