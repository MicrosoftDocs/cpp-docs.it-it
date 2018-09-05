---
title: 'Classe platform:: ValueType | Microsoft Docs'
ms.custom: ''
ms.date: 02/03/2017
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::ValueType::ToString
dev_langs:
- C++
helpviewer_keywords:
- Platform::ValueType Class
ms.assetid: 79aa8754-b140-4974-a5b1-be046938a10a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 12766e81ddd90b257830b6bf5adefd2562781d9e
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43767764"
---
# <a name="platformvaluetype-class"></a>Platform::ValueType (classe)
Classe di base per istanze di tipi di valore.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class ValueType : Object  
```  
  
## <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|[ValueType::ToString](#tostring)|Restituisce una rappresentazione di stringa dell'oggetto. Ereditato da [platform:: Object](../cppcx/platform-object-class.md).|  
  
### <a name="remarks"></a>Note  
 La classe ValueType viene usata per costruire i tipi valore. ValueType è derivato da Object, che contiene i membri di base. Tuttavia, il compilatore consente di scollegare i membri di base dai tipi valore derivati dalla classe ValueType. Il compilatore ricollega questi membri di base quando un tipo valore è di tipo boxed.  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  

## <a name="tostring"></a> Metodo ValueType:: ToString
Restituisce una rappresentazione di stringa dell'oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Platform::String ToString();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Platform:: String che rappresenta il valore.  
    
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)