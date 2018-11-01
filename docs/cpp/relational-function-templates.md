---
title: Modelli di funzioni relazionali
ms.date: 11/04/2016
helpviewer_keywords:
- relational function templates
ms.assetid: 57893a51-9adb-41fc-941d-2ca97687db2a
ms.openlocfilehash: 1c47627baa270c3b5eb58127590aefc6d06c9df3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644795"
---
# <a name="relational-function-templates"></a>Modelli di funzioni relazionali

**Sezione specifica Microsoft**

## <a name="syntax"></a>Sintassi

```
template<typename _InterfaceType> bool operator==(
   int NULL,
   _com_ptr_t<_InterfaceType>& p
);
template<typename _Interface,
   typename _InterfacePtr> bool operator==(
   _Interface* i,
   _com_ptr_t<_InterfacePtr>& p
);
template<typename _Interface> bool operator!=(
   int NULL,
   _com_ptr_t<_Interface>& p
);
template<typename _Interface,
   typename _InterfacePtr> bool operator!=(
   _Interface* i,
   _com_ptr_t<_InterfacePtr>& p
);
template<typename _Interface> bool operator<(
   int NULL,
   _com_ptr_t<_Interface>& p
);
template<typename _Interface,
   typename _InterfacePtr> bool operator<(
   _Interface* i,
   _com_ptr_t<_InterfacePtr>& p
);
template<typename _Interface> bool operator>(
   int NULL,
   _com_ptr_t<_Interface>& p
);
template<typename _Interface,
   typename _InterfacePtr> bool operator>(
   _Interface* i,
   _com_ptr_t<_InterfacePtr>& p
);
template<typename _Interface> bool operator<=(
   int NULL,
   _com_ptr_t<_Interface>& p
);
template<typename _Interface,
   typename _InterfacePtr> bool operator<=(
   _Interface* i,
   _com_ptr_t<_InterfacePtr>& p
);
template<typename _Interface> bool operator>=(
   int NULL,
   _com_ptr_t<_Interface>& p
);
template<typename _Interface,
   typename _InterfacePtr> bool operator>=(
   _Interface* i,
   _com_ptr_t<_InterfacePtr>& p
);
```

### <a name="parameters"></a>Parametri

*i*<br/>
Puntatore a interfaccia raw.

*p*<br/>
Un puntatore intelligente.

## <a name="remarks"></a>Note

Questi modelli di funzione consentono il confronto con un puntatore intelligente a destra dell'operatore di confronto. Queste non sono funzioni membro di `_com_ptr_t`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)