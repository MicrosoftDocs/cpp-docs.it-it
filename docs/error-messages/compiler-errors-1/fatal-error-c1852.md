---
title: Errore irreversibile C1852
ms.date: 11/04/2016
f1_keywords:
- C1852
helpviewer_keywords:
- C1852
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
ms.openlocfilehash: 540febabc8f2947f11b58cf7eadee53d47f7bef3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202878"
---
# <a name="fatal-error-c1852"></a>Errore irreversibile C1852

file di intestazione precompilata 'filename' non valido

Il file non è un'intestazione precompilata.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. È stato specificato un file non valido con **/Yu** o **#pragma hdrstop**.

1. Se non se ne specifica un'altra, il compilatore presuppone l'estensione di file PCH.
