---
description: 'Altre informazioni su: allocazione di memoria zero'
title: Allocazione memoria azzerata
ms.date: 11/04/2016
helpviewer_keywords:
- memory allocation, zero memory
- zero memory
ms.assetid: 768f2ab9-83a1-4887-8eb5-c094c18489a8
ms.openlocfilehash: 7971d9e097d00607af2acf4590ff3daaf67f7127
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280144"
---
# <a name="allocating-zero-memory"></a>Allocazione memoria azzerata

**4.10.3 ANSI** Comportamento della `calloc` `malloc` funzione, o `realloc` se la dimensione richiesta è zero

Le funzioni `calloc`, `malloc` e `realloc` accettano lo zero come argomento. Non è stata allocata alcuna memoria, ma viene restituito un puntatore valido e il blocco di memoria può essere modificato in un secondo momento da realloc.

## <a name="see-also"></a>Vedi anche

[Funzioni della libreria](../c-language/library-functions.md)
