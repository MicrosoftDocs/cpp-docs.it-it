---
title: COM | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- ptr
dev_langs:
- C++
helpviewer_keywords:
- com::ptr
ms.assetid: ee302e3c-8fed-4875-a372-2e55003718d3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f3c4e3bb91e161f9176bcf6964fc843d4e4bd707
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33104529"
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