---
description: 'Altre informazioni su: auto_inline pragma'
title: Pragma auto_inline
ms.date: 08/29/2019
f1_keywords:
- auto_inline_CPP
- vc-pragma.auto_inline
helpviewer_keywords:
- pragmas, auto_inline
- auto_inline pragma
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
ms.openlocfilehash: f629bbe5dc47ba15bba5b2b55541509f421fcd8c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301048"
---
# <a name="auto_inline-pragma"></a>Pragma auto_inline

Esclude tutte le funzioni definite nell'intervallo in cui **off** viene specificato come candidati per l'espansione inline automatica.

## <a name="syntax"></a>Sintassi

> **#pragma auto_inline (** [{ **on**  |  **off** }] **)**

## <a name="remarks"></a>Commenti

Per usare il pragma **auto_inline** , posizionarlo prima e immediatamente dopo, non all'interno di una definizione di funzione. Il pragma viene applicato non appena viene visualizzata la prima definizione di funzione dopo il pragma.

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
