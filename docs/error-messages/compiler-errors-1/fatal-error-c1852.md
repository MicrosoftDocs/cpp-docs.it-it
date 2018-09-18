---
title: Errore irreversibile C1852 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1852
dev_langs:
- C++
helpviewer_keywords:
- C1852
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0adfa7eed25f1902300fa2378b8ffc19eb8dfafd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46023800"
---
# <a name="fatal-error-c1852"></a>Errore irreversibile C1852

file di intestazione precompilata 'filename' non valido

Il file non è un'intestazione precompilata.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. È stato specificato un file non valido con **/Yu** o **#pragma hdrstop**.

1. Se non se ne specifica un'altra, il compilatore presuppone l'estensione di file PCH.