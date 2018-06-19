---
title: Compilatore avviso (livello 4) C4513 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4513
dev_langs:
- C++
helpviewer_keywords:
- C4513
ms.assetid: 6877334a-f30a-4184-9483-dac3348737a4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 92c3e89204ec30f9c96a5ea03ede5093dd013d0c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33292896"
---
# <a name="compiler-warning-level-4-c4513"></a>Avviso del compilatore (livello 4) C4513
'class': Impossibile generare un distruttore  
  
 Il compilatore può generare un distruttore predefinito per la classe specificata. è stato creato senza un distruttore. Il distruttore è in una classe di base che non è possibile accedere alla classe derivata. Se la classe base ha un distruttore privato, renderlo pubblico o protetto.