---
title: Errore del compilatore C2708 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2708
dev_langs: C++
helpviewer_keywords: C2708
ms.assetid: d52d3088-1141-42f4-829c-74755a7fcc3a
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 8ce9eb29c776c7d98a7fbad4dc95959180045256
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2708"></a>Errore del compilatore C2708
'identifier': lunghezza in byte effettivi dei parametri è diverso dal precedente chiamata o di riferimento  
  
 Oggetto [stdcall](../../cpp/stdcall.md) funzione deve essere preceduta da un prototipo. In caso contrario, il compilatore interpreta la prima chiamata alla funzione come un prototipo e questo errore si verifica quando il compilatore rileva una chiamata non corrispondente.  
  
 Per correggere questo errore, aggiungere un prototipo di funzione.