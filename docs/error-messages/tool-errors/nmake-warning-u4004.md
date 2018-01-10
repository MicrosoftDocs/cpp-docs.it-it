---
title: Avviso U4004 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: U4004
dev_langs: C++
helpviewer_keywords: U4004
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fcbda9dd9d7ca5ecb99e46b9916fb95c2c560e49
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-warning-u4004"></a>Avviso U4004 di NMAKE 
troppe regole per la destinazione 'targetname'  
  
 È stato specificato più di un blocco di descrizione per la destinazione usando solo due punti (**:**) come separatori. NMAKE eseguita i comandi nel primo blocco di descrizione e ignorati i blocchi successivi.  
  
 Per specificare la stessa destinazione in più dipendenze, usare doppi due punti (`::`) come separatore in ogni riga di dipendenza.