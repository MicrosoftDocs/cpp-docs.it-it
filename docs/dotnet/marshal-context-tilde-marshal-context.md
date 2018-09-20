---
title: 'marshal_context:: ~ marshal_context | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- marshal_context::~marshal_context
- msclr.interop.marshal_context.~marshal_context
- marshal_context.~marshal_context
- msclr::interop::marshal_context::~marshal_context
- ~marshal_context
dev_langs:
- C++
helpviewer_keywords:
- marshal_context class [C++], operations
ms.assetid: 34c41b38-4c33-4f61-b74e-831ac46b4ab5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 49f194f153f3e4f911333e22b11ebddf7efcaa32
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46447258"
---
# <a name="marshalcontextmarshalcontext"></a>marshal_context::~marshal_context

Elimina un oggetto `marshal_context`.

## <a name="syntax"></a>Sintassi

```
~marshal_context();
```

## <a name="remarks"></a>Note

Alcune conversioni di dati richiedono un contesto di marshalling. Visualizzare [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per altre informazioni su quali conversioni richiedono un contesto e quali file di marshalling deve essere incluso nell'applicazione.

L'eliminazione di un oggetto `marshal_context` invaliderà i dati convertiti da quel contesto. Se si desidera mantenere i dati dopo l'eliminazione permanente di un oggetto `marshal_context`, è necessario copiarli manualmente in una variabile che rimarrà valida.

## <a name="requirements"></a>Requisiti

**File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >

**Namespace:** msclr::interop

## <a name="see-also"></a>Vedere anche

[Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)<br/>
[marshal_as](../dotnet/marshal-as.md)<br/>
[Classe marshal_context](../dotnet/marshal-context-class.md)