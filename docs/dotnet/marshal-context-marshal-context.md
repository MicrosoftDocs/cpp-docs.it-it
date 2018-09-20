---
title: marshal_context::marshal_context | Microsoft Docs
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
ms.openlocfilehash: 02f238a8d9b9d484073794b9a75888325d95107b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399444"
---
# <a name="marshalcontextmarshalcontext"></a>marshal_context::marshal_context

Costruisce un `marshal_context` oggetto da utilizzare per la conversione dei dati tra i tipi di dati gestiti e nativi.

## <a name="syntax"></a>Sintassi

```
marshal_context();
```

## <a name="remarks"></a>Note

Alcune conversioni di dati richiedono un contesto di marshalling. Visualizzare [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per altre informazioni su quali conversioni richiedono un contesto e quali file di marshalling deve essere incluso nell'applicazione.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [marshal_context::marshal_as](../dotnet/marshal-context-marshal-as.md).

## <a name="requirements"></a>Requisiti

**File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >

**Namespace:** msclr::interop

## <a name="see-also"></a>Vedere anche

[Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)<br/>
[marshal_as](../dotnet/marshal-as.md)<br/>
[Classe marshal_context](../dotnet/marshal-context-class.md)