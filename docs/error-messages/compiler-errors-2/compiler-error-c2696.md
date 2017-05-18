---
title: Errore del compilatore C2696 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2696
dev_langs:
- C++
helpviewer_keywords:
- C2696
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 08b8a7990efbf981aec342b99bbb558fd9fab8d5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2696"></a>Errore del compilatore C2696
Impossibile creare un oggetto temporaneo di un tipo gestito 'type'  
  
Riferimenti a `const` in un programma non gestito indica al compilatore di chiamare il costruttore e creare un oggetto temporaneo nello stack. Tuttavia, una classe gestita non può mai essere creata nello stack.  
  
C2696 è raggiungibile tramite l'opzione del compilatore obsoleta **oldSyntax**.  

