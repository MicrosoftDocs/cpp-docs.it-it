---
title: Tipo per valori letterali stringa | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- string literals, type
- types [C], string literals
ms.assetid: f50a28af-20c1-4440-bdc6-564c86a309c8
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 8e8d285bf85c711bd6adcbdb45c6384ea2309dc0
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="type-for-string-literals"></a>Tipo per valori letterali stringa
I valori letterali stringa hanno una matrice di tipo `char` (ovvero, **char[ ]**). Le stringhe di caratteri wide hanno una matrice di tipo `wchar_t` (ovvero, **wchar_t[ ]**). Questo significa che una stringa è una matrice con elementi di tipo `char`. Il numero di elementi della matrice è uguale al numero di caratteri della stringa più uno per il carattere di terminazione null.  
  
## <a name="see-also"></a>Vedere anche  
 [Valori letterali stringa C](../c-language/c-string-literals.md)
