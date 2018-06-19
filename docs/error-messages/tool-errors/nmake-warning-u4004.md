---
title: Avviso U4004 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U4004
dev_langs:
- C++
helpviewer_keywords:
- U4004
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 532abf2f62616d6e748c9a4e34f5c983f0853276
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33317180"
---
# <a name="nmake-warning-u4004"></a>Avviso U4004 di NMAKE 
troppe regole per la destinazione 'targetname'  
  
 È stato specificato più di un blocco di descrizione per la destinazione usando solo due punti (**:**) come separatori. NMAKE eseguita i comandi nel primo blocco di descrizione e ignorati i blocchi successivi.  
  
 Per specificare la stessa destinazione in più dipendenze, usare doppi due punti (`::`) come separatore in ogni riga di dipendenza.