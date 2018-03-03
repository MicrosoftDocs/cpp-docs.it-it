---
title: Classe auto_gcroot | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- msclr::auto_gcroot
- msclr.auto_gcroot
- auto_gcroot
dev_langs:
- C++
helpviewer_keywords:
- auto_gcroot
ms.assetid: b5790912-265d-463e-a486-47302e91042a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: bb203193d1568056c631d90a2e1f5b1cf1d00e5a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="autogcroot-class"></a>Classe auto_gcroot
Gestione automatica delle risorse (ad esempio [classe auto_ptr](../standard-library/auto-ptr-class.md)) che può essere utilizzato per incorporare un handle virtuale in un tipo nativo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename _element_type>  
class auto_gcroot;  
```  
  
#### <a name="parameters"></a>Parametri  
 `_element_type`  
 Il tipo gestito da incorporare.  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione** \<msclr\auto_gcroot.h >  
  
 **Namespace** msclr  
  
## <a name="see-also"></a>Vedere anche  
 [auto_gcroot](../dotnet/auto-gcroot.md)   
 [Membri auto_gcroot](../dotnet/auto-gcroot-members.md)   
 [Procedura: dichiarare handle in tipi nativi](../dotnet/how-to-declare-handles-in-native-types.md)   
 [Classe auto_handle](../dotnet/auto-handle-class.md)