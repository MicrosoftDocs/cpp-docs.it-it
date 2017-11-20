---
title: Formato di immagine | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 3ca3654b-42fe-4253-9f2e-723644041aa0
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 5cc70468d5b3ce9f678c1cd563ac79f172cedcc8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="image-format"></a>Formato immagine
Il formato di immagine eseguibile è PE32 +. Le immagini eseguibili (DLL ed exe) sono limitate a una dimensione massima di 2 gigabyte, in modo relativo addressing con uno spostamento a 32 bit può essere utilizzato per indirizzare i dati di immagine statica. Questi dati includono la tabella di indirizzi di importazione, le costanti di stringa, i dati statici globali e così via.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni del software x64](../build/x64-software-conventions.md)