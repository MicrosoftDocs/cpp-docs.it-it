---
title: Piattaforme supportate (Visual C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, platforms supported
- platforms [C++]
ms.assetid: 0d893056-4008-411a-b3d1-5f57fd7da95c
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: 0192e9bd6ef9d93e274c43c24137a27e5aa53dab
ms.openlocfilehash: c0c209c16ad4a264b851321a2879104112da81f2
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="supported-platforms-visual-c"></a>Piattaforme supportate (Visual C++)
Le applicazioni compilate tramite [!INCLUDE[vsprvs](assembler/masm/includes/vsprvs_md.md)] possono essere destinate a diverse piattaforme come indicato di seguito.  
  
|Sistema operativo|x86|x64|ARM|  
|----------------------|---------|---------|---------|  
|Windows XP|X*|X*||  
|[!INCLUDE[WinXPSvr](build/includes/winxpsvr_md.md)]|X*|X*||  
|Windows Vista|X|X||  
|Windows Server 2008|X|X||  
|Windows 7|X|X||  
|Windows Server 2012 R2|X|X||  
|Windows 8|X|X|X|  
|Windows 8,1|X|X|X|  
|Windows 10|X|X|X|  
|Android **|X|X|X|  
|iOS **|X|X|x|  
  
 \* È possibile usare il set di strumenti della piattaforma Windows XP in Visual Studio 2015, Visual Studio 2013 e Visual Studio 2012 Update 1 o versione successiva per la compilazione di progetti Windows XP e [!INCLUDE[WinXPSvr](build/includes/winxpsvr_md.md)]. Per informazioni su come usare questo set di strumenti della piattaforma, vedere [Configurazione di programmi per Windows XP](build/configuring-programs-for-windows-xp.md). Per altre informazioni sulla modifica del set di strumenti della piattaforma, vedere [Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](build/how-to-modify-the-target-framework-and-platform-toolset.md).  
  
 \*\* È possibile installare il componente facoltativo Visual C++ per lo sviluppo di app per dispositivi mobili multipiattaforma nella configurazione di Visual Studio 2015 per piattaforme iOS o Android di destinazione. Per istruzioni, vedere [Installare Visual C++ per lo sviluppo di app per dispositivi mobili multipiattaforma](/visualstudio/cross-platform/install-visual-cpp-for-cross-platform-mobile-development). Per compilare il codice iOS, è necessario disporre di un computer Mac e soddisfare altri requisiti. Per un elenco di prerequisiti e istruzioni di installazione, vedere [Installare e configurare gli strumenti per la compilazione con iOS](/visualstudio/cross-platform/install-and-configure-tools-to-build-using-ios). È possibile compilare il codice x86 o ARM in modo che corrisponda all'hardware di destinazione. Utilizzare le configurazioni x86 da compilare per il simulatore iOS, l’emulatore Microsoft Visual Studio e alcuni dispositivi Android. Utilizzare le configurazioni ARM da compilare per dispositivi iOS e la maggior parte dei dispositivi Android.  
  
 Per informazioni su come impostare la configurazione della piattaforma di destinazione, vedere [Procedura: Configurare i progetti Visual C++ per piattaforme a 64 bit](build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)   
 [Introduzione](/visualstudio/ide/getting-started-with-visual-cpp-in-visual-studio)
