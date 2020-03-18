---
title: com::ptr
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- msclr/com/com::ptr
helpviewer_keywords:
- com::ptr
ms.assetid: ee302e3c-8fed-4875-a372-2e55003718d3
ms.openlocfilehash: 993511142b72bd769fe8582b2650e5d020bd6ce2
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446261"
---
# <a name="comptr"></a>com::ptr

Un wrapper per un oggetto COM che può essere utilizzato come membro di una classe CLR. Il wrapper automatizza anche la gestione della durata dell'oggetto COM, rilasciando i riferimenti di proprietà sull'oggetto quando viene chiamato il distruttore. Analogo alla [classe CComPtr](../atl/reference/ccomptr-class.md).

## <a name="syntax"></a>Sintassi

```
#include <msclr\com\ptr.h>
```

## <a name="remarks"></a>Osservazioni

[com::P classe TR](../dotnet/com-ptr-class.md) viene definita nel file di > di \<msclr\com\ptr.h.

## <a name="see-also"></a>Vedere anche

[Libreria di supporto per C++](../dotnet/cpp-support-library.md)
