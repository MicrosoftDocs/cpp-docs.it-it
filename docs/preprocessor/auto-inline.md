---
description: Altre informazioni sulla direttiva auto_inline pragma in Microsoft C/C++
title: auto_inline pragma
ms.date: 01/22/2021
f1_keywords:
- auto_inline_CPP
- vc-pragma.auto_inline
helpviewer_keywords:
- pragma, auto_inline
- auto_inline pragma
no-loc:
- pragma
ms.openlocfilehash: 72c6823acf260d48883142f8568483eb78155da1
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713727"
---
# <a name="auto_inline-no-locpragma"></a>`auto_inline` pragma

Esclude tutte le funzioni definite all'interno dell'intervallo in cui **`off`** viene specificato di essere considerato come candidati per l'espansione inline automatica.

## <a name="syntax"></a>Sintassi

> **`#pragma auto_inline(`** [ { **`on`** | **`off`** } ] **`)`**

## <a name="remarks"></a>Osservazioni

Per utilizzare l'oggetto **`auto_inline`** pragma , posizionarlo prima e immediatamente dopo, non all'interno di una definizione di funzione. Il pragma viene applicato non appena viene visualizzata la prima definizione di funzione dopo pragma .

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
