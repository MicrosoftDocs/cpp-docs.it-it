---
title: Errore del compilatore di risorse RC2151 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: RC2151
dev_langs: C++
helpviewer_keywords: RC2151
ms.assetid: 3c47e535-c78d-4338-aab9-9b47e2c34728
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 436d23aa090aef24138f9147ff41526aefc845a1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="resource-compiler-error-rc2151"></a>Errore del compilatore di risorse RC2151
non è possibile riutilizzare le costanti di stringa  
  
 Si utilizza lo stesso valore due volte in un **STRINGTABLE** istruzione. Assicurarsi che non si stia sovrapposti valori decimali ed esadecimali.  
  
 Ogni ID in un **STRINGTABLE** deve essere univoco. Per ottenere la massima efficienza utilizzare costanti contigue che avviano un multiplo di 16.