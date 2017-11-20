---
title: Avviso del compilatore di risorse RC4093 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: RC4093
dev_langs: C++
helpviewer_keywords: RC4093
ms.assetid: 3c61b4a4-b418-465b-a4fd-cb1ff0adb8dd
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b799f43737482ed9491d054adb34e987e75f3a47
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="resource-compiler-warning-rc4093"></a>Avviso del compilatore di risorse RC4093
carattere di nuova riga non di escape in una costante carattere in codice inattivo.  
  
 L'espressione costante di un `#if`, `#elif`, **#ifdef**, o **#ifndef** direttiva del preprocessore restituita zero, rendere il codice che segue è inattivo. All'interno del codice inattivo, è presente un carattere di nuova riga all'interno di un set di virgolette singole o doppie.  
  
 Tutto il testo fino a quando non è stata considerata le virgolette doppie successiva all'interno di una costante carattere.