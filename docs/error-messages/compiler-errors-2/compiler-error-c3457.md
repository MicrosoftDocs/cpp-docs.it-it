---
description: 'Altre informazioni su: errore del compilatore C3457'
title: Errore del compilatore C3457
ms.date: 11/04/2016
f1_keywords:
- C3457
helpviewer_keywords:
- C3457
ms.assetid: 5c1e366a-fa75-4cca-b9a3-86d4ebe4090e
ms.openlocfilehash: 42e30946c57da585ed1339e49b6081372b141a2c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113597"
---
# <a name="compiler-error-c3457"></a>Errore del compilatore C3457

'attribute': l'attributo non supporta argomenti non denominati

A differenza dell'attributo personalizzato CLR o gli attributi del compilatore, gli attributi di annotazione di origine supportano solo gli argomenti denominati.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3457.

```
#include "SourceAnnotations.h"
[vc_attributes::Post( 1 )] int f();   // C3457
[vc_attributes::Post( Valid=vc_attributes::Yes )] int f2();   // OK
```
