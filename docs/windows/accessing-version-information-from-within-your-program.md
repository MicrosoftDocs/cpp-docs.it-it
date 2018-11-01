---
title: L'accesso a informazioni sulla versione dal programma (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.version
helpviewer_keywords:
- VerQueryValue
- version information, accessing from within programs
- GetFileVersionInfo
- version information
ms.assetid: 18622333-d9e8-4309-9465-677cd10c79b1
ms.openlocfilehash: 028ea6126b75b914e7ff9a4ded2d08efa9d35b28
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644626"
---
# <a name="accessing-version-information-from-within-your-program-c"></a>L'accesso a informazioni sulla versione dal programma (C++)

### <a name="to-access-version-information-from-within-your-program"></a>Per accedere alle informazioni sulla versione dal programma

1. Per accedere alle informazioni sulla versione dal programma, usare le funzioni [GetFileVersionInfo](/windows/desktop/api/winver/nf-winver-getfileversioninfoa) e [VerQueryValue](/windows/desktop/api/winver/nf-winver-verqueryvaluea) .

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di informazioni sulla versione](../windows/version-information-editor.md)<br/>
[Informazioni sulla versione (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)