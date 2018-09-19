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
ms.openlocfilehash: 7773882d6fb04341a6f6d3a2cbcfda1d05f85d17
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46063281"
---
# <a name="type-for-string-literals"></a>Tipo per valori letterali stringa

I valori letterali stringa hanno una matrice di tipo `char` (ovvero, **char[ ]**). Le stringhe di caratteri wide hanno una matrice di tipo `wchar_t` (ovvero, **wchar_t[ ]**). Questo significa che una stringa è una matrice con elementi di tipo `char`. Il numero di elementi della matrice è uguale al numero di caratteri della stringa più uno per il carattere di terminazione null.

## <a name="see-also"></a>Vedere anche

[Valori letterali stringa C](../c-language/c-string-literals.md)