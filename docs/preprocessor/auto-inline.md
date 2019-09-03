---
title: Pragma auto_inline
ms.date: 08/29/2019
f1_keywords:
- auto_inline_CPP
- vc-pragma.auto_inline
helpviewer_keywords:
- pragmas, auto_inline
- auto_inline pragma
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
ms.openlocfilehash: 59cda8cb73196215318c9570a5c067786284afaa
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216306"
---
# <a name="auto_inline-pragma"></a>Pragma auto_inline

Esclude tutte le funzioni definite nell'intervallo in cui **off** viene specificato come candidati per l'espansione inline automatica.

## <a name="syntax"></a>Sintassi

> **#pragma auto_inline (** [{ **on** | **off** }] **)**

## <a name="remarks"></a>Note

Per usare il pragma **auto_inline** , posizionarlo prima e immediatamente dopo, non all'interno di una definizione di funzione. Il pragma viene applicato non appena viene visualizzata la prima definizione di funzione dopo il pragma.

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
