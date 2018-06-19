---
title: Errore irreversibile del compilatore di risorse RC1020 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC1020
dev_langs:
- C++
helpviewer_keywords:
- RC1020
ms.assetid: 3e073ebf-9136-4bf8-ac6a-3c642ed64594
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c90d3a5bb880ad10dcc4fb24d31fdc107f898840
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33320343"
---
# <a name="resource-compiler-fatal-error-rc1020"></a>Errore irreversibile del compilatore di risorse RC1020
'#endif' imprevisto  
  
 Un `#endif` direttiva sembrava senza un corrispondente `#if`, **#ifdef**, o **#ifndef** direttiva.  
  
 Assicurarsi che sia presente una corrispondenza `#endif` per ogni `#if`, **#ifdef**, e **#ifndef** istruzione.