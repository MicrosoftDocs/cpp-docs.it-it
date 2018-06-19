---
title: Tipo per valori letterali stringa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- string literals, type
- types [C], string literals
ms.assetid: f50a28af-20c1-4440-bdc6-564c86a309c8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1bfabc412c46a5fa73bf0cd3d000bb3823e5a389
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32386771"
---
# <a name="type-for-string-literals"></a>Tipo per valori letterali stringa
I valori letterali stringa hanno una matrice di tipo `char` (ovvero, **char[ ]**). Le stringhe di caratteri wide hanno una matrice di tipo `wchar_t` (ovvero, **wchar_t[ ]**). Questo significa che una stringa è una matrice con elementi di tipo `char`. Il numero di elementi della matrice è uguale al numero di caratteri della stringa più uno per il carattere di terminazione null.  
  
## <a name="see-also"></a>Vedere anche  
 [Valori letterali stringa C](../c-language/c-string-literals.md)