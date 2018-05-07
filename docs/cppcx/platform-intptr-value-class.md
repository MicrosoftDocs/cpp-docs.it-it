---
title: 'Classe di valori platform:: IntPtr | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/PlatformIntPtr::IntPtr
- VCCORLIB/PlatformIntPtr::op_explicit Operator
- VCCORLIB/PlatformIntPtr::ToInt32
dev_langs:
- C++
helpviewer_keywords:
- Platform::IntPtr Struct
ms.assetid: 6c0326e8-edfd-4e53-a963-240b845dcde8
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b54facc94be3f43b500e38371e0eba9e00d130a4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformintptr-value-class"></a>Classe di valori Platform::IntPtr
Rappresenta un puntatore o un handle con segno la cui dimensione è specifica della piattaforma (32 bit o 64 bit).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public value struct IntPtr  
```  
  
### <a name="members"></a>Membri  
 IntPtr dispone inoltre dei membri seguenti:  
  
|Member|Descrizione|  
|------------|-----------------|  
|[IntPtr::IntPtr](#ctor)|Inizializza una nuova istanza di IntPtr.|  
|[Operatore IntPtr::op_explicit](#op-explicit)|Converte il parametro specificato in un IntPtr o in un puntatore a un valore IntPtr.|  
|[IntPtr::ToInt32](#toint32)|Converte l'elemento IntPtr corrente in un Integer a 32 bit.|  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  

## <a name="ctor"> </a> IntPtr::IntPtr (costruttore)
Inizializza una nuova istanza di un elemento IntPtr con il valore specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
IntPtr( __int64 handle-or-pointer );   IntPtr( void* value );   IntPtr( int 32-bit_value );  
```  
  
### <a name="parameters"></a>Parametri  
 predefinito  
 Handle o puntatore a 64 bit o puntatore a un valore a 64 bit o a un valore a 32 bit che può essere convertito in un valore a 64 bit.  
  


## <a name="op-explicit"> </a> Operatore IntPtr::op_explicit
Converte il parametro specificato in un IntPtr o in un puntatore a un valore IntPtr.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
static IntPtr::operator IntPtr( void* value1);   static IntPtr::operator IntPtr( int value2);   static IntPtr::operator void*( IntPtr value3 );  
```  
  
### <a name="parameters"></a>Parametri  
 value1  
 Puntatore a un handle o a un elemento IntPtr.  
  
 value2  
 Integer a 32 bit che può essere convertito in un elemento IntPtr.  
  
 value3  
 IntPtr.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo e il secondo operatore restituiscono un elemento IntPtr. Il terzo operatore restituisce un puntatore al valore rappresentato dall'elemento IntPtr corrente.  
  


## <a name="toint32"> </a> IntPtr:: Toint32 (metodo)
Converte il valore dell'elemento IntPtr corrente in un Integer a 32 bit.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
int32 IntPtr::ToInt32();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Integer a 32 bit.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)