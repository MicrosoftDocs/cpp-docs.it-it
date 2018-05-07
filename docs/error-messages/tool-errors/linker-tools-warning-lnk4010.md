---
title: Strumenti del linker LNK4010 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4010
dev_langs:
- C++
helpviewer_keywords:
- LNK4010
ms.assetid: 2824cf99-4174-4b60-a6e2-c01e9f1ee52d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 266e377a917fe3ce9ae7bae228134f49384e15cb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4010"></a>Avviso degli strumenti del linker LNK4010
il numero di versione del sottosistema non valido; verrà utilizzata la versione predefinita del sottosistema  
  
 È possibile specificare una versione per il sottosistema dell'immagine ([/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)). Ogni sottosistema è un requisito di versione minima. Se la versione specificata è inferiore al minimo, verrà generato questo avviso e il linker userà solo il sottosistema predefinito.