---
title: Errore BK1517 di BSCMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: BK1517
dev_langs: C++
helpviewer_keywords: BK1517
ms.assetid: 24391f42-0a3e-40a9-9991-c8b9a6a7b1c7
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b8e4725c8781a27cb22c554b614464cf7eb232a5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="bscmake-error-bk1517"></a>Errore BK1517 di BSCMAKE
file di origine per "fileSBR" compilato con /Yc e /Yu  
  
 Il file SBR fa riferimento a se stessa. Probabilmente è stato ricompilato con /Yu dopo aver compilato con /Yc. Reimpostare l'opzione del compilatore per il file di origine su /Yc, quindi selezionare **ricompilare** per generare nuovi file SBR. Non ricompilare il file di origine con /Yu.