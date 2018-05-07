---
title: marshal_context::marshal_context | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- msclr::interop::marshal_context::marshal_context
- marshal_context::marshal_context
- msclr.interop.marshal_context.marshal_context
- marshal_context.marshal_context
dev_langs:
- C++
helpviewer_keywords:
- marshal_context class [C++], operations
ms.assetid: 5f08c895-60b0-4f72-97ff-7ae37c68e853
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 1e8838864c4ec1c6414401608b848cb12b01c16e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="marshalcontextmarshalcontext"></a>marshal_context::marshal_context
Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra i tipi di dati gestito e nativo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
marshal_context();  
```  
  
## <a name="remarks"></a>Note  
 Alcune conversioni di dati richiedono un contesto di marshalling. Vedere [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per ulteriori informazioni su quali traduzioni richiedono un contesto e quale file di marshalling deve essere incluso nell'applicazione.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [marshal_context::marshal_as](../dotnet/marshal-context-marshal-as.md).  
  
## <a name="requirements"></a>Requisiti  
 **File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >  
  
 **Namespace:** msclr::interop  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)   
 [marshal_as](../dotnet/marshal-as.md)   
 [Classe marshal_context](../dotnet/marshal-context-class.md)