---
title: Allocazione memoria azzerata
ms.date: 11/04/2016
helpviewer_keywords:
- memory allocation, zero memory
- zero memory
ms.assetid: 768f2ab9-83a1-4887-8eb5-c094c18489a8
ms.openlocfilehash: 40f21c0fa9a2a4068cb2592c49ccefed82176a35
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62313493"
---
# <a name="allocating-zero-memory"></a>Allocazione memoria azzerata

**4.10.3 ANSI** Comportamento della funzione `calloc`, `malloc`o `realloc` se la dimensione richiesta è zero

Le funzioni `calloc`, `malloc` e `realloc` accettano lo zero come argomento. Non è stata allocata alcuna memoria, ma viene restituito un puntatore valido e il blocco di memoria può essere modificato in un secondo momento da realloc.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)
