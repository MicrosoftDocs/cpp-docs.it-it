---
title: Classe pointer_to_unary_function | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xfunctional/std::pointer_to_unary
dev_langs:
- C++
helpviewer_keywords:
- pointer_to_unary_function function
- pointer_to_unary_function class
ms.assetid: 05600207-b916-4759-beca-6b6facd2d6f6
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5cbcad162304a4eb7750c543deac5c8e00127b2a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="pointertounaryfunction-class"></a>Classe pointer_to_unary_function

Converte un puntatore a funzione unaria in una funzione unaria adattabile.

## <a name="syntax"></a>Sintassi

```cpp
template <class Arg, class Result>
class pointer_to_unary_function
    : public unary_function<Arg, Result>
{
public:
    explicit pointer_to_unary_function(Result(*pfunc)(Arg));
    Result operator()(Arg left) const;
};
```

### <a name="parameters"></a>Parametri

`pfunc` La funzione binaria da convertire.

`left` L'oggetto che il  *\*pfunc* viene chiamato su.

## <a name="return-value"></a>Valore restituito

La classe modello archivia una copia di **pfunc**. Definisce la relativa funzione membro `operator()` che restituisce (\* **pfunc**)(_ *Left*).

## <a name="remarks"></a>Note

Un puntatore a funzione unaria è un oggetto funzione e può essere passato a qualsiasi algoritmo della libreria standard C++ che prevede una funzione unaria come parametro, ma non è adattabile. Per usarlo con un adattatore, ad esempio in associazione a un valore o con un negator, deve essere fornito con i tipi annidati **argument_type** e **result_type** che rendono possibile tale adattamento. La conversione da `pointer_to_unary_function` consente il funzionamento degli adattatori di funzione con i puntatori a funzione binaria.

## <a name="example"></a>Esempio

Il costruttore di `pointer_to_unary_function` viene usato di rado in modo diretto. Vedere la funzione helper [ptr_fun](../standard-library/functional-functions.md#ptr_fun) per indicazioni su come dichiarare e usare il predicato dell'adattatore `pointer_to_unary_function`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
