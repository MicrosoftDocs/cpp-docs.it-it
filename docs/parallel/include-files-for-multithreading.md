---
title: File di inclusione per il multithreading
ms.date: 11/04/2016
helpviewer_keywords:
- threading [C++], include files
- include files, multithreading
- multithreading [C++], include files
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
ms.openlocfilehash: cf7a5ff7e42ffbcf57027014411e089722df16fe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591929"
---
# <a name="include-files-for-multithreading"></a>File di inclusione per il multithreading

File di inclusione standard vengono implementate in librerie di dichiarare funzioni della libreria di runtime C. Se si usa la [ottimizzazione completa](../build/reference/ox-full-optimization.md) (/ Ox) o [convenzioni di chiamata fastcall](../build/reference/gd-gr-gv-gz-calling-convention.md) (/ Gr) opzione, il compilatore presuppone che tutte le funzioni devono essere chiamate usando il convenzione di chiamata del registro. Le funzioni della libreria di runtime sono state compilate usando la convenzione di chiamata C e le dichiarazioni nel file di inclusione standard indicano al compilatore di generare i corretti riferimenti esterni a queste funzioni.

## <a name="see-also"></a>Vedere anche

[Multithreading con C e Win32](multithreading-with-c-and-win32.md)