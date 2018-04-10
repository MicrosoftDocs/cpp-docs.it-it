---
title: COM | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- ptr
dev_langs:
- C++
helpviewer_keywords:
- com::ptr
ms.assetid: ee302e3c-8fed-4875-a372-2e55003718d3
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 91c50379ae6514aa482cf4ee33eb7ff83fccc7b1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comptr"></a>com::ptr
Un wrapper per un oggetto COM che può essere utilizzato come membro di una classe CLR. Il wrapper consente anche di automatizzare la gestione della durata dell'oggetto COM, rilasciando i riferimenti di proprietà per l'oggetto quando viene chiamato il distruttore. Analogo a [classe CComPtr](../atl/reference/ccomptr-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <msclr\com\ptr.h>  
```  
  
## <a name="remarks"></a>Note  
 [Classe COM](../dotnet/com-ptr-class.md) è definito nel \<msclr\com\ptr.h > file.  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di supporto per C++](../dotnet/cpp-support-library.md)