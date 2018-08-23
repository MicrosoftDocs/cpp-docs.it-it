---
title: 'Interfaccia platform:: IDisposable | Microsoft Docs'
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3899c25d71ad08cc058280271080c19d11222ed
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42589786"
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