---
title: Piattaforme Windows (CRT) | Microsoft Docs
ms.custom: ''
ms.date: 02/02/2018
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.programs
dev_langs:
- C++
helpviewer_keywords:
- CRT, compatibility
- backward compatibility [C++], C run-time libraries
- compatibility [C++], C run-time libraries
- MBCS [C++], Win32 platforms
- operating systems [C++]
- Unicode [C++], Win32 platforms
ms.assetid: 0aacaf45-6dc4-4908-bd52-57abac7b39f6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d53e8020bbb7649d78232025ef9c63c1dc868fee
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32409007"
---
# <a name="windows-platforms-crt"></a>Piattaforme Windows (CRT)

Le librerie run-time di C per Visual Studio supportano le versioni correnti di Windows e Windows Server, [!INCLUDE[win8](../build/reference/includes/win8_md.md)], [!INCLUDE[winserver8](../build/reference/includes/winserver8_md.md)], [!INCLUDE[win7](../build/includes/win7_md.md)], [!INCLUDE[winsvr08](../build/reference/includes/winsvr08_md.md)] e Windows Vista e facoltativamente supportano [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 3 (SP3) per x86, [!INCLUDE[winxp](../build/includes/winxp_md.md)] Service Pack 2 (SP2) per x64 e [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)] Service Pack 2 (SP2) per x86 e x64. Tutti questi sistemi operativi supportano l'API Windows (Win32) e offrono il supporto Unicode. Qualsiasi applicazione Win32 poi, può usare un set MBCS (Multibyte Character Set).

> [!NOTE]
> L'installazione predefinita del carico di lavoro **Sviluppo di applicazioni desktop con C++** in Visual Studio 2017 non include il supporto per lo sviluppo di [!INCLUDE[winxp](../build/includes/winxp_md.md)] e di [!INCLUDE[WinXPSvr](../build/includes/winxpsvr_md.md)]. È necessario installare il componente facoltativo **Supporto Windows XP per C++** per abilitare un set di strumenti della piattaforma Windows XP.

## <a name="see-also"></a>Vedere anche

[Compatibilità](../c-runtime-library/compatibility.md)  
