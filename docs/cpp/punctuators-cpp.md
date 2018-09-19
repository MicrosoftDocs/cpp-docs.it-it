---
title: Segni di punteggiatura (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- devlang-cpp
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- punctuators [C++]
ms.assetid: 1521564c-a977-488a-9490-068079897592
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 438b3f0469d1e8426b1e0ec2a19a63d1ae63c041
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039270"
---
# <a name="punctuators-c"></a>Segni di punteggiatura (C++)

In C++ i segni di punteggiatura hanno un significato semantico e sintattico per il compilatore, ma non specificano alcuna operazione che restituisce un valore. Alcuni segni di punteggiatura, singolarmente o in combinazione, possono anche essere operatori C++ o essere significativi per il preprocessore.

Ciascuno dei caratteri seguenti viene considerato un segno di punteggiatura:

```
! % ^ & * ( ) - + = { } | ~
[ ] \ ; ' : " < > ? , . / #
```

I segni di punteggiatura **[]**, **all'indirizzo**, e **{}** devono comparire in coppia dopo [fase della conversione](../preprocessor/phases-of-translation.md) 4.

## <a name="see-also"></a>Vedere anche

[Convenzioni lessicali](../cpp/lexical-conventions.md)