---
title: Errore del compilatore C2818 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2818
dev_langs: C++
helpviewer_keywords: C2818
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 02c1b8e67679e7b8ce69b202c3ddef899439095d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2818"></a>Errore del compilatore C2818
l'applicazione di 'operator ->' di overload è ricorsiva tramite il tipo 'type'  
  
 Una ridefinizione dell'operatore di accesso di membro di classe contiene una ricorsiva `return` istruzione. Per ridefinire il `->` operatore con ricorsione, è necessario spostare la routine ricorsiva in una funzione distinta chiamata dall'operatore di eseguire l'override di funzione.