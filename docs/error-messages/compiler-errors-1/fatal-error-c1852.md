---
title: Errore irreversibile C1852
ms.date: 11/04/2016
f1_keywords:
- C1852
helpviewer_keywords:
- C1852
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
ms.openlocfilehash: 895c2fc988c9566f9e50b1ac1a18eb4dc1c6661a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62165736"
---
# <a name="fatal-error-c1852"></a>Errore irreversibile C1852

file di intestazione precompilata 'filename' non valido

Il file non è un'intestazione precompilata.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. È stato specificato un file non valido con **/Yu** o **#pragma hdrstop**.

1. Se non se ne specifica un'altra, il compilatore presuppone l'estensione di file PCH.