---
title: Classe auto_gcroot | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- msclr::auto_gcroot
- msclr.auto_gcroot
- auto_gcroot
dev_langs: C++
helpviewer_keywords: auto_gcroot
ms.assetid: b5790912-265d-463e-a486-47302e91042a
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: bd39306e7a56506937d0084ee3167ab121eb26c4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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