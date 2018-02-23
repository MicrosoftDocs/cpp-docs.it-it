---
title: 'Classe platform:: box | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Box
dev_langs:
- C++
ms.assetid: b3d7ea37-e98a-4fbc-80b0-ad35e50250c6
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 45c1d3090cd4f3fbe1c2c7a57ba6ebe671055fee
ms.sourcegitcommit: a5a69d2dc3513261e9e28320e4e067aaf40d2ef2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/21/2018
---
# <a name="platformbox-class"></a>Classe Platform::Box
Consente un tipo valore, ad esempio `Windows::Foundation::DateTime` o un tipo scalare, ad esempio `int` da archiviare in un tipo `Platform::Object` . In genere non è necessario usare `Box` in modo esplicito perché la conversione boxing avviene in modo implicito quando si esegue il cast di un tipo valore `Object^`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
ref class Box abstract;  
```  
  ### <a name="remarks"></a>Note  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform
|Member|Descrizione|  
|------------|-----------------|
|[Box](#ctor)|Crea un `Box` che può incapsulare un valore del tipo specificato.|
|[operatore casella&lt;const T&gt;^](#box-const-t)|Consente conversioni boxing da una classe di valori `const` `T` o da una classe `enum` `T` a `Box<T>`.|
|[operatore casella&lt;const T volatile&gt;^](#box-const-volatile-t)|Abilita le conversioni boxing dal tipo `const volatile` o `T` della classe di valori `enum` `T` in `Box<T>`. |
|[operatore casella&lt;T&gt;^](#box-t)|Consente conversioni boxing da una classe di valori `T` a `Box<T>`.|
|[operatore casella&lt;T volatile&gt;^](#box-volatile-t)|Abilita le conversioni boxing dal tipo `volatile` o `T` della classe di valori `enum` `T` in `Box<T>`.|
|[Box:: operator T](#t)|Consente le conversioni boxing da una classe di valori `T` o da una classe `enum` `T` in `Box<T>`.| 
## <a name="ctor"></a> Costruttore box:: box
Crea un `Box` che può incapsulare un valore del tipo specificato. | |[ Valore proprietà](#value)| Restituisce il valore incapsulato nel `Box` oggetto. |  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Box(T valueArg);  
```  
  
### <a name="parameters"></a>Parametri  
 `valueArg`  
 Il tipo di valore boxed, ad esempio, `int`, `bool`, `float64`, `DateTime`.  
  

## <a name="box-const-t"></a> Casella box:: operator&lt;const T&gt;^ (operatore)
Consente conversioni boxing da una classe di valori `const` `T` o da una classe `enum` `T` a `Box<T>`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
operator Box<const T>^(const T valueType);  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Qualsiasi classe di valore, struct di valore o tipo enum. Include tipi integrati nel [spazio dei nomi predefinito](../cppcx/default-namespace.md).  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `Platform::Box<T>^` istanza che rappresenta il valore originale sottoposto a boxing in una classe di riferimento.  
  
## <a name="box-const-volatile-t"></a> Casella box:: operator&lt;const T volatile&gt;^ (operatore)
Abilita le conversioni boxing dal tipo `const volatile` o `T` della classe di valori `enum` `T` in `Box<T>`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
operator Box<const volatile T>^(const volatile T valueType);  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Qualsiasi tipo enum, classe di valori o struct di valori. Include tipi integrati nel [spazio dei nomi predefinito](../cppcx/default-namespace.md).  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `Platform::Box<T>^` istanza che rappresenta il valore originale sottoposto a boxing in una classe di riferimento.  
  
## <a name="box-t"></a> Casella box:: operator&lt;T&gt;^ (operatore)
Consente conversioni boxing da una classe di valori `T` a `Box<T>`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
operator Box<const T>^(const T valueType);  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Qualsiasi tipo enum, classe di valori o struct di valori. Include tipi integrati nel [spazio dei nomi predefinito](../cppcx/default-namespace.md).  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `Platform::Box<T>^` istanza che rappresenta il valore originale sottoposto a boxing in una classe di riferimento.  
  
## <a name="box-volatile-t"></a> Casella box:: operator&lt;T volatile&gt;^ (operatore)
Abilita le conversioni boxing dal tipo `volatile` o `T` della classe di valori `enum` `T` in `Box<T>`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
operator Box<volatile T>^(volatile T valueType);  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Qualsiasi tipo enum, classe di valori o struct di valori. Include tipi integrati nel [spazio dei nomi predefinito](../cppcx/default-namespace.md).  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `Platform::Box<T>^` istanza che rappresenta il valore originale sottoposto a boxing in una classe di riferimento.  
  
## <a name="t"></a>  Operatore box:: operator T
Consente le conversioni boxing da una classe di valori `T` o da una classe `enum` `T` in `Box<T>`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
operator Box<T>^(T valueType);  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Qualsiasi tipo enum, classe di valori o struct di valori. Include tipi integrati nel [spazio dei nomi predefinito](../cppcx/default-namespace.md).  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `Platform::Box<T>^` istanza che rappresenta il valore originale sottoposto a boxing in una classe di riferimento.  
  

## <a name="value"></a> Proprietà box:: value
Restituisce il valore incapsulato nell'oggetto `Box`.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
virtual property T Value{  
   T get();  
}  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore boxed con lo stesso tipo presente in origine prima di essere sottoposto a boxing.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)   
 [Conversione boxing](../cppcx/boxing-c-cx.md)