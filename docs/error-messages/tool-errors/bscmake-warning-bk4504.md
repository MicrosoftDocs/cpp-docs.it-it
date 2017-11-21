---
title: Avviso BK4504 di BSCMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: BK4504
dev_langs: C++
helpviewer_keywords: BK4504
ms.assetid: b56ee2d4-ad44-40f4-98c0-75934ea44a6c
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f7f6d854fbd74d9ca05ba6797bbd57db52b7a70e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="bscmake-warning-bk4504"></a>Avviso BK4504 di BSCMAKE
il file contiene troppi riferimenti; ignorando ulteriori riferimenti da questa origine  
  
 Il file con estensione cpp contiene più di 64.000 riferimenti dei simboli. Quando BSCMAKE ha rilevato 64.000 riferimenti in un file, ignora eventuali ulteriormente riferimenti.  
  
 Per risolvere il problema, dividere il file in due o più file ciascuno dei quali ha meno di 64.000 riferimenti dei simboli oppure utilizzare la direttiva del preprocessore `#pragma component(browser)` per limitare i simboli generati per i riferimenti particolari. Per ulteriori informazioni, vedere [componente](../../preprocessor/component.md).