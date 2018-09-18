---
title: Errore del compilatore C2262 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2262
dev_langs:
- C++
helpviewer_keywords:
- C2262
ms.assetid: 727d1c6e-53e8-40e5-b7b8-6a7ac2011727
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 44e60bfcf00e3e01340c3df1b79004e84e93f56c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071445"
---
# <a name="compiler-error-c2262"></a>Errore del compilatore C2262

'attribute_specifiers': impossibile specificare una versione, le impostazioni cultura o l'architettura del processore per le dichiarazioni InternalsVisibleTo

L'attributo <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> non è stato specificato correttamente.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2262.

```
// C2262.cpp
// compile with: /clr /c
using namespace System::Runtime::CompilerServices;
[assembly: InternalsVisibleTo("assembly_name, version=1.2.3.7")];   // C2262
[assembly: InternalsVisibleTo("assembly_name ")];   // OK
```