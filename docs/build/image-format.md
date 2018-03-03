---
title: Formato di immagine | Documenti Microsoft
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
ms.assetid: 3ca3654b-42fe-4253-9f2e-723644041aa0
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c0761acfe02b7d86f9316d06913de15347e9d522
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="image-format"></a>Formato immagine
Il formato di immagine eseguibile è PE32 +. Le immagini eseguibili (DLL ed exe) sono limitate a una dimensione massima di 2 gigabyte, in modo relativo addressing con uno spostamento a 32 bit può essere utilizzato per indirizzare i dati di immagine statica. Questi dati includono la tabella di indirizzi di importazione, le costanti di stringa, i dati statici globali e così via.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)