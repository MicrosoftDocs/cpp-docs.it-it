---
title: 'Operatore comptr:: Operator = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: 1a0c2752-f7d8-4819-9443-07b88b69ef02
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 177d6ebde6a4611e9a08dc3dade63bd6c3acc3fa
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401628"
---
# <a name="comptroperator-operator"></a>Operatore ComPtr::operator=

Assegna un valore all'oggetto corrente **ComPtr**.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW ComPtr& operator=(
   decltype(__nullptr)  
);
WRL_NOTHROW ComPtr& operator=(
   _In_opt_ T *other
);
template <typename U>
WRL_NOTHROW ComPtr& operator=(
   _In_opt_ U *other
);
WRL_NOTHROW ComPtr& operator=(
   const ComPtr &other
);
template<class U>
WRL_NOTHROW ComPtr& operator=(
   const ComPtr<U>& other
);
WRL_NOTHROW ComPtr& operator=(
   _Inout_ ComPtr &&other
);
template<class U>
WRL_NOTHROW ComPtr& operator=(
   _Inout_ ComPtr<U>&& other
);
```

### <a name="parameters"></a>Parametri

*U*<br/>
Una classe.

*other*<br/>
Un puntatore, riferimento o riferimento rvalue a un tipo o un altro **ComPtr**.

## <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente **ComPtr**.

## <a name="remarks"></a>Note

La prima versione di questo operatore assegna un valore vuoto all'oggetto corrente **ComPtr**.

Nella seconda versione, se il puntatore di interfaccia di assegnazione non è quello utilizzato per l'oggetto corrente **ComPtr** puntatore a interfaccia, il secondo puntatore a interfaccia viene assegnato all'oggetto corrente **ComPtr**.

Nella terza versione, il puntatore a interfaccia assegnazione viene assegnato all'oggetto corrente **ComPtr**.

Nella quarta versione, se il puntatore di interfaccia del valore di assegnazione non è quello utilizzato per l'oggetto corrente **ComPtr** puntatore a interfaccia, il secondo puntatore a interfaccia viene assegnato all'oggetto corrente **ComPtr**.

La quinta versione è un operatore di copia. un riferimento a un **ComPtr** viene assegnato all'oggetto corrente **ComPtr**.

La sesta versione è un operatore di copia che usa la semantica; di spostamento un riferimento rvalue a un **ComPtr** se è statico qualsiasi tipo di cast e quindi assegnata all'attuale **ComPtr**.

La versione del settima è un operatore di copia che usa la semantica; di spostamento un riferimento rvalue a un **ComPtr** typu *U* è static cast quindi e assegnato all'oggetto corrente **ComPtr**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)