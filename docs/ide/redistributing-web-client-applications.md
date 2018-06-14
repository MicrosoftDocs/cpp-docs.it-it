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
ms.openlocfilehash: 92bd843b24ee13b3d606ba8bb4f4f1cc265e8e5d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33323196"
---
# <a name="redistributing-web-client-applications"></a>Ridistribuzione di applicazioni client Web
Se l'applicazione usa le classi MFC che implementano il controllo WebBrowser (ad esempio, `CHtmlView` o `CHtmlEditView`), nel computer di destinazione è necessaria almeno l'installazione minima di Microsoft Internet Explorer 4.0 o versione successiva.  
  
 L'installazione della versione più recente di Internet Explorer assicura anche che il computer di destinazione abbia i file di controllo comuni più recenti.  
  
 Informazioni sull'installazione minima di Internet Explorer sono disponibili nell'articolo della Knowledge Base seguente:  
  
-   Q185375, HOWTO: Create a Single EXE Install of Internet Explorer ([http://support.microsoft.com/support/kb/articles/q185/3/75.asp](http://support.microsoft.com/support/kb/articles/q185/3/75.asp)) (Creare un file di installazione singolo con estensione exe per Internet Explorer)  
  
 Gli articoli della Knowledge Base sono disponibili in MSDN Library o nel sito Web all'indirizzo [http://support.microsoft.com](http://support.microsoft.com).  
  
## <a name="see-also"></a>Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)