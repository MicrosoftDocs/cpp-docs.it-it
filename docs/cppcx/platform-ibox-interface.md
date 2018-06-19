---
title: 'Interfaccia platform:: ibox | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Namespace not found::Platform
- VCCORLIB/Namespace not found::Platform::Value
dev_langs:
- C++
ms.assetid: 774df45d-f8a7-45a3-ae24-eecc3c681040
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7894eceb2f345303400eec9b0490db58b3c3583f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33089523"
---
# <a name="platformibox-interface"></a>Interfaccia Platform::IBox
L'interfaccia [Platform::IBox](../cppcx/platform-ibox-interface.md) è il nome C++ per l'interfaccia `Windows::Foundation::IReference` .  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <typename T>  
interface class IBox  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo del valore boxed.  
  
### <a name="remarks"></a>Note  
 L'interfaccia `IBox<T>` viene principalmente utilizzata internamente per rappresentare tipi di valore nullable, come descritto in [Classi e struct di valore (C++/CX)](../cppcx/value-classes-and-structs-c-cx.md). L'interfaccia viene anche utilizzata per eseguire il boxing dei tipi di valore passati a metodi C++ che accettano parametri di tipo `Object^`. Puoi dichiarare esplicitamente un parametro di input come `IBox<SomeValueType>`. Per un esempio, vedere [Boxing](../cppcx/boxing-c-cx.md).  
  
### <a name="requirements"></a>Requisiti  
  
### <a name="members"></a>Membri  
 L'interfaccia `Platform::IBox` eredita dall'interfaccia [Platform::IValueType](../cppcx/platform-ivaluetype-interface.md) . `IBox` dispone di questi membri:  
  
 **Proprietà**  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Valore](#value)|Restituisce il valore di tipo unboxed archiviato in precedenza in questa istanza di `IBox` .|  

## <a name="value"></a> Proprietà ibox:: value
Restituisce il valore memorizzato in origine in questo oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
property T Value {T get();}  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Tipo del valore boxed.  
  
### <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito  
 Restituisce il valore memorizzato in origine in questo oggetto.  
  
### <a name="remarks"></a>Note  
 Per un esempio, vedere [Boxing](../cppcx/boxing-c-cx.md).  
  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)