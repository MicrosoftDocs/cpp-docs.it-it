---
title: Allocazione memoria azzerata
ms.date: 11/04/2016
helpviewer_keywords:
- memory allocation, zero memory
- zero memory
ms.assetid: 768f2ab9-83a1-4887-8eb5-c094c18489a8
ms.openlocfilehash: 40f21c0fa9a2a4068cb2592c49ccefed82176a35
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56147464"
---
# <a name="allocating-zero-memory"></a>Allocazione memoria azzerata

**ANSI 4.10.3** Comportamento della funzione `calloc`, `malloc` o `realloc` se la dimensione richiesta è zero

Le funzioni `calloc`, `malloc` e `realloc` accettano lo zero come argomento. Non è stata allocata alcuna memoria, ma viene restituito un puntatore valido e il blocco di memoria può essere modificato in un secondo momento da realloc.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)
