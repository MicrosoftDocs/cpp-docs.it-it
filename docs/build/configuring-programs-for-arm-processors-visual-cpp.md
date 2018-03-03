---
title: Configurare Visual C++ per processori ARM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 3d95f221-656a-480d-9651-9ad263895747
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8539578e8030862e63f4dda36c6b9c93a29547ab
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="configure-visual-c-for-arm-processors"></a>Configurare Visual C++ per processori ARM

Questa sezione della documentazione descrive come usare gli strumenti di compilazione di Visual C++ per l'hardware ARM.  
  
## <a name="in-this-section"></a>In questa sezione  

[Panoramica delle convenzioni ABI ARM](../build/overview-of-arm-abi-conventions.md)  
Illustra l'interfaccia binaria dell'applicazione usata da Windows on ARM per l'uso dei registri, le convenzioni di chiamata e la gestione delle eccezioni.  
  
[Problemi comuni relativi alla migrazione di Visual C++ ARM](../build/common-visual-cpp-arm-migration-issues.md)  
Descrive gli elementi del codice C++ generalmente ritenuti portabili tra le architetture ma che in ARM determinano risultati diversi rispetto a quanto avviene per le piattaforme x86 e x64.  
  
[Gestione delle eccezioni ARM](../build/arm-exception-handling.md)  
Descrive lo schema di codifica per la rimozione dello stack durante la gestione strutturata delle eccezioni in Windows on ARM.  
  
## <a name="related-sections"></a>Sezioni correlate  
  
[Intrinseci ARM](../intrinsics/arm-intrinsics.md)  
Illustra il compilatore intrinseco per i processori che usano l'architettura ARM.