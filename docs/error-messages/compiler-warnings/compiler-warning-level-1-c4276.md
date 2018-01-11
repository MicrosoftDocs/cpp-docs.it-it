---
title: Compilatore avviso (livello 1) C4276 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4276
dev_langs: C++
helpviewer_keywords: C4276
ms.assetid: 9d738c2d-29e5-408a-b9ff-be1a850b2238
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: af9a32da86a0ea9e530af03a2175976d4cd9f091
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4276"></a>Avviso del compilatore (livello 1) C4276
'function': nessun prototipo fornito. verrà utilizzato senza parametri  
  
 Quando si accetta l'indirizzo di una funzione con il [stdcall](../../cpp/stdcall.md) convenzione di chiamata, è necessario fornire un prototipo, il compilatore consente di creare nome decorato della funzione. Poiché *funzione* non dispone di alcun prototipo, il compilatore, quando si crea il nome decorato, si presuppone che la funzione non ha parametri.