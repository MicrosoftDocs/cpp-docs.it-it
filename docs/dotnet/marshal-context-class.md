---
title: Classe marshal_context | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- marshal_context
dev_langs:
- C++
helpviewer_keywords:
- marshal_context class [C++]
ms.assetid: 241b0cf6-4ca4-4812-aaee-d671c11dc034
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 6bf712e960cbf96ccef6c3a3e4efebdad9045818
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33136994"
---
# <a name="marshalcontext-class"></a>Classe marshal_context
Questa classe converte i dati tra ambienti nativi e gestiti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class marshal_context  
```  
  
## <a name="remarks"></a>Note  
 Utilizzare la classe `marshal_context` per le conversioni di dati che richiedono un contesto. Vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per ulteriori informazioni su quali conversioni richiedono un contesto e quale file di marshalling deve essere incluso. Il risultato del marshalling quando si utilizza un contesto è valido solo fino a quando l'oggetto `marshal_context` non viene eliminato in modo permanente. Per conservare il risultato, è necessario copiare i dati.  
  
 Lo stesso `marshal_context` può essere utilizzato per più conversioni di dati. Il riutilizzo del contesto in questo modo non ha effetto sui risultati delle chiamate di marshalling precedenti.  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >  
  
 **Namespace:** msclr::interop  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal_as](../dotnet/marshal-as.md)