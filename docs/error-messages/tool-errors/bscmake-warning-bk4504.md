---
title: Avviso BK4504 di BSCMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- BK4504
dev_langs:
- C++
helpviewer_keywords:
- BK4504
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5a17aa8b4e2a98d3bda5d21ea84962791b8051dc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33295184"
---
# <a name="bscmake-warning-bk4504"></a>Avviso BK4504 di BSCMAKE
il file contiene troppi riferimenti; ignorando ulteriori riferimenti da questa origine  
  
 Il file con estensione cpp contiene più di 64.000 riferimenti dei simboli. Quando BSCMAKE ha rilevato 64.000 riferimenti in un file, ignora eventuali ulteriormente riferimenti.  
  
 Per risolvere il problema, dividere il file in due o più file ciascuno dei quali ha meno di 64.000 riferimenti dei simboli oppure utilizzare la direttiva del preprocessore `#pragma component(browser)` per limitare i simboli generati per i riferimenti particolari. Per ulteriori informazioni, vedere [componente](../../preprocessor/component.md).