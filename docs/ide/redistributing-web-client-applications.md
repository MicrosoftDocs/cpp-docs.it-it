---
title: "Ridistribuzione di applicazioni client Web | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distribuzione di applicazioni [C++], applicazioni Web"
  - "distribuzione di applicazioni [C++], applicazioni Web"
  - "applicazioni Internet [C++], ridistribuzione"
  - "applicazioni Web [C++], ridistribuzione"
ms.assetid: fe05988b-dee8-4a46-b381-016b5103a6bf
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Ridistribuzione di applicazioni client Web
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se nell'applicazione vengono utilizzate classi MFC che implementano il controllo WebBrowser \(ad esempio `CHtmlView` o `CHtmlEditView`\), è necessario che almeno la versione minima di Microsoft Internet Explorer 4.0 o versione successiva sia installata nel computer di destinazione.  
  
 L'installazione della versione più recente di Internet Explorer assicura inoltre che nel computer di destinazione siano presenti i file di controllo comuni più aggiornati.  
  
 Per informazioni sull'installazione minima dei componenti di Internet Explorer, vedere il seguente articolo della Knowledge Base:  
  
-   Q185375, HOWTO: Create a Single EXE Install of Internet Explorer, all'indirizzo [http:\/\/support.microsoft.com\/support\/kb\/articles\/q185\/3\/75.asp](http://support.microsoft.com/support/kb/articles/q185/3/75.asp) \(informazioni in lingua inglese\).  
  
 Gli articoli della Knowledge Base sono disponibili in MSDN Library o nel sito Web all'indirizzo [http:\/\/support.microsoft.com\/?ln\=IT](http://support.microsoft.com/?ln=IT).  
  
## Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)