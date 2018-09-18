---
title: Funzione Exit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- Exit
dev_langs:
- C++
helpviewer_keywords:
- exit function
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 71bff42495c4b6b7bf4016f0f08e7127c2b278ac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46075176"
---
# <a name="exit-function"></a>Funzione exit

Il **uscire** funzione dichiarata nel file di inclusione standard \<STDLIB. h >, termina un programma C++.

Il valore fornito come argomento al **uscire** viene restituito al sistema operativo come codice di uscita o codice restituito del programma. Per convenzione, un codice restituito uguale a zero indica che il programma è stato completato correttamente.

> [!NOTE]
>  È possibile utilizzare le costanti EXIT_FAILURE ed EXIT_SUCCESS, definite in \<STDLIB. h >, per indicare esito positivo o negativo del programma.

Emissione di un **restituire** istruzione dal `main` funzione è equivalente alla chiamata il **uscire** funzione con il valore restituito come argomento.

Per altre informazioni, vedere [uscire](../c-runtime-library/reference/exit-exit-exit.md) nel *Run-Time Library Reference*.

## <a name="see-also"></a>Vedere anche

[Chiusura del programma](../cpp/program-termination.md)