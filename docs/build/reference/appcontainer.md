---
title: -APPCONTAINER | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /APPCONTAINER
dev_langs:
- C++
helpviewer_keywords:
- APPCONTAINER editbin option
- -APPCONTAINER editbin option
- /APPCONTAINER editbin option
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ea6f08a141d48183d96dba6cb02fcf31909af0ae
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43686253"
---
# <a name="appcontainer"></a>/APPCONTAINER
Contrassegna un eseguibile che deve essere eseguito in un contenitore di app, ad esempio, un'app di Microsoft Store o Windows universale.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Un file eseguibile per cui è impostata l'opzione **/APPCONTAINER** può essere eseguito solo in un contenitore di app, l'ambiente di isolamento dei processi introdotto in Windows 8. Per le app di Microsoft Store e Windows universale, è necessario impostare questa opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [Che cos'è un'App Windows universali?](/windows/uwp/get-started/universal-application-platform-guide)