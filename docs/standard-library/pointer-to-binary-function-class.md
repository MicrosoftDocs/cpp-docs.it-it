---
description: 'Altre informazioni su: pointer_to_binary_function Class'
title: Classe pointer_to_binary_function
ms.date: 02/21/2019
f1_keywords:
- functional/std::pointer_to_binary
helpviewer_keywords:
- pointer_to_binary_function function
- pointer_to_binary_function class
ms.assetid: fb50599f-bcb3-4076-a669-6dcc3eb189a5
ms.openlocfilehash: 5cdecc297ff5c55c9b6c57b5b6ab029636f3958c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340710"
---
# <a name="pointer_to_binary_function-class"></a>Classe pointer_to_binary_function

Converte un puntatore a funzione binaria in una funzione binaria adattabile. Deprecato in C++ 11, rimosso in C++ 17.

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

*sinistra*\
Oggetto sinistro su cui viene chiamato *\* pfunc* .

*Ok*\
Oggetto destro su cui viene chiamato *\* pfunc* .

## <a name="return-value"></a>Valore restituito

Il modello di classe archivia una copia di `pfunc` . Definisce la relativa funzione membro `operator()` che restituisce `(* pfunc)(Left, right)` .

## <a name="remarks"></a>Commenti

Un puntatore a funzione binaria è un oggetto funzione e può essere passato a qualsiasi algoritmo della libreria standard C++ che prevede una funzione binaria come parametro, ma non è adattabile. Per usarlo con un adattatore, ad esempio per associarvi un valore o usarlo con un negazionitore, è necessario che venga fornito con i tipi annidati `first_argument_type` , `second_argument_type` e `result_type` che rendono possibile tale adattamento. La conversione da `pointer_to_binary_function` consente il funzionamento degli adattatori di funzione con i puntatori a funzione binaria.

## <a name="example"></a>Esempio

Il costruttore di `pointer_to_binary_function` viene usato raramente in modo diretto. Vedere la funzione helper [ptr_fun](../standard-library/functional-functions.md#ptr_fun) per indicazioni su come dichiarare e usare il predicato dell'adattatore `pointer_to_binary_function`.
