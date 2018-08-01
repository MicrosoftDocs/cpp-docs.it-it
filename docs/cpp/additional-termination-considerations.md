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
ms.openlocfilehash: 54780b11e07819ca78eba89d9af5a8ba018cc9e4
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39401808"
---
# <a name="additional-termination-considerations"></a>Considerazioni di terminazione aggiuntive
È possibile terminare un programma C++ utilizzando `exit`, **restituire**, o `abort`. È possibile aggiungere l'elaborazione di uscita utilizzando la funzione `atexit`. Questi argomenti vengono approfonditi nelle sezioni successive.  
  
## <a name="see-also"></a>Vedere anche  
 [Avvio e terminazione](../cpp/startup-and-termination-cpp.md)