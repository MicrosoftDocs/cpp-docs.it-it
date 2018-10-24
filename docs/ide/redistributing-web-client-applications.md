---
title: Ridistribuzione di applicazioni client Web | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Web applications [C++], redistributing
- deploying applications [C++], Web applications
- Internet applications [C++], redistributing
- application deployment [C++], Web applications
ms.assetid: fe05988b-dee8-4a46-b381-016b5103a6bf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d036f7d46e0db84b8572b26c747947c929972517
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48889932"
---
# <a name="redistributing-web-client-applications"></a>Ridistribuzione di applicazioni client Web

Se l'applicazione usa le classi MFC che implementano il controllo WebBrowser (ad esempio, `CHtmlView` o `CHtmlEditView`), nel computer di destinazione è necessaria almeno l'installazione minima di Microsoft Internet Explorer 4.0 o versione successiva.

L'installazione della versione più recente di Internet Explorer assicura anche che il computer di destinazione abbia i file di controllo comuni più recenti. Per altre informazioni, vedere [Installare e distribuire Internet Explorer 11](/internet-explorer/ie11-deploy-guide/install-and-deploy-ie11).

## <a name="see-also"></a>Vedere anche

[Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)