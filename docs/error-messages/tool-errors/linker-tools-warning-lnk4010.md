---
title: Strumenti del linker LNK4010 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK4010
dev_langs:
- C++
helpviewer_keywords:
- LNK4010
ms.assetid: 2824cf99-4174-4b60-a6e2-c01e9f1ee52d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 79f52338eea40c42cacf8b0880afe42b75037abc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4010"></a>Avviso degli strumenti del linker LNK4010
il numero di versione del sottosistema non valido; verrà utilizzata la versione predefinita del sottosistema  
  
 È possibile specificare una versione per il sottosistema dell'immagine ([/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)). Ogni sottosistema è un requisito di versione minima. Se la versione specificata è inferiore al minimo, verrà generato questo avviso e il linker userà solo il sottosistema predefinito.