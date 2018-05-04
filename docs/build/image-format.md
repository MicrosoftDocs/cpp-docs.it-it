---
title: Formato di immagine | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 3ca3654b-42fe-4253-9f2e-723644041aa0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 356480333a62d998213726016f3940b318c218a0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="image-format"></a>Formato immagine
Il formato di immagine eseguibile è PE32 +. Le immagini eseguibili (DLL ed exe) sono limitate a una dimensione massima di 2 gigabyte, in modo relativo addressing con uno spostamento a 32 bit può essere utilizzato per indirizzare i dati di immagine statica. Questi dati includono la tabella di indirizzi di importazione, le costanti di stringa, i dati statici globali e così via.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)