---
description: Altre informazioni su:/APPCONTAINER
title: /APPCONTAINER
ms.date: 11/04/2016
f1_keywords:
- /APPCONTAINER
helpviewer_keywords:
- APPCONTAINER editbin option
- -APPCONTAINER editbin option
- /APPCONTAINER editbin option
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
ms.openlocfilehash: f9ea7ff8cac45e45626f15745f77d2230afc1d4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187169"
---
# <a name="appcontainer"></a>/APPCONTAINER

Contrassegna un eseguibile che deve essere eseguito in un contenitore di app, ad esempio un Microsoft Store o un'app di Windows universale.

```

/APPCONTAINER[:NO]
```

## <a name="remarks"></a>Commenti

Un file eseguibile per cui è impostata l'opzione **/APPCONTAINER** può essere eseguito solo in un contenitore di app, l'ambiente di isolamento dei processi introdotto in Windows 8. Per Microsoft Store e app di Windows universale, è necessario impostare questa opzione.

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)<br/>
[Che cos'è un'app di Windows universale?](/windows/uwp/get-started/universal-application-platform-guide)
