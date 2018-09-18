---
title: Considerazioni di terminazione aggiuntive | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- quitting applications
- exiting applications
- programs [C++], terminating
ms.assetid: acbe2332-9d8a-4a58-a471-dd652a837384
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f7b3c12c5889265ebb06e199c7f1e1e3cb440b4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46034071"
---
# <a name="additional-termination-considerations"></a>Considerazioni di terminazione aggiuntive

È possibile terminare un programma C++ utilizzando `exit`, **restituire**, o `abort`. È possibile aggiungere l'elaborazione di uscita utilizzando la funzione `atexit`. Questi argomenti vengono approfonditi nelle sezioni successive.

## <a name="see-also"></a>Vedere anche

[Avvio e terminazione](../cpp/startup-and-termination-cpp.md)