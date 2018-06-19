---
title: Errore irreversibile del compilatore di risorse RW1025 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RW1025
dev_langs:
- C++
helpviewer_keywords:
- RW1025
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ba216e63cb0cae92b4541800493a2fb6195553a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33320014"
---
# <a name="resource-compiler-fatal-error-rw1025"></a>Errore irreversibile del compilatore di risorse RW1025
Memoria heap far insufficiente  
  
 Consente di cercare software residente in memoria che occupi troppo spazio. Utilizzare il programma CHKDSK per individuare la quantità di memoria si dispone.  
  
 Se si sta creando un file di risorse di grandi dimensioni, suddividere lo script di risorsa in due file. Dopo la creazione di due file con estensione res, utilizzare la riga di comando di MS-DOS per riunirle:  
  
```  
copy first.res /b + second.res /b full.res  
```