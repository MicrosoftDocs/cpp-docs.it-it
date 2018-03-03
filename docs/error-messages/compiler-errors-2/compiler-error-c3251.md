---
title: Errore del compilatore C3251 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3251
dev_langs:
- C++
helpviewer_keywords:
- C3251
ms.assetid: 541c163e-5ee9-457c-a1e5-da860788b10d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0b7aa92c8a3b9e54e9fc60a9d849a4336e0790eb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3251"></a>Errore del compilatore C3251
impossibile chiamare un metodo di una classe base su un'istanza di tipo valore  
  
 L'errore seguente si verifica perché `GetClass` è un membro di `Microsoft.Runtime.Object`, non di `Microsoft.Runtime.Integer4`.