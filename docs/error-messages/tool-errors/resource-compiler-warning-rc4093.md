---
title: Avviso del compilatore di risorse RC4093 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC4093
dev_langs:
- C++
helpviewer_keywords:
- RC4093
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e9cca3c2a139e1109746f3a690cfb3f31509a9fe
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="resource-compiler-warning-rc4093"></a>Avviso del compilatore di risorse RC4093
carattere di nuova riga non di escape in una costante carattere in codice inattivo.  
  
 L'espressione costante di un `#if`, `#elif`, **#ifdef**, o **#ifndef** direttiva del preprocessore restituita zero, rendere il codice che segue è inattivo. All'interno del codice inattivo, è presente un carattere di nuova riga all'interno di un set di virgolette singole o doppie.  
  
 Tutto il testo fino a quando non è stata considerata le virgolette doppie successiva all'interno di una costante carattere.