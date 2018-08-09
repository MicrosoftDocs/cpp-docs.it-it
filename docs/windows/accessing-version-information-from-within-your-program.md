---
title: L'accesso a informazioni sulla versione dal programma | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.version
dev_langs:
- C++
helpviewer_keywords:
- VerQueryValue
- version information, accessing from within programs
- GetFileVersionInfo
- version information
ms.assetid: 18622333-d9e8-4309-9465-677cd10c79b1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 79520523ebeda2cb0260d1bc79d0b6b35d33aa23
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646959"
---
# <a name="accessing-version-information-from-within-your-program"></a>Accesso alle informazioni sulla versione dal programma
### <a name="to-access-version-information-from-within-your-program"></a>Per accedere alle informazioni sulla versione dal programma  
  
Per accedere alle informazioni sulla versione dal programma, usare le funzioni [GetFileVersionInfo](http://msdn.microsoft.com/library/windows/desktop/ms647003.aspx) e [VerQueryValue](http://msdn.microsoft.com/library/windows/desktop/ms647464.aspx) .  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor di informazioni sulla versione](../windows/version-information-editor.md)   
 [Informazioni sulla versione (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)