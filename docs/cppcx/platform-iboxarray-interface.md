---
title: 'Interfaccia platform:: iboxarray | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- VCCORLIB/Namespace not found::Platform
- VCCORLIB/Namespace not found::Platform::Value
dev_langs:
- C++
helpviewer_keywords:
- Platform::IBoxArray
ms.assetid: 6cd82c9e-4230-4147-9edb-7a652875dbf1
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f52f8c95851ec80df41fe9f0838345cf46876227
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="platformiboxarray-interface"></a>Interfaccia Platform::IBoxArray
`IBoxArray` è il wrapper per le matrici di tipi di valore passati tramite l'interfaccia ABI (Application Binary Interface) o archiviati in raccolte di elementi `Platform::Object^` come quelli nei controlli XAML.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <typename T>  
interface class IBoxArray  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo di valore boxed in ogni elemento della matrice.  
  
### <a name="remarks"></a>Note  
 `IBoxArray` è C + + nome CX per `Windows::Foundation::IReferenceArray`.  
  
### <a name="members"></a>Membri  
 L'interfaccia `IBoxArray` eredita dall'interfaccia `IValueType` . `IBoxArray` dispone anche di questi membri:  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Valore](#value)|Restituisce la matrice di tipo unboxed archiviata in precedenza in questa istanza di `IBoxArray` .|  

## <a name="value"></a> Proprietà iboxarray:: value
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
 [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)