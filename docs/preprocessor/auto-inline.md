---
title: auto_inline
ms.date: 11/04/2016
f1_keywords:
- auto_inline_CPP
- vc-pragma.auto_inline
helpviewer_keywords:
- pragmas, auto_inline
- auto_inline pragma
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
ms.openlocfilehash: c59dcc8ec7749a91565d5af043b1bd9e9eaa16ea
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403564"
---
# <a name="autoinline"></a>auto_inline
Esclude tutte le funzioni definite all'interno dell'intervallo in cui **disattivata** è specificato da considerarsi come candidate per l'espansione inline automatica.

## <a name="syntax"></a>Sintassi

```
#pragma auto_inline( [{on | off}] )
```

## <a name="remarks"></a>Note

Usare la **auto_inline** pragma, inserirlo prima e immediatamente dopo (non in) una definizione di funzione. Il pragma viene applicato alla prima definizione di funzione dopo che è stato rilevato il pragma.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)