---
title: _com_ptr_t::QueryInterface
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::QueryInterface
- _com_ptr_t.QueryInterface
helpviewer_keywords:
- QueryInterface method [C++]
ms.assetid: d03292f1-6b02-40db-9756-8b0837a97319
ms.openlocfilehash: 42953c92e4cf31b5ccd02dd51811fc1fdeedbcaf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399278"
---
# <a name="comptrtqueryinterface"></a>_com_ptr_t::QueryInterface

**Sezione specifica Microsoft**

Chiama il **QueryInterface** funzione di membro di `IUnknown` sul puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```
template<typename _InterfaceType> HRESULT QueryInterface (
   const IID& iid,
   _InterfaceType*& p
) throw ( );
template<typename _InterfaceType> HRESULT QueryInterface (
   const IID& iid,
   _InterfaceType** p
) throw( );
```

#### <a name="parameters"></a>Parametri

*iid*<br/>
`IID` un puntatore di interfaccia.

*p*<br/>
Puntatore a interfaccia raw.

## <a name="remarks"></a>Note

Le chiamate `IUnknown::QueryInterface` sul puntatore a interfaccia incapsulato con la proprietà specificata `IID` e restituisce un puntatore a interfaccia raw risultante in *p*. Questa routine restituisce il valore HRESULT per indicare esito positivo o negativo.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)