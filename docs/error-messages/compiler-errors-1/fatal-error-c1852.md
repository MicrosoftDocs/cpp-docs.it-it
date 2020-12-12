---
description: 'Altre informazioni su: errore irreversibile C1852'
title: Errore irreversibile C1852
ms.date: 11/04/2016
f1_keywords:
- C1852
helpviewer_keywords:
- C1852
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
ms.openlocfilehash: 0b4976566b8101ecd4f35d20854ef6124a15246e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276244"
---
# <a name="fatal-error-c1852"></a>Errore irreversibile C1852

file di intestazione precompilata 'filename' non valido

Il file non è un'intestazione precompilata.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. È stato specificato un file non valido con **/Yu** o **#pragma hdrstop**.

1. Se non se ne specifica un'altra, il compilatore presuppone l'estensione di file PCH.
