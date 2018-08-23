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
ms.openlocfilehash: db32214543278023cdce91654c86e53568fffb00
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606922"
---
# <a name="accessing-version-information-from-within-your-program"></a>Accesso alle informazioni sulla versione dal programma

### <a name="to-access-version-information-from-within-your-program"></a>Per accedere alle informazioni sulla versione dal programma

1. Se si desidera accedere alle informazioni sulla versione dal programma, usare il [GetFileVersionInfo](/windows/desktop/api/winver/nf-winver-getfileversioninfoa) (funzione) e il [VerQueryValue](/windows/desktop/api/winver/nf-winver-verqueryvaluea) (funzione).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di informazioni sulla versione](../windows/version-information-editor.md)  
[Informazioni sulla versione (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)