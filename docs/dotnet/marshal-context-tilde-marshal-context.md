---
title: marshal_context::~marshal_context
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- marshal_context::~marshal_context
- msclr.interop.marshal_context.~marshal_context
- marshal_context.~marshal_context
- msclr::interop::marshal_context::~marshal_context
- ~marshal_context
helpviewer_keywords:
- marshal_context class [C++], operations
ms.assetid: 34c41b38-4c33-4f61-b74e-831ac46b4ab5
ms.openlocfilehash: 3bf16ab2dde4047fb845cd700821d097f733a4d2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528219"
---
# <a name="marshalcontextmarshalcontext"></a>marshal_context::~marshal_context

Elimina un oggetto `marshal_context`.

## <a name="syntax"></a>Sintassi

```
~marshal_context();
```

## <a name="remarks"></a>Note

Alcune conversioni di dati richiedono un contesto di marshalling. Visualizzare [Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md) per altre informazioni su quali conversioni richiedono un contesto e quali file di marshalling deve essere incluso nell'applicazione.

L'eliminazione di un oggetto `marshal_context` invaliderà i dati convertiti da quel contesto. Se si desidera mantenere i dati dopo l'eliminazione definitiva di un oggetto `marshal_context`, è necessario copiarli manualmente in una variabile che rimarrà valida.

## <a name="requirements"></a>Requisiti

**File di intestazione:** \<msclr\marshal.h >, \<msclr\marshal_windows.h >, \<msclr\marshal_cppstd.h >, o \<msclr\marshal_atl.h >

**Namespace:** msclr::interop

## <a name="see-also"></a>Vedere anche

[Panoramica del marshalling in C++](../dotnet/overview-of-marshaling-in-cpp.md)<br/>
[marshal_as](../dotnet/marshal-as.md)<br/>
[Classe marshal_context](../dotnet/marshal-context-class.md)