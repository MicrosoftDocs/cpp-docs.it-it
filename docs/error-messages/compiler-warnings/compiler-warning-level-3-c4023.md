---
title: Compilatore avviso (livello 3) C4023 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C4023
dev_langs: C++
helpviewer_keywords: C4023
ms.assetid: 615d5374-d7c1-42eb-acfd-917c053270c8
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 170a76381dac09ad0543b30e71aedb306b514379
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-3-c4023"></a>Avviso del compilatore (livello 3) C4023
'symbol': puntatore based passato a funzione senza prototipo. Parametro number  
  
 Passando un puntatore based a una funzione senza prototipo il puntatore viene normalizzazione viene normalizzato, con risultati imprevisti.  
  
 Questo problema può essere risolto se si usano funzioni di prototipo che sono puntatori based passati.