---
title: 'Classe platform:: Delegate | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Delegate
dev_langs:
- C++
helpviewer_keywords:
- Platform::Delegate Class
ms.assetid: 82b21271-768f-4193-9ca2-be68ddfd546e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bdee3e432e3482b7f1a2c6e4be4c50abb1a6bfc8
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43763588"
---
# <a name="platformdelegate-class"></a>Platform::Delegate (classe)
Rappresenta un oggetto funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public delegate void delegate_name();  
```  
  
### <a name="members"></a>Membri  
 La classe Delegate include metodi Equals(), GetHashCode() e ToString() derivati dalla [Platform::Object Class](../cppcx/platform-object-class.md).  
  
### <a name="remarks"></a>Note  
 Usare la parola chiave [delegate](../windows/delegate-cpp-component-extensions.md) per creare i delegati; non usare esplicitamente Platform::Delegate. Per altre informazioni, vedere [Delegati](../cppcx/delegates-c-cx.md). Per un esempio di come creare e utilizzare un delegato, vedere [creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)