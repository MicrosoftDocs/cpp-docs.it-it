---
title: File di inclusione per il multithreading
ms.date: 11/04/2016
helpviewer_keywords:
- threading [C++], include files
- include files, multithreading
- multithreading [C++], include files
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
ms.openlocfilehash: 79b5c56eecfaf28743eec4ba6b4cee56156d6e2c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57257423"
---
# <a name="include-files-for-multithreading"></a>File di inclusione per il multithreading

File di inclusione standard vengono implementate in librerie di dichiarare funzioni della libreria di runtime C. Se si usa la [ottimizzazione completa](../build/reference/ox-full-optimization.md) (/ Ox) o [convenzioni di chiamata fastcall](../build/reference/gd-gr-gv-gz-calling-convention.md) (/ Gr) opzione, il compilatore presuppone che tutte le funzioni devono essere chiamate usando il convenzione di chiamata del registro. Le funzioni della libreria di runtime sono state compilate usando la convenzione di chiamata C e le dichiarazioni nel file di inclusione standard indicano al compilatore di generare i corretti riferimenti esterni a queste funzioni.

## <a name="see-also"></a>Vedere anche

[Multithreading con C e Win32](multithreading-with-c-and-win32.md)
