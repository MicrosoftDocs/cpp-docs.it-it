---
title: Interfaccia IDisposable | Documenti Microsoft
ms.custom: ''
ms.date: 02/03/2017
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::IDisposable
dev_langs:
- C++
helpviewer_keywords:
- Platform::IDisposable Interface
ms.assetid: f4344056-7030-42ed-bc98-b140edffddcd
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 68c5425d5d65acc194287a97068df7da15f37275
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33086973"
---
# <a name="platformidisposable-interface"></a>Platform::IDisposable (interfaccia)
Utilizzata per rilasciare le risorse non gestite.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public interface class IDisposable  
```  
  
## <a name="attributes"></a>Attributi  
 **GuidAttribute**("de0cbaea-8065-4a45-b196-c9d443f9bab3")  
  
 **VersionAttribute**(NTDDI_WIN8)  
  
### <a name="members"></a>Membri  
 L'interfaccia IDisposable eredita dall'interfaccia IUnknown. IDisposable include anche i tipi di membri seguenti:  
  
 **Metodi**  
  
 L'interfaccia IDisposable include i metodi seguenti.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|Dispose|Utilizzata per rilasciare le risorse non gestite.|  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform